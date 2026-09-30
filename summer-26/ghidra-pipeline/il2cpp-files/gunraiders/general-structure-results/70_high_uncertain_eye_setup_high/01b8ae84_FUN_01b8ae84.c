/*
FUNCTION_NAME: FUN_01b8ae84
ENTRY_POINT: 01b8ae84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_01b8ae84(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((DAT_04533209 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Media_TypeInfo);
    DAT_04533209 = 1;
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (*param_1 == 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(*param_1,*(undefined8 *)OVRPlugin_Media_TypeInfo);
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    thunk_FUN_01c59ccc(*param_1,*(undefined8 *)puVar1);
    if ((*(byte *)(**(long **)(param_2 + 0x10) + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574(*(long **)(param_2 + 0x10),OVRPlugin_LogLevel_TypeInfo,*param_1);
    }
  }
  *(long *)(param_2 + 0x18) = param_1[1];
  if (param_1[2] == 0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(param_1[2],*(undefined8 *)puVar1);
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    thunk_FUN_01c59ccc(param_1[2],*(undefined8 *)puVar1);
    if ((*(byte *)(**(long **)(param_2 + 0x20) + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574(*(long **)(param_2 + 0x20),OVRPlugin_LogLevel_TypeInfo,param_1[2]);
    }
  }
  if (param_1[3] == 0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(param_1[3],*(undefined8 *)puVar1);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    thunk_FUN_01c59ccc(param_1[3],*(undefined8 *)puVar1);
    if ((*(byte *)(**(long **)(param_2 + 0x28) + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574(*(long **)(param_2 + 0x28),OVRPlugin_LogLevel_TypeInfo,param_1[3]);
    }
  }
  if (param_1[4] == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(param_1[4],*(undefined8 *)puVar1);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    thunk_FUN_01c59ccc(param_1[4],*(undefined8 *)puVar1);
    if ((*(byte *)(**(long **)(param_2 + 0x30) + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574(*(long **)(param_2 + 0x30),OVRPlugin_LogLevel_TypeInfo,param_1[4]);
    }
  }
  if (param_1[5] == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else {
    uVar2 = thunk_FUN_01c59ccc(param_1[5],*(undefined8 *)puVar1);
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    thunk_FUN_01c59ccc(param_1[5],*(undefined8 *)puVar1);
    if ((*(byte *)(**(long **)(param_2 + 0x38) + 0x136) >> 4 & 1) != 0) {
      FUN_01c5d574(*(long **)(param_2 + 0x38),OVRPlugin_LogLevel_TypeInfo,param_1[5]);
      return;
    }
  }
  return;
}


