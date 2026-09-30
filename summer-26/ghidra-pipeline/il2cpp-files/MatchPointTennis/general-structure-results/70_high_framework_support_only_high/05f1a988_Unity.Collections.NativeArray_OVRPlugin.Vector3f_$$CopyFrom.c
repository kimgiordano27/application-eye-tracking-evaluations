/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 05f1a988
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  int iVar1;
  long in_x4;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  uStack0000000000000058 = param_6._8_8_;
  uStack0000000000000050 = param_6._0_8_;
  uStack0000000000000048 = param_5._8_8_;
  uStack0000000000000040 = param_5._0_8_;
  uStack0000000000000038 = param_4._8_8_;
  uStack0000000000000030 = param_4._0_8_;
  uStack0000000000000068 = param_3._8_8_;
  uStack0000000000000060 = param_3._0_8_;
  if ((*(byte *)(*(long *)(in_x4 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  in_stack_00000158 = uStack0000000000000068;
  in_stack_00000150 = uStack0000000000000060;
  in_stack_00000168 = in_stack_00000078;
  in_stack_00000160 = in_stack_00000070;
  in_stack_00000178 = in_stack_00000088;
  in_stack_00000170 = in_stack_00000080;
  in_stack_00000128 = uStack0000000000000038;
  in_stack_00000120 = uStack0000000000000030;
  in_stack_00000138 = uStack0000000000000048;
  in_stack_00000130 = uStack0000000000000040;
  in_stack_00000148 = uStack0000000000000058;
  in_stack_00000140 = uStack0000000000000050;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000150,&stack0x00000120,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    uVar8 = *(undefined8 *)(unaff_x25 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x25 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x25 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x25 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x25 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x25 + 0x20);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar11 = *(undefined8 *)(unaff_x26 + 0x30);
      uVar5 = *(undefined8 *)(unaff_x26 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x26 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x26 + 0x20);
      *(undefined8 *)(unaff_x25 + 0x38) = *(undefined8 *)(unaff_x26 + 0x38);
      *(undefined8 *)(unaff_x25 + 0x30) = uVar11;
      *(undefined8 *)(unaff_x25 + 0x48) = uVar5;
      *(undefined8 *)(unaff_x25 + 0x40) = uVar3;
      *(undefined8 *)(unaff_x25 + 0x28) = uVar9;
      *(undefined8 *)(unaff_x25 + 0x20) = uVar7;
      thunk_FUN_044bb4b4(unaff_x19 + unaff_x24 * 0x30 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x38) = uVar8;
        *(undefined8 *)(unaff_x26 + 0x30) = uVar6;
        *(undefined8 *)(unaff_x26 + 0x48) = uVar4;
        *(undefined8 *)(unaff_x26 + 0x40) = uVar2;
        *(undefined8 *)(unaff_x26 + 0x28) = uVar12;
        *(undefined8 *)(unaff_x26 + 0x20) = uVar10;
        thunk_FUN_044bb4b4(unaff_x19 + unaff_x23 * 0x30 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


