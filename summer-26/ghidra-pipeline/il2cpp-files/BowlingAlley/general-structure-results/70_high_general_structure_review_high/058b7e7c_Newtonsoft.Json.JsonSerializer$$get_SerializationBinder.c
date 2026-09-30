/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_SerializationBinder
ENTRY_POINT: 058b7e7c
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


long Newtonsoft_Json_JsonSerializer__get_SerializationBinder(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  
  thunk_FUN_0333a630();
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  thunk_FUN_0333a630();
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *unaff_x23;
  }
  puVar2 = PTR_DAT_07297070;
  puVar1 = PTR_DAT_07297068;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x30) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *unaff_x23;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07297078);
    FUN_0557d004(uVar4,uVar6,*(undefined8 *)PTR_DAT_07297080,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
    *puVar5 = uVar4;
    thunk_FUN_0333a630(puVar5,uVar4);
  }
  lVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_0557991c();
  uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_0557ce7c();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x30),uVar4);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


