/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Formatting
ENTRY_POINT: 058bb6e4
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


void Newtonsoft_Json_JsonSerializerSettings__set_Formatting(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0x170)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 3) * 0x10 + 0x138);
        goto LAB_058bb7a0;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac(param_2,**(long **)(in_x10 + 0x170),3);
LAB_058bb7a0:
                    /* WARNING: Could not recover jumptable at 0x058bb7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_2);
  return;
}


