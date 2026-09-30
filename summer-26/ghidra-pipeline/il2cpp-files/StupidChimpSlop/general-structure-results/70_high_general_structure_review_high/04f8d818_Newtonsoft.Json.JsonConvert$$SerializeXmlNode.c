/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 04f8d818
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


int Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint in_w8;
  int *unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined4 unaff_w24;
  int iVar3;
  undefined8 in_stack_00000008;
  
  if ((in_w8 & 0x2001c000) == 0) {
    iVar3 = *unaff_x19 + unaff_w21;
    do {
      iVar3 = iVar3 + in_stack_00000008._4_4_;
      if (unaff_w22 <= iVar3) goto LAB_04f8d8a4;
      uVar1 = FUN_04f53e5c();
      uVar2 = FUN_04f53e78(uVar1,0);
    } while ((uVar2 & 1) != 0);
    *unaff_x20 = (int)uVar1;
    *unaff_x19 = in_stack_00000008._4_4_;
LAB_04f8d8a4:
    iVar3 = iVar3 - unaff_w21;
  }
  else {
    iVar3 = *unaff_x19;
    *unaff_x20 = unaff_w24;
    *unaff_x19 = in_stack_00000008._4_4_;
  }
  return iVar3;
}


