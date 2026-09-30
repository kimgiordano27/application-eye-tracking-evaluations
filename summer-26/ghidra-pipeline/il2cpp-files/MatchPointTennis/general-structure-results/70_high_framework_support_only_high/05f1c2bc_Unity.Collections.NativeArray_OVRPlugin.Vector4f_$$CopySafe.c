/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05f1c2bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  uint in_w9;
  undefined8 in_x10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  
  uStack0000000000000158 = param_4._8_8_;
  uStack0000000000000150 = param_4._0_8_;
  uStack0000000000000148 = param_3._8_8_;
  uStack0000000000000140 = param_3._0_8_;
  uStack0000000000000168 = param_2._8_8_;
  uStack0000000000000160 = param_2._0_8_;
  if (unaff_w20 < in_w9) {
    uVar6 = *(undefined8 *)(unaff_x26 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x26 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x26 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x26 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x26 + 0x20);
    param_1[6] = *(undefined8 *)(unaff_x26 + 0x50);
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_1[1] = uVar4;
    *param_1 = uVar3;
    uStack0000000000000170 = in_x10;
    thunk_FUN_044bb4b4(unaff_x19 + unaff_x24 * 0x38 + 0x28,0);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x26 + 0x50) = uStack0000000000000170;
      *(undefined8 *)(unaff_x26 + 0x38) = uStack0000000000000158;
      *(undefined8 *)(unaff_x26 + 0x30) = uStack0000000000000150;
      *(undefined8 *)(unaff_x26 + 0x48) = uStack0000000000000168;
      *(undefined8 *)(unaff_x26 + 0x40) = uStack0000000000000160;
      *(undefined8 *)(unaff_x26 + 0x28) = uStack0000000000000148;
      *(undefined8 *)(unaff_x26 + 0x20) = uStack0000000000000140;
      thunk_FUN_044bb4b4(unaff_x19 + unaff_x23 * 0x38 + 0x28,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


