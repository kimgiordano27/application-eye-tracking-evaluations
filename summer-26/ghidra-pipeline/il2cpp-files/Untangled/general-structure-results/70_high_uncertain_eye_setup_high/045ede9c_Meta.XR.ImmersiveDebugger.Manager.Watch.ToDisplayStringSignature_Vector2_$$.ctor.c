/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 045ede9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor(long param_1)

{
  long unaff_x19;
  long unaff_x22;
  long lVar1;
  long unaff_x23;
  long unaff_x24;
  
  do {
    lVar1 = unaff_x22;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x24,unaff_x23);
    }
    do {
      unaff_x22 = FUN_02eca9b4();
      if (lVar1 == unaff_x22) {
        return;
      }
      unaff_x24 = FUN_05649124(unaff_x22);
      unaff_x23 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(unaff_x23 + 0x135) & 1) == 0) {
        unaff_x23 = FUN_02eea768(unaff_x23);
      }
      lVar1 = unaff_x22;
    } while (unaff_x24 == 0);
    param_1 = thunk_FUN_02ef170c(unaff_x24,unaff_x23);
  } while( true );
}


