/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormat
ENTRY_POINT: 05933f7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormat
               (undefined2 *param_1)

{
  undefined2 *puVar1;
  int in_w9;
  ulong uVar2;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  if ((unaff_x21 & 1) == 0) {
    if (0 < (int)unaff_w23) {
      uVar2 = (ulong)unaff_w23;
      puVar1 = param_1;
      do {
        if (0x42 < unaff_w23 - 1) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar2 = uVar2 - 1;
        param_1 = puVar1 + 1;
        *puVar1 = *(undefined2 *)(unaff_x20 + (uVar2 & 0xffffffff) * 2);
        puVar1 = param_1;
      } while (uVar2 != 0);
    }
    if (0 < in_w9) {
      do {
        in_w9 = in_w9 + -1;
        *param_1 = unaff_w19;
        param_1 = param_1 + 1;
      } while (in_w9 != 0);
    }
  }
  else {
    puVar1 = param_1;
    if (0 < in_w9) {
      do {
        in_w9 = in_w9 + -1;
        param_1 = puVar1 + 1;
        *puVar1 = unaff_w19;
        puVar1 = param_1;
      } while (in_w9 != 0);
    }
    if (0 < (int)unaff_w23) {
      uVar2 = (ulong)unaff_w23;
      do {
        if (0x42 < unaff_w23 - 1) goto LAB_05934024;
        uVar2 = uVar2 - 1;
        *param_1 = *(undefined2 *)(unaff_x20 + (uVar2 & 0xffffffff) * 2);
        param_1 = param_1 + 1;
      } while (uVar2 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


