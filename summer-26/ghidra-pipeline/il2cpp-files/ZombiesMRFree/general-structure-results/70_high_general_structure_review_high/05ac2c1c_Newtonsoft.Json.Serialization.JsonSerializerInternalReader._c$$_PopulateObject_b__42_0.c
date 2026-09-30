/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 05ac2c1c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int in_w8;
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0x10) + 0x18) <= (uint)(in_w8 + unaff_w23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    FUN_05b11c68();
    in_w8 = *(int *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    unaff_w23 = unaff_w23 + -1;
    in_OV = SBORROW4(in_w8,unaff_w22);
    in_NG = in_w8 - unaff_w22 < 0;
    in_ZR = in_w8 == unaff_w22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


