/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 0748509c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNativeOpenXRInstance(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_073a3240();
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092237a8);
    FUN_0747fd14(uVar1,uVar4);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
    thunk_FUN_03d1023c((long *)(unaff_x19 + 0x40),uVar1);
  }
  plVar3 = (long *)(unaff_x19 + 0x48);
  if (*plVar3 == 0) {
    lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092212e0);
    FUN_0747f8a0();
    *plVar3 = lVar2;
    thunk_FUN_03d1023c(plVar3,lVar2);
  }
  FUN_073a32e4();
  return;
}


