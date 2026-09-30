/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSessionOrigin$$get_contentOffsetTransform
ENTRY_POINT: 0243ee58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 304
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARFoundation_ARSessionOrigin__get_contentOffsetTransform(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *unaff_x26;
  undefined8 uVar19;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  puVar5 = System_Func<STMQuadData,_string>_TypeInfo;
  if (param_1 != 0) {
    FUN_0246ee30(param_1,0x96);
    *(long *)(unaff_x19 + 0x198) = param_1;
    uVar16 = *(undefined8 *)(unaff_x19 + 0x470);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x478);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (lVar13 != 0) {
      FUN_024740c4(lVar13,uVar16,uVar17,0);
      iVar15 = *(int *)(unaff_x19 + 0x410);
      *(long *)(unaff_x19 + 0x1a8) = lVar13;
      if (iVar15 == 0) {
        uVar16 = *(undefined8 *)(unaff_x19 + 0x448);
        lVar13 = thunk_FUN_00d62348(*unaff_x28);
        if (lVar13 == 0) goto LAB_0243f5d0;
        FUN_0246deac(lVar13,200,uVar16,0);
        iVar15 = *(int *)(unaff_x19 + 0x410);
        *(long *)(unaff_x19 + 0x1a0) = lVar13;
      }
      if (iVar15 == 1) {
        uVar17 = *(undefined8 *)(unaff_x19 + 0x458);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x460);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x468);
        uVar19 = *(undefined8 *)(unaff_x19 + 0x430);
        cVar4 = *(char *)(unaff_x19 + 0x185);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo);
        if (lVar13 == 0) goto LAB_0243f5d0;
        in_stack_000000d0 = uVar17;
        in_stack_000000d8 = uVar18;
        in_stack_000000e0 = uVar16;
        in_stack_000000e8 = uVar19;
        FUN_02457844(lVar13,&stack0x000000d0,cVar4 != '\0',0);
        *(long *)(unaff_x19 + 0x408) = lVar13;
        FUN_024575c4(lVar13,*(undefined1 *)(unaff_x20 + 0x80),0);
        if (*(long *)(unaff_x19 + 0x408) == 0) goto LAB_0243f5d0;
        *(undefined1 *)(*(long *)(unaff_x19 + 0x408) + 0x15) = 0;
        puVar5 = 
        Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_026b2fe4(0);
        uVar1 = *(undefined4 *)(unaff_x20 + 0x5c);
        uVar17 = *unaff_x21;
        uVar2 = *(undefined4 *)(unaff_x21 + 1);
        uVar3 = *(undefined4 *)(unaff_x29 + 0x14);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x408);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar13 == 0) goto LAB_0243f5d0;
        FUN_02471a80(lVar13,0xd2,uVar16,uVar1,uVar17,uVar2,uVar3,uVar18);
        *(long *)(unaff_x19 + 0x1c0) = lVar13;
        uVar16 = *unaff_x21;
        uVar1 = *(undefined4 *)(unaff_x21 + 1);
        if (*(int *)(*(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0245be48(uVar16,uVar1,0x60,0);
        lVar13 = FUN_00da4fb8(*(undefined8 *)
                               Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_HandleEnabled__
                              ,3);
        in_stack_00000030 = 0;
        FUN_026b1be4(&stack0x00000030,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_TryGetValue__
                     ,0);
        puVar5 = Oculus_Interaction_Input_SyntheticHand_<>c_TypeInfo;
        if (lVar13 == 0) goto LAB_0243f5d0;
        if (*(int *)(lVar13 + 0x18) == 0) {
LAB_0243f5d4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined4 *)(lVar13 + 0x20) = in_stack_00000030;
        in_stack_000000c8 = 0;
        FUN_026b1be4(&stack0x000000c8,*(undefined8 *)puVar5,0);
        puVar5 = PTR_DAT_033ed538;
        if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0243f5d4;
        *(undefined4 *)(lVar13 + 0x24) = in_stack_000000c8;
        in_stack_000000c0 = 0;
        FUN_026b1be4(&stack0x000000c0,*(undefined8 *)puVar5,0);
        if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0243f5d4;
        *(undefined4 *)(lVar13 + 0x28) = in_stack_000000c0;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x448);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2133);
        puVar5 = 
        Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_localPosition__;
        if (lVar14 == 0) goto LAB_0243f5d0;
        FUN_0246deac(lVar14,0xd3,uVar16,0);
        *(long *)(unaff_x19 + 0x1c8) = lVar14;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x408);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar14 == 0) goto LAB_0243f5d0;
        FUN_0247fd7c(lVar14,0xd4,uVar16,0,0);
        *(long *)(unaff_x19 + 0x1d0) = lVar14;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x408);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        puVar5 = DigitalOpus_MB_Core_MB3_TextureCombiner_CreateAtlasesCoroutineResult_TypeInfo;
        if (lVar14 == 0) goto LAB_0243f5d0;
        FUN_0247fd7c(lVar14,0xd5,uVar16,1,0);
        *(long *)(unaff_x19 + 0x1d8) = lVar14;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x408);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar14 == 0) goto LAB_0243f5d0;
        FUN_0246eb5c(lVar14,0xe6,uVar16,0);
        *(long *)(unaff_x19 + 0x1e0) = lVar14;
        uVar16 = FUN_026b2fe4(0);
        uVar1 = *(undefined4 *)(unaff_x20 + 0x5c);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)System_Collections_Generic_List<JToken>_TypeInfo)
        ;
        if (lVar14 == 0) goto LAB_0243f5d0;
        FUN_024702e4(lVar14,*(undefined8 *)Method_AutoExtensions_CanGetComponent<HoveringObject>__,
                     lVar13,1,0xfa,uVar16,uVar1);
        *(long *)(unaff_x19 + 0x1e8) = lVar14;
        unaff_x26 = (long *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
        ;
        unaff_x28 = (undefined8 *)StringLiteral_2133;
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_026b2fe4(0);
      uVar1 = *(undefined4 *)(unaff_x20 + 0x5c);
      uVar17 = *unaff_x21;
      uVar2 = *(undefined4 *)(unaff_x21 + 1);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)System_Collections_Generic_List<JToken>_TypeInfo);
      if (lVar13 != 0) {
        FUN_024706f8(lVar13,9,1,0xfa,uVar16,uVar1,uVar17,uVar2);
        *(long *)(unaff_x19 + 0x1f0) = lVar13;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x448);
        lVar13 = thunk_FUN_00d62348(*unaff_x28);
        puVar5 = Method_System_Collections_Generic_List<WitEntityKeywordInfo>_get_Count__;
        if (lVar13 != 0) {
          FUN_0246deac(lVar13,400,uVar16,0);
          *(long *)(unaff_x19 + 0x200) = lVar13;
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar5 = OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo;
          if (lVar13 != 0) {
            FUN_02431240(lVar13,0x15e);
            *(long *)(unaff_x19 + 0x1f8) = lVar13;
            uVar16 = *(undefined8 *)(unaff_x19 + 0x450);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x440);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar5 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStrCmpIntRes2<short>__;
            if (lVar13 != 0) {
              FUN_0246d328(lVar13,400,uVar16,uVar17,0);
              *(long *)(unaff_x19 + 0x208) = lVar13;
              cVar4 = *(char *)(unaff_x20 + 0x70);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              if (lVar13 != 0) {
                FUN_02431788(lVar13,0x1c2,cVar4 != '\0');
                *(long *)(unaff_x19 + 0x210) = lVar13;
                uVar16 = FUN_026b2fec(0);
                uVar1 = *(undefined4 *)(unaff_x20 + 0x60);
                uVar17 = *unaff_x21;
                uVar2 = *(undefined4 *)(unaff_x21 + 1);
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                             System_Collections_Generic_List<JToken>_TypeInfo);
                puVar5 = 
                Method_UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_OnCameraCleanup__
                ;
                if (lVar13 != 0) {
                  FUN_024706f8(lVar13,10,0,0x1c2,uVar16,uVar1,uVar17,uVar2);
                  *(long *)(unaff_x19 + 0x218) = lVar13;
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                  puVar5 = Method_MedleyHingedComboLock_CheckPuzzleComplete__;
                  if (lVar13 != 0) {
                    FUN_02431698(lVar13,0x226);
                    *(long *)(unaff_x19 + 0x220) = lVar13;
                    uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
                    uVar17 = *(undefined8 *)(unaff_x19 + 0x440);
                    memset(&stack0x00000030,0,0x90);
                    FUN_02431cf8(&stack0x00000030,uVar16,uVar17);
                    memcpy((void *)(unaff_x19 + 0x480),&stack0x00000030,0x90);
                    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
                    if (lVar13 != 0) {
                      FUN_02430c78(lVar13,1000);
                      *(long *)(unaff_x19 + 0x230) = lVar13;
                      uVar16 = *(undefined8 *)(unaff_x19 + 0x440);
                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabds_f32__;
                      if (lVar13 != 0) {
                        FUN_02470ed0(lVar13,0x3e9,uVar16,0);
                        *(long *)(unaff_x19 + 0x228) = lVar13;
                        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                        puVar12 = StringLiteral_6311;
                        puVar11 = StringLiteral_1130;
                        puVar10 = StringLiteral_672;
                        puVar9 = StringLiteral_127;
                        puVar8 = Method_Newtonsoft_Json_Linq_JToken_WriteToAsync__;
                        puVar7 = Method_System_Collections_Generic_List<RectTransform>__ctor__;
                        puVar6 = 
                        Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
                        puVar5 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                        ;
                        if (lVar13 != 0) {
                          FUN_024803cc(lVar13,*(undefined8 *)PTR_DAT_033f53e0,0);
                          *(long *)(unaff_x19 + 0x248) = lVar13;
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_02431dd4(unaff_x19 + 0x2e0,*(undefined8 *)puVar12);
                          FUN_02431dd4(unaff_x19 + 0x310,*(undefined8 *)puVar7);
                          FUN_02431dd4(unaff_x19 + 0x340,*(undefined8 *)puVar8);
                          FUN_02431dd4(unaff_x19 + 0x370,*(undefined8 *)puVar11);
                          FUN_02431dd4(unaff_x19 + 0x3a0,*(undefined8 *)puVar10);
                          FUN_02431dd4(unaff_x19 + 0x3d0,*(undefined8 *)puVar5);
                          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
                          if (lVar13 != 0) {
                            FUN_02423ad4(lVar13,0);
                            puVar5 = StringLiteral_5516;
                            if (*(int *)(*(long *)StringLiteral_5516 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            *(long *)(unaff_x19 + 0xe0) = lVar13;
                            if (*(int *)(unaff_x19 + 0x410) == 1) {
                              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar13 = *(long *)(unaff_x19 + 0xe0);
                              }
                              puVar5 = 
                              System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
                              if (lVar13 == 0) goto LAB_0243f5d0;
                              *(undefined1 *)(lVar13 + 0x11) = 0;
                              puVar6 = 
                              Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<TextArea>__
                              ;
                              uVar16 = FUN_00da4fb8(*(undefined8 *)puVar5,3);
                              FUN_016a34e8(uVar16,*(undefined8 *)puVar6,0);
                              *(undefined8 *)(unaff_x19 + 0xe8) = uVar16;
                            }
                            puVar5 = 
                            Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
                            lVar13 = *(long *)
                                      Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                            ;
                            if (*(int *)(lVar13 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar13 = *(long *)puVar5;
                            }
                            *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x1c) = DAT_028ab160;
                            TMPro_TMP_Dropdown__OnPointerClick(0);
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
LAB_0243f5d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


