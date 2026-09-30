/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 04972a24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w22 * 0x10;
    puVar1 = (undefined8 *)(param_1 + 0x28);
    *puVar1 = unaff_x20;
    *(undefined8 *)(param_1 + 0x20) = unaff_x21;
    thunk_FUN_0329bf60(puVar1,0);
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


