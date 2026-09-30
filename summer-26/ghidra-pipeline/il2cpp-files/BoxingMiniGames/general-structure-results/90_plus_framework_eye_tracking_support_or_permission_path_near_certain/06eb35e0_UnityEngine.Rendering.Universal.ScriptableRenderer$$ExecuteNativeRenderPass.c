/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$ExecuteNativeRenderPass
ENTRY_POINT: 06eb35e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 159
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_7;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_7;functionality_possible_biometrics_hits_1
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__ExecuteNativeRenderPass(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long lVar15;
  long unaff_x24;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x28;
  long in_stack_00000000;
  long in_stack_00000008;
  
  uVar7 = thunk_FUN_0367fe20(*unaff_x28);
  FUN_055487a4();
  *(undefined8 *)(unaff_x24 + 0x90) = uVar7;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x24 + 0x90),uVar7);
  puVar5 = UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
  puVar3 = PTR_DAT_07a029b0;
  if (unaff_x23 != 0) {
    FUN_04a78624();
    lVar15 = *(long *)(unaff_x22 + 0x50);
    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)System_Net_NclUtilities_TypeInfo);
    FUN_06ea6978(lVar8,0);
    puVar2 = OVRNativeBuffer_TypeInfo;
    puVar4 = OVRHumanBodyBonesMappingsInterface_TypeInfo;
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVRNativeBuffer_TypeInfo;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar4;
      thunk_FUN_036b7ad0();
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
      FUN_0414d94c();
      *(undefined8 *)(lVar8 + 0x50) = uVar7;
      thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
      FUN_0554c13c();
      *(undefined8 *)(lVar8 + 0x58) = uVar7;
      thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar9 = *(long *)puVar5;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar16 = puVar12[5];
      if (lVar16 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar16 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
        FUN_0414d94c(lVar16,uVar7,*(undefined8 *)OVR_OpenVR_NotificationBitmap_t_TypeInfo,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
        *plVar10 = lVar16;
        thunk_FUN_036b7ad0(plVar10,lVar16);
      }
      *(long *)(lVar8 + 0x68) = lVar16;
      thunk_FUN_036b7ad0((long *)(lVar8 + 0x68),lVar16);
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar9 = *(long *)puVar5;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar16 = puVar12[6];
      if (lVar16 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar7 = *puVar12;
        lVar16 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
        FUN_0414d94c(lVar16,uVar7,*(undefined8 *)Unity_AppUI_Core_NotificationManager_TypeInfo,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
        *plVar10 = lVar16;
        thunk_FUN_036b7ad0(plVar10,lVar16);
      }
      *(long *)(lVar8 + 0x70) = lVar16;
      thunk_FUN_036b7ad0((long *)(lVar8 + 0x70),lVar16);
      if (lVar15 != 0) {
        FUN_04a78624(lVar15,lVar8,*(undefined8 *)puVar3);
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)System_Net_NclUtilities_TypeInfo);
        FUN_06ea6978(lVar8,0);
        puVar4 = OVRInput_TypeInfo;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVREyeGaze_TypeInfo;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar4;
          thunk_FUN_036b7ad0();
          uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
          FUN_0414d94c();
          *(undefined8 *)(lVar8 + 0x50) = uVar7;
          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
          uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
          FUN_0554c13c();
          *(undefined8 *)(lVar8 + 0x58) = uVar7;
          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
          uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c();
          *(undefined8 *)(lVar8 + 0x48) = uVar7;
          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x48),uVar7);
          puVar4 = Unity_InferenceEngine_Layers_NearestMode_TypeInfo;
          if (*(long *)(unaff_x22 + 0x50) != 0) {
            FUN_04a78624(*(long *)(unaff_x22 + 0x50),lVar8,*(undefined8 *)puVar3);
            lVar15 = *(long *)(unaff_x22 + 0x50);
            lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
            FUN_06ea680c(lVar8,0);
            puVar3 = OVROverlay_TypeInfo;
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVRGLTFComponentType_TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar3;
              thunk_FUN_036b7ad0();
              puVar3 = PTR_DAT_07a00dd0;
              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
              FUN_0414cefc();
              *(undefined8 *)(lVar8 + 0x50) = uVar7;
              thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
              FUN_055487a4();
              *(undefined8 *)(lVar8 + 0x58) = uVar7;
              thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
              lVar9 = *(long *)puVar5;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar9 = *(long *)puVar5;
              }
              puVar12 = *(undefined8 **)(lVar9 + 0xb8);
              lVar16 = puVar12[7];
              if (lVar16 == 0) {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                }
                uVar7 = *puVar12;
                lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                FUN_0414cefc(lVar16,uVar7,
                             *(undefined8 *)
                              System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                             ,0);
                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
                *plVar10 = lVar16;
                thunk_FUN_036b7ad0(plVar10,lVar16);
              }
              *(long *)(lVar8 + 0x68) = lVar16;
              thunk_FUN_036b7ad0((long *)(lVar8 + 0x68),lVar16);
              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
              FUN_0414cefc();
              *(undefined8 *)(lVar8 + 0x70) = uVar7;
              thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x70),uVar7);
              if (lVar15 != 0) {
                FUN_04a78624(lVar15,lVar8,*(undefined8 *)PTR_DAT_07a029b0);
                lVar15 = *(long *)(unaff_x22 + 0x50);
                lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                            Unity_InferenceEngine_Layers_NearestMode_TypeInfo);
                FUN_06ea680c(lVar8,0);
                puVar3 = OVRPassthroughLayer_TypeInfo;
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVROverlayCanvasSettings_TypeInfo;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar3;
                  thunk_FUN_036b7ad0();
                  puVar3 = PTR_DAT_07a00dd0;
                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                  FUN_0414cefc();
                  *(undefined8 *)(lVar8 + 0x50) = uVar7;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
                  FUN_055487a4();
                  *(undefined8 *)(lVar8 + 0x58) = uVar7;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
                  lVar9 = *(long *)puVar5;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar9 = *(long *)puVar5;
                  }
                  puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                  lVar16 = puVar12[8];
                  if (lVar16 == 0) {
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                    }
                    uVar7 = *puVar12;
                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                    FUN_0414cefc(lVar16,uVar7,
                                 *(undefined8 *)
                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo
                                 ,0);
                    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
                    *plVar10 = lVar16;
                    thunk_FUN_036b7ad0(plVar10,lVar16);
                  }
                  puVar4 = PTR_DAT_079fbc70;
                  *(long *)(lVar8 + 0x68) = lVar16;
                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x68),lVar16);
                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                  FUN_0414cefc();
                  *(undefined8 *)(lVar8 + 0x70) = uVar7;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x70),uVar7);
                  if (lVar15 != 0) {
                    FUN_04a78624(lVar15,lVar8,*(undefined8 *)PTR_DAT_07a029b0);
                    if (*(long *)(in_stack_00000008 + 0x50) != 0) {
                      FUN_04a78624();
                      puVar3 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
                      lVar15 = *(long *)(in_stack_00000008 + 0x50);
                      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                );
                      FUN_06ea66f4(lVar8,0);
                      puVar6 = OVRBounded2D_TypeInfo;
                      if (lVar8 != 0) {
                        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)OVRBoundary_TypeInfo;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar6;
                        thunk_FUN_036b7ad0();
                        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                        FUN_0414c60c();
                        *(undefined8 *)(lVar8 + 0x50) = uVar7;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
                        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                        System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                  ();
                        *(undefined8 *)(lVar8 + 0x58) = uVar7;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
                        if (lVar15 != 0) {
                          FUN_04a78624(lVar15,lVar8,*(undefined8 *)PTR_DAT_07a029b0);
                          lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                            
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                          FUN_06ea5298(lVar8,0);
                          uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                          FUN_0414c60c();
                          if (lVar8 != 0) {
                            *(undefined8 *)(lVar8 + 0x48) = uVar7;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x48),uVar7);
                            lVar9 = *(long *)(lVar8 + 0x50);
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                         System_Net_NclUtilities_TypeInfo);
                            FUN_06ea6978(lVar15,0);
                            puVar4 = OVRExternalComposition_TypeInfo;
                            if (lVar15 != 0) {
                              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar2;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)puVar4;
                              thunk_FUN_036b7ad0();
                              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                              FUN_0414d94c();
                              *(undefined8 *)(lVar15 + 0x50) = uVar7;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),uVar7);
                              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
                              FUN_0554c13c();
                              *(undefined8 *)(lVar15 + 0x58) = uVar7;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),uVar7);
                              lVar16 = *(long *)puVar5;
                              if (*(int *)(lVar16 + 0xe4) == 0) {
                                thunk_FUN_036a1978();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar17 = puVar12[9];
                              if (lVar17 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar7 = *puVar12;
                                lVar17 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                FUN_0414d94c(lVar17,uVar7,
                                             *(undefined8 *)
                                              System_ComponentModel_NotifyParentPropertyAttribute_TypeInfo
                                             ,0);
                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
                                *plVar10 = lVar17;
                                thunk_FUN_036b7ad0(plVar10,lVar17);
                              }
                              *(long *)(lVar15 + 0x68) = lVar17;
                              thunk_FUN_036b7ad0((long *)(lVar15 + 0x68),lVar17);
                              lVar16 = *(long *)puVar5;
                              if (*(int *)(lVar16 + 0xe4) == 0) {
                                thunk_FUN_036a1978();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar17 = puVar12[10];
                              if (lVar17 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar7 = *puVar12;
                                lVar17 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                FUN_0414d94c(lVar17,uVar7,
                                             *(undefined8 *)Mono_Http_NtlmClient_TypeInfo,0);
                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
                                *plVar10 = lVar17;
                                thunk_FUN_036b7ad0(plVar10,lVar17);
                              }
                              *(long *)(lVar15 + 0x70) = lVar17;
                              thunk_FUN_036b7ad0((long *)(lVar15 + 0x70),lVar17);
                              if (lVar9 != 0) {
                                FUN_04a78624(lVar9,lVar15,*(undefined8 *)PTR_DAT_07a029b0);
                                lVar9 = *(long *)(lVar8 + 0x50);
                                lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06ea66f4(lVar15,0);
                                puVar4 = OVRGLTFAnimatinonNode_TypeInfo;
                                if (lVar15 != 0) {
                                  *(undefined8 *)(lVar15 + 0x30) =
                                       *(undefined8 *)OVRProfile_TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)puVar4;
                                  thunk_FUN_036b7ad0();
                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                                  FUN_0414c60c();
                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),uVar7);
                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                            ();
                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),uVar7);
                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                  ;
                                  FUN_05620310();
                                  *(undefined8 *)(lVar15 + 0x60) = uVar7;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x60),uVar7);
                                  puVar4 = PTR_DAT_07a029b0;
                                  if (lVar9 != 0) {
                                    FUN_04a78624(lVar9,lVar15,*(undefined8 *)PTR_DAT_07a029b0);
                                    if (*(long *)(in_stack_00000008 + 0x50) != 0) {
                                      FUN_04a78624(*(long *)(in_stack_00000008 + 0x50),lVar8,
                                                   *(undefined8 *)puVar4);
                                      lVar15 = *(long *)(in_stack_00000008 + 0x50);
                                      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                      FUN_06ea66f4(lVar8,0);
                                      puVar6 = OVROverlayCanvas_TypeInfo;
                                      puVar4 = PTR_DAT_079fbc70;
                                      if (lVar8 != 0) {
                                        *(undefined8 *)(lVar8 + 0x30) =
                                             *(undefined8 *)OVRHandTest_TypeInfo;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar6;
                                        thunk_FUN_036b7ad0();
                                        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                        FUN_0414c60c();
                                        *(undefined8 *)(lVar8 + 0x50) = uVar7;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),uVar7);
                                        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                        System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                  ();
                                        *(undefined8 *)(lVar8 + 0x58) = uVar7;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),uVar7);
                                        if (lVar15 != 0) {
                                          FUN_04a78624(lVar15,lVar8,*(undefined8 *)PTR_DAT_07a029b0)
                                          ;
                                          lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                            
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                          FUN_06ea5298(lVar8,0);
                                          uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                          FUN_0414c60c();
                                          if (lVar8 != 0) {
                                            *(undefined8 *)(lVar8 + 0x48) = uVar7;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x48),uVar7);
                                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                  
                                                  System_Net_NclUtilities_TypeInfo);
                                            FUN_06ea6978(lVar15,0);
                                            puVar4 = OVRPermissionsRequester_TypeInfo;
                                            if (lVar15 != 0) {
                                              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar2
                                              ;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)puVar4
                                              ;
                                              thunk_FUN_036b7ad0();
                                              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                          PTR_DAT_07a20ff8);
                                              FUN_0414d94c();
                                              *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),uVar7
                                                                );
                                              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                          PTR_DAT_079f5040);
                                              FUN_0554c13c();
                                              *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),uVar7
                                                                );
                                              lVar9 = *(long *)puVar5;
                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar9 = *(long *)puVar5;
                                              }
                                              puVar4 = 
                                              UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
                                              ;
                                              puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                                              lVar16 = puVar12[0xb];
                                              if (lVar16 == 0) {
                                                if (*(int *)(lVar9 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar7 = *puVar12;
                                                lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar16,uVar7,
                                                             *(undefined8 *)
                                                              System_Net_NtlmClient_TypeInfo,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x58);
                                                *plVar10 = lVar16;
                                                thunk_FUN_036b7ad0(plVar10,lVar16);
                                              }
                                              puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                              *(long *)(lVar15 + 0x68) = lVar16;
                                              thunk_FUN_036b7ad0((long *)(lVar15 + 0x68),lVar16);
                                              lVar9 = *(long *)puVar5;
                                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar9 = *(long *)puVar5;
                                              }
                                              puVar13 = *(undefined8 **)(lVar9 + 0xb8);
                                              lVar16 = puVar13[0xc];
                                              if (lVar16 == 0) {
                                                if (*(int *)(lVar9 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar7 = *puVar13;
                                                lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar16,uVar7,
                                                             *(undefined8 *)
                                                              Mono_Http_NtlmSession_TypeInfo,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x60);
                                                *plVar10 = lVar16;
                                                thunk_FUN_036b7ad0(plVar10,lVar16);
                                                puVar12 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar15 + 0x70) = lVar16;
                                              thunk_FUN_036b7ad0((long *)(lVar15 + 0x70),lVar16);
                                              uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                          PTR_DAT_079fbc70);
                                              FUN_0414c60c();
                                              *(undefined8 *)(lVar15 + 0x48) = uVar7;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x48),uVar7
                                                                );
                                              if (*(long *)(lVar8 + 0x50) != 0) {
                                                FUN_04a78624(*(long *)(lVar8 + 0x50),lVar15,*puVar12
                                                            );
                                                if (*(long *)(in_stack_00000008 + 0x50) != 0) {
                                                  FUN_04a78624(*(long *)(in_stack_00000008 + 0x50),
                                                               lVar8,*puVar12);
                                                  lVar15 = *(long *)(in_stack_00000008 + 0x50);
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar8,0);
                                                  puVar2 = OVRCameraRig_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRMarkerPayloadType_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar8 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_07a20ff8);
                                                    FUN_0414d94c();
                                                    *(undefined8 *)(lVar8 + 0x50) = uVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x50),
                                                                       uVar7);
                                                    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_079f5040);
                                                    FUN_0554c13c();
                                                    *(undefined8 *)(lVar8 + 0x58) = uVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x58),
                                                                       uVar7);
                                                    lVar9 = *(long *)puVar5;
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar9 = *(long *)puVar5;
                                                    }
                                                    puVar12 = *(undefined8 **)(lVar9 + 0xb8);
                                                    lVar16 = puVar12[0xd];
                                                    if (lVar16 == 0) {
                                                      if (*(int *)(lVar9 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar12 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar7 = *puVar12;
                                                      lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a20ff8)
                                                      ;
                                                      FUN_0414d94c(lVar16,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo,
                                                  0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x68);
                                                  *plVar10 = lVar16;
                                                  thunk_FUN_036b7ad0(plVar10,lVar16);
                                                  }
                                                  puVar2 = PTR_DAT_07a029b0;
                                                  *(long *)(lVar8 + 0x68) = lVar16;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x68),lVar16);
                                                  if (lVar15 != 0) {
                                                    FUN_04a78624(lVar15,lVar8,*(undefined8 *)puVar2)
                                                    ;
                                                    lVar8 = *(long *)(in_stack_00000000 + 0x10);
                                                    lVar15 = *(long *)puVar4;
                                                    *(int *)(in_stack_00000000 + 0x1c) =
                                                         *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(in_stack_00000000 + 0x18) =
                                                             uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = in_stack_00000008;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(in_stack_00000000,
                                                                     in_stack_00000008,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x30) =
                                                         *(undefined8 *)
                                                          OVROverlayCanvasManager_TypeInfo;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x30))
                                                    ;
                                                    lVar9 = *(long *)(lVar8 + 0x50);
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar15,0);
                                                    puVar2 = OVRGLTFAccessor_TypeInfo;
                                                    if (lVar15 != 0) {
                                                      *(undefined8 *)(lVar15 + 0x30) =
                                                           *(undefined8 *)OVRMarkerPayload_TypeInfo;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar15 + 0x38) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_036b7ad0();
                                                      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079fbc70);
                                                      FUN_0414c60c();
                                                      *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar15 + 0x50),uVar7);
                                                      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079f5aa0);
                                                                                                            
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310();
                                                  *(undefined8 *)(lVar15 + 0x60) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x60),
                                                                     uVar7);
                                                  if (lVar9 != 0) {
                                                    FUN_04a78624(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar9 = *(long *)(lVar8 + 0x50);
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar15,0);
                                                    puVar3 = OVRBounded3D_TypeInfo;
                                                    if (lVar15 != 0) {
                                                      *(undefined8 *)(lVar15 + 0x30) =
                                                           *(undefined8 *)OVRManager_TypeInfo;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar15 + 0x38) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_036b7ad0();
                                                      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079fbc70);
                                                      FUN_0414c60c();
                                                      *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar15 + 0x50),uVar7);
                                                      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079f5aa0);
                                                                                                            
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310();
                                                  *(undefined8 *)(lVar15 + 0x60) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x60),
                                                                     uVar7);
                                                  if (lVar9 != 0) {
                                                    FUN_04a78624(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                    lVar9 = *(long *)puVar4;
                                                    *(int *)(in_stack_00000000 + 0x1c) =
                                                         *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_079fbc70;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(in_stack_00000000 + 0x18) =
                                                             uVar1 + 1;
                                                        plVar10 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar10,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(in_stack_00000000,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x30) =
                                                         *(undefined8 *)OVRHaptics_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0414c60c();
                                                    *(undefined8 *)(lVar8 + 0x48) = uVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x48),
                                                                       uVar7);
                                                    lVar9 = *(long *)(lVar8 + 0x50);
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar15,0);
                                                  puVar2 = OVRGLTFLoader_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x38) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0();
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  if (lVar9 != 0) {
                                                    FUN_04a78624(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar9 = *(long *)(lVar8 + 0x50);
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079fbc70);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar9 != 0) {
                                                    FUN_04a78624(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar3 = 
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar15,0);
                                                  puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRNodeStateProperties_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar15 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar16 = *(long *)puVar5;
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar16 = *(long *)puVar5;
                                                    }
                                                    puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                                                    lVar17 = puVar14[0xe];
                                                    if (lVar17 == 0) {
                                                      if (*(int *)(lVar16 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar14 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar7 = *puVar14;
                                                      lVar17 = thunk_FUN_0367fe20(*puVar12);
                                                      FUN_0414c60c(lVar17,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Zenject_NullBindingFinalizer_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x70);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x50),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar14[0xf];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar14;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (lVar17,uVar7,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x78);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x58) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x58),lVar17)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_04a78624(lVar9,lVar15,*puVar13);
                                                    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar15,0);
                                                  lVar9 = *(long *)puVar5;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar9 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
                                                  lVar16 = puVar13[0x10];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar13;
                                                    lVar16 = thunk_FUN_0367fe20(*puVar12);
                                                    FUN_0414c60c(lVar16,uVar7,
                                                                 *(undefined8 *)
                                                                  System_NullConsoleDriver_TypeInfo,
                                                                 0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x80);
                                                    *plVar10 = lVar16;
                                                    thunk_FUN_036b7ad0(plVar10,lVar16);
                                                  }
                                                  if (lVar15 != 0) {
                                                    *(long *)(lVar15 + 0x48) = lVar16;
                                                    thunk_FUN_036b7ad0((long *)(lVar15 + 0x48),
                                                                       lVar16);
                                                    lVar16 = *(long *)(lVar15 + 0x50);
                                                    lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar9,0);
                                                  puVar2 = OVRLocatable_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)OVRRaycaster_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar17 = *(long *)puVar5;
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar17 = *(long *)puVar5;
                                                    }
                                                    puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                    lVar18 = puVar13[0x11];
                                                    if (lVar18 == 0) {
                                                      if (*(int *)(lVar17 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar13 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar7 = *puVar13;
                                                      lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a00dd0)
                                                      ;
                                                      FUN_0414cefc(lVar18,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityThreading_NullDispatcher_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x88);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x50),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x12];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar13;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar18,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_NullReferenceException_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x90);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar9 + 0x58) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x58),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x13];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar13;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar18,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x98);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x68),lVar18);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x14];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar13;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar18,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa0);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar9 + 0x70) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x70),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar16 != 0) {
                                                    FUN_04a78624(lVar16,lVar9,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar2 = PTR_DAT_079f4540;
                                                    if (*(long *)(lVar8 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar8 + 0x50),lVar15,
                                                                   *puVar13);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                      }
                                                      uVar11 = FUN_0717a688(0);
                                                      if ((uVar11 & 1) != 0) {
                                                        lVar9 = *(long *)(lVar8 + 0x50);
                                                        lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_06ea66f4(lVar15,0);
                                                        if (lVar15 == 0) goto LAB_06eb5ee8;
                                                        *(undefined8 *)(lVar15 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  uVar7 = thunk_FUN_0367fe20(*puVar12);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar15,0);
                                                  uVar7 = thunk_FUN_0367fe20(*puVar12);
                                                  FUN_0414c60c();
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x48),
                                                                     uVar7);
                                                  lVar16 = *(long *)(lVar15 + 0x50);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a029d8);
                                                  FUN_06e958f8(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)OVRDisplay_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar18 = puVar13[0x15];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar13;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fd998);
                                                    FUN_0414d3cc(lVar18,uVar7,
                                                                 *(undefined8 *)
                                                                  System_Number_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xa8);
                                                    *plVar10 = lVar18;
                                                    thunk_FUN_036b7ad0(plVar10,lVar18);
                                                    puVar12 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x50),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar16,lVar9,
                                                               *(undefined8 *)PTR_DAT_07a029b0);
                                                  if (*(long *)(lVar8 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar8 + 0x50),lVar15,
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRHapticsClip_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar7 = thunk_FUN_0367fe20(*puVar12);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar7 = thunk_FUN_0367fe20(*puVar12);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  }
                                                  lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(in_stack_00000000 + 0x18) =
                                                           uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(in_stack_00000000,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = PTR_DAT_079f4e28;
                                                  if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                    if (*(long *)(unaff_x19 + 0x148) == 0)
                                                    goto LAB_06eb5ee8;
                                                    uVar7 = FUN_06ed5230(*(long *)(unaff_x19 + 0x148
                                                                                  ),0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978(*(long *)puVar3);
                                                    }
                                                    uVar11 = FUN_071c0684(uVar7,0,0);
                                                    if ((uVar11 & 1) != 0) {
                                                      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                    
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar8,0);
                                                  if (lVar8 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar8 + 0x30) =
                                                       *(undefined8 *)OVRColocationSession_TypeInfo;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x30));
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRGLTFType_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x16];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_NumberFormatInfo_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb0);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x50),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x17];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb8);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x58) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x58),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x18];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xc0);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x68),lVar17)
                                                  ;
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)
                                                        OVRHandSkeletonVersion_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x19];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0
                                                  );
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 200);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x50),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1a];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd0);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x58) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x58),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1b];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_NumericFieldDraggerUtility_TypeInfo,0)
                                                  ;
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd8);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x68),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1c];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe0);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x70) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x70),lVar17)
                                                  ;
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                                  FUN_06e99510(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRPose_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x38) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_EventSystems_OVRInputModule_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x68) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  thunk_FUN_036b7ad0();
                                                  FUN_058206a4(lVar15,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                Newtonsoft_Json_JsonWriter_TypeInfo)
                                                  ;
                                                  puVar2 = PTR_DAT_07a00dd0;
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a00dd0);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar15 + 0x88) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x88),
                                                                     uVar7);
                                                  puVar3 = PTR_DAT_079f5048;
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5048);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar15 + 0x90) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x90),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x50),
                                                                     uVar7);
                                                  uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x58),
                                                                     uVar7);
                                                  *(long *)(unaff_x19 + 0x208) = lVar15;
                                                  thunk_FUN_036b7ad0((undefined8 *)
                                                                     (unaff_x19 + 0x208),lVar15);
                                                  if (*(long *)(lVar8 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar8 + 0x50),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar8 + 0x50);
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRFaceExpressions_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x38) =
                                                       *(undefined8 *)OVRControllerTest_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1d];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe8);
                                                  *plVar10 = lVar17;
                                                  thunk_FUN_036b7ad0(plVar10,lVar17);
                                                  puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x50),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1e];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar17,uVar7,
                                                                 *(undefined8 *)OVRAnchor_TypeInfo,0
                                                                );
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf0);
                                                    *plVar10 = lVar17;
                                                    thunk_FUN_036b7ad0(plVar10,lVar17);
                                                    puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x58) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x58),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x1f];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)
                                                                  OVRAnchorContainer_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf8);
                                                    *plVar10 = lVar17;
                                                    thunk_FUN_036b7ad0(plVar10,lVar17);
                                                    puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x68),lVar17)
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar16 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
                                                  lVar17 = puVar12[0x20];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar16 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar7 = *puVar12;
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar17,uVar7,
                                                                 *(undefined8 *)OVRBone_TypeInfo,0);
                                                    lVar16 = *(long *)(*(long *)puVar5 + 0xb8);
                                                    *(long *)(lVar16 + 0x100) = lVar17;
                                                    thunk_FUN_036b7ad0(lVar16 + 0x100,lVar17);
                                                    puVar13 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar15 + 0x70) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar15 + 0x70),lVar17)
                                                  ;
                                                  if (lVar9 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar9,lVar15,*puVar13);
                                                  lVar15 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar8;
                                                    thunk_FUN_036b7ad0(plVar10,lVar8);
                                                  }
                                                  else {
                                                    FUN_0459f03c(in_stack_00000000,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar5 = 
                                                  UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Newtonsoft_Json_JsonValidatingReader_TypeInfo;
                                                  if (0 < *(int *)(in_stack_00000000 + 0x18)) {
                                                    uVar7 = FUN_045a0b8c(in_stack_00000000,
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar7;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar7);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar8 = FUN_06e96d28(0);
                                                  lVar15 = *(long *)puVar5;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978(lVar15);
                                                  }
                                                  if (((lVar8 == 0) ||
                                                      (lVar8 = FUN_06e96e60(lVar8,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar5 + 0xb8) + 0x10),1,0,0,0), lVar8 == 0)) ||
                                                  (*(long *)(lVar8 + 0x28) == 0)) goto LAB_06eb5ee8;
                                                  FUN_04a7870c(*(long *)(lVar8 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_LocalKeyword_TypeInfo);
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar8 = FUN_06e96d28(0);
                                                  if (lVar8 != 0) {
                                                    FUN_06e96db4(lVar8,*(undefined8 *)
                                                                        (unaff_x19 + 0x180),0);
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
LAB_06eb5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


