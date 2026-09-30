/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_SerializationBinder
ENTRY_POINT: 05617050
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_SerializationBinder
               (uint *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 - 1 < 0x16) {
    switch(param_2 - 1 & 0xffffffff) {
    case 0:
      *(undefined1 *)param_1 = 0;
      return;
    case 1:
      *(undefined2 *)param_1 = 0;
      return;
    case 2:
      *(undefined2 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 2) = 0;
      return;
    case 3:
      *param_1 = 0;
      return;
    case 4:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    case 5:
      *param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      return;
    case 6:
      *param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(undefined1 *)((long)param_1 + 6) = 0;
      return;
    case 7:
      break;
    case 8:
      param_1[0] = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    case 9:
      param_1[0] = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    case 10:
      param_1[0] = 0;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      return;
    case 0xb:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    case 0xc:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    case 0xd:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined2 *)(param_1 + 3) = 0;
      return;
    case 0xe:
      *(undefined8 *)((long)param_1 + 7) = 0;
      break;
    case 0xf:
      param_1[2] = 0;
      param_1[3] = 0;
      break;
    case 0x10:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    case 0x11:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined2 *)(param_1 + 4) = 0;
      return;
    case 0x12:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0xf) = 0;
      return;
    case 0x13:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    case 0x14:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0xd) = 0;
      return;
    case 0x15:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0xe) = 0;
      return;
    default:
      goto switchD_0561709c_default;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  if (0x1ff < param_2) {
    thunk_FUN_02f2b66c(param_1,param_2,0);
    return;
  }
switchD_0561709c_default:
  uVar3 = *param_1;
  if ((uVar3 & 3) == 0) {
    uVar4 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      uVar3 = *param_1;
      uVar4 = 1;
      if ((uVar3 >> 1 & 1) != 0) goto LAB_056170d0;
    }
    *(undefined2 *)((long)param_1 + uVar4) = 0;
    uVar4 = uVar4 | 2;
  }
LAB_056170d0:
  if ((uVar3 - 1 >> 2 & 1) == 0) {
    *(undefined4 *)((long)param_1 + uVar4) = 0;
    uVar4 = uVar4 | 4;
  }
  uVar1 = uVar4;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 0x10;
    *(undefined8 *)((long)param_1 + uVar2) = 0;
    ((undefined8 *)((long)param_1 + uVar2))[1] = 0;
  } while (uVar1 <= param_2 - 0x10);
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


