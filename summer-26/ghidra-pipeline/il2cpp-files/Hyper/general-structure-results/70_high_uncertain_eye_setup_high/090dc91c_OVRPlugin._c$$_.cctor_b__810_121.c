/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_121
ENTRY_POINT: 090dc91c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_121(undefined8 param_1)

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
  undefined8 uStack0000000000000000;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "ovr_PlatformInitializeWithAccessTokenAndOptions";
  uStack0000000000000018 = 0x2f;
  uStack0000000000000020 = DAT_01da5b68;
  uStack0000000000000028 = 0x20;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uVar4 = thunk_FUN_04984200();
  *(undefined8 *)(unaff_x25 + 0x608) = uVar4;
  uVar4 = thunk_FUN_049844ac();
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
        uVar6 = thunk_FUN_049844ac(*(undefined8 *)(lVar1 + 0x20));
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_049844ac(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      unaff_x25 = &DAT_0b330000;
    }
  }
  uVar6 = (**(code **)(unaff_x25 + 0x608))();
  thunk_FUN_049844a0(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
        thunk_FUN_049844a0(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_049844a0(*puVar7);
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_049844a0(pvVar5);
  }
  return uVar6;
}


