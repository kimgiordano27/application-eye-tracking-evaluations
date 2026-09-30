/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04a0d9b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(code *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar4;
  uint unaff_w29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 in_q3 [16];
  undefined1 in_q4 [16];
  undefined1 in_q5 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  uVar6 = in_q5._8_8_;
  uVar5 = in_q5._0_8_;
  uVar8 = in_q4._8_8_;
  uVar7 = in_q4._0_8_;
  uVar10 = in_q3._8_8_;
  uVar9 = in_q3._0_8_;
  while (uVar4 = unaff_w28, uStack00000000000001c0 = uVar9, uStack00000000000001c8 = uVar10,
        uStack00000000000001d0 = uVar7, uStack00000000000001d8 = uVar8,
        uStack00000000000001e0 = uVar5, uStack00000000000001e8 = uVar6,
        iVar2 = (*param_1)(*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                           *(undefined8 *)(unaff_x21 + 0x28)), iVar2 < 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_04a0da84;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_04a0da84;
    lVar3 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(lVar3 + 0x30) = uVar9;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    *(undefined8 *)(lVar3 + 0x28) = uVar8;
    *(undefined8 *)(lVar3 + 0x20) = uVar7;
    if (unaff_w27 < (int)uVar4) goto LAB_04a0da30;
    unaff_w28 = uVar4 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
      goto LAB_04a0da84;
      lVar3 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar3 + 0x38);
      uVar7 = *(undefined8 *)(lVar3 + 0x30);
      uVar6 = *(undefined8 *)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x21 == 0) goto LAB_04a0da88;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      uStack00000000000001c0 = uVar9;
      uStack00000000000001c8 = uVar10;
      uStack00000000000001d0 = uVar7;
      uStack00000000000001d8 = uVar8;
      uStack00000000000001e0 = uVar5;
      uStack00000000000001e8 = uVar6;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_04a0da84;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) {
LAB_04a0da88:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    unaff_w24 = uVar4;
  }
  unaff_w29 = unaff_w25 + unaff_w24;
LAB_04a0da30:
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar3 = unaff_x19 + (long)(int)unaff_w29 * 0x30;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_000001a8;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_000001a0;
    *(undefined8 *)(lVar3 + 0x48) = in_stack_000001b8;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_000001b0;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000198;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000190;
    return;
  }
LAB_04a0da84:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


