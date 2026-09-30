/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 0535a400
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x23;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_NetSync_SetVoipListentoChannels";
  uStack0000000000000018 = 0x23;
  uStack0000000000000020 = DAT_011b1530;
  uStack0000000000000028 = 0x18;
  uStack000000000000002c = 0;
  pcVar2 = (code *)thunk_FUN_02f454a0();
  *(code **)(unaff_x23 + 0xca8) = pcVar2;
  if (unaff_x20 == 0) {
    uVar3 = (*pcVar2)();
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = malloc(uVar5 * 8 + 8);
    puVar1[uVar5] = 0;
    if (0 < (int)uVar5) {
      uVar5 = uVar5 & 0xffffffff;
      puVar4 = (undefined8 *)(unaff_x20 + 0x20);
      puVar6 = puVar1;
      do {
        uVar3 = thunk_FUN_02f4574c(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar6 = uVar3;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
    uVar3 = (**(code **)(unaff_x23 + 0xca8))();
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar5 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar4 = puVar1;
      do {
        thunk_FUN_02f45740(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    thunk_FUN_02f45740(puVar1);
  }
  return uVar3;
}


