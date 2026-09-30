/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_0
ENTRY_POINT: 05ac2bec
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_0
               (void)

{
  uint in_w8;
  uint in_w10;
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  
  while( true ) {
    if (in_w10 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
                    /* try { // try from 05ac2c00 to 05bc2c03 has its CatchHandler @ 05ac2d34 */
    FUN_05b11c68();
    unaff_w22 = unaff_w22 + 1;
    unaff_w23 = unaff_w23 + -1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w22) break;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    in_w10 = *(uint *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    in_w8 = *(int *)(unaff_x19 + 0x18) + unaff_w23;
  }
  return;
}


