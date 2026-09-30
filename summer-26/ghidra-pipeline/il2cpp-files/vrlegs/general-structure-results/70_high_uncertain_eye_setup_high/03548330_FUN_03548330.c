/*
FUNCTION_NAME: FUN_03548330
ENTRY_POINT: 03548330
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_03548330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_0412df17 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbedd0);
    FUN_01ab69ac(PTR_DAT_03cc4e48);
    FUN_01ab69ac(PTR_DAT_03cbec50);
    DAT_0412df17 = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = FUN_0285e708(*(long *)(param_1 + 0x58),param_2,0);
  puVar1 = OVRPlugin_EyeTextureFormat_TypeInfo;
  FUN_01f77efc(uVar2,&local_28,*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo);
  uVar3 = FUN_025be440(local_28,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_0285e708(*(long *)(param_1 + 0x58),param_2,0);
    FUN_01f77efc(uVar2,&local_28,*(undefined8 *)puVar1);
    uVar2 = local_28;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_03cbec50;
  }
  if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_0274780c(uVar2,&local_38,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_0285e708(*(long *)(param_1 + 0x58),param_2,0);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_02800be0(uVar2,uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_025c0358(lVar4,*(undefined8 *)PTR_DAT_03cc4e48,*(undefined8 *)PTR_DAT_03cbec50,0);
  }
  return uVar2;
}


