/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 031545f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)thunk_FUN_01acfdbc();
  puVar1 = PTR_DAT_03d80360;
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    FUN_02ede300(*(undefined8 *)puVar1,uVar3,0);
    FUN_02edd6e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


