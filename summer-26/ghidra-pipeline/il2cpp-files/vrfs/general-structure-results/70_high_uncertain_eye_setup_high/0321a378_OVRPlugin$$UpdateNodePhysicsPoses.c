/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 0321a378
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_0159f088(PTR_DAT_06e5a7a8);
  uVar1 = FUN_02d8efe4();
  thunk_FUN_0159f088(PTR_DAT_06e1d950);
  uVar2 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  FUN_032192a4(uVar2,uVar1);
  uVar1 = thunk_FUN_0159f088(PTR_DAT_06e213c0);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,uVar1);
}


