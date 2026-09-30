/*
FUNCTION_NAME: FUN_0589acbc
ENTRY_POINT: 0589acbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0589acbc(undefined8 param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_063214d0;
  if ((DAT_066d3141 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066d3141 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c4a97 == '\0') {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066c4a97 = '\x01';
  }
  lVar1 = *(long *)puVar4;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0x11) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 1) & 3) == 0) {
    if (*param_2 != 0) {
      return;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar2 = thunk_FUN_02b79644();
    puVar4 = Method_System_Nullable<OVRPlugin_XrApi>__ctor__;
  }
  else {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar2 = thunk_FUN_02b79644();
    puVar4 = Method_System_Nullable<OVRPlugin_Result>_get_Value__;
  }
  uVar3 = thunk_FUN_02ba3594(puVar4);
  FUN_04cf4a4c(uVar2,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2,uVar3);
}


