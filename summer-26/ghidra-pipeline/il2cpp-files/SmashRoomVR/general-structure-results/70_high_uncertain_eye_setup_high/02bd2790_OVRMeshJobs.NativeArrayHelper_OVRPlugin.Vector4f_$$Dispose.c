/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02bd2790
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  do {
                    /* catch() { ... } // from try @ 02bd2780 with catch @ 02bd2790 */
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),
                       *(undefined8 *)(param_1 + unaff_x21 * 8 + 0x20),
                       *(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) != 0) {
LAB_02bd27bc:
      return unaff_x21 & 0xffffffff;
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x22 == unaff_x21) {
      unaff_x21 = 0xffffffff;
      goto LAB_02bd27bc;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


