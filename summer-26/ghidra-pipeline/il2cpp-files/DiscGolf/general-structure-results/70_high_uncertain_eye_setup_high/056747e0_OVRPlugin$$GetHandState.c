/*
FUNCTION_NAME: OVRPlugin$$GetHandState
ENTRY_POINT: 056747e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandState(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  int iVar3;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  if (unaff_x19 != 0) {
    iVar1 = FUN_0635f748();
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        FUN_06360120();
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    uVar2 = FUN_0634bbcc();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x22);
    }
    FUN_063550b4(uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


