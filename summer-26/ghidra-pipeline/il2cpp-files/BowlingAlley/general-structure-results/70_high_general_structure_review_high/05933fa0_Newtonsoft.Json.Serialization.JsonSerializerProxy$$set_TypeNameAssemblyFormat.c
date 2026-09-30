/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormat
ENTRY_POINT: 05933fa0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormat
               (undefined2 *param_1)

{
  undefined1 in_ZR;
  int in_w9;
  uint in_w10;
  ulong in_x11;
  undefined2 unaff_w19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    if (0x42 < in_w10) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    in_x11 = in_x11 - 1;
    *param_1 = *(undefined2 *)(unaff_x20 + (in_x11 & 0xffffffff) * 2);
    param_1 = param_1 + 1;
    in_ZR = in_x11 == 0;
  }
  if (0 < in_w9) {
    do {
      in_w9 = in_w9 + -1;
      *param_1 = unaff_w19;
      param_1 = param_1 + 1;
    } while (in_w9 != 0);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


