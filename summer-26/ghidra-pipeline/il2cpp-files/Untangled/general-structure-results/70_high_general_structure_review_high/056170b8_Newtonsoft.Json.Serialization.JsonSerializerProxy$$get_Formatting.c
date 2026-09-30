/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 056170b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  *(undefined1 *)param_1 = 0;
  uVar4 = 1;
  if ((*param_1 >> 1 & 1) == 0) {
    *(undefined2 *)((long)param_1 + 1) = 0;
    uVar4 = 3;
  }
  if ((*param_1 - 1 >> 2 & 1) == 0) {
    *(undefined4 *)((long)param_1 + uVar4) = 0;
    uVar4 = uVar4 | 4;
  }
  uVar1 = uVar4;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 0x10;
    *(undefined8 *)((long)param_1 + uVar2) = 0;
    ((undefined8 *)((long)param_1 + uVar2))[1] = 0;
  } while (uVar1 <= param_2 - 0x10U);
  uVar3 = (uint)(param_2 - uVar4);
  if ((uVar3 >> 3 & 1) != 0) {
    *(undefined8 *)((long)param_1 + uVar1) = 0;
    uVar1 = uVar2 + 0x18;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(undefined4 *)((long)param_1 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    *(undefined2 *)((long)param_1 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((param_2 - uVar4 & 1) == 0) {
    return;
  }
  *(undefined1 *)((long)param_1 + uVar1) = 0;
  return;
}


