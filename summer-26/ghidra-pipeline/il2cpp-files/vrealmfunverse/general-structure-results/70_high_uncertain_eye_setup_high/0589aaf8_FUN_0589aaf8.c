/*
FUNCTION_NAME: FUN_0589aaf8
ENTRY_POINT: 0589aaf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0589aaf8(undefined8 param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [208];
  undefined8 local_28;
  undefined *puVar6;
  
  puVar6 = PTR_DAT_063214d0;
  if ((DAT_066d3140 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063214d0);
    FUN_02b3c81c(PTR_DAT_06320ca8);
    FUN_02b3c81c(Method_System_Nullable<MRUK_SharedRoomsData>__ctor__);
    DAT_066d3140 = 1;
  }
  memset(auStack_100,0,0xd0);
  local_28 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c4a97 == '\0') {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066c4a97 = '\x01';
  }
  lVar2 = *(long *)puVar6;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar6;
  }
  puVar6 = Method_System_Nullable<MRUK_SharedRoomsData>__ctor__;
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x11) != '\0') {
    memcpy(auStack_100,param_2,0xd0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05cd09bc(auStack_100,0);
    puVar6 = PTR_DAT_06320ca8;
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = Method_System_Nullable<OVRPlugin_Posef>_get_Value__;
LAB_0589ac90:
      uVar5 = thunk_FUN_02ba3594(puVar6);
      FUN_04cf4a4c(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02ba3594(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar5);
    }
    local_28 = *(undefined8 *)((long)param_2 + 8);
    if (*(int *)(*(long *)PTR_DAT_06320ca8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar1 = FUN_05cc6384(&local_28,0);
    if (iVar1 == 0) {
      local_28 = *(undefined8 *)((long)param_2 + 8);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar1 = FUN_05cc638c(&local_28,0);
      if (iVar1 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar4 = thunk_FUN_02b79644();
        puVar6 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
        goto LAB_0589ac90;
      }
    }
  }
  return;
}


