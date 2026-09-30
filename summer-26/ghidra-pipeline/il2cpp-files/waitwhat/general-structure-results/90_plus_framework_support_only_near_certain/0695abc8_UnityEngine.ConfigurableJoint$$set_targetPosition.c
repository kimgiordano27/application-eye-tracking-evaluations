/*
FUNCTION_NAME: UnityEngine.ConfigurableJoint$$set_targetPosition
ENTRY_POINT: 0695abc8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 180
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8
*/


void UnityEngine_ConfigurableJoint__set_targetPosition(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  FUN_042e4268(param_1,*unaff_x20);
  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x19);
                    /* try { // try from 0695abe4 to 06a5abf3 has its CatchHandler @ 0695ac24 */
  FUN_06938f70(lVar4,0);
  if (lVar4 != 0) {
                    /* try { // try from 0695abf4 to 06a5ac1f has its CatchHandler @ 0695aa10 */
    uVar5 = *(undefined8 *)
             UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo;
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x28;
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    if (param_1 != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* try { // try from 0695ac20 to 06a5ac23 has its CatchHandler @ 0695ac28 */
      if (lVar6 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695abe4 with catch @ 0695ac24
                       try { // try from 0695ac24 to 06a5ac43 has its CatchHandler @ 0695aa10 */
        uVar2 = *(uint *)(param_1 + 0x18);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695ac20 with catch @ 0695ac28
                        */
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar2 + 1;
          *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
                    /* try { // try from 0695ac44 to 06a5ac47 has its CatchHandler @ 0695ac68 */
        }
        else {
                    /* try { // try from 0695ac48 to 06a5ac6b has its CatchHandler @ 0695aa10 */
          FUN_042e4a64(param_1,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        iVar1 = *(int *)(unaff_x21 + 0x1c);
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(long *)(unaff_x22 + 0x28) = param_1;
        *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
          }
          else {
            FUN_042e4a64();
          }
          lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x29);
          FUN_06938f78(lVar4,0);
          if (lVar4 != 0) {
            uVar5 = *(undefined8 *)
                     UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_000001E7_BurstDirectCall_TypeInfo
            ;
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate_TypeInfo
            ;
            puVar3 = PTR_DAT_070c25e8;
            *(undefined8 *)(lVar4 + 0x20) = uVar5;
            *(undefined4 *)(lVar4 + 0x18) = 1;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar3);
            FUN_042e4268(lVar6,*unaff_x26);
            puVar3 = PTR_DAT_070c2cb8;
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + 0x10);
              uVar5 = *(undefined8 *)System_Xml_XmlBaseReader_NamespaceManager_XmlAttribute_TypeInfo
              ;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                }
                else {
                  FUN_042e4a64(lVar6,uVar5,
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                }
                uVar5 = *unaff_x25;
                *(long *)(lVar4 + 0x30) = lVar6;
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar5);
                FUN_042e4268(lVar6,*unaff_x20);
                lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x19);
                FUN_06938f70(lVar8,0);
                if (lVar8 != 0) {
                  uVar5 = *(undefined8 *)
                           System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
                  ;
                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                  if (lVar6 != 0) {
                    lVar7 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                      }
                      else {
                        FUN_042e4a64(lVar6,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(unaff_x21 + 0x1c);
                      lVar8 = *(long *)(unaff_x21 + 0x10);
                      *(long *)(lVar4 + 0x28) = lVar6;
                      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                      if (lVar8 != 0) {
                        uVar2 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                          *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
                        }
                        else {
                          FUN_042e4a64();
                        }
                        lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x29);
                        FUN_06938f78(lVar4,0);
                        if (lVar4 != 0) {
                          uVar5 = *(undefined8 *)UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                          *(undefined8 *)(lVar4 + 0x10) =
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                          ;
                          puVar3 = PTR_DAT_070c25e8;
                          *(undefined8 *)(lVar4 + 0x20) = uVar5;
                          *(undefined4 *)(lVar4 + 0x18) = 0;
                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (*(undefined8 *)puVar3);
                          FUN_042e4268(lVar6,*unaff_x26);
                          puVar3 = PTR_DAT_070c2cb8;
                          if (lVar6 != 0) {
                            lVar8 = *(long *)(lVar6 + 0x10);
                            uVar5 = *(undefined8 *)
                                     OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                              }
                              else {
                                FUN_042e4a64(lVar6,uVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                              }
                              uVar5 = *unaff_x25;
                              *(long *)(lVar4 + 0x30) = lVar6;
                              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (uVar5);
                              FUN_042e4268(lVar6,*unaff_x20);
                              lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*unaff_x19);
                              FUN_06938f70(lVar8,0);
                              if (lVar8 != 0) {
                                uVar5 = *(undefined8 *)
                                         System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                ;
                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                if (lVar6 != 0) {
                                  lVar7 = *(long *)(lVar6 + 0x10);
                                  lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                    }
                                    else {
                                      FUN_042e4a64(lVar6,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    iVar1 = *(int *)(unaff_x21 + 0x1c);
                                    lVar8 = *(long *)(unaff_x21 + 0x10);
                                    *(long *)(lVar4 + 0x28) = lVar6;
                                    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                    if (lVar8 != 0) {
                                      uVar2 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
                                      }
                                      else {
                                        FUN_042e4a64();
                                      }
                                      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*unaff_x29);
                                      FUN_06938f78(lVar4,0);
                                      if (lVar4 != 0) {
                                        uVar5 = *(undefined8 *)
                                                 UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                        ;
                                        puVar3 = PTR_DAT_070c25e8;
                                        *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                        *(undefined4 *)(lVar4 + 0x18) = 3;
                                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                          (*(undefined8 *)puVar3);
                                        FUN_042e4268(lVar6,*unaff_x26);
                                        puVar3 = PTR_DAT_070c2cb8;
                                        if (lVar6 != 0) {
                                          lVar8 = *(long *)(lVar6 + 0x10);
                                          uVar5 = *(undefined8 *)
                                                                                                      
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                          ;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar5;
                                            }
                                            else {
                                              FUN_042e4a64(lVar6,uVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)puVar3 +
                                                                                0x20) + 0xc0) + 0x70
                                                            ));
                                            }
                                            uVar5 = *unaff_x25;
                                            *(long *)(lVar4 + 0x30) = lVar6;
                                            lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar5);
                                            FUN_042e4268(lVar6,*unaff_x20);
                                            lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                            FUN_06938f70(lVar8,0);
                                            if (lVar8 != 0) {
                                              uVar5 = *(undefined8 *)
                                                                                                              
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                              *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                              if (lVar6 != 0) {
                                                lVar7 = *(long *)(lVar6 + 0x10);
                                                lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) =
                                                         lVar8;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar6,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar5 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar5);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar5 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar5);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    FUN_06938d58(in_stack_00000000,in_stack_00000008
                                                                 ,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


