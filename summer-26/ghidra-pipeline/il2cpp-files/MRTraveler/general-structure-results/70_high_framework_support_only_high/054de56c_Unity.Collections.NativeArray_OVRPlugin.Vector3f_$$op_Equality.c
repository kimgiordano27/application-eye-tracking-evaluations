/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Equality
ENTRY_POINT: 054de56c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Equality
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  
  uVar7 = param_3._8_8_;
  uVar5 = param_3._0_8_;
  uStack0000000000000158 = param_2._8_8_;
  uStack0000000000000150 = param_2._0_8_;
  uStack0000000000000160 = in_x9;
  while (uVar6 = unaff_w28, uStack0000000000000130 = uVar5, uStack0000000000000138 = uVar7,
        uStack0000000000000140 = in_x10,
        iVar2 = (*param_1)(*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(unaff_x21 + 0x28)), iVar2 < 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054de660;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_054de660;
    lVar3 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_03d233cc(lVar3 + 0x20,0);
    if (unaff_w27 < (int)uVar6) goto LAB_054de5fc;
    unaff_w28 = uVar6 * 2;
    iVar2 = (int)unaff_x26;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_054de660;
      lVar3 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)iVar2;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      uVar9 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_054de660;
      lVar3 = unaff_x19 + (long)(int)uVar1 * (long)iVar2;
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x21 == 0) goto LAB_054de664;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      uStack0000000000000130 = uVar8;
      uStack0000000000000138 = uVar10;
      uStack0000000000000140 = uVar4;
      uStack0000000000000150 = uVar7;
      uStack0000000000000158 = uVar9;
      uStack0000000000000160 = uVar5;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054de660;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)iVar2;
    in_x10 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) {
LAB_054de664:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    uStack0000000000000160 = in_stack_00000120;
    uStack0000000000000150 = in_stack_00000110;
    uStack0000000000000158 = in_stack_00000118;
    unaff_w24 = uVar6;
  }
  unaff_w29 = unaff_w25 + unaff_w24;
LAB_054de5fc:
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar3 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000120;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000118;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000110;
    thunk_FUN_03d233cc(lVar3 + 0x20,0);
    return;
  }
LAB_054de660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


