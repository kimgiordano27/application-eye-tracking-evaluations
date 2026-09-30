/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 0566bd48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAngularVelocity(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long *unaff_x23;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c(param_1);
  }
  uVar1 = FUN_06350670(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x10);
    if (lVar3 != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = FUN_0634eb94(lVar3,param_2,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
    uVar2 = FUN_056769b0();
    *(undefined8 *)(unaff_x20 + 0x1d8) = uVar2;
    LeanTween__value(unaff_x20 + 0x1d8,uVar2);
    *(undefined4 *)(unaff_x19 + 0x2c0) = 2;
  }
  return;
}


