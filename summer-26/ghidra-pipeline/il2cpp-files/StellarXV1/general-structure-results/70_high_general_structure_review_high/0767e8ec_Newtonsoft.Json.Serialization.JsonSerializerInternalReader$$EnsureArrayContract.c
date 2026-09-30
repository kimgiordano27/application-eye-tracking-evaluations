/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0767e8ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  short sVar1;
  int in_w8;
  long in_x13;
  short *in_x14;
  short in_w15;
  long unaff_x21;
  long unaff_x24;
  long unaff_x29;
  
  while( true ) {
    sVar1 = *in_x14;
    if ((sVar1 != 0x39) || (in_x13 < 2)) break;
    *in_x14 = in_w15;
    in_x13 = in_x13 + -1;
    in_x14 = in_x14 + -1;
  }
  if (((int)(in_x13 + -1) != 0) || (sVar1 != 0x39)) {
    *in_x14 = sVar1 + 1;
  }
  else {
    *in_x14 = 0x31;
    *(int *)(unaff_x21 + 4) = in_w8 + 2;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


