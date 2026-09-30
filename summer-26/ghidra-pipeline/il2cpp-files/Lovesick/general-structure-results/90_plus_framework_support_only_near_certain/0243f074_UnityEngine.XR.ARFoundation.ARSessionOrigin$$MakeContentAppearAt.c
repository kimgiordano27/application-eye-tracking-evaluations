/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSessionOrigin$$MakeContentAppearAt
ENTRY_POINT: 0243f074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARFoundation_ARSessionOrigin__MakeContentAppearAt(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool in_ZR;
  bool in_CY;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  puVar4 = PTR_DAT_033ed538;
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_x23 + 0x24) = in_stack_000000c8;
    in_stack_000000c0 = 0;
    FUN_026b1be4(&stack0x000000c0,*(undefined8 *)puVar4,0);
    if (2 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined4 *)(unaff_x23 + 0x28) = in_stack_000000c0;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x448);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2133);
      puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_localPosition__;
      if (lVar12 != 0) {
        FUN_0246deac(lVar12,0xd3,uVar14,0);
        *(long *)(unaff_x19 + 0x1c8) = lVar12;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x408);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar12 != 0) {
          FUN_0247fd7c(lVar12,0xd4,uVar14,0,0);
          *(long *)(unaff_x19 + 0x1d0) = lVar12;
          uVar14 = *(undefined8 *)(unaff_x19 + 0x408);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          puVar4 = DigitalOpus_MB_Core_MB3_TextureCombiner_CreateAtlasesCoroutineResult_TypeInfo;
          if (lVar12 != 0) {
            FUN_0247fd7c(lVar12,0xd5,uVar14,1,0);
            *(long *)(unaff_x19 + 0x1d8) = lVar12;
            uVar14 = *(undefined8 *)(unaff_x19 + 0x408);
            lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar12 != 0) {
              FUN_0246eb5c(lVar12,0xe6,uVar14,0);
              *(long *)(unaff_x19 + 0x1e0) = lVar12;
              FUN_026b2fe4(0);
              lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                           System_Collections_Generic_List<JToken>_TypeInfo);
              if (lVar12 != 0) {
                FUN_024702e4(lVar12,*(undefined8 *)
                                     Method_AutoExtensions_CanGetComponent<HoveringObject>__);
                *(long *)(unaff_x19 + 0x1e8) = lVar12;
                puVar4 = StringLiteral_2133;
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Dispose__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar14 = FUN_026b2fe4(0);
                uVar1 = *(undefined4 *)(unaff_x20 + 0x5c);
                uVar13 = *unaff_x21;
                uVar2 = *(undefined4 *)(unaff_x21 + 1);
                lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                             System_Collections_Generic_List<JToken>_TypeInfo);
                if (lVar12 != 0) {
                  FUN_024706f8(lVar12,9,1,0xfa,uVar14,uVar1,uVar13,uVar2);
                  *(long *)(unaff_x19 + 0x1f0) = lVar12;
                  uVar14 = *(undefined8 *)(unaff_x19 + 0x448);
                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar4 = Method_System_Collections_Generic_List<WitEntityKeywordInfo>_get_Count__;
                  if (lVar12 != 0) {
                    FUN_0246deac(lVar12,400,uVar14,0);
                    *(long *)(unaff_x19 + 0x200) = lVar12;
                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    puVar4 = OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo;
                    if (lVar12 != 0) {
                      FUN_02431240(lVar12,0x15e);
                      *(long *)(unaff_x19 + 0x1f8) = lVar12;
                      uVar14 = *(undefined8 *)(unaff_x19 + 0x450);
                      uVar13 = *(undefined8 *)(unaff_x19 + 0x440);
                      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                      puVar4 = 
                      Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStrCmpIntRes2<short>__;
                      if (lVar12 != 0) {
                        FUN_0246d328(lVar12,400,uVar14,uVar13,0);
                        *(long *)(unaff_x19 + 0x208) = lVar12;
                        cVar3 = *(char *)(unaff_x20 + 0x70);
                        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                        if (lVar12 != 0) {
                          FUN_02431788(lVar12,0x1c2,cVar3 != '\0');
                          *(long *)(unaff_x19 + 0x210) = lVar12;
                          uVar14 = FUN_026b2fec(0);
                          uVar1 = *(undefined4 *)(unaff_x20 + 0x60);
                          uVar13 = *unaff_x21;
                          uVar2 = *(undefined4 *)(unaff_x21 + 1);
                          lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_List<JToken>_TypeInfo);
                          puVar4 = 
                          Method_UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_OnCameraCleanup__
                          ;
                          if (lVar12 != 0) {
                            FUN_024706f8(lVar12,10,0,0x1c2,uVar14,uVar1,uVar13,uVar2);
                            *(long *)(unaff_x19 + 0x218) = lVar12;
                            lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                            puVar4 = Method_MedleyHingedComboLock_CheckPuzzleComplete__;
                            if (lVar12 != 0) {
                              FUN_02431698(lVar12,0x226);
                              *(long *)(unaff_x19 + 0x220) = lVar12;
                              uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
                              uVar13 = *(undefined8 *)(unaff_x19 + 0x440);
                              memset(&stack0x00000030,0,0x90);
                              FUN_02431cf8(&stack0x00000030,uVar14,uVar13);
                              memcpy((void *)(unaff_x19 + 0x480),&stack0x00000030,0x90);
                              lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                              puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
                              if (lVar12 != 0) {
                                FUN_02430c78(lVar12,1000);
                                *(long *)(unaff_x19 + 0x230) = lVar12;
                                uVar14 = *(undefined8 *)(unaff_x19 + 0x440);
                                lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabds_f32__;
                                if (lVar12 != 0) {
                                  FUN_02470ed0(lVar12,0x3e9,uVar14,0);
                                  *(long *)(unaff_x19 + 0x228) = lVar12;
                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                  puVar11 = StringLiteral_6311;
                                  puVar10 = StringLiteral_1130;
                                  puVar9 = StringLiteral_672;
                                  puVar8 = StringLiteral_127;
                                  puVar7 = Method_Newtonsoft_Json_Linq_JToken_WriteToAsync__;
                                  puVar6 = 
                                  Method_System_Collections_Generic_List<RectTransform>__ctor__;
                                  puVar5 = 
                                  Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__
                                  ;
                                  puVar4 = 
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                                  ;
                                  if (lVar12 != 0) {
                                    FUN_024803cc(lVar12,*(undefined8 *)PTR_DAT_033f53e0,0);
                                    *(long *)(unaff_x19 + 0x248) = lVar12;
                                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    FUN_02431dd4(unaff_x19 + 0x2e0,*(undefined8 *)puVar11);
                                    FUN_02431dd4(unaff_x19 + 0x310,*(undefined8 *)puVar6);
                                    FUN_02431dd4(unaff_x19 + 0x340,*(undefined8 *)puVar7);
                                    FUN_02431dd4(unaff_x19 + 0x370,*(undefined8 *)puVar10);
                                    FUN_02431dd4(unaff_x19 + 0x3a0,*(undefined8 *)puVar9);
                                    FUN_02431dd4(unaff_x19 + 0x3d0,*(undefined8 *)puVar4);
                                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
                                    if (lVar12 != 0) {
                                      FUN_02423ad4(lVar12,0);
                                      puVar4 = StringLiteral_5516;
                                      if (*(int *)(*(long *)StringLiteral_5516 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      *(long *)(unaff_x19 + 0xe0) = lVar12;
                                      if (*(int *)(unaff_x19 + 0x410) == 1) {
                                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar12 = *(long *)(unaff_x19 + 0xe0);
                                        }
                                        puVar4 = 
                                        System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo
                                        ;
                                        if (lVar12 == 0) goto LAB_0243f5d0;
                                        *(undefined1 *)(lVar12 + 0x11) = 0;
                                        puVar5 = 
                                        Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<TextArea>__
                                        ;
                                        uVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,3);
                                        FUN_016a34e8(uVar14,*(undefined8 *)puVar5,0);
                                        *(undefined8 *)(unaff_x19 + 0xe8) = uVar14;
                                      }
                                      puVar4 = 
                                      Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                      ;
                                      lVar12 = *(long *)
                                                Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                                      ;
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar12 = *(long *)puVar4;
                                      }
                                      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1c) =
                                           DAT_028ab160;
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
          }
        }
      }
LAB_0243f5d0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


