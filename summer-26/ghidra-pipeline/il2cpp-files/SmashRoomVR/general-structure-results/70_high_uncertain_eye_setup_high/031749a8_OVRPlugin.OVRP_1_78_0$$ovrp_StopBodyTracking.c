/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopBodyTracking
ENTRY_POINT: 031749a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopBodyTracking(void)

{
  long *plVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  
  *(undefined1 *)(unaff_x21 + 0x127) = in_w8;
  plVar3 = (long *)(unaff_x20 + 0x48);
  plVar1 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(*plVar3);
  if (plVar1 == (long *)0x0) {
    *plVar3 = 0;
  }
  else {
    lVar2 = *(long *)Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
    if ((*plVar1 != lVar2) || (*plVar3 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar1);
    }
  }
  thunk_FUN_01b4f09c(plVar3,plVar1);
  if (*(char *)(unaff_x20 + 0x71) == '\0') {
    return;
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03174a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


