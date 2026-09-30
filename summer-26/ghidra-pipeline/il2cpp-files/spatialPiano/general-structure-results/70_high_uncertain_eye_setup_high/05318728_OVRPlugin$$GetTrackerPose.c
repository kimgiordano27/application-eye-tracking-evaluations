/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 05318728
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x21;
  
  thunk_FUN_02f6670c();
                    /* try { // try from 05318734 to 0541875b has its CatchHandler @ 053188f4 */
  uVar1 = FUN_060f245c();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
                    /* try { // try from 053187a0 to 054187c7 has its CatchHandler @ 053188f0 */
    uVar1 = FUN_060f078c(uVar2,0,0);
  }
  else {
    uVar2 = FUN_03356cdc();
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x21);
    }
    uVar1 = FUN_060f078c(uVar2,0,0);
  }
  if ((uVar1 & 1) != 0) {
    FUN_053187c4();
    return;
  }
  return;
}


