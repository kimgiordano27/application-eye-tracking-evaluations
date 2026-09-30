/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 05472860
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined4 Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  int in_w8;
  int in_w9;
  int in_w10;
  byte *in_x11;
  byte *in_x12;
  int in_w13;
  int in_w14;
  
  while( true ) {
    in_w13 = in_w13 + -1;
    if ((bool)in_ZR) {
      if (in_w8 == in_w9) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
        if (in_w8 < in_w9) {
          uVar1 = 0xffffffff;
        }
      }
      return uVar1;
    }
    if ((in_w13 == 0) || (in_w14 == 0)) break;
    if (*in_x11 != *in_x12) {
      if (*in_x12 <= *in_x11) {
        return 1;
      }
      return 0xffffffff;
    }
    in_x11 = in_x11 + 1;
    in_w10 = in_w10 + -1;
    in_ZR = in_w10 == 0;
    in_x12 = in_x12 + 1;
    in_w14 = in_w14 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


