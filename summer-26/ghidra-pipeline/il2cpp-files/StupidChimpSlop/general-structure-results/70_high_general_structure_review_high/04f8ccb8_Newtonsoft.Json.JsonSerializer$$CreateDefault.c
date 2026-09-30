/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 04f8ccb8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializer__CreateDefault(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long *unaff_x21;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_04f8cd08;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d87540();
LAB_04f8cd08:
  plVar2 = (long *)(*(code *)*puVar1)();
  if ((plVar2 != (long *)0x0) && (*plVar2 == *unaff_x21)) {
    return plVar2;
  }
  plVar2 = (long *)FUN_04f8cd74();
  return plVar2;
}


