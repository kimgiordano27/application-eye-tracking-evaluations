/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 074df710
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int in_w8;
  int unaff_w19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w24;
  int unaff_w25;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_0953ecbe == '\0') {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    DAT_0953ecbe = '\x01';
  }
  puVar4 = PTR_DAT_08f6f6a8;
  if (*(int *)(*(long *)PTR_DAT_08f6f6a8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    bVar5 = DAT_0953ecbe == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar3 = unaff_w24 + unaff_w25 * unaff_w21;
  iVar1 = unaff_x20[1];
  iVar2 = unaff_x20[5];
  *unaff_x20 = (uVar3 >> 0x13 | uVar3 * 0x2000) * -0x61c8864f;
  if (bVar5) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    DAT_0953ecbe = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    bVar5 = DAT_0953ecbe == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar3 = iVar1 + iVar2 * unaff_w21;
  iVar1 = unaff_x20[2];
  iVar2 = unaff_x20[6];
  unaff_x20[1] = (uVar3 >> 0x13 | uVar3 * 0x2000) * -0x61c8864f;
  if (bVar5) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    DAT_0953ecbe = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    bVar5 = DAT_0953ecbe == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar3 = iVar1 + iVar2 * unaff_w21;
  iVar1 = unaff_x20[3];
  unaff_x20[2] = (uVar3 >> 0x13 | uVar3 * 0x2000) * -0x61c8864f;
  if (bVar5) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    DAT_0953ecbe = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = iVar1 + unaff_w19 * unaff_w21;
  unaff_x20[3] = (uVar3 >> 0x13 | uVar3 * 0x2000) * -0x61c8864f;
  return;
}


