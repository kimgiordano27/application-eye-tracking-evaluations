/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MetadataKvpObjects>
ENTRY_POINT: 03f2a140
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<MetadataKvpObjects>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
        goto LAB_03f2a1e8;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_03f2a1e8:
                    /* WARNING: Could not recover jumptable at 0x03f2a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


