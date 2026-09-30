/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnly
ENTRY_POINT: 050a1c08
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_3._8_8_;
  uStack0000000000000000 = param_3._0_8_;
  param_1[1] = param_2._8_8_;
  *param_1 = param_2._0_8_;
  thunk_FUN_03afed3c(in_x9 + 8);
  if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
    unaff_x21[1] = uStack0000000000000008;
    *unaff_x21 = uStack0000000000000000;
    thunk_FUN_03afed3c(unaff_x21 + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


