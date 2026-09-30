/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 04f38c94
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable(void)

{
  uint uVar1;
  int in_w8;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  long unaff_x28;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f33f6c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w25,
               *(undefined8 *)(unaff_x29 + -0xd8),0);
  uVar1 = FUN_04dd5134(unaff_x29 + -0xd0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


