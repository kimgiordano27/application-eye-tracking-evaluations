/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 05f19d1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  uint uVar4;
  long unaff_x28;
  uint unaff_w29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  uStack0000000000000198 = param_4._8_8_;
  uStack0000000000000190 = param_4._0_8_;
  uStack00000000000001a8 = param_3._8_8_;
  uStack00000000000001a0 = param_3._0_8_;
  uStack00000000000001b8 = param_2._8_8_;
  uStack00000000000001b0 = param_2._0_8_;
  uStack00000000000001c8 = param_1._8_8_;
  uStack00000000000001c0 = param_1._0_8_;
  while (uVar4 = unaff_w27, unaff_x21 != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    iVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) {
      unaff_w29 = unaff_w25 + unaff_w24;
      unaff_x28 = (long)(int)unaff_w29;
FUN_05f19dfc:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + unaff_x28 * 0x40;
        *(undefined8 *)(lVar1 + 0x48) = in_stack_00000238;
        *(undefined8 *)(lVar1 + 0x40) = in_stack_00000230;
        *(undefined8 *)(lVar1 + 0x58) = in_stack_00000248;
        *(undefined8 *)(lVar1 + 0x50) = in_stack_00000240;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000218;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000210;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_00000228;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_00000220;
        thunk_FUN_044bb4b4(lVar1 + 0x20,0);
        return;
      }
LAB_05f19e58:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f19e58;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_05f19e58;
    lVar1 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x40;
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(undefined8 *)(lVar1 + 0x58) = uVar7;
    *(undefined8 *)(lVar1 + 0x50) = uVar6;
    *(undefined8 *)(lVar1 + 0x28) = uVar9;
    *(undefined8 *)(lVar1 + 0x20) = uVar8;
    *(undefined8 *)(lVar1 + 0x38) = uVar11;
    *(undefined8 *)(lVar1 + 0x30) = uVar10;
    thunk_FUN_044bb4b4(lVar1 + 0x20,0);
    if (unaff_w26 < (int)uVar4) goto FUN_05f19dfc;
    unaff_w27 = uVar4 * 2;
    if ((int)unaff_w27 < unaff_w23) {
      uVar2 = unaff_w27 + in_stack_00000008._4_4_;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar2))
      goto LAB_05f19e58;
      lVar1 = unaff_x19 + (long)(int)uVar2 * 0x40;
      uStack00000000000001b8 = *(undefined8 *)(lVar1 + 0x48);
      uStack00000000000001b0 = *(undefined8 *)(lVar1 + 0x40);
      uStack00000000000001c8 = *(undefined8 *)(lVar1 + 0x58);
      uStack00000000000001c0 = *(undefined8 *)(lVar1 + 0x50);
      uStack0000000000000198 = *(undefined8 *)(lVar1 + 0x28);
      uStack0000000000000190 = *(undefined8 *)(lVar1 + 0x20);
      uStack00000000000001a8 = *(undefined8 *)(lVar1 + 0x38);
      uStack00000000000001a0 = *(undefined8 *)(lVar1 + 0x30);
      if (unaff_x21 == 0) break;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w27 = unaff_w27 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w27;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f19e58;
    unaff_x28 = (long)(int)unaff_w29;
    unaff_x22 = unaff_x19 + unaff_x28 * 0x40;
    uStack00000000000001b8 = *(undefined8 *)(unaff_x22 + 0x48);
    uStack00000000000001b0 = *(undefined8 *)(unaff_x22 + 0x40);
    uStack00000000000001c8 = *(undefined8 *)(unaff_x22 + 0x58);
    uStack00000000000001c0 = *(undefined8 *)(unaff_x22 + 0x50);
    uStack0000000000000198 = *(undefined8 *)(unaff_x22 + 0x28);
    uStack0000000000000190 = *(undefined8 *)(unaff_x22 + 0x20);
    uStack00000000000001a8 = *(undefined8 *)(unaff_x22 + 0x38);
    uStack00000000000001a0 = *(undefined8 *)(unaff_x22 + 0x30);
    unaff_w24 = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


