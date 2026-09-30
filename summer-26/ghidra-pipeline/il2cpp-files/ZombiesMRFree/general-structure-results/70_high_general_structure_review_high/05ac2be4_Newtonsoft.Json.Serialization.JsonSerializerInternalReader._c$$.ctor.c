/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 05ac2be4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

{
  int in_w8;
  long in_x9;
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  
  while( true ) {
    if (*(uint *)(in_x9 + 0x18) <= (uint)(in_w8 + unaff_w23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    FUN_05b11c68();
    in_w8 = *(int *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    unaff_w23 = unaff_w23 + -1;
    if (in_w8 <= unaff_w22) break;
                    /* try { // try from 05ac2bdc to 05bc2bdf has its CatchHandler @ 05ac2d2c */
    in_x9 = *(long *)(unaff_x19 + 0x10);
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  }
  return;
}


