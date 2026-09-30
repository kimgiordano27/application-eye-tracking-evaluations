/*
FUNCTION_NAME: FUN_03596b20
ENTRY_POINT: 03596b20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03596b20(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_0412e09a & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412e09a = 1;
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (param_2 == 1) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    if (3 < iVar2) {
      iVar4 = iVar4 >> 2;
      iVar3 = iVar4 * 4;
      iVar2 = 0;
      do {
        iVar3 = iVar3 + -4;
        if (iVar2 < iVar3) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03596bd4(param_1,iVar2,iVar3);
        }
        iVar4 = iVar4 + -1;
        iVar2 = iVar2 + 4;
      } while (iVar4 != 0);
    }
  }
  return;
}


