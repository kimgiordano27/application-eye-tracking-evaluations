/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0505cdf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x23;
  byte in_stack_00000008;
  long in_stack_00000018;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02f421d0();
      goto LAB_0505d434;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
LAB_0505d434:
  in_stack_00000008 = (*(code *)*puVar3)();
  in_stack_00000008 = in_stack_00000008 & 1;
  uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x28),&stack0x00000008);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


