/*
FUNCTION_NAME: FUN_0570d768
ENTRY_POINT: 0570d768
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0570d768(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  
  if ((DAT_066d22f6 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<OVRTask<bool>>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    FUN_02b3c81c(PTR_DAT_0631f5c8);
    DAT_066d22f6 = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__;
  piVar4 = (int *)(param_1 + 0x80);
  if (0 < *piVar4) {
    iVar5 = 0;
    do {
      lVar2 = FUN_04abb83c(piVar4,iVar5,*(undefined8 *)puVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_056fb950(lVar2,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  puVar1 = Method_System_Collections_Generic_List<OVRTask<bool>>_Add__;
  FUN_057c320c(param_1 + 0x48,0);
  FUN_04abb974(param_1 + 0x68,*(undefined8 *)puVar1);
  FUN_04abb974(piVar4,*(undefined8 *)puVar1);
  plVar3 = (long *)(param_1 + 0xa0);
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0631f5c8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_057235f8(lVar2,0);
    *plVar3 = 0;
    thunk_FUN_02bb0e9c(plVar3,0);
    return;
  }
  return;
}


