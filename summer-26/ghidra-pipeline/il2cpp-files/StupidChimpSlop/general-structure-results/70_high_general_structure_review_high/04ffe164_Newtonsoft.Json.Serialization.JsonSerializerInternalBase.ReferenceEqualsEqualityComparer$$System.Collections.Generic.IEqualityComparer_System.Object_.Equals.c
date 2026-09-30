/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 04ffe164
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int in_w8;
  uint in_w9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  
  iVar1 = *(int *)(unaff_x20 + 8);
  iVar2 = *(int *)(unaff_x20 + 0x18);
  *(uint *)(unaff_x20 + 4) = (in_w9 >> 0x13 | in_w9 << 0xd) * unaff_w24;
  if (in_w8 != 0) {
    FUN_02d4dc40(PTR_DAT_0664acf0);
    *(undefined1 *)(unaff_x22 + 0x835) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    bVar4 = *(char *)(unaff_x22 + 0x835) == '\0';
  }
  else {
    bVar4 = false;
  }
  uVar3 = iVar1 + iVar2 * unaff_w21;
  iVar1 = *(int *)(unaff_x20 + 0xc);
  *(uint *)(unaff_x20 + 8) = (uVar3 >> 0x13 | uVar3 * 0x2000) * unaff_w24;
  if (bVar4) {
    FUN_02d4dc40(PTR_DAT_0664acf0);
    *(undefined1 *)(unaff_x22 + 0x835) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar3 = iVar1 + unaff_w19 * unaff_w21;
  *(uint *)(unaff_x20 + 0xc) = (uVar3 >> 0x13 | uVar3 * 0x2000) * unaff_w24;
  return;
}


