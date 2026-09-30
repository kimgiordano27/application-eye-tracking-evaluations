/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Path
ENTRY_POINT: 0404e300
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Path(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  if (unaff_w22 == 0) {
    *(code **)(unaff_x19 + 0x18) = FUN_027df6c8;
  }
  else {
    if (unaff_x20 == 0) {
      uVar1 = thunk_FUN_02b86934(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar1,0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(code **)(unaff_x19 + 0x38) = FUN_027df670;
  return;
}


