/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 02bd2824
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  ulong in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  
  while( true ) {
    if (in_x9 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x19 == 0) break;
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(param_1 + unaff_x22 * 8 + 0x20),
               *(undefined8 *)(unaff_x19 + 0x28));
    unaff_x22 = unaff_x22 + 1;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) ||
       (unaff_w21 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w21 == *(int *)(unaff_x20 + 0x1c)) {
        return;
      }
      FUN_03060a50(0);
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) break;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


