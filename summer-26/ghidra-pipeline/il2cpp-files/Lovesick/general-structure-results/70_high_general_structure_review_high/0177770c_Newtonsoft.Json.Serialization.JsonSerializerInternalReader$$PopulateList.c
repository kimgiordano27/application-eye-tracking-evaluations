/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 0177770c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(void)

{
  short sVar1;
  uint in_w8;
  short in_w9;
  ulong in_x10;
  int in_w12;
  long unaff_x19;
  int iVar2;
  ulong unaff_x22;
  ulong uVar3;
  short *unaff_x24;
  
  while( true ) {
    uVar3 = in_x10 >> 0x23;
    unaff_x24 = unaff_x24 + -1;
    *unaff_x24 = (short)unaff_x22 + (short)(uint)(in_x10 >> 0x23) * in_w9 + 0x30;
    if ((in_w12 < 0) && ((uint)unaff_x22 < 10)) break;
    in_x10 = uVar3 * in_w8;
    unaff_x22 = uVar3;
    in_w12 = in_w12 + -1;
  }
  iVar2 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar2 + -1) {
    do {
      iVar2 = iVar2 + -1;
      sVar1 = FUN_015fa29c();
      unaff_x24 = unaff_x24 + -1;
      *unaff_x24 = sVar1;
    } while (0 < iVar2);
  }
  return;
}


