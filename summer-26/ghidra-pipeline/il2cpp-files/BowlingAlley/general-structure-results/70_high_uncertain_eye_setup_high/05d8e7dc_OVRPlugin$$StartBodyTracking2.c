/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 05d8e7dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  
  uVar1 = FUN_06becffc(param_1,0);
  uVar2 = thunk_FUN_057aa644(uVar1,*(undefined8 *)PTR_DAT_0728ded0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05d8e848;
    FUN_06ba5a5c(*(long *)(unaff_x19 + 0x20),0);
  }
  lVar3 = FUN_03958adc();
  if (lVar3 != 0) {
    FUN_05d8d60c();
    FUN_06ba6670(*(undefined8 *)(unaff_x19 + 0x40),0);
    return;
  }
LAB_05d8e848:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


