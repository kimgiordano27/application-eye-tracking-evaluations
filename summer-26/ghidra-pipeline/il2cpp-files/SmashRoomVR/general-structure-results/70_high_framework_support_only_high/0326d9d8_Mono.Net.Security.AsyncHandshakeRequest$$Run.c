/*
FUNCTION_NAME: Mono.Net.Security.AsyncHandshakeRequest$$Run
ENTRY_POINT: 0326d9d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Mono_Net_Security_AsyncHandshakeRequest__Run(void)

{
  undefined4 uVar1;
  void *pvVar2;
  code *pcVar3;
  ulong uVar4;
  long in_x12;
  undefined4 unaff_w19;
  long unaff_x20;
  ulong __size;
  long unaff_x23;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0xe98);
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetExternalCameraName";
  uStack0000000000000018 = 0x1a;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  pcVar3 = (code *)thunk_FUN_01afad98();
  *(code **)(unaff_x23 + 0xd18) = pcVar3;
  if (unaff_x20 == 0) {
    uVar1 = (*pcVar3)(unaff_w19,0);
  }
  else {
    __size = *(ulong *)(unaff_x20 + 0x18);
    pvVar2 = malloc(__size);
    if ((int)__size < 1) {
      uVar1 = (**(code **)(unaff_x23 + 0xd18))(unaff_w19,pvVar2);
      if (pvVar2 == (void *)0x0) {
        return uVar1;
      }
    }
    else {
      uVar4 = 0;
      do {
        *(char *)((long)pvVar2 + uVar4) = (char)*(undefined2 *)(unaff_x20 + 0x20 + uVar4 * 2);
        uVar4 = uVar4 + 1;
      } while ((__size & 0xffffffff) != uVar4);
      uVar1 = (**(code **)(unaff_x23 + 0xd18))(unaff_w19,pvVar2);
    }
    thunk_FUN_01afb0ac(pvVar2);
  }
  return uVar1;
}


