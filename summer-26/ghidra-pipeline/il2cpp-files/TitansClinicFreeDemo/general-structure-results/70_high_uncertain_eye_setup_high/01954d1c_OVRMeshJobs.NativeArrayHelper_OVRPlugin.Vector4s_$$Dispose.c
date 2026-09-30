/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 01954d1c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
    *(undefined8 *)(lVar1 + (long)(int)unaff_w21 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01286abc();
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


