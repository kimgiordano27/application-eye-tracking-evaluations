/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 0577709c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (DAT_071c3c88 == (code *)0x0) {
    DAT_071c3c88 = (code *)thunk_FUN_02ef1ac4();
  }
  if (param_2 == 0) {
    uVar5 = (*DAT_071c3c88)(param_1,0,param_3);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x18);
    pvVar4 = malloc(uVar7 * 0x28);
    if ((int)uVar7 < 1) {
      uVar5 = (*DAT_071c3c88)(param_1,pvVar4,param_3);
      if (pvVar4 == (void *)0x0) {
        return uVar5;
      }
    }
    else {
      lVar9 = 0;
      do {
        lVar1 = param_2 + lVar9;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar10 = *(undefined8 *)(lVar1 + 0x40);
        uVar5 = thunk_FUN_02ef1de4(*(undefined8 *)(lVar1 + 0x20));
        puVar6 = (undefined8 *)((long)pvVar4 + lVar9);
        *puVar6 = uVar5;
        *(undefined4 *)(puVar6 + 1) = uVar2;
        uVar5 = thunk_FUN_02ef1de4(uVar8);
        lVar9 = lVar9 + 0x28;
        puVar6[2] = uVar5;
        *(undefined4 *)(puVar6 + 3) = uVar3;
        puVar6[4] = uVar10;
      } while (((uVar7 & 0xffffffff) * 4 + (uVar7 & 0xffffffff)) * 8 - lVar9 != 0);
      uVar5 = (*DAT_071c3c88)(param_1,pvVar4,param_3);
    }
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_02ef1dd8(puVar6[-2]);
        puVar6[-2] = 0;
        thunk_FUN_02ef1dd8(*puVar6);
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 5;
      } while (uVar7 != 0);
    }
    thunk_FUN_02ef1dd8(pvVar4);
  }
  return uVar5;
}


