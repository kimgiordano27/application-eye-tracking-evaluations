/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector4f>$$get_Array
ENTRY_POINT: 055cbf9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_ArraySegment<OVRPlugin_Vector4f>__get_Array
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  code *in_x9;
  undefined8 in_x10;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000068 = param_3._8_8_;
  uStack0000000000000060 = param_3._0_8_;
  uStack0000000000000018 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
    uStack0000000000000030 = unaff_x20[6];
    uStack0000000000000028 = unaff_x20[5];
    uStack0000000000000020 = unaff_x20[4];
    uStack0000000000000070 = in_x10;
    uVar1 = (*in_x9)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x23 = unaff_x23 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x23 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    in_x10 = *(undefined8 *)(unaff_x24 + 0x68);
    uStack0000000000000068 = *(undefined8 *)(unaff_x24 + 0x60);
    uStack0000000000000060 = *(undefined8 *)(unaff_x24 + 0x58);
    in_x9 = *(code **)(*unaff_x22 + 0x1b8);
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uStack0000000000000018 = unaff_x20[3];
    uStack0000000000000010 = unaff_x20[2];
    unaff_x24 = unaff_x24 + 0x38;
  }
  return 0xffffffff;
}


