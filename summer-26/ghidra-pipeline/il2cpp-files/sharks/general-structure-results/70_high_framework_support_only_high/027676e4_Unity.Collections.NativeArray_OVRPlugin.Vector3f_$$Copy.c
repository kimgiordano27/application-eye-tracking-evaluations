/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 027676e4
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6)

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
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  uVar7 = param_5._8_8_;
  uVar5 = param_5._0_8_;
  uVar11 = param_4._8_8_;
  uVar9 = param_4._0_8_;
  while (uVar4 = unaff_w27, uStack0000000000000130 = uVar9, uStack0000000000000138 = uVar11,
        uStack0000000000000140 = uVar5, uStack0000000000000148 = uVar7,
        iVar3 = (*param_1)(param_6,&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(unaff_x21 + 0x28)), iVar3 < 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027677a0;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_027677a0;
    lVar1 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = uVar9;
    *(undefined8 *)(lVar1 + 0x38) = uVar7;
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    thunk_FUN_0188fd20(lVar1 + 0x20,0);
    if (unaff_w26 < (int)uVar4) goto FUN_02767754;
    unaff_w27 = uVar4 * 2;
    if ((int)unaff_w27 < unaff_w23) {
      uVar2 = unaff_w27 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) goto LAB_027677a0;
      lVar1 = unaff_x19 + (long)(int)(uVar2 - 1) * 0x20;
      uVar11 = *(undefined8 *)(lVar1 + 0x28);
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      uVar7 = *(undefined8 *)(lVar1 + 0x38);
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_027677a0;
      lVar1 = unaff_x19 + (long)(int)uVar2 * 0x20;
      uVar12 = *(undefined8 *)(lVar1 + 0x28);
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      uVar8 = *(undefined8 *)(lVar1 + 0x38);
      uVar6 = *(undefined8 *)(lVar1 + 0x30);
      if (unaff_x21 == 0) goto LAB_027677a4;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      uStack0000000000000130 = uVar10;
      uStack0000000000000138 = uVar12;
      uStack0000000000000140 = uVar6;
      uStack0000000000000148 = uVar8;
      in_stack_00000150 = uVar9;
      in_stack_00000158 = uVar11;
      in_stack_00000160 = uVar5;
      in_stack_00000168 = uVar7;
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w27 = unaff_w27 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w27;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027677a0;
    unaff_x28 = (long)(int)unaff_w29;
    unaff_x22 = unaff_x19 + unaff_x28 * 0x20;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    if (unaff_x21 == 0) {
LAB_027677a4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    param_6 = *(undefined8 *)(unaff_x21 + 0x40);
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    in_stack_00000168 = in_stack_00000128;
    in_stack_00000160 = in_stack_00000120;
    unaff_w24 = uVar4;
  }
  unaff_w29 = unaff_w25 + unaff_w24;
  unaff_x28 = (long)(int)unaff_w29;
FUN_02767754:
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar1 = unaff_x19 + unaff_x28 * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000118;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000110;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000128;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000120;
    thunk_FUN_0188fd20(lVar1 + 0x20,0);
    return;
  }
LAB_027677a0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


