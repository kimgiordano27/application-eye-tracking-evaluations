/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_102
ENTRY_POINT: 04f9c66c
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


undefined8
OVRPlugin_<>c__<_cctor>b__810_102
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (DAT_066c9e78 == (code *)0x0) {
    DAT_066c9e78 = (code *)thunk_FUN_02b798e4();
  }
  uVar4 = thunk_FUN_02b79b90(param_2);
  if (param_3 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = *(ulong *)(param_3 + 0x18);
    pvVar5 = malloc(uVar8 * 0x28);
    if (0 < (int)uVar8) {
      lVar10 = 0;
      do {
        lVar1 = param_3 + lVar10;
        puVar7 = (undefined8 *)((long)pvVar5 + lVar10);
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_02b79b90(*(undefined8 *)(lVar1 + 0x20));
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_02b79b90(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
    }
  }
  uVar6 = (*DAT_066c9e78)(param_1,uVar4,pvVar5,param_4);
  thunk_FUN_02b79b84(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((param_3 != 0) && (0 < (int)*(ulong *)(param_3 + 0x18))) {
      uVar8 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
        thunk_FUN_02b79b84(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_02b79b84(*puVar7);
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_02b79b84(pvVar5);
  }
  return uVar6;
}


