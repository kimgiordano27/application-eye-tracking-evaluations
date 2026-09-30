/*
FUNCTION_NAME: OVRPlugin$$get_batteryLevel
ENTRY_POINT: 06007980
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_batteryLevel(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    iVar1 = *(int *)(param_1 + (long)(int)unaff_w20 * 4 + 0x20);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar2 = FUN_047af170(*(long *)(unaff_x19 + 0x18),iVar1,*(undefined8 *)PTR_DAT_075f7290);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


