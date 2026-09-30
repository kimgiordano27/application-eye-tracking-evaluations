/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 05b63c54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(undefined8 param_1)

{
  long unaff_x19;
  
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = param_1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x38),param_1);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_0848f8e8;
      thunk_FUN_03afed3c();
      FUN_065ce45c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


