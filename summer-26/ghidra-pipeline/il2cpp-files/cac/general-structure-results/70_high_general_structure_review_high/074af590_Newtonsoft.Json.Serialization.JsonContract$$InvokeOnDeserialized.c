/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 074af590
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
          (undefined4 *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  
  *param_1 = 0x780030;
  uVar2 = param_2 >> 4 & 0xf;
  uVar1 = (short)uVar2 + 0x57;
  if (uVar2 < 10) {
    uVar1 = (ushort)(param_2 >> 4) & 0xf | 0x30;
  }
  *(ushort *)(param_1 + 1) = uVar1;
  uVar1 = (short)(param_2 & 0xf) + 0x57;
  if ((param_2 & 0xf) < 10) {
    uVar1 = (ushort)param_2 & 0xf | 0x30;
  }
  *(ushort *)((long)param_1 + 6) = uVar1;
  uVar2 = param_3 >> 4 & 0xf;
  param_1[2] = 0x30002c;
  *(undefined2 *)(param_1 + 3) = 0x78;
  uVar1 = (short)uVar2 + 0x57;
  if (uVar2 < 10) {
    uVar1 = (ushort)(param_3 >> 4) & 0xf | 0x30;
  }
  *(ushort *)((long)param_1 + 0xe) = uVar1;
  uVar1 = (short)(param_3 & 0xf) + 0x57;
  if ((param_3 & 0xf) < 10) {
    uVar1 = (ushort)param_3 & 0xf | 0x30;
  }
  *(ushort *)(param_1 + 4) = uVar1;
  return 9;
}


