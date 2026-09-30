/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 0513359c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_batteryStatus(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_067811f0);
  FUN_02d6084c(PTR_DAT_067811f8);
  *(undefined1 *)(unaff_x21 + 0xc7b) = 1;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  (**(code **)(*unaff_x19 + 0x908))();
  puVar1 = PTR_DAT_067811f0;
  if (unaff_x19[6] != 0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x638))();
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_05736718(uVar3,4,uVar2,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  puVar1 = PTR_DAT_067811f8;
  if (unaff_x19[8] != 0) {
    (**(code **)(*unaff_x19 + 0x638))();
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_05765098(uVar3,2);
                    /* WARNING: Could not recover jumptable at 0x051336b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


