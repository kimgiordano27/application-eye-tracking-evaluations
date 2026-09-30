/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 07112de0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x21;
  
  FUN_070b1d68();
  if (unaff_x21 != 0) {
    if (DAT_0941218d == '\0') {
      FUN_03c8f898(PTR_DAT_08e83798);
      DAT_0941218d = '\x01';
    }
    uVar2 = System_Convert__ToInt16();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
    uVar3 = FUN_070b1710();
    FUN_07112c28(uVar2,uVar1,unaff_w19,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_07112c04(0x30);
}


