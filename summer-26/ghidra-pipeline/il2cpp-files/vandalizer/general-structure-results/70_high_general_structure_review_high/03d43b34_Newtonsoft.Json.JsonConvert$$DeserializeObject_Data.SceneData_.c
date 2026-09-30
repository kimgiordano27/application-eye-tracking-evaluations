/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Data.SceneData>
ENTRY_POINT: 03d43b34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<Data_SceneData>(long param_1)

{
  long lVar1;
  long in_x9;
  int *piVar2;
  long unaff_x22;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *(long *)(unaff_x22 + 0x20)) {
        lVar1 = param_1 + (long)(int)(*piVar2 + (uint)*(ushort *)(unaff_x22 + 0x50)) * 0x10 + 0x138;
        goto LAB_03d43bbc;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  lVar1 = FUN_0322c1e8();
LAB_03d43bbc:
  lVar1 = thunk_FUN_03211620(*(undefined8 *)(lVar1 + 8));
  (**(code **)(lVar1 + 8))();
  return;
}


