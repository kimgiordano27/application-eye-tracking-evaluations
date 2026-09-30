/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 058bafd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint in_w8;
  uint in_w9;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  byte unaff_w25;
  int iVar7;
  
  if (in_NG == in_OV) {
    if (unaff_x21 == (long *)0x0) goto LAB_058bb0c0;
    iVar6 = unaff_w22;
    if (in_w8 <= in_w9) {
      iVar6 = unaff_w23;
    }
    unaff_w24 = 1;
    iVar7 = -1;
    unaff_w25 = true;
    do {
      sVar2 = (**(code **)(*unaff_x21 + 0x1c8))();
      sVar3 = (**(code **)(*unaff_x21 + 0x1c8))();
      if (sVar2 != sVar3) break;
      iVar1 = iVar7 + 2;
      iVar7 = iVar7 + 1;
      unaff_w25 = iVar1 < unaff_w23;
      unaff_w24 = (uint)(iVar1 < unaff_w22);
    } while (iVar6 + -1 != iVar7);
  }
  if ((unaff_w25 & 1) == 0) {
    iVar6 = -(unaff_w24 & 1);
  }
  else if ((unaff_w24 & 1) == 0) {
    iVar6 = 1;
  }
  else {
    if (unaff_x21 == (long *)0x0) {
LAB_058bb0c0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar4 = (**(code **)(*unaff_x21 + 0x1c8))();
    uVar5 = (**(code **)(*unaff_x21 + 0x1c8))();
    iVar6 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
  }
  return iVar6;
}


