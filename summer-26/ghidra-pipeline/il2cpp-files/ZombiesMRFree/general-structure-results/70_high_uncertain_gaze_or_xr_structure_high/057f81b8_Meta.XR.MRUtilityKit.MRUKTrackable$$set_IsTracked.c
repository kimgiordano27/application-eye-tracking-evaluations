/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$set_IsTracked
ENTRY_POINT: 057f81b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKTrackable__set_IsTracked(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03048534();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02fe9358(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(param_1 + 0x18) = FUN_02c7a8b4;
    goto LAB_057f8218;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
LAB_057f8218:
  *(code **)(param_1 + 0x38) = FUN_02c7a854;
  return;
}


