/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 074df774
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int in_w8;
  uint in_w9;
  int unaff_w19;
  int *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  iVar1 = unaff_x20[5];
  *unaff_x20 = (in_w9 >> 0x13 | in_w9 << 0xd) * unaff_w24;
  if (in_w8 != 0) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    *(undefined1 *)(unaff_x22 + 0xcbe) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    bVar4 = *(char *)(unaff_x22 + 0xcbe) == '\0';
  }
  else {
    bVar4 = false;
  }
  uVar3 = unaff_w25 + iVar1 * unaff_w21;
  iVar1 = unaff_x20[2];
  iVar2 = unaff_x20[6];
  unaff_x20[1] = (uVar3 >> 0x13 | uVar3 * 0x2000) * unaff_w24;
  if (bVar4) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    *(undefined1 *)(unaff_x22 + 0xcbe) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    bVar4 = *(char *)(unaff_x22 + 0xcbe) == '\0';
  }
  else {
    bVar4 = false;
  }
  uVar3 = iVar1 + iVar2 * unaff_w21;
  iVar1 = unaff_x20[3];
  unaff_x20[2] = (uVar3 >> 0x13 | uVar3 * 0x2000) * unaff_w24;
  if (bVar4) {
    FUN_0403162c(PTR_DAT_08f6f6a8);
    *(undefined1 *)(unaff_x22 + 0xcbe) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar3 = iVar1 + unaff_w19 * unaff_w21;
  unaff_x20[3] = (uVar3 >> 0x13 | uVar3 * 0x2000) * unaff_w24;
  return;
}


