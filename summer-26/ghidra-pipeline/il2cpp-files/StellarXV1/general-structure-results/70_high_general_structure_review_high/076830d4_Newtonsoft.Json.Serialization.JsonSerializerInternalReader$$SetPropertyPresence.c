/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 076830d4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  short *in_x9;
  uint in_w10;
  short in_w11;
  ulong in_x13;
  ulong in_x14;
  int in_w15;
  ulong uVar1;
  long unaff_x25;
  long unaff_x29;
  
  while( true ) {
    uVar1 = in_x14 >> 0x23;
    *in_x9 = (short)in_x13 + (short)(uint)(in_x14 >> 0x23) * in_w11 + 0x30;
    if ((in_w15 < 0) && ((uint)in_x13 < 10)) break;
    in_x14 = uVar1 * in_w10;
    in_x9 = in_x9 + -1;
    in_x13 = uVar1;
    in_w15 = in_w15 + -1;
  }
  FUN_075043ac();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


