/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 07412678
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel(undefined8 param_1)

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
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar2 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x22 + 0xd00) = pcVar2;
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
        uVar3 = thunk_FUN_03cf5810(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar6 = uVar3;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
    uVar3 = (**(code **)(unaff_x22 + 0xd00))(puVar1,unaff_w19);
    if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
      uVar5 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      puVar4 = puVar1;
      do {
        thunk_FUN_03cf5804(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    thunk_FUN_03cf5804(puVar1);
  }
  return uVar3;
}


