/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 0513504c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067814c8);
    *(undefined1 *)(unaff_x21 + 0xc8f) = 1;
  }
  lVar1 = *(long *)(unaff_x19 + 0x68);
  if (lVar1 != 0) {
    thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067814c8);
    FUN_0573e324();
                    /* WARNING: Could not recover jumptable at 0x051350ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return;
  }
  return;
}


