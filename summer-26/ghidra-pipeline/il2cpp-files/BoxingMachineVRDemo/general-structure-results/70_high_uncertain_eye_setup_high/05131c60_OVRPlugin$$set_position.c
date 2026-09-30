/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 05131c60
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)thunk_FUN_02d709fc(param_1,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
  thunk_FUN_02dc61f4(PTR_DAT_06781158);
  FUN_050f0ec0();
  uVar2 = FUN_05095eec();
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06781358);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,uVar3);
}


