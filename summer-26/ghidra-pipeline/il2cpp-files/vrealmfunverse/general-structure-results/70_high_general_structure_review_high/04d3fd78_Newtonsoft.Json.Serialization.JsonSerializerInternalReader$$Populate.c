/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Populate
ENTRY_POINT: 04d3fd78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d3fe14) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Populate(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *in_x9;
  ulong uVar3;
  int *piVar4;
  long *in_stack_00000018;
  
  (*in_x9)();
  if (in_stack_00000018 != (long *)0x0) {
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04d3fdf0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
LAB_04d3fdf0:
    (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  }
  return;
}


