/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_2
ENTRY_POINT: 05ac2c04
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_2
               (void)

{
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  
  while( true ) {
    FUN_05b11c68();
    unaff_w22 = unaff_w22 + 1;
                    /* try { // try from 05ac2c14 to 05bc2c17 has its CatchHandler @ 05ac2d2c */
    unaff_w23 = unaff_w23 + -1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w22) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0x10) + 0x18) <=
        (uint)(*(int *)(unaff_x19 + 0x18) + unaff_w23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


