/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 054655c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  code *unaff_x25;
  
  while( true ) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
                    /* try { // try from 054655d0 to 055655e7 has its CatchHandler @ 05465620 */
    memcpy(&stack0x00000050,&stack0x00000000,0x50);
    (*unaff_x25)(uVar2,&stack0x00000050,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x50;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) ||
       (unaff_w22 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w22 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_07122ac0(0);
      }
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    memcpy(&stack0x00000000,(void *)(lVar1 + unaff_x24),0x50);
    if (unaff_x19 == 0) break;
    unaff_x25 = *(code **)(unaff_x19 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


