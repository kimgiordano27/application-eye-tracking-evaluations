/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeIntoObject<object>
ENTRY_POINT: 03977b00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


byte Meta_WitAi_Json_JsonConvert__DeserializeIntoObject<object>(long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long *in_x10;
  int *piVar2;
  long unaff_x20;
  byte unaff_w21;
  int unaff_w22;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
        goto LAB_03977b44;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_03977b44:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
    return unaff_w22 == 6 & unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032c82b0();
}


