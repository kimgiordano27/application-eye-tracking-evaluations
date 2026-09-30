/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeUpdateCallback$$Invoke
ENTRY_POINT: 069526d8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngineInternal_Input_NativeUpdateCallback__Invoke(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *in_x9;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *plVar14;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  plVar14 = *(long **)(unaff_x26 + 0xcb8);
  lVar9 = *(long *)(unaff_x23 + 0x10);
  uVar8 = *in_x9;
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
    }
    else {
      FUN_042e4a64();
    }
    puVar5 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar5);
    FUN_042e4268(lVar9,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_06938f70(lVar7,0);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)
               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
      ;
      *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
      *(undefined8 *)(lVar7 + 0x18) = uVar8;
      puVar5 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_042e4a64(lVar9,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar9;
          if (unaff_x21 != 0) {
            lVar9 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar2 = *(uint *)(unaff_x21 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
              }
              else {
                FUN_042e4a64();
              }
              lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*unaff_x19);
              FUN_06938f78(lVar9,0);
              if (lVar9 != 0) {
                uVar8 = *unaff_x25;
                uVar12 = *(undefined8 *)
                          Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t_TypeInfo
                ;
                *(undefined8 *)(lVar9 + 0x10) =
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<IAPManager_IAPPack,_List<AccessorySet>>_TypeInfo
                ;
                *(undefined8 *)(lVar9 + 0x20) = uVar12;
                *(undefined4 *)(lVar9 + 0x18) = 2;
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar8);
                FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8);
                if (lVar7 != 0) {
                  lVar10 = *(long *)(lVar7 + 0x10);
                  uVar8 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo;
                  lVar11 = *plVar14;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(lVar7 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                    }
                    else {
                      FUN_042e4a64(lVar7,uVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                    *(long *)(lVar9 + 0x30) = lVar7;
                    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*(undefined8 *)puVar3);
                    FUN_042e4268(lVar7,*(undefined8 *)
                                        System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)
                                         System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                    FUN_06938f70(lVar10,0);
                    if (lVar10 != 0) {
                      uVar8 = *(undefined8 *)
                               UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                      ;
                      *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                      *(undefined8 *)(lVar10 + 0x18) = uVar8;
                      if (lVar7 != 0) {
                        lVar11 = *(long *)(lVar7 + 0x10);
                        lVar13 = *(long *)puVar5;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar11 != 0) {
                          uVar2 = *(uint *)(lVar7 + 0x18);
                          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                            *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                          }
                          else {
                            FUN_042e4a64(lVar7,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          iVar1 = *(int *)(unaff_x21 + 0x1c);
                          lVar10 = *(long *)(unaff_x21 + 0x10);
                          *(long *)(lVar9 + 0x28) = lVar7;
                          *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                          if (lVar10 != 0) {
                            uVar2 = *(uint *)(unaff_x21 + 0x18);
                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                              *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                            }
                            else {
                              FUN_042e4a64();
                            }
                            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*unaff_x19);
                            FUN_06938f78(lVar9,0);
                            puVar3 = PTR_DAT_0711dfd0;
                            if (lVar9 != 0) {
                              uVar8 = *unaff_x25;
                              uVar12 = *(undefined8 *)PTR_DAT_0711dfd0;
                              *(undefined8 *)(lVar9 + 0x10) =
                                   *(undefined8 *)
                                    System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                              ;
                              *(undefined8 *)(lVar9 + 0x20) = uVar12;
                              *(undefined4 *)(lVar9 + 0x18) = 1;
                              lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (uVar8);
                              FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8);
                              if (lVar7 != 0) {
                                lVar10 = *(long *)(lVar7 + 0x10);
                                uVar8 = *(undefined8 *)puVar3;
                                lVar11 = *plVar14;
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar2 = *(uint *)(lVar7 + 0x18);
                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                  }
                                  else {
                                    FUN_042e4a64(lVar7,uVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                  *(long *)(lVar9 + 0x30) = lVar7;
                                  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*(undefined8 *)puVar3);
                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)
                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                  FUN_06938f70(lVar10,0);
                                  puVar3 = 
                                  UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo
                                  ;
                                  if (lVar10 != 0) {
                                    uVar8 = *(undefined8 *)
                                             UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo
                                    ;
                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                    *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                    if (lVar7 != 0) {
                                      lVar11 = *(long *)(lVar7 + 0x10);
                                      lVar13 = *(long *)puVar5;
                                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                      if (lVar11 != 0) {
                                        uVar2 = *(uint *)(lVar7 + 0x18);
                                        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                          *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                                        }
                                        else {
                                          FUN_042e4a64(lVar7,lVar10,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        iVar1 = *(int *)(unaff_x21 + 0x1c);
                                        lVar10 = *(long *)(unaff_x21 + 0x10);
                                        *(long *)(lVar9 + 0x28) = lVar7;
                                        *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                        if (lVar10 != 0) {
                                          uVar2 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                                          }
                                          else {
                                            FUN_042e4a64();
                                          }
                                          lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                          FUN_06938f78(lVar9,0);
                                          puVar6 = 
                                          UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                                          ;
                                          puVar4 = 
                                          System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                                          ;
                                          if (lVar9 != 0) {
                                            uVar8 = *unaff_x25;
                                            *(undefined4 *)(lVar9 + 0x18) = 0;
                                            uVar12 = *(undefined8 *)puVar6;
                                            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)puVar4;
                                            *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                            lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                            FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8);
                                            if (lVar7 != 0) {
                                              lVar10 = *(long *)(lVar7 + 0x10);
                                              uVar8 = *(undefined8 *)
                                                                                                              
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                              ;
                                              lVar11 = *plVar14;
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar2 = *(uint *)(lVar7 + 0x18);
                                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar7,uVar8,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                puVar4 = 
                                                System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                *(long *)(lVar9 + 0x30) = lVar7;
                                                lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                        
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                FUN_06938f70(lVar10,0);
                                                if (lVar10 != 0) {
                                                  uVar8 = *(undefined8 *)puVar3;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar9,0);
                                                  puVar4 = PTR_DAT_07137b40;
                                                  puVar3 = PTR_DAT_070f4598;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                    lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar9,0);
                                                  puVar3 = PTR_DAT_0711dfd8;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    uVar12 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar11 = *plVar14;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar8;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  puVar3 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar9,0);
                                                  puVar6 = 
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                    lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                    if (lVar7 != 0) {
                                                      lVar11 = *(long *)(lVar7 + 0x10);
                                                      lVar13 = *(long *)puVar5;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  puVar6 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                    lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  puVar6 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                    lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo
                                                  ;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  puVar6 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Fusion_LogUtils_DumpDeferredPtr<NetBitBuffer>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                    lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar12;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar11 = *plVar14;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar9 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar7,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    FUN_06938d58(unaff_x28);
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


