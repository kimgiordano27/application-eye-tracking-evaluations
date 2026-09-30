/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 05933fe8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling
               (undefined2 *param_1)

{
  undefined1 in_ZR;
  uint in_w9;
  ulong in_x10;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  while( true ) {
    *param_1 = *(undefined2 *)(unaff_x20 + (in_x10 & 0xffffffff) * 2);
    if ((bool)in_ZR) break;
    if (0x42 < in_w9) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    in_x10 = in_x10 - 1;
    in_ZR = in_x10 == 0;
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


