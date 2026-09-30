/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 01f7f2bc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01279b34();
  uVar1 = thunk_FUN_0124bba8();
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1210);
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1218);
  FUN_01e7598c(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1228);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar1,uVar2);
}


