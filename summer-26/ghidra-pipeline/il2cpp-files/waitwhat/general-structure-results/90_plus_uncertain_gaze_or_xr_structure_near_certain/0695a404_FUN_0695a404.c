/*
FUNCTION_NAME: FUN_0695a404
ENTRY_POINT: 0695a404
PROGRAM: waitwhat-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_0695a404(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x29);
  FUN_06938f78(lVar4,0);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo;
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)
          System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
    ;
    puVar3 = PTR_DAT_070c25e8;
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar3);
    FUN_042e4268(lVar5,*unaff_x26);
    puVar3 = PTR_DAT_070c2cb8;
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      uVar8 = *(undefined8 *)
               UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_TypeInfo;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_042e4a64(lVar5,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = *unaff_x25;
        *(long *)(lVar4 + 0x30) = lVar5;
        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
        FUN_042e4268(lVar5,*unaff_x20);
        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x19);
        FUN_06938f70(lVar6,0);
        if (lVar6 != 0) {
          uVar8 = *(undefined8 *)
                   UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_TypeInfo;
          *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
              }
              else {
                FUN_042e4a64(lVar5,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              iVar1 = *(int *)(unaff_x21 + 0x1c);
              lVar6 = *(long *)(unaff_x21 + 0x10);
              *(long *)(lVar4 + 0x28) = lVar5;
              *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
              if (lVar6 != 0) {
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                  *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
                }
                else {
                  FUN_042e4a64();
                }
                lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x29);
                FUN_06938f78(lVar4,0);
                if (lVar4 != 0) {
                  uVar8 = *(undefined8 *)
                           OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo;
                  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0711ac20;
                  puVar3 = PTR_DAT_070c25e8;
                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                  *(undefined4 *)(lVar4 + 0x18) = 2;
                  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)puVar3);
                  FUN_042e4268(lVar5,*unaff_x26);
                  puVar3 = PTR_DAT_070c2cb8;
                  if (lVar5 != 0) {
                    lVar6 = *(long *)(lVar5 + 0x10);
                    uVar8 = *(undefined8 *)OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar2 = *(uint *)(lVar5 + 0x18);
                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                      }
                      else {
                        FUN_042e4a64(lVar5,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar8 = *unaff_x25;
                      *(long *)(lVar4 + 0x30) = lVar5;
                      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (uVar8);
                      FUN_042e4268(lVar5,*unaff_x20);
                      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (*unaff_x19);
                      FUN_06938f70(lVar6,0);
                      if (lVar6 != 0) {
                        uVar8 = *(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
                        ;
                        *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                        *(undefined8 *)(lVar6 + 0x18) = uVar8;
                        if (lVar5 != 0) {
                          lVar7 = *(long *)(lVar5 + 0x10);
                          lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar2 = *(uint *)(lVar5 + 0x18);
                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                              *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                            }
                            else {
                              FUN_042e4a64(lVar5,lVar6,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            iVar1 = *(int *)(unaff_x21 + 0x1c);
                            lVar6 = *(long *)(unaff_x21 + 0x10);
                            *(long *)(lVar4 + 0x28) = lVar5;
                            *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                            if (lVar6 != 0) {
                              uVar2 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
                              }
                              else {
                                FUN_042e4a64();
                              }
                              lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*unaff_x29);
                              FUN_06938f78(lVar4,0);
                              if (lVar4 != 0) {
                                uVar8 = *(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
                                ;
                                *(undefined8 *)(lVar4 + 0x10) =
                                     *(undefined8 *)
                                      System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo
                                ;
                                puVar3 = PTR_DAT_070c25e8;
                                *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                *(undefined4 *)(lVar4 + 0x18) = 0;
                                lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (*(undefined8 *)puVar3);
                                FUN_042e4268(lVar5,*unaff_x26);
                                puVar3 = PTR_DAT_070c2cb8;
                                if (lVar5 != 0) {
                                  lVar6 = *(long *)(lVar5 + 0x10);
                                  uVar8 = *(undefined8 *)
                                           OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                  ;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar6 != 0) {
                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                    }
                                    else {
                                      FUN_042e4a64(lVar5,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                              0xc0) + 0x70));
                                    }
                                    uVar8 = *unaff_x25;
                                    *(long *)(lVar4 + 0x30) = lVar5;
                                    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (uVar8);
                                    FUN_042e4268(lVar5,*unaff_x20);
                                    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (*unaff_x19);
                                    FUN_06938f70(lVar6,0);
                                    if (lVar6 != 0) {
                                      uVar8 = *(undefined8 *)
                                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                      *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                      if (lVar5 != 0) {
                                        lVar7 = *(long *)(lVar5 + 0x10);
                                        lVar9 = *(long *)
                                                 System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar2 = *(uint *)(lVar5 + 0x18);
                                          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                                          }
                                          else {
                                            FUN_042e4a64(lVar5,lVar6,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          iVar1 = *(int *)(unaff_x21 + 0x1c);
                                          lVar6 = *(long *)(unaff_x21 + 0x10);
                                          *(long *)(lVar4 + 0x28) = lVar5;
                                          *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                          if (lVar6 != 0) {
                                            uVar2 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar4
                                              ;
                                            }
                                            else {
                                              FUN_042e4a64();
                                            }
                                            lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                            FUN_06938f78(lVar4,0);
                                            if (lVar4 != 0) {
                                              uVar8 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_<>c_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar4 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                                              ;
                                              puVar3 = PTR_DAT_070c25e8;
                                              *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                              *(undefined4 *)(lVar4 + 0x18) = 0;
                                              lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                              FUN_042e4268(lVar5,*unaff_x26);
                                              puVar3 = PTR_DAT_070c2cb8;
                                              if (lVar5 != 0) {
                                                lVar6 = *(long *)(lVar5 + 0x10);
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                ;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar6 != 0) {
                                                  uVar2 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar5,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Match_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 2;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_000001E7_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_XmlBaseReader_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar5,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
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


