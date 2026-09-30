/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 074a4cf4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x24;
  long lVar10;
  undefined8 uVar11;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x3c5;
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_HTTP_StartTransfer";
  uStack0000000000000018 = 0x16;
  uStack0000000000000028 = 0x18;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar5 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x24 + 0xcd8) = pcVar5;
  if (unaff_x19 == 0) {
    uVar6 = (*pcVar5)();
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar4 = malloc(uVar8 * 0x28);
    if ((int)uVar8 < 1) {
      uVar6 = (**(code **)(unaff_x24 + 0xcd8))();
      if (pvVar4 == (void *)0x0) {
        return uVar6;
      }
    }
    else {
      lVar10 = 0;
      do {
        lVar1 = unaff_x19 + lVar10;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_03d2f51c(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar4 + lVar10);
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_03d2f51c(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      uVar6 = (**(code **)(unaff_x24 + 0xcd8))();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_03d2f510(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_03d2f510(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_03d2f510(pvVar4);
  }
  return uVar6;
}


