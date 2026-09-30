/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldSerialize
ENTRY_POINT: 050025ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  
  *(uint *)(unaff_x19 + 4) = (unaff_w25 >> 0x13 | unaff_w25 << 0xd) * unaff_w24;
  if (in_w8 != 0) {
    FUN_02d6084c(PTR_DAT_06768248);
    *(undefined1 *)(unaff_x22 + 0x34c) = 1;
  }
  uVar2 = unaff_w26 + unaff_w27 * unaff_w21;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    bVar3 = *(char *)(unaff_x22 + 0x34c) == '\0';
  }
  else {
    bVar3 = false;
  }
  iVar1 = *(int *)(unaff_x19 + 0xc);
  *(uint *)(unaff_x19 + 8) = (uVar2 >> 0x13 | uVar2 * 0x2000) * unaff_w24;
  if (bVar3) {
    FUN_02d6084c(PTR_DAT_06768248);
    *(undefined1 *)(unaff_x22 + 0x34c) = 1;
  }
  uVar2 = iVar1 + unaff_w20 * unaff_w21;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  *(uint *)(unaff_x19 + 0xc) = (uVar2 >> 0x13 | uVar2 * 0x2000) * unaff_w24;
  return;
}


