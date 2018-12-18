/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015-2017 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Behaviac.Design;
using Behaviac.Design.Nodes;
using Behaviac.Design.Attachments;
using PluginBehaviac.DataExporters;
using PluginBehaviac.Events;

namespace PluginBehaviac.NodeExporters
{
    public class AlwaysTransitionCsExporter : AttachmentCsExporter
    {
        protected override bool ShouldGenerateClass()
        {
            return true;
        }

        protected override void GenerateConstructor(Attachment attachment, StringWriter stream, string indent, string className)
        {
            base.GenerateConstructor(attachment, stream, indent, className);

            AlwaysTransition alwaysTransition = attachment as AlwaysTransition;

            if (alwaysTransition == null)
            {
                return;
            }

            stream.WriteLine("{0}\t\t\tthis.TargetStateId = {1};", indent, alwaysTransition.TargetFSMNodeId);
            stream.WriteLine("{0}\t\t\tthis.TransitionPhase = ETransitionPhase.{1};", indent, alwaysTransition.TransitionPhase);
        }
    }
}
