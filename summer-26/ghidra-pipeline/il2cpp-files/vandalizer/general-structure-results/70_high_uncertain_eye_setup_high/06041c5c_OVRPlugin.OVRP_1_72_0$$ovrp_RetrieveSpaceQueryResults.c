/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RetrieveSpaceQueryResults
ENTRY_POINT: 06041c5c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x22;
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
  pcStack0000000000000010 = "ovr_Achievements_GetProgressByName";
  uStack0000000000000018 = 0x22;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar2 = (code *)thunk_FUN_0322f404();
  *(code **)(unaff_x22 + 0xf08) = pcVar2;
  if (unaff_x20 == 0) {
    uVar3 = (*pcVar2)(0,unaff_w19);
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
        uVar3 = thunk_FUN_0322f724(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar6 = uVar3;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
    uVar3 = (**(code **)(unaff_x22 + 0xf08))(puVar1,unaff_w19);
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar5 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar4 = puVar1;
      do {
        thunk_FUN_0322f718(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    thunk_FUN_0322f718(puVar1);
  }
  return uVar3;
}


