/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 05ac8ccc
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  
  while( true ) {
    if (param_3 == in_x9) goto LAB_05ac8cd4;
    if (unaff_x21 == 0) break;
    FUN_05b11c68();
    unaff_w23 = unaff_w23 - 1;
    if ((int)unaff_w23 < 0) {
      return;
    }
    param_1 = *(undefined8 *)(unaff_x22 + 0x18);
    while( true ) {
      if ((uint)param_1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      param_3 = *(long *)(unaff_x22 + (ulong)unaff_w23 * (unaff_x24 & 0xffffffff) + 0x20);
      if (param_3 != 0) break;
LAB_05ac8cd4:
      unaff_w23 = unaff_w23 - 1;
      if ((int)unaff_w23 < 0) {
        return;
      }
    }
    in_x9 = *(long *)(unaff_x20 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


