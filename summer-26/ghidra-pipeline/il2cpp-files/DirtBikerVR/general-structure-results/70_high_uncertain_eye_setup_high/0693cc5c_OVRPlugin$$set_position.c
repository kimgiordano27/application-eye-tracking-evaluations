/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 0693cc5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(void)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  
  thunk_FUN_03afed3c();
  uVar2 = *unaff_x19;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9e200(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6158,0);
    return;
  }
  return;
}


