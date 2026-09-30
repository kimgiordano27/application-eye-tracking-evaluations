/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$SupportedCameraStackingTypes
ENTRY_POINT: 06eb47b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3;functionality_possible_biometrics_hits_1
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__SupportedCameraStackingTypes(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  
  lVar12 = *(long *)(unaff_x21 + 0x50);
  lVar4 = thunk_FUN_0367fe20(*unaff_x27);
  FUN_06ea66f4(lVar4,0);
  puVar3 = OVRBounded3D_TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)OVRManager_TypeInfo;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)puVar3;
    thunk_FUN_036b7ad0();
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
    FUN_0414c60c();
    *(undefined8 *)(lVar4 + 0x50) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x50),uVar5);
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
    System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
              ();
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x58),uVar5);
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
    FUN_05620310();
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x60),uVar5);
    if (lVar12 != 0) {
      FUN_04a78624(lVar12,lVar4,*(undefined8 *)PTR_DAT_07a029b0);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      puVar3 = PTR_DAT_079fbc70;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c();
        }
        lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                    Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
        FUN_06ea5298(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)OVRHaptics_TypeInfo;
          thunk_FUN_036b7ad0();
          uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
          FUN_0414c60c();
          *(undefined8 *)(lVar4 + 0x48) = uVar5;
          thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x48),uVar5);
          lVar13 = *(long *)(lVar4 + 0x50);
          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                       UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
          FUN_06ea66f4(lVar12,0);
          puVar2 = OVRGLTFLoader_TypeInfo;
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x30) =
                 *(undefined8 *)Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo;
            thunk_FUN_036b7ad0();
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar2;
            thunk_FUN_036b7ad0();
            uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
            FUN_0414c60c();
            *(undefined8 *)(lVar12 + 0x50) = uVar5;
            thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
            uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
            System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                      ();
            *(undefined8 *)(lVar12 + 0x58) = uVar5;
            thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
            if (lVar13 != 0) {
              FUN_04a78624(lVar13,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
              lVar13 = *(long *)(lVar4 + 0x50);
              lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                           UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
              FUN_06ea66f4(lVar12,0);
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x30) =
                     *(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                thunk_FUN_036b7ad0();
                puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                FUN_0414c60c();
                *(undefined8 *)(lVar12 + 0x50) = uVar5;
                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                          ();
                *(undefined8 *)(lVar12 + 0x58) = uVar5;
                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                if (lVar13 != 0) {
                  FUN_04a78624(lVar13,lVar12,*(undefined8 *)PTR_DAT_07a029b0);
                  puVar3 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
                  lVar13 = *(long *)(lVar4 + 0x50);
                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                               UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                             );
                  FUN_06ea66f4(lVar12,0);
                  puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                  if (lVar12 != 0) {
                    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)OVRNodeStateProperties_TypeInfo;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)puVar2;
                    thunk_FUN_036b7ad0();
                    lVar6 = *unaff_x29;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      lVar6 = *unaff_x29;
                    }
                    puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                    lVar14 = puVar9[0xe];
                    if (lVar14 == 0) {
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_036a1978();
                        puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                      }
                      uVar5 = *puVar9;
                      lVar14 = thunk_FUN_0367fe20(*puVar11);
                      FUN_0414c60c(lVar14,uVar5,*(undefined8 *)Zenject_NullBindingFinalizer_TypeInfo
                                   ,0);
                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x70);
                      *plVar7 = lVar14;
                      thunk_FUN_036b7ad0(plVar7,lVar14);
                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                    }
                    *(long *)(lVar12 + 0x50) = lVar14;
                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar14);
                    lVar6 = *unaff_x29;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      lVar6 = *unaff_x29;
                    }
                    puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                    lVar14 = puVar9[0xf];
                    if (lVar14 == 0) {
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_036a1978();
                        puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                      }
                      uVar5 = *puVar9;
                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                      System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                (lVar14,uVar5,
                                 *(undefined8 *)
                                  System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo,
                                 0);
                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x78);
                      *plVar7 = lVar14;
                      thunk_FUN_036b7ad0(plVar7,lVar14);
                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                    }
                    *(long *)(lVar12 + 0x58) = lVar14;
                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar14);
                    if (lVar13 != 0) {
                      FUN_04a78624(lVar13,lVar12,*puVar10);
                      lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                      
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                 );
                      FUN_06ea5298(lVar12,0);
                      lVar13 = *unaff_x29;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_036a1978();
                        lVar13 = *unaff_x29;
                      }
                      puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                      lVar6 = puVar10[0x10];
                      if (lVar6 == 0) {
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_036a1978();
                          puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                        }
                        uVar5 = *puVar10;
                        lVar6 = thunk_FUN_0367fe20(*puVar11);
                        FUN_0414c60c(lVar6,uVar5,*(undefined8 *)System_NullConsoleDriver_TypeInfo,0)
                        ;
                        plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x80);
                        *plVar7 = lVar6;
                        thunk_FUN_036b7ad0(plVar7,lVar6);
                      }
                      if (lVar12 != 0) {
                        *(long *)(lVar12 + 0x48) = lVar6;
                        thunk_FUN_036b7ad0((long *)(lVar12 + 0x48),lVar6);
                        lVar6 = *(long *)(lVar12 + 0x50);
                        lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                        ;
                        FUN_06ea680c(lVar13,0);
                        puVar2 = OVRLocatable_TypeInfo;
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)OVRRaycaster_TypeInfo;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)puVar2;
                          thunk_FUN_036b7ad0();
                          lVar14 = *unaff_x29;
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_036a1978();
                            lVar14 = *unaff_x29;
                          }
                          puVar10 = *(undefined8 **)(lVar14 + 0xb8);
                          lVar15 = puVar10[0x11];
                          if (lVar15 == 0) {
                            if (*(int *)(lVar14 + 0xe4) == 0) {
                              thunk_FUN_036a1978();
                              puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                            }
                            uVar5 = *puVar10;
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                            FUN_0414cefc(lVar15,uVar5,
                                         *(undefined8 *)UnityThreading_NullDispatcher_TypeInfo,0);
                            plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x88);
                            *plVar7 = lVar15;
                            thunk_FUN_036b7ad0(plVar7,lVar15);
                            puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                          }
                          *(long *)(lVar13 + 0x50) = lVar15;
                          thunk_FUN_036b7ad0((long *)(lVar13 + 0x50),lVar15);
                          lVar14 = *unaff_x29;
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_036a1978();
                            lVar14 = *unaff_x29;
                          }
                          puVar10 = *(undefined8 **)(lVar14 + 0xb8);
                          lVar15 = puVar10[0x12];
                          if (lVar15 == 0) {
                            if (*(int *)(lVar14 + 0xe4) == 0) {
                              thunk_FUN_036a1978();
                              puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                            }
                            uVar5 = *puVar10;
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
                            FUN_055487a4(lVar15,uVar5,
                                         *(undefined8 *)System_NullReferenceException_TypeInfo,0);
                            plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x90);
                            *plVar7 = lVar15;
                            thunk_FUN_036b7ad0(plVar7,lVar15);
                            puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                          }
                          *(long *)(lVar13 + 0x58) = lVar15;
                          thunk_FUN_036b7ad0((long *)(lVar13 + 0x58),lVar15);
                          lVar14 = *unaff_x29;
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_036a1978();
                            lVar14 = *unaff_x29;
                          }
                          puVar10 = *(undefined8 **)(lVar14 + 0xb8);
                          lVar15 = puVar10[0x13];
                          if (lVar15 == 0) {
                            if (*(int *)(lVar14 + 0xe4) == 0) {
                              thunk_FUN_036a1978();
                              puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                            }
                            uVar5 = *puVar10;
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                            FUN_0414cefc(lVar15,uVar5,
                                         *(undefined8 *)
                                          Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                         ,0);
                            plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x98);
                            *plVar7 = lVar15;
                            thunk_FUN_036b7ad0(plVar7,lVar15);
                            puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                          }
                          *(long *)(lVar13 + 0x68) = lVar15;
                          thunk_FUN_036b7ad0((long *)(lVar13 + 0x68),lVar15);
                          lVar14 = *unaff_x29;
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_036a1978();
                            lVar14 = *unaff_x29;
                          }
                          puVar10 = *(undefined8 **)(lVar14 + 0xb8);
                          lVar15 = puVar10[0x14];
                          if (lVar15 == 0) {
                            if (*(int *)(lVar14 + 0xe4) == 0) {
                              thunk_FUN_036a1978();
                              puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                            }
                            uVar5 = *puVar10;
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                            FUN_0414cefc(lVar15,uVar5,
                                         *(undefined8 *)
                                          System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                         ,0);
                            plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xa0);
                            *plVar7 = lVar15;
                            thunk_FUN_036b7ad0(plVar7,lVar15);
                            puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                          }
                          *(long *)(lVar13 + 0x70) = lVar15;
                          thunk_FUN_036b7ad0((long *)(lVar13 + 0x70),lVar15);
                          puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                          if (lVar6 != 0) {
                            FUN_04a78624(lVar6,lVar13,*(undefined8 *)PTR_DAT_07a029b0);
                            puVar2 = PTR_DAT_079f4540;
                            if (*(long *)(lVar4 + 0x50) != 0) {
                              FUN_04a78624(*(long *)(lVar4 + 0x50),lVar12,*puVar10);
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_036a1978();
                              }
                              uVar8 = FUN_0717a688(0);
                              if ((uVar8 & 1) != 0) {
                                lVar13 = *(long *)(lVar4 + 0x50);
                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06ea66f4(lVar12,0);
                                if (lVar12 == 0) goto LAB_06eb5ee8;
                                *(undefined8 *)(lVar12 + 0x30) =
                                     *(undefined8 *)
                                      UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
                                thunk_FUN_036b7ad0();
                                uVar5 = thunk_FUN_0367fe20(*puVar11);
                                FUN_0414c60c();
                                *(undefined8 *)(lVar12 + 0x50) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
                                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                          ();
                                *(undefined8 *)(lVar12 + 0x58) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
                                if (lVar13 == 0) goto LAB_06eb5ee8;
                                FUN_04a78624(lVar13,lVar12,*puVar10);
                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                          
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                FUN_06ea5298(lVar12,0);
                                uVar5 = thunk_FUN_0367fe20(*puVar11);
                                FUN_0414c60c();
                                if (lVar12 == 0) goto LAB_06eb5ee8;
                                *(undefined8 *)(lVar12 + 0x48) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x48),uVar5);
                                lVar6 = *(long *)(lVar12 + 0x50);
                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a029d8);
                                FUN_06e958f8(lVar13,0);
                                if (lVar13 == 0) goto LAB_06eb5ee8;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)OVRDisplay_TypeInfo;
                                thunk_FUN_036b7ad0();
                                lVar14 = *unaff_x29;
                                if (*(int *)(lVar14 + 0xe4) == 0) {
                                  thunk_FUN_036a1978();
                                  lVar14 = *unaff_x29;
                                }
                                puVar10 = *(undefined8 **)(lVar14 + 0xb8);
                                lVar15 = puVar10[0x15];
                                if (lVar15 == 0) {
                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                    thunk_FUN_036a1978();
                                    puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                  }
                                  uVar5 = *puVar10;
                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fd998);
                                  FUN_0414d3cc(lVar15,uVar5,*(undefined8 *)System_Number_TypeInfo,0)
                                  ;
                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xa8);
                                  *plVar7 = lVar15;
                                  thunk_FUN_036b7ad0(plVar7,lVar15);
                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                }
                                *(long *)(lVar13 + 0x50) = lVar15;
                                thunk_FUN_036b7ad0((long *)(lVar13 + 0x50),lVar15);
                                puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                if (lVar6 == 0) goto LAB_06eb5ee8;
                                FUN_04a78624(lVar6,lVar13,*(undefined8 *)PTR_DAT_07a029b0);
                                if (*(long *)(lVar4 + 0x50) == 0) goto LAB_06eb5ee8;
                                FUN_04a78624(*(long *)(lVar4 + 0x50),lVar12,*puVar10);
                                lVar13 = *(long *)(lVar4 + 0x50);
                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06ea66f4(lVar12,0);
                                if (lVar12 == 0) goto LAB_06eb5ee8;
                                *(undefined8 *)(lVar12 + 0x30) =
                                     *(undefined8 *)OVRHapticsClip_TypeInfo;
                                thunk_FUN_036b7ad0();
                                uVar5 = thunk_FUN_0367fe20(*puVar11);
                                FUN_0414c60c();
                                *(undefined8 *)(lVar12 + 0x50) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
                                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                          ();
                                *(undefined8 *)(lVar12 + 0x58) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
                                if (lVar13 == 0) goto LAB_06eb5ee8;
                                FUN_04a78624(lVar13,lVar12,*puVar10);
                                lVar13 = *(long *)(lVar4 + 0x50);
                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06ea66f4(lVar12,0);
                                if (lVar12 == 0) goto LAB_06eb5ee8;
                                *(undefined8 *)(lVar12 + 0x30) =
                                     *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                thunk_FUN_036b7ad0();
                                uVar5 = thunk_FUN_0367fe20(*puVar11);
                                FUN_0414c60c();
                                *(undefined8 *)(lVar12 + 0x50) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
                                uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                                System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                          ();
                                *(undefined8 *)(lVar12 + 0x58) = uVar5;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
                                if (lVar13 == 0) goto LAB_06eb5ee8;
                                FUN_04a78624(lVar13,lVar12,*puVar10);
                              }
                              lVar12 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  plVar7 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar7 = lVar4;
                                  thunk_FUN_036b7ad0(plVar7,lVar4);
                                }
                                else {
                                  FUN_0459f03c();
                                }
                                puVar3 = PTR_DAT_079f4e28;
                                if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                  if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_06eb5ee8;
                                  uVar5 = FUN_06ed5230(*(long *)(unaff_x19 + 0x148),0);
                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                    thunk_FUN_036a1978(*(long *)puVar3);
                                  }
                                  uVar8 = FUN_071c0684(uVar5,0,0);
                                  if ((uVar8 & 1) != 0) {
                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                    FUN_06ea5298(lVar4,0);
                                    if (lVar4 == 0) goto LAB_06eb5ee8;
                                    *(undefined8 *)(lVar4 + 0x30) =
                                         *(undefined8 *)OVRColocationSession_TypeInfo;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x30));
                                    lVar13 = *(long *)(lVar4 + 0x50);
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
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x16];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                      FUN_0414cefc(lVar14,uVar5,
                                                   *(undefined8 *)
                                                    System_Globalization_NumberFormatInfo_TypeInfo,0
                                                  );
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xb0);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x50) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x17];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
                                      FUN_055487a4(lVar14,uVar5,
                                                   *(undefined8 *)
                                                    MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0
                                                  );
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xb8);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x58) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x18];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                      FUN_0414cefc(lVar14,uVar5,
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xc0);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x68) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar14);
                                    if (lVar13 == 0) goto LAB_06eb5ee8;
                                    FUN_04a78624(lVar13,lVar12,*puVar10);
                                    lVar13 = *(long *)(lVar4 + 0x50);
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
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x19];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,
                                                   *(undefined8 *)
                                                    System_Xml_Schema_Numeric2FacetsChecker_TypeInfo
                                                   ,0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 200);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x50) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1a];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
                                      FUN_0554c13c(lVar14,uVar5,
                                                   *(undefined8 *)
                                                    MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xd0);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x58) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1b];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,
                                                   *(undefined8 *)
                                                    UnityEngine_NumericFieldDraggerUtility_TypeInfo,
                                                   0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xd8);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x68) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1c];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xe0);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x70) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x70),lVar14);
                                    if (lVar13 == 0) goto LAB_06eb5ee8;
                                    FUN_04a78624(lVar13,lVar12,*puVar10);
                                    lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                  
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                    FUN_06e99510(lVar12,0);
                                    if (lVar12 == 0) goto LAB_06eb5ee8;
                                    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)OVRPose_TypeInfo
                                    ;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar12 + 0x38) =
                                         *(undefined8 *)
                                          UnityEngine_EventSystems_OVRInputModule_TypeInfo;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar12 + 0x68) =
                                         *(undefined8 *)(unaff_x19 + 0x1e8);
                                    thunk_FUN_036b7ad0();
                                    FUN_058206a4(lVar12,*(undefined8 *)(unaff_x19 + 0x1f0),
                                                 *(undefined8 *)Newtonsoft_Json_JsonWriter_TypeInfo)
                                    ;
                                    puVar2 = PTR_DAT_07a00dd0;
                                    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00dd0);
                                    FUN_0414cefc();
                                    *(undefined8 *)(lVar12 + 0x88) = uVar5;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x88),uVar5);
                                    puVar3 = PTR_DAT_079f5048;
                                    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5048);
                                    FUN_055487a4();
                                    *(undefined8 *)(lVar12 + 0x90) = uVar5;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x90),uVar5);
                                    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                    FUN_0414cefc();
                                    *(undefined8 *)(lVar12 + 0x50) = uVar5;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x50),uVar5);
                                    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                    FUN_055487a4();
                                    *(undefined8 *)(lVar12 + 0x58) = uVar5;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x58),uVar5);
                                    *(long *)(unaff_x19 + 0x208) = lVar12;
                                    thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x208),lVar12);
                                    if (*(long *)(lVar4 + 0x50) == 0) goto LAB_06eb5ee8;
                                    FUN_04a78624(*(long *)(lVar4 + 0x50),
                                                 *(undefined8 *)(unaff_x19 + 0x208),*puVar10);
                                    lVar13 = *(long *)(lVar4 + 0x50);
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
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1d];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xe8);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x50) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x50),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1e];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
                                      FUN_0554c13c(lVar14,uVar5,*(undefined8 *)OVRAnchor_TypeInfo,0)
                                      ;
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xf0);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x58) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x58),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x1f];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,
                                                   *(undefined8 *)OVRAnchorContainer_TypeInfo,0);
                                      plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0xf8);
                                      *plVar7 = lVar14;
                                      thunk_FUN_036b7ad0(plVar7,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x68) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x68),lVar14);
                                    lVar6 = *unaff_x29;
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_036a1978();
                                      lVar6 = *unaff_x29;
                                    }
                                    puVar11 = *(undefined8 **)(lVar6 + 0xb8);
                                    lVar14 = puVar11[0x20];
                                    if (lVar14 == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar5 = *puVar11;
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(lVar14,uVar5,*(undefined8 *)OVRBone_TypeInfo,0);
                                      lVar6 = *(long *)(*unaff_x29 + 0xb8);
                                      *(long *)(lVar6 + 0x100) = lVar14;
                                      thunk_FUN_036b7ad0(lVar6 + 0x100,lVar14);
                                      puVar10 = (undefined8 *)PTR_DAT_07a029b0;
                                    }
                                    *(long *)(lVar12 + 0x70) = lVar14;
                                    thunk_FUN_036b7ad0((long *)(lVar12 + 0x70),lVar14);
                                    if (lVar13 == 0) goto LAB_06eb5ee8;
                                    FUN_04a78624(lVar13,lVar12,*puVar10);
                                    lVar12 = *(long *)(in_stack_00000000 + 0x10);
                                    lVar13 = *unaff_x28;
                                    *(int *)(in_stack_00000000 + 0x1c) =
                                         *(int *)(in_stack_00000000 + 0x1c) + 1;
                                    if (lVar12 == 0) goto LAB_06eb5ee8;
                                    uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                    unaff_x20 = in_stack_00000000;
                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                      plVar7 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar7 = lVar4;
                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                    }
                                    else {
                                      FUN_0459f03c(in_stack_00000000,lVar4,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  }
                                }
                                puVar2 = 
                                UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                                ;
                                puVar3 = Newtonsoft_Json_JsonValidatingReader_TypeInfo;
                                if (0 < *(int *)(unaff_x20 + 0x18)) {
                                  uVar5 = FUN_045a0b8c(unaff_x20,
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar5;
                                  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar5);
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
                                                                   (*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x10),1,0,0,0),
                                      lVar4 == 0)) || (*(long *)(lVar4 + 0x28) == 0))
                                  goto LAB_06eb5ee8;
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
                                  FUN_06e96db4(lVar4,*(undefined8 *)(unaff_x19 + 0x180),0);
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
LAB_06eb5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


