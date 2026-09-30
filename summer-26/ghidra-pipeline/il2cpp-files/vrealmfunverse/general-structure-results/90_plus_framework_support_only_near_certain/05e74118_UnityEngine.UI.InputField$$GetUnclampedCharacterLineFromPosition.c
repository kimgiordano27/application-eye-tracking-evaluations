/*
FUNCTION_NAME: UnityEngine.UI.InputField$$GetUnclampedCharacterLineFromPosition
ENTRY_POINT: 05e74118
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 171
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_9;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_UI_InputField__GetUnclampedCharacterLineFromPosition(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  int unaff_w25;
  int iVar10;
  long unaff_x27;
  int *piVar11;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  int iStack0000000000000160;
  int iStack0000000000000164;
  long in_stack_00000168;
  int in_stack_00000170;
  undefined4 in_stack_00000188;
  long in_stack_000001a0;
  ulong in_stack_000001a8;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined4 in_stack_00000230;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined4 in_stack_00000250;
  long in_stack_00000258;
  
code_r0x05e74118:
  *(ulong *)(param_1 + 0x40) = in_x9;
  thunk_FUN_02bb0e9c(param_1 + 0x28,0);
  do {
    *(int *)(unaff_x22 + 0x18) = unaff_w25;
    unaff_x29[1] = in_stack_00000248;
    *unaff_x29 = in_stack_00000240;
    *(undefined4 *)(unaff_x29 + 2) = in_stack_00000250;
    thunk_FUN_02bb0e9c(unaff_x22 + 0x20,0);
    *(undefined4 *)(unaff_x22 + 0x30) = unaff_w23;
    *(undefined8 *)(unaff_x22 + 0x3c) = in_stack_00000228;
    *(undefined8 *)(unaff_x22 + 0x34) = in_stack_00000220;
    *(undefined4 *)(unaff_x22 + 0x44) = in_stack_00000230;
    thunk_FUN_02bb0e9c(unaff_x22 + 0x38,0);
    *unaff_x19 = unaff_x24;
    thunk_FUN_02bb0e9c(unaff_x19,unaff_x24);
    *(undefined4 *)(unaff_x22 + 0x5c) = 0;
    do {
      uVar7 = FUN_0477203c(&stack0x00000150,*unaff_x21);
      uVar4 = in_stack_000001a8;
      unaff_x24 = in_stack_000001a0;
      unaff_w23 = in_stack_00000188;
      unaff_w25 = in_stack_00000170;
      unaff_x22 = in_stack_00000168;
      if ((uVar7 & 1) == 0) {
        FUN_04772038(&stack0x00000150,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_0__);
        iVar5 = *(int *)(in_stack_00000010 + 0x18);
        *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
        *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
        if (0 < iVar5) {
          FUN_04d9e084(*(undefined8 *)(in_stack_00000010 + 0x10),0,iVar5,0);
        }
        FUN_05e81578(in_stack_00000018);
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
          return;
        }
        goto LAB_05e74584;
      }
      in_stack_00000250 = *(undefined4 *)(unaff_x20 + 0x34);
      in_stack_00000248 = *(undefined8 *)(unaff_x20 + 0x2c);
      in_stack_00000240 = *(undefined8 *)(unaff_x20 + 0x24);
      in_stack_00000228 = *(undefined8 *)(unaff_x20 + 0x44);
      in_stack_00000220 = *(undefined8 *)(unaff_x20 + 0x3c);
      in_stack_00000230 = *(undefined4 *)(unaff_x20 + 0x4c);
      if (in_stack_00000168 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e74584;
      }
    } while ((*(int *)(in_stack_00000168 + 0x5c) != iStack0000000000000160) ||
            (*(int *)(in_stack_00000168 + 0x58) != iStack0000000000000164));
    unaff_x19 = (long *)(in_stack_00000168 + 0x50);
    if (*unaff_x19 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
LAB_05e74584:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar8 = *(long *)(*unaff_x19 + 0x18);
    if (lVar8 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    piVar11 = (int *)(in_stack_00000168 + 0x18);
    unaff_x29 = (undefined8 *)(in_stack_00000168 + 0x1c);
    FUN_03ac7494(&stack0x00000140,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                 *piVar11,*(undefined4 *)unaff_x29,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__);
    if (unaff_x24 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    lVar8 = *(long *)(unaff_x24 + 0x18);
    if (lVar8 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    FUN_03ac7494(&stack0x00000130,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                 unaff_w25,*(undefined4 *)unaff_x29,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__);
    FUN_03ac75a4(&stack0x00000130,in_stack_00000140,in_stack_00000148,
                 *(undefined8 *)
                  Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    if (*(long *)(unaff_x24 + 0x18) == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    FUN_04331084(*(long *)(unaff_x24 + 0x18),unaff_w25,*(undefined4 *)unaff_x29,
                 *(undefined8 *)
                  Method_RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_System_Collections_IEnumerator_Reset__
                );
    if ((uVar4 & 1) != 0) {
      if (*unaff_x19 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e74584;
      }
      lVar8 = *(long *)(*unaff_x19 + 0x20);
      if (lVar8 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e74584;
      }
      FUN_03ac6f14(&stack0x00000120,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                   *(undefined4 *)(unaff_x22 + 0x30),*(undefined4 *)(unaff_x22 + 0x34),
                   *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__
                  );
      lVar8 = *(long *)(unaff_x24 + 0x20);
      if (lVar8 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e74584;
      }
      FUN_03ac6f14(&stack0x00000110,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                   unaff_w23,*(undefined4 *)(unaff_x22 + 0x34),
                   *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__
                  );
      iVar5 = FUN_03ac7100(&stack0x00000110,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__
                          );
      if (0 < iVar5) {
        iVar1 = *piVar11;
        iVar10 = 0;
        do {
          iVar6 = FUN_03ac6f6c(&stack0x00000120,iVar10,
                               *(undefined8 *)
                                Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__
                              );
          FUN_03ac6fac(&stack0x00000110,iVar10,iVar6 + (unaff_w25 - iVar1),
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                      );
          iVar10 = iVar10 + 1;
        } while (iVar5 != iVar10);
      }
      if (*(long *)(unaff_x24 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e74584;
      }
      FUN_04330908(*(long *)(unaff_x24 + 0x20),unaff_w23,*(undefined4 *)(unaff_x22 + 0x34),
                   *(undefined8 *)Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
      unaff_x21 = (undefined8 *)
                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_1__;
      unaff_x27 = in_stack_00000028;
    }
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_000000e8 = *(undefined8 *)(unaff_x22 + 0x20);
    in_stack_000000e0 = *(undefined8 *)piVar11;
    in_stack_000000f0 = *(undefined8 *)(unaff_x22 + 0x28);
    thunk_FUN_02bb0e9c((ulong)&stack0x000000e0 | 8,0);
    in_stack_000000f8 = *unaff_x19;
    thunk_FUN_02bb0e9c(&stack0x000000f8);
    puVar3 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
    in_stack_00000100 = CONCAT71(in_stack_00000100._1_7_,1);
    lVar8 = *(long *)(unaff_x27 + 0x10);
    lVar9 = *(long *)Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar8 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    uVar2 = *(uint *)(unaff_x27 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar2 * 0x28;
      *(uint *)(unaff_x27 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_000000e8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000e0;
      *(long *)(lVar8 + 0x38) = in_stack_000000f8;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_000000f0;
      *(ulong *)(lVar8 + 0x40) = in_stack_00000100;
      thunk_FUN_02bb0e9c(lVar8 + 0x28,0);
    }
    else {
      in_stack_00000048 = in_stack_000000e8;
      in_stack_00000040 = in_stack_000000e0;
      in_stack_00000058 = in_stack_000000f8;
      in_stack_00000050 = in_stack_000000f0;
      in_stack_00000060 = in_stack_00000100;
      FUN_0397cecc(unaff_x27,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    in_stack_000000e8 = *(undefined8 *)(unaff_x22 + 0x38);
    in_stack_000000e0 = *(undefined8 *)(unaff_x22 + 0x30);
    in_stack_000000f0 = *(undefined8 *)(unaff_x22 + 0x40);
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    thunk_FUN_02bb0e9c((ulong)&stack0x000000e0 | 8,0);
    in_stack_000000f8 = *unaff_x19;
    thunk_FUN_02bb0e9c(&stack0x000000f8);
    in_stack_00000100 = in_stack_00000100 & 0xffffffffffffff00;
    param_1 = *(long *)(unaff_x27 + 0x10);
    lVar8 = *(long *)puVar3;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (param_1 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000258) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e74584;
    }
    uVar2 = *(uint *)(unaff_x27 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) break;
    in_stack_00000048 = in_stack_000000e8;
    in_stack_00000040 = in_stack_000000e0;
    in_stack_00000058 = in_stack_000000f8;
    in_stack_00000050 = in_stack_000000f0;
    in_stack_00000060 = in_stack_00000100;
    FUN_0397cecc(unaff_x27,&stack0x00000040,
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  } while( true );
  param_1 = param_1 + (long)(int)uVar2 * 0x28;
  *(uint *)(unaff_x27 + 0x18) = uVar2 + 1;
  *(undefined8 *)(param_1 + 0x28) = in_stack_000000e8;
  *(undefined8 *)(param_1 + 0x20) = in_stack_000000e0;
  *(long *)(param_1 + 0x38) = in_stack_000000f8;
  *(undefined8 *)(param_1 + 0x30) = in_stack_000000f0;
  in_x9 = in_stack_00000100;
  goto code_r0x05e74118;
}


