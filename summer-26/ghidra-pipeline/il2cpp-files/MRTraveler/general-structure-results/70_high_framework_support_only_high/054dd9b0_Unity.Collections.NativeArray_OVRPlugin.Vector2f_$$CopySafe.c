/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 054dd9b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (undefined8 *param_1,undefined1 param_2 [16])

{
  bool in_ZR;
  bool in_CY;
  undefined8 in_x10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  
  uStack00000000000000c8 = param_2._8_8_;
  uStack00000000000000c0 = param_2._0_8_;
  if (in_CY && !in_ZR) {
    uVar2 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x26 + 0x20);
    param_1[2] = *(undefined8 *)(unaff_x26 + 0x30);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack00000000000000d0 = in_x10;
    thunk_FUN_03d233cc(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x26 + 0x30) = uStack00000000000000d0;
      *(undefined8 *)(unaff_x26 + 0x28) = uStack00000000000000c8;
      *(undefined8 *)(unaff_x26 + 0x20) = uStack00000000000000c0;
      thunk_FUN_03d233cc(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


