/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 05bc99b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor
               (undefined8 *param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000060 = param_4;
  uStack0000000000000070 = param_2;
  thunk_FUN_0406db0c(*param_1);
  thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0));
  if (unaff_x21 != 0) {
    FUN_0747f5b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


