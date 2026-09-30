/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 069273f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_2 + 0x30) != 0) {
    uVar1 = FUN_07fc86d4(*(long *)(param_2 + 0x30),0);
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_07fc87b0(uVar1,param_1,*(long *)(param_2 + 0x30),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


