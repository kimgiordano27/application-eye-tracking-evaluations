/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeUpdateCallback$$.ctor
ENTRY_POINT: 0695264c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngineInternal_Input_NativeUpdateCallback___ctor(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_042e4268(lVar10,*unaff_x23);
  puVar5 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
  FUN_06938f78(lVar11,0);
  puVar4 = PTR_DAT_070c25e8;
  puVar3 = PTR_DAT_070c25c8;
  if (lVar11 != 0) {
    uVar15 = *(undefined8 *)System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo;
    uVar12 = *(undefined8 *)PTR_DAT_070c25e8;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
    ;
    *(undefined8 *)(lVar11 + 0x20) = uVar15;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
    FUN_042e4268(lVar13,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_070c2cb8;
    if (lVar13 != 0) {
      lVar14 = *(long *)(lVar13 + 0x10);
      uVar12 = *(undefined8 *)OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
      lVar16 = *(long *)PTR_DAT_070c2cb8;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_042e4a64(lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        puVar7 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
        *(long *)(lVar11 + 0x30) = lVar13;
        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar7);
        FUN_042e4268(lVar13,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
        FUN_06938f70(lVar14,0);
        if (lVar14 != 0) {
          uVar12 = *(undefined8 *)
                    UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
          ;
          *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
          *(undefined8 *)(lVar14 + 0x18) = uVar12;
          puVar7 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
          if (lVar13 != 0) {
            lVar16 = *(long *)(lVar13 + 0x10);
            lVar17 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
              }
              else {
                FUN_042e4a64(lVar13,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar11 + 0x28) = lVar13;
              puVar8 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
              if (lVar10 != 0) {
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar14 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar2 = *(uint *)(lVar10 + 0x18);
                  if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                    *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                  }
                  else {
                    FUN_042e4a64(lVar10,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar5);
                  FUN_06938f78(lVar11,0);
                  if (lVar11 != 0) {
                    uVar12 = *(undefined8 *)puVar4;
                    uVar15 = *(undefined8 *)
                              Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t_TypeInfo
                    ;
                    *(undefined8 *)(lVar11 + 0x10) =
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<IAPManager_IAPPack,_List<AccessorySet>>_TypeInfo
                    ;
                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                    *(undefined4 *)(lVar11 + 0x18) = 2;
                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (uVar12);
                    FUN_042e4268(lVar13,*(undefined8 *)PTR_DAT_070c25c8);
                    if (lVar13 != 0) {
                      lVar14 = *(long *)(lVar13 + 0x10);
                      uVar12 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo;
                      lVar16 = *(long *)puVar3;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar2 = *(uint *)(lVar13 + 0x18);
                        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                        }
                        else {
                          FUN_042e4a64(lVar13,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar6 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                        *(long *)(lVar11 + 0x30) = lVar13;
                        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                           (*(undefined8 *)puVar6);
                        FUN_042e4268(lVar13,*(undefined8 *)
                                             System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                           (*(undefined8 *)
                                             System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                        FUN_06938f70(lVar14,0);
                        if (lVar14 != 0) {
                          uVar12 = *(undefined8 *)
                                    UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                          ;
                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                          *(undefined8 *)(lVar14 + 0x18) = uVar12;
                          if (lVar13 != 0) {
                            lVar16 = *(long *)(lVar13 + 0x10);
                            lVar17 = *(long *)puVar7;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar16 != 0) {
                              uVar2 = *(uint *)(lVar13 + 0x18);
                              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
                              }
                              else {
                                FUN_042e4a64(lVar13,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                              }
                              iVar1 = *(int *)(lVar10 + 0x1c);
                              lVar14 = *(long *)(lVar10 + 0x10);
                              lVar16 = *(long *)puVar8;
                              *(long *)(lVar11 + 0x28) = lVar13;
                              *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                              if (lVar14 != 0) {
                                uVar2 = *(uint *)(lVar10 + 0x18);
                                if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                  *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                                }
                                else {
                                  FUN_042e4a64(lVar10,lVar11,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar5);
                                FUN_06938f78(lVar11,0);
                                puVar5 = PTR_DAT_0711dfd0;
                                if (lVar11 != 0) {
                                  uVar12 = *(undefined8 *)puVar4;
                                  uVar15 = *(undefined8 *)PTR_DAT_0711dfd0;
                                  *(undefined8 *)(lVar11 + 0x10) =
                                       *(undefined8 *)
                                        System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (uVar12);
                                  FUN_042e4268(lVar13,*(undefined8 *)PTR_DAT_070c25c8);
                                  if (lVar13 != 0) {
                                    lVar14 = *(long *)(lVar13 + 0x10);
                                    uVar12 = *(undefined8 *)puVar5;
                                    lVar16 = *(long *)puVar3;
                                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                    if (lVar14 != 0) {
                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                        *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                             uVar12;
                                      }
                                      else {
                                        FUN_042e4a64(lVar13,uVar12,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      puVar5 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                      *(long *)(lVar11 + 0x30) = lVar13;
                                      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (*(undefined8 *)puVar5);
                                      FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                      
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                      lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (*(undefined8 *)
                                                                                                                      
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                      FUN_06938f70(lVar14,0);
                                      puVar5 = 
                                      UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo
                                      ;
                                      if (lVar14 != 0) {
                                        uVar12 = *(undefined8 *)
                                                  UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                        *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                        if (lVar13 != 0) {
                                          lVar16 = *(long *)(lVar13 + 0x10);
                                          lVar17 = *(long *)puVar7;
                                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar2 = *(uint *)(lVar13 + 0x18);
                                            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar14;
                                            }
                                            else {
                                              FUN_042e4a64(lVar13,lVar14,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            iVar1 = *(int *)(lVar10 + 0x1c);
                                            lVar14 = *(long *)(lVar10 + 0x10);
                                            lVar16 = *(long *)puVar8;
                                            *(long *)(lVar11 + 0x28) = lVar13;
                                            *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                            if (lVar14 != 0) {
                                              uVar2 = *(uint *)(lVar10 + 0x18);
                                              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                     lVar11;
                                              }
                                              else {
                                                FUN_042e4a64(lVar10,lVar11,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                              FUN_06938f78(lVar11,0);
                                              puVar9 = 
                                              UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                                              ;
                                              puVar6 = 
                                              System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                                              ;
                                              if (lVar11 != 0) {
                                                uVar12 = *(undefined8 *)puVar4;
                                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                                uVar15 = *(undefined8 *)puVar9;
                                                *(undefined8 *)(lVar11 + 0x10) =
                                                     *(undefined8 *)puVar6;
                                                *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                FUN_042e4268(lVar13,*(undefined8 *)PTR_DAT_070c25c8)
                                                ;
                                                if (lVar13 != 0) {
                                                  lVar14 = *(long *)(lVar13 + 0x10);
                                                  uVar12 = *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar17 = *(long *)puVar7;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar2 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                          *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                   0x20) = lVar14;
                                                        }
                                                        else {
                                                          FUN_042e4a64(lVar13,lVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  puVar6 = PTR_DAT_07137b40;
                                                  puVar5 = PTR_DAT_070f4598;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  puVar5 = PTR_DAT_0711dfd8;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar16 = *(long *)puVar3;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar12;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  puVar5 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  puVar9 = 
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar17 = *(long *)puVar7;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      puVar5 = 
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  ;
                                                  if (lVar16 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  puVar9 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  puVar9 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  puVar9 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  Fusion_LogUtils_DumpDeferredPtr<NetBitBuffer>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_06938f78(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar12;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar10;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


