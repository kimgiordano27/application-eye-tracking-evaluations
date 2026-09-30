/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_103
ENTRY_POINT: 069800b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_103(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x25;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    uVar4 = thunk_FUN_03ac775c();
    *(undefined8 *)(unaff_x25 + 0x1b0) = uVar4;
  }
  uVar4 = thunk_FUN_03ac7a08();
  if (unaff_x19 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar5 = malloc(uVar8 * 0x28);
    if (0 < (int)uVar8) {
      lVar10 = 0;
      do {
        lVar1 = unaff_x19 + lVar10;
        puVar7 = (undefined8 *)((long)pvVar5 + lVar10);
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_03ac7a08(*(undefined8 *)(lVar1 + 0x20));
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_03ac7a08(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      unaff_x25 = &DAT_0897d000;
    }
  }
  uVar6 = (**(code **)(unaff_x25 + 0x1b0))(param_2,uVar4,pvVar5);
  thunk_FUN_03ac79fc(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
        thunk_FUN_03ac79fc(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_03ac79fc(*puVar7);
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_03ac79fc(pvVar5);
  }
  return uVar6;
}


