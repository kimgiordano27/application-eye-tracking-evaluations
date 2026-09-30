/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 050a5384
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined1 *param_4,undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *in_x9;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_000000d0;
  
  uVar6 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  uStack00000000000000c8 = param_1._8_8_;
  uStack00000000000000c0 = param_1._0_8_;
  while( true ) {
    uVar8 = unaff_w29;
    uStack00000000000000b0 = in_stack_00000030;
    uStack00000000000000a0 = uVar4;
    uStack00000000000000a8 = uVar6;
    iVar2 = (*in_x9)(*(undefined8 *)(unaff_x21 + 0x40),param_4,param_5,
                     *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) break;
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w22) ||
       (uVar3 = unaff_w25 + unaff_w24, *(uint *)(unaff_x19 + 0x18) <= uVar3)) goto LAB_050a5450;
    lVar7 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w26;
    uVar6 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x28 + 0x20);
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(unaff_x28 + 0x30);
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    *(undefined8 *)(lVar7 + 0x20) = uVar4;
    thunk_FUN_03afed3c(in_stack_00000018 + (long)(int)uVar3 * (long)unaff_w26 + 8,0);
    if (unaff_w27 < (int)uVar8) goto LAB_050a53fc;
    unaff_w29 = uVar8 * 2;
    uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w29 < unaff_w23) {
      uVar1 = unaff_w29 + in_stack_00000010._4_4_;
      if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_050a5450;
      if (unaff_x21 == 0) goto LAB_050a5454;
      lVar7 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      lVar5 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      uVar9 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(undefined8 *)(lVar7 + 0x30);
      uVar12 = *(undefined8 *)(lVar5 + 0x28);
      uVar11 = *(undefined8 *)(lVar5 + 0x20);
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uStack00000000000000a0 = uVar11;
      uStack00000000000000a8 = uVar12;
      uStack00000000000000b0 = uVar6;
      uStack00000000000000c0 = uVar9;
      uStack00000000000000c8 = uVar10;
      in_stack_000000d0 = uVar4;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w29 = unaff_w29 | uVar1 >> 0x1f;
    }
    unaff_w22 = unaff_w25 + unaff_w29;
    if (uVar3 <= unaff_w22) goto LAB_050a5450;
    if (unaff_x21 == 0) {
LAB_050a5454:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x28 = unaff_x19 + (long)(int)unaff_w22 * (long)unaff_w26;
    uVar6 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x28 + 0x20);
    in_stack_00000030 = *(undefined8 *)(unaff_x28 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    param_4 = (undefined1 *)&stack0x000000c0;
    in_x9 = *(code **)(unaff_x21 + 0x18);
    param_5 = (undefined1 *)&stack0x000000a0;
    in_stack_000000d0 = in_stack_00000090;
    uStack00000000000000c0 = in_stack_00000080;
    uStack00000000000000c8 = in_stack_00000088;
    unaff_w24 = uVar8;
  }
  unaff_w22 = unaff_w25 + unaff_w24;
LAB_050a53fc:
  if (unaff_w22 < *(uint *)(unaff_x19 + 0x18)) {
    lVar7 = unaff_x19 + (long)(int)unaff_w22 * 0x18;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000088;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_00000080;
    *(undefined8 *)(lVar7 + 0x30) = in_stack_00000090;
    thunk_FUN_03afed3c(lVar7 + 0x28,0);
    return;
  }
LAB_050a5450:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


