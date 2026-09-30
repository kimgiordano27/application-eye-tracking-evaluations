/*
FUNCTION_NAME: OVRPlugin.OVRP_1_107_0$$.cctor
ENTRY_POINT: 06b0474c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_107_0___cctor(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  pcVar2 = DAT_086e2c78;
  if (DAT_086e2c78 == (code *)0x0) {
    pcVar2 = (code *)FUN_03398d30();
  }
  DAT_086e2c78 = pcVar2;
  if (param_2 == 0) {
    uVar1 = (*pcVar2)(param_1,0,param_3);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x18);
    __ptr = malloc(uVar4 * 8 + 8);
    __ptr[uVar4] = 0;
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(param_2 + 0x20);
      puVar5 = __ptr;
      do {
        uVar1 = FUN_03399068(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar1;
        pcVar2 = DAT_086e2c78;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    uVar1 = (*pcVar2)(param_1,__ptr,param_3);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar3 = __ptr;
      do {
        if ((void *)*puVar3 != (void *)0x0) {
          free((void *)*puVar3);
        }
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    free(__ptr);
  }
  return uVar1;
}


