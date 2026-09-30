/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSessionOrigin$$MakeContentAppearAt
ENTRY_POINT: 0243f1e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
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
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  long unaff_x26;
  undefined8 *unaff_x28;
  
  if (*(int *)(**(long **)(unaff_x26 + 0x230) + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_026b2fe4(0);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar14 = *unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x21 + 1);
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)System_Collections_Generic_List<JToken>_TypeInfo);
  if (lVar13 != 0) {
    FUN_024706f8(lVar13,9,1,0xfa,uVar12,uVar1,uVar14,uVar2);
    *(long *)(unaff_x19 + 0x1f0) = lVar13;
    uVar12 = *(undefined8 *)(unaff_x19 + 0x448);
    lVar13 = thunk_FUN_00d62348(*unaff_x28);
    puVar4 = Method_System_Collections_Generic_List<WitEntityKeywordInfo>_get_Count__;
    if (lVar13 != 0) {
      FUN_0246deac(lVar13,400,uVar12,0);
      *(long *)(unaff_x19 + 0x200) = lVar13;
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar4 = OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo;
      if (lVar13 != 0) {
        FUN_02431240(lVar13,0x15e);
        *(long *)(unaff_x19 + 0x1f8) = lVar13;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x450);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x440);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar4 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_ComputeStrCmpIntRes2<short>__;
        if (lVar13 != 0) {
          FUN_0246d328(lVar13,400,uVar12,uVar14,0);
          *(long *)(unaff_x19 + 0x208) = lVar13;
          cVar3 = *(char *)(unaff_x20 + 0x70);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar13 != 0) {
            FUN_02431788(lVar13,0x1c2,cVar3 != '\0');
            *(long *)(unaff_x19 + 0x210) = lVar13;
            uVar12 = FUN_026b2fec(0);
            uVar1 = *(undefined4 *)(unaff_x20 + 0x60);
            uVar14 = *unaff_x21;
            uVar2 = *(undefined4 *)(unaff_x21 + 1);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         System_Collections_Generic_List<JToken>_TypeInfo);
            puVar4 = 
            Method_UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_OnCameraCleanup__;
            if (lVar13 != 0) {
              FUN_024706f8(lVar13,10,0,0x1c2,uVar12,uVar1,uVar14,uVar2);
              *(long *)(unaff_x19 + 0x218) = lVar13;
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              puVar4 = Method_MedleyHingedComboLock_CheckPuzzleComplete__;
              if (lVar13 != 0) {
                FUN_02431698(lVar13,0x226);
                *(long *)(unaff_x19 + 0x220) = lVar13;
                uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
                uVar14 = *(undefined8 *)(unaff_x19 + 0x440);
                memset(&stack0x00000030,0,0x90);
                FUN_02431cf8(&stack0x00000030,uVar12,uVar14);
                memcpy((void *)(unaff_x19 + 0x480),&stack0x00000030,0x90);
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
                if (lVar13 != 0) {
                  FUN_02430c78(lVar13,1000);
                  *(long *)(unaff_x19 + 0x230) = lVar13;
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x440);
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabds_f32__;
                  if (lVar13 != 0) {
                    FUN_02470ed0(lVar13,0x3e9,uVar12,0);
                    *(long *)(unaff_x19 + 0x228) = lVar13;
                    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    puVar11 = StringLiteral_6311;
                    puVar10 = StringLiteral_1130;
                    puVar9 = StringLiteral_672;
                    puVar8 = StringLiteral_127;
                    puVar7 = Method_Newtonsoft_Json_Linq_JToken_WriteToAsync__;
                    puVar6 = Method_System_Collections_Generic_List<RectTransform>__ctor__;
                    puVar5 = 
                    Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
                    puVar4 = 
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                    ;
                    if (lVar13 != 0) {
                      FUN_024803cc(lVar13,*(undefined8 *)PTR_DAT_033f53e0,0);
                      *(long *)(unaff_x19 + 0x248) = lVar13;
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_02431dd4(unaff_x19 + 0x2e0,*(undefined8 *)puVar11);
                      FUN_02431dd4(unaff_x19 + 0x310,*(undefined8 *)puVar6);
                      FUN_02431dd4(unaff_x19 + 0x340,*(undefined8 *)puVar7);
                      FUN_02431dd4(unaff_x19 + 0x370,*(undefined8 *)puVar10);
                      FUN_02431dd4(unaff_x19 + 0x3a0,*(undefined8 *)puVar9);
                      FUN_02431dd4(unaff_x19 + 0x3d0,*(undefined8 *)puVar4);
                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
                      if (lVar13 != 0) {
                        FUN_02423ad4(lVar13,0);
                        puVar4 = StringLiteral_5516;
                        if (*(int *)(*(long *)StringLiteral_5516 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        *(long *)(unaff_x19 + 0xe0) = lVar13;
                        if (*(int *)(unaff_x19 + 0x410) == 1) {
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar13 = *(long *)(unaff_x19 + 0xe0);
                          }
                          puVar4 = 
                          System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
                          if (lVar13 == 0) goto LAB_0243f5d0;
                          *(undefined1 *)(lVar13 + 0x11) = 0;
                          puVar5 = 
                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<TextArea>__
                          ;
                          uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,3);
                          FUN_016a34e8(uVar12,*(undefined8 *)puVar5,0);
                          *(undefined8 *)(unaff_x19 + 0xe8) = uVar12;
                        }
                        puVar4 = 
                        Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__;
                        lVar13 = *(long *)
                                  Method_UnityEngine_InputSystem_Keyboard_add_onIMECompositionChange__
                        ;
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar13 = *(long *)puVar4;
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
LAB_0243f5d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


