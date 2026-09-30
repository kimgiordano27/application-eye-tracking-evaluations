/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 07107b4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined1 in_CY;
  short in_w8;
  uint in_w9;
  int iVar5;
  int in_w10;
  short unaff_w19;
  ulong unaff_x20;
  int unaff_w22;
  short *unaff_x23;
  uint unaff_w24;
  
  while( true ) {
    sVar3 = in_w8;
    if ((bool)in_CY) {
      sVar3 = unaff_w19;
    }
    unaff_x20 = unaff_x20 >> 4 & 0xfffffff;
    unaff_x23 = unaff_x23 + -1;
    *unaff_x23 = sVar3 + (short)in_w9;
    if ((in_w10 < 0) && ((uint)unaff_x20 == 0)) break;
    in_w9 = (uint)unaff_x20 & 0xf;
    in_CY = 9 < in_w9;
    in_w10 = in_w10 + -1;
  }
  iVar5 = unaff_w22 + -10;
  do {
    uVar1 = unaff_w24 & 0xf;
    sVar3 = 0x30;
    if (9 < uVar1) {
      sVar3 = unaff_w19;
    }
    unaff_w24 = unaff_w24 >> 4;
    unaff_x23 = unaff_x23 + -1;
    *unaff_x23 = sVar3 + (short)uVar1;
    iVar4 = iVar5 + -1;
    bVar2 = -1 < iVar5;
    iVar5 = iVar4;
  } while ((bVar2) || (unaff_w24 != 0));
  return;
}


