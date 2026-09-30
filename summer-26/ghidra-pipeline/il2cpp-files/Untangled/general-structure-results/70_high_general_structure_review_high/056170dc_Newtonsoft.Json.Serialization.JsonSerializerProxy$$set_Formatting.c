/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Formatting
ENTRY_POINT: 056170dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Formatting(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong in_x9;
  ulong uVar4;
  
  uVar1 = in_x9 | 4;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 0x10;
    *(undefined8 *)(param_1 + uVar2) = 0;
    ((undefined8 *)(param_1 + uVar2))[1] = 0;
  } while (uVar1 <= param_2 - 0x10U);
  uVar4 = param_2 - (in_x9 | 4);
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 3 & 1) != 0) {
    *(undefined8 *)(param_1 + uVar1) = 0;
    uVar1 = uVar2 + 0x18;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(undefined4 *)(param_1 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    *(undefined2 *)(param_1 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


