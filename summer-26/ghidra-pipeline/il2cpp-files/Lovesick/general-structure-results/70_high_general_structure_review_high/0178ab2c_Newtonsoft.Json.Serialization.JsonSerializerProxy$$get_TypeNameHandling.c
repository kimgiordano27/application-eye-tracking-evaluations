/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 0178ab2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(undefined8 param_1)

{
  ulong uVar1;
  uint in_w8;
  long unaff_x19;
  uint uVar2;
  
  if (0 < (int)in_w8) {
    uVar2 = 0;
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194(param_1);
      }
      if (*(long *)(unaff_x19 + (long)(int)uVar2 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = FUN_0178aa28();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      in_w8 = *(uint *)(unaff_x19 + 0x18);
      uVar2 = uVar2 + 1;
      param_1 = 1;
    } while ((int)uVar2 < (int)in_w8);
  }
  return 1;
}


