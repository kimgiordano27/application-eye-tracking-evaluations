/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 0505d044
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__Deserialize(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x23;
  undefined2 in_stack_00000008;
  long in_stack_00000018;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_0505d36c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_0505d36c:
  in_stack_00000008 = (*(code *)*puVar1)();
  uVar2 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x88),&stack0x00000008);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


