/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 050a5f1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly
               (long param_1,undefined1 param_2 [16])

{
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = unaff_x27[1];
  uStack0000000000000000 = *unaff_x27;
  unaff_x27[1] = param_2._8_8_;
  *unaff_x27 = param_2._0_8_;
  thunk_FUN_03afed3c(unaff_x21 + param_1 * 0x10,0);
                    /* try { // try from 050a5f3c to 051a5f87 has its CatchHandler @ 050a5f3c
                       catch() { ... } // from try @ 050a5f3c with catch @ 050a5f3c
                       catch() { ... } // from try @ 050a5fec with catch @ 050a5f3c
                       catch() { ... } // from try @ 050a601c with catch @ 050a5f3c
                       catch() { ... } // from try @ 050a6098 with catch @ 050a5f3c */
  if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
    unaff_x28[1] = uStack0000000000000008;
    *unaff_x28 = uStack0000000000000000;
    thunk_FUN_03afed3c(unaff_x21 + unaff_x29 * 0x10,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


