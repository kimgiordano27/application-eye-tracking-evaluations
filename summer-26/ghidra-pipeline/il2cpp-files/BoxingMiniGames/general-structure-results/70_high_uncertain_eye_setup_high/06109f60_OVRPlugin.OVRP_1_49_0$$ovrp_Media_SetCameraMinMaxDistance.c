/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 06109f60
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long unaff_x23;
  ulong uVar5;
  undefined8 *puVar6;
  
  pcVar3 = *(code **)(unaff_x23 + 0x4c8);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_036800c0();
    *(code **)(unaff_x23 + 0x4c8) = pcVar3;
  }
  if (param_2 == 0) {
    uVar2 = (*pcVar3)(param_1,0);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x18);
    puVar1 = malloc(uVar5 * 8 + 8);
    puVar1[uVar5] = 0;
    if (0 < (int)uVar5) {
      uVar5 = uVar5 & 0xffffffff;
      puVar4 = (undefined8 *)(param_2 + 0x20);
      puVar6 = puVar1;
      do {
        uVar2 = thunk_FUN_0368036c(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar6 = uVar2;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
    uVar2 = (**(code **)(unaff_x23 + 0x4c8))(param_1,puVar1);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar5 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar4 = puVar1;
      do {
        thunk_FUN_03680360(*puVar4);
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    thunk_FUN_03680360(puVar1);
  }
  return uVar2;
}


