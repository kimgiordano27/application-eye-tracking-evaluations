/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$GetRenderTextureDescriptor
ENTRY_POINT: 06eb454c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_1
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__GetRenderTextureDescriptor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x23 + 0x58) = unaff_x24;
  thunk_FUN_036b7ad0();
  lVar4 = *unaff_x29;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x29;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar12 = puVar8[0xd];
  if (lVar12 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar14 = *puVar8;
    lVar12 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
    FUN_0414d94c(lVar12,uVar14,*(undefined8 *)Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
    *plVar5 = lVar12;
    thunk_FUN_036b7ad0(plVar5,lVar12);
  }
  *(long *)(unaff_x23 + 0x68) = lVar12;
  thunk_FUN_036b7ad0((long *)(unaff_x23 + 0x68),lVar12);
  if (unaff_x22 != 0) {
    FUN_04a78624();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c();
      }
      lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
      FUN_06ea5298(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)OVROverlayCanvasManager_TypeInfo;
        thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x30));
        lVar11 = *(long *)(lVar4 + 0x50);
        lVar12 = thunk_FUN_0367fe20(*unaff_x27);
        FUN_06ea66f4(lVar12,0);
        puVar3 = OVRGLTFAccessor_TypeInfo;
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)OVRMarkerPayload_TypeInfo;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar3;
          thunk_FUN_036b7ad0();
          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c();
          *(undefined8 *)(lVar12 + 0x50) = uVar14;
          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                    ();
          *(undefined8 *)(lVar12 + 0x58) = uVar14;
          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                       UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
          FUN_05620310();
          *(undefined8 *)(lVar12 + 0x60) = uVar14;
          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x60),uVar14);
          if (lVar11 != 0) {
            FUN_04a78624(lVar11,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
            lVar11 = *(long *)(lVar4 + 0x50);
            lVar12 = thunk_FUN_0367fe20(*unaff_x27);
            FUN_06ea66f4(lVar12,0);
            puVar3 = OVRBounded3D_TypeInfo;
            if (lVar12 != 0) {
              *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)OVRManager_TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar3;
              thunk_FUN_036b7ad0();
              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
              FUN_0414c60c();
              *(undefined8 *)(lVar12 + 0x50) = uVar14;
              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
              System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                        ();
              *(undefined8 *)(lVar12 + 0x58) = uVar14;
              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                           UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
              FUN_05620310();
              *(undefined8 *)(lVar12 + 0x60) = uVar14;
              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x60),uVar14);
              if (lVar11 != 0) {
                FUN_04a78624(lVar11,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
                lVar12 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                puVar3 = PTR_DAT_079fbc70;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar4;
                    thunk_FUN_036b7ad0(plVar5,lVar4);
                  }
                  else {
                    FUN_0459f03c();
                  }
                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                              Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                            );
                  FUN_06ea5298(lVar4,0);
                  if (lVar4 != 0) {
                    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)OVRHaptics_TypeInfo;
                    thunk_FUN_036b7ad0();
                    uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                    FUN_0414c60c();
                    *(undefined8 *)(lVar4 + 0x48) = uVar14;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x48),uVar14);
                    lVar11 = *(long *)(lVar4 + 0x50);
                    lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                 UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                               );
                    FUN_06ea66f4(lVar12,0);
                    puVar2 = OVRGLTFLoader_TypeInfo;
                    if (lVar12 != 0) {
                      *(undefined8 *)(lVar12 + 0x30) =
                           *(undefined8 *)Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar2;
                      thunk_FUN_036b7ad0();
                      uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                      FUN_0414c60c();
                      *(undefined8 *)(lVar12 + 0x50) = uVar14;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
                      uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                      System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                ();
                      *(undefined8 *)(lVar12 + 0x58) = uVar14;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
                      if (lVar11 != 0) {
                        FUN_04a78624(lVar11,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
                        lVar11 = *(long *)(lVar4 + 0x50);
                        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                        FUN_06ea66f4(lVar12,0);
                        if (lVar12 != 0) {
                          *(undefined8 *)(lVar12 + 0x30) =
                               *(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                          thunk_FUN_036b7ad0();
                          puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                          FUN_0414c60c();
                          *(undefined8 *)(lVar12 + 0x50) = uVar14;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
                          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                    ();
                          *(undefined8 *)(lVar12 + 0x58) = uVar14;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
                          puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                          if (lVar11 != 0) {
                            FUN_04a78624(lVar11,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
                            puVar3 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
                            lVar11 = *(long *)(lVar4 + 0x50);
                            lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                            FUN_06ea66f4(lVar12,0);
                            puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                            if (lVar12 != 0) {
                              *(undefined8 *)(lVar12 + 0x30) =
                                   *(undefined8 *)OVRNodeStateProperties_TypeInfo;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar2;
                              thunk_FUN_036b7ad0();
                              lVar6 = *unaff_x29;
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_036a1978();
                                lVar6 = *unaff_x29;
                              }
                              puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                              lVar13 = puVar9[0xe];
                              if (lVar13 == 0) {
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                }
                                uVar14 = *puVar9;
                                lVar13 = thunk_FUN_0367fe20(*puVar8);
                                FUN_0414c60c(lVar13,uVar14,
                                             *(undefined8 *)Zenject_NullBindingFinalizer_TypeInfo,0)
                                ;
                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x70);
                                *plVar5 = lVar13;
                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                              }
                              *(long *)(lVar12 + 0x50) = lVar13;
                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar13);
                              lVar6 = *unaff_x29;
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_036a1978();
                                lVar6 = *unaff_x29;
                              }
                              puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                              lVar13 = puVar9[0xf];
                              if (lVar13 == 0) {
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                }
                                uVar14 = *puVar9;
                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                          (lVar13,uVar14,
                                           *(undefined8 *)
                                            System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo
                                           ,0);
                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x78);
                                *plVar5 = lVar13;
                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                              }
                              *(long *)(lVar12 + 0x58) = lVar13;
                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar13);
                              if (lVar11 != 0) {
                                FUN_04a78624(lVar11,lVar12,*puVar10);
                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                          
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                FUN_06ea5298(lVar12,0);
                                lVar11 = *unaff_x29;
                                if (*(int *)(lVar11 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  lVar11 = *unaff_x29;
                                }
                                puVar10 = *(undefined8 **)(lVar11 + 0xb8);
                                lVar6 = puVar10[0x10];
                                if (lVar6 == 0) {
                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                    thunk_FUN_036a1978();
                                    puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                  }
                                  uVar14 = *puVar10;
                                  lVar6 = thunk_FUN_0367fe20(*puVar8);
                                  FUN_0414c60c(lVar6,uVar14,
                                               *(undefined8 *)System_NullConsoleDriver_TypeInfo,0);
                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x80);
                                  *plVar5 = lVar6;
                                  thunk_FUN_036b7ad0(plVar5,lVar6);
                                }
                                if (lVar12 != 0) {
                                  *(long *)(lVar12 + 0x48) = lVar6;
                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x48),lVar6);
                                  lVar6 = *(long *)(lVar12 + 0x50);
                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                              
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                  ;
                                  FUN_06ea680c(lVar11,0);
                                  puVar2 = OVRLocatable_TypeInfo;
                                  if (lVar11 != 0) {
                                    *(undefined8 *)(lVar11 + 0x30) =
                                         *(undefined8 *)OVRRaycaster_TypeInfo;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)puVar2;
                                    thunk_FUN_036b7ad0();
                                    lVar13 = *unaff_x29;
                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar13 = *unaff_x29;
                                    }
                                    puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                    lVar15 = puVar10[0x11];
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar14 = *puVar10;
                                      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                      FUN_0414cefc(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    UnityThreading_NullDispatcher_TypeInfo,0);
                                      plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x88);
                                      *plVar5 = lVar15;
                                      thunk_FUN_036b7ad0(plVar5,lVar15);
                                      puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                                    }
                                    *(long *)(lVar11 + 0x50) = lVar15;
                                    thunk_FUN_036b7ad0((long *)(lVar11 + 0x50),lVar15);
                                    lVar13 = *unaff_x29;
                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar13 = *unaff_x29;
                                    }
                                    puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                    lVar15 = puVar10[0x12];
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar14 = *puVar10;
                                      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
                                      FUN_055487a4(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    System_NullReferenceException_TypeInfo,0);
                                      plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x90);
                                      *plVar5 = lVar15;
                                      thunk_FUN_036b7ad0(plVar5,lVar15);
                                      puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                                    }
                                    *(long *)(lVar11 + 0x58) = lVar15;
                                    thunk_FUN_036b7ad0((long *)(lVar11 + 0x58),lVar15);
                                    lVar13 = *unaff_x29;
                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar13 = *unaff_x29;
                                    }
                                    puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                    lVar15 = puVar10[0x13];
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar14 = *puVar10;
                                      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                      FUN_0414cefc(lVar15,uVar14,
                                                   *(undefined8 *)
                                                                                                        
                                                  Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x98);
                                      *plVar5 = lVar15;
                                      thunk_FUN_036b7ad0(plVar5,lVar15);
                                      puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                                    }
                                    *(long *)(lVar11 + 0x68) = lVar15;
                                    thunk_FUN_036b7ad0((long *)(lVar11 + 0x68),lVar15);
                                    lVar13 = *unaff_x29;
                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar13 = *unaff_x29;
                                    }
                                    puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                    lVar15 = puVar10[0x14];
                                    if (lVar15 == 0) {
                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar14 = *puVar10;
                                      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                      FUN_0414cefc(lVar15,uVar14,
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xa0);
                                      *plVar5 = lVar15;
                                      thunk_FUN_036b7ad0(plVar5,lVar15);
                                      puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                                    }
                                    *(long *)(lVar11 + 0x70) = lVar15;
                                    thunk_FUN_036b7ad0((long *)(lVar11 + 0x70),lVar15);
                                    puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    if (lVar6 != 0) {
                                      FUN_04a78624(lVar6,lVar11,*(undefined8 *)PTR_DAT_07a029b0);
                                      puVar2 = PTR_DAT_079f4540;
                                      if (*(long *)(lVar4 + 0x50) != 0) {
                                        FUN_04a78624(*(long *)(lVar4 + 0x50),lVar12,*puVar10);
                                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                          thunk_FUN_036a1978();
                                        }
                                        uVar7 = FUN_0717a688(0);
                                        if ((uVar7 & 1) != 0) {
                                          lVar11 = *(long *)(lVar4 + 0x50);
                                          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                          FUN_06ea66f4(lVar12,0);
                                          if (lVar12 == 0) goto LAB_06eb5ee8;
                                          *(undefined8 *)(lVar12 + 0x30) =
                                               *(undefined8 *)
                                                UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                          ;
                                          thunk_FUN_036b7ad0();
                                          uVar14 = thunk_FUN_0367fe20(*puVar8);
                                          FUN_0414c60c();
                                          *(undefined8 *)(lVar12 + 0x50) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
                                          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_079f5aa0);
                                          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                    ();
                                          *(undefined8 *)(lVar12 + 0x58) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
                                          if (lVar11 == 0) goto LAB_06eb5ee8;
                                          FUN_04a78624(lVar11,lVar12,*puVar10);
                                          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                          FUN_06ea5298(lVar12,0);
                                          uVar14 = thunk_FUN_0367fe20(*puVar8);
                                          FUN_0414c60c();
                                          if (lVar12 == 0) goto LAB_06eb5ee8;
                                          *(undefined8 *)(lVar12 + 0x48) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x48),uVar14);
                                          lVar6 = *(long *)(lVar12 + 0x50);
                                          lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_07a029d8);
                                          FUN_06e958f8(lVar11,0);
                                          if (lVar11 == 0) goto LAB_06eb5ee8;
                                          *(undefined8 *)(lVar11 + 0x30) =
                                               *(undefined8 *)OVRDisplay_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          lVar13 = *unaff_x29;
                                          if (*(int *)(lVar13 + 0xe4) == 0) {
                                            thunk_FUN_036a1978();
                                            lVar13 = *unaff_x29;
                                          }
                                          puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                          lVar15 = puVar10[0x15];
                                          if (lVar15 == 0) {
                                            if (*(int *)(lVar13 + 0xe4) == 0) {
                                              thunk_FUN_036a1978();
                                              puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                            }
                                            uVar14 = *puVar10;
                                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                         PTR_DAT_079fd998);
                                            FUN_0414d3cc(lVar15,uVar14,
                                                         *(undefined8 *)System_Number_TypeInfo,0);
                                            plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xa8);
                                            *plVar5 = lVar15;
                                            thunk_FUN_036b7ad0(plVar5,lVar15);
                                            puVar8 = (undefined8 *)PTR_DAT_079fbc70;
                                          }
                                          *(long *)(lVar11 + 0x50) = lVar15;
                                          thunk_FUN_036b7ad0((long *)(lVar11 + 0x50),lVar15);
                                          puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                          if (lVar6 == 0) goto LAB_06eb5ee8;
                                          FUN_04a78624(lVar6,lVar11,*(undefined8 *)PTR_DAT_07a029b0)
                                          ;
                                          if (*(long *)(lVar4 + 0x50) == 0) goto LAB_06eb5ee8;
                                          FUN_04a78624(*(long *)(lVar4 + 0x50),lVar12,*puVar10);
                                          lVar11 = *(long *)(lVar4 + 0x50);
                                          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                          FUN_06ea66f4(lVar12,0);
                                          if (lVar12 == 0) goto LAB_06eb5ee8;
                                          *(undefined8 *)(lVar12 + 0x30) =
                                               *(undefined8 *)OVRHapticsClip_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          uVar14 = thunk_FUN_0367fe20(*puVar8);
                                          FUN_0414c60c();
                                          *(undefined8 *)(lVar12 + 0x50) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
                                          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_079f5aa0);
                                          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                    ();
                                          *(undefined8 *)(lVar12 + 0x58) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
                                          if (lVar11 == 0) goto LAB_06eb5ee8;
                                          FUN_04a78624(lVar11,lVar12,*puVar10);
                                          lVar11 = *(long *)(lVar4 + 0x50);
                                          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                          FUN_06ea66f4(lVar12,0);
                                          if (lVar12 == 0) goto LAB_06eb5ee8;
                                          *(undefined8 *)(lVar12 + 0x30) =
                                               *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          uVar14 = thunk_FUN_0367fe20(*puVar8);
                                          FUN_0414c60c();
                                          *(undefined8 *)(lVar12 + 0x50) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar14);
                                          uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_079f5aa0);
                                          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                    ();
                                          *(undefined8 *)(lVar12 + 0x58) = uVar14;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar14);
                                          if (lVar11 == 0) goto LAB_06eb5ee8;
                                          FUN_04a78624(lVar11,lVar12,*puVar10);
                                        }
                                        lVar12 = *(long *)(unaff_x20 + 0x10);
                                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar4;
                                            thunk_FUN_036b7ad0(plVar5,lVar4);
                                          }
                                          else {
                                            FUN_0459f03c();
                                          }
                                          puVar3 = PTR_DAT_079f4e28;
                                          if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                            if (*(long *)(unaff_x19 + 0x148) == 0)
                                            goto LAB_06eb5ee8;
                                            uVar14 = FUN_06ed5230(*(long *)(unaff_x19 + 0x148),0);
                                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                              thunk_FUN_036a1978(*(long *)puVar3);
                                            }
                                            uVar7 = FUN_071c0684(uVar14,0,0);
                                            if ((uVar7 & 1) != 0) {
                                              lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                    
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                              FUN_06ea5298(lVar4,0);
                                              if (lVar4 == 0) goto LAB_06eb5ee8;
                                              *(undefined8 *)(lVar4 + 0x30) =
                                                   *(undefined8 *)OVRColocationSession_TypeInfo;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x30));
                                              lVar11 = *(long *)(lVar4 + 0x50);
                                              lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                      
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                              ;
                                              FUN_06ea680c(lVar12,0);
                                              if (lVar12 == 0) goto LAB_06eb5ee8;
                                              *(undefined8 *)(lVar12 + 0x30) =
                                                   *(undefined8 *)OVRGLTFType_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x16];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a00dd0);
                                                FUN_0414cefc(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Globalization_NumberFormatInfo_TypeInfo,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xb0);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x50) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x17];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_079f5048);
                                                FUN_055487a4(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xb8);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x58) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x18];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a00dd0);
                                                FUN_0414cefc(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xc0);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x68) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar13);
                                              if (lVar11 == 0) goto LAB_06eb5ee8;
                                              FUN_04a78624(lVar11,lVar12,*puVar10);
                                              lVar11 = *(long *)(lVar4 + 0x50);
                                              lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                      
                                                  System_Net_NclUtilities_TypeInfo);
                                              FUN_06ea6978(lVar12,0);
                                              if (lVar12 == 0) goto LAB_06eb5ee8;
                                              *(undefined8 *)(lVar12 + 0x30) =
                                                   *(undefined8 *)OVRHandSkeletonVersion_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x19];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0
                                                  );
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 200
                                                                 );
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x50) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1a];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_079f5040);
                                                FUN_0554c13c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xd0);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x58) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1b];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_NumericFieldDraggerUtility_TypeInfo,0)
                                                ;
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xd8);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x68) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1c];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xe0);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x70) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x70),lVar13);
                                              if (lVar11 == 0) goto LAB_06eb5ee8;
                                              FUN_04a78624(lVar11,lVar12,*puVar10);
                                              lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                      
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                              FUN_06e99510(lVar12,0);
                                              if (lVar12 == 0) goto LAB_06eb5ee8;
                                              *(undefined8 *)(lVar12 + 0x30) =
                                                   *(undefined8 *)OVRPose_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar12 + 0x38) =
                                                   *(undefined8 *)
                                                    UnityEngine_EventSystems_OVRInputModule_TypeInfo
                                              ;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar12 + 0x68) =
                                                   *(undefined8 *)(unaff_x19 + 0x1e8);
                                              thunk_FUN_036b7ad0();
                                              FUN_058206a4(lVar12,*(undefined8 *)(unaff_x19 + 0x1f0)
                                                           ,*(undefined8 *)
                                                             Newtonsoft_Json_JsonWriter_TypeInfo);
                                              puVar2 = PTR_DAT_07a00dd0;
                                              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                           PTR_DAT_07a00dd0);
                                              FUN_0414cefc();
                                              *(undefined8 *)(lVar12 + 0x88) = uVar14;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x88),
                                                                 uVar14);
                                              puVar3 = PTR_DAT_079f5048;
                                              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                           PTR_DAT_079f5048);
                                              FUN_055487a4();
                                              *(undefined8 *)(lVar12 + 0x90) = uVar14;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x90),
                                                                 uVar14);
                                              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                              FUN_0414cefc();
                                              *(undefined8 *)(lVar12 + 0x50) = uVar14;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),
                                                                 uVar14);
                                              uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                              FUN_055487a4();
                                              *(undefined8 *)(lVar12 + 0x58) = uVar14;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),
                                                                 uVar14);
                                              *(long *)(unaff_x19 + 0x208) = lVar12;
                                              thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x208),
                                                                 lVar12);
                                              if (*(long *)(lVar4 + 0x50) == 0) goto LAB_06eb5ee8;
                                              FUN_04a78624(*(long *)(lVar4 + 0x50),
                                                           *(undefined8 *)(unaff_x19 + 0x208),
                                                           *puVar10);
                                              lVar11 = *(long *)(lVar4 + 0x50);
                                              lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                      
                                                  System_Net_NclUtilities_TypeInfo);
                                              FUN_06ea6978(lVar12,0);
                                              if (lVar12 == 0) goto LAB_06eb5ee8;
                                              *(undefined8 *)(lVar12 + 0x30) =
                                                   *(undefined8 *)OVRFaceExpressions_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar12 + 0x38) =
                                                   *(undefined8 *)OVRControllerTest_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1d];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xe8);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x50) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1e];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_079f5040);
                                                FUN_0554c13c(lVar13,uVar14,
                                                             *(undefined8 *)OVRAnchor_TypeInfo,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xf0);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x58) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x1f];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)
                                                              OVRAnchorContainer_TypeInfo,0);
                                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                 0xf8);
                                                *plVar5 = lVar13;
                                                thunk_FUN_036b7ad0(plVar5,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x68) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar13);
                                              lVar6 = *unaff_x29;
                                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar6 = *unaff_x29;
                                              }
                                              puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                                              lVar13 = puVar8[0x20];
                                              if (lVar13 == 0) {
                                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                }
                                                uVar14 = *puVar8;
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                             PTR_DAT_07a20ff8);
                                                FUN_0414d94c(lVar13,uVar14,
                                                             *(undefined8 *)OVRBone_TypeInfo,0);
                                                lVar6 = *(long *)(*unaff_x29 + 0xb8);
                                                *(long *)(lVar6 + 0x100) = lVar13;
                                                thunk_FUN_036b7ad0(lVar6 + 0x100,lVar13);
                                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                              }
                                              *(long *)(lVar12 + 0x70) = lVar13;
                                              thunk_FUN_036b7ad0((long *)(lVar12 + 0x70),lVar13);
                                              if (lVar11 == 0) goto LAB_06eb5ee8;
                                              FUN_04a78624(lVar11,lVar12,*puVar10);
                                              lVar12 = *(long *)(in_stack_00000000 + 0x10);
                                              lVar11 = *unaff_x28;
                                              *(int *)(in_stack_00000000 + 0x1c) =
                                                   *(int *)(in_stack_00000000 + 0x1c) + 1;
                                              if (lVar12 == 0) goto LAB_06eb5ee8;
                                              uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                              unaff_x20 = in_stack_00000000;
                                              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                plVar5 = (long *)(lVar12 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar4;
                                                thunk_FUN_036b7ad0(plVar5,lVar4);
                                              }
                                              else {
                                                FUN_0459f03c(in_stack_00000000,lVar4,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                            }
                                          }
                                          puVar2 = 
                                          UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                                          ;
                                          puVar3 = Newtonsoft_Json_JsonValidatingReader_TypeInfo;
                                          if (0 < *(int *)(unaff_x20 + 0x18)) {
                                            uVar14 = FUN_045a0b8c(unaff_x20,
                                                                  *(undefined8 *)
                                                                                                                                      
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                            *(undefined8 *)(unaff_x19 + 0x198) = uVar14;
                                            thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar14);
                                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                              thunk_FUN_036a1978();
                                            }
                                            lVar4 = FUN_06e96d28(0);
                                            lVar12 = *(long *)puVar2;
                                            if (*(int *)(lVar12 + 0xe4) == 0) {
                                              thunk_FUN_036a1978(lVar12);
                                            }
                                            if (((lVar4 == 0) ||
                                                (lVar4 = FUN_06e96e60(lVar4,*(undefined8 *)
                                                                             (*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x10),1,0,0,0), lVar4 == 0)) ||
                                               (*(long *)(lVar4 + 0x28) == 0)) goto LAB_06eb5ee8;
                                            FUN_04a7870c(*(long *)(lVar4 + 0x28),
                                                         *(undefined8 *)(unaff_x19 + 0x198),
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeyword_TypeInfo);
                                          }
                                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                            thunk_FUN_036a1978();
                                          }
                                          lVar4 = FUN_06e96d28(0);
                                          if (lVar4 != 0) {
                                            FUN_06e96db4(lVar4,*(undefined8 *)(unaff_x19 + 0x180),0)
                                            ;
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
LAB_06eb5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


