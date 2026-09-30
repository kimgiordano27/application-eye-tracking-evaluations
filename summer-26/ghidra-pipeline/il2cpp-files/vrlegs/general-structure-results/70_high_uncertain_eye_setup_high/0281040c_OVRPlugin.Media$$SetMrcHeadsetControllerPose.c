/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 0281040c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01a6ca08();
  FUN_01876390();
  uVar1 = FUN_0271c480(0);
  uVar2 = FUN_0282f680();
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2a0);
  FUN_0282f8b0(uVar3,uVar1,uVar2,0);
  uVar1 = FUN_028109c0();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfe2c8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


