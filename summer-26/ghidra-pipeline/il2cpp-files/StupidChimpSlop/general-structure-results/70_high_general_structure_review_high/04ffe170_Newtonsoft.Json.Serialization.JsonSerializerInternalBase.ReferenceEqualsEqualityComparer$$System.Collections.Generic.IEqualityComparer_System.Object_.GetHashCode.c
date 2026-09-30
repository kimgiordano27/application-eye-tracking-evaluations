/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 04ffe170
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
               (void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int in_w8;
  int in_w9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  
  *(int *)(unaff_x20 + 4) = in_w9 * unaff_w24;
  if (in_w8 != 0) {
    FUN_02d4dc40(PTR_DAT_0664acf0);
    *(undefined1 *)(unaff_x22 + 0x835) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    bVar3 = *(char *)(unaff_x22 + 0x835) == '\0';
  }
  else {
    bVar3 = false;
  }
  uVar2 = unaff_w25 + unaff_w26 * unaff_w21;
  iVar1 = *(int *)(unaff_x20 + 0xc);
  *(uint *)(unaff_x20 + 8) = (uVar2 >> 0x13 | uVar2 * 0x2000) * unaff_w24;
  if (bVar3) {
    FUN_02d4dc40(PTR_DAT_0664acf0);
    *(undefined1 *)(unaff_x22 + 0x835) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar2 = iVar1 + unaff_w19 * unaff_w21;
  *(uint *)(unaff_x20 + 0xc) = (uVar2 >> 0x13 | uVar2 * 0x2000) * unaff_w24;
  return;
}


