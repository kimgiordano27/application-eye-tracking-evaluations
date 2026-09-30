/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 058b7af0
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


long Newtonsoft_Json_JsonSerializer__remove_Error(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  undefined8 uVar4;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  uVar4 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_032a56a0(**(undefined8 **)(in_x9 + 0xff8));
  FUN_0557d004(uVar1,uVar4,*(undefined8 *)PTR_DAT_07297000,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_0333a630(puVar2,uVar1);
  lVar3 = thunk_FUN_032a56a0(*unaff_x27);
  FUN_0557991c();
  uVar1 = thunk_FUN_032a56a0(*unaff_x25);
  FUN_0557ce7c();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x30),uVar1);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


