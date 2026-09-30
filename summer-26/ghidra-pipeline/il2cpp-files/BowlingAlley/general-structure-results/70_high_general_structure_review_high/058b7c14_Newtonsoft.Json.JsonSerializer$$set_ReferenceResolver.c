/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 058b7c14
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


long Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  
  thunk_FUN_032e1da0(PTR_DAT_07297038);
  thunk_FUN_032e1da0(PTR_DAT_07297040);
  thunk_FUN_032e1da0(PTR_DAT_07297048);
  thunk_FUN_032e1da0(PTR_DAT_07297010);
  thunk_FUN_032e1da0(PTR_DAT_07296f98);
  *(undefined1 *)(unaff_x20 + 0xfe5) = 1;
  lVar5 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_059660a0(lVar5,0);
  puVar1 = PTR_DAT_07296f98;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = unaff_x22;
    thunk_FUN_0333a630();
    *(undefined8 *)(lVar5 + 0x18) = unaff_x21;
    thunk_FUN_0333a630();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar1;
    }
    puVar4 = PTR_DAT_07297048;
    puVar3 = PTR_DAT_07297030;
    puVar2 = PTR_DAT_07297028;
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07297038);
      FUN_0557d004(uVar7,uVar9,*(undefined8 *)PTR_DAT_07297040,0);
      puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *puVar8 = uVar7;
      thunk_FUN_0333a630(puVar8,uVar7);
    }
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_0557991c();
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    FUN_0557ce7c(uVar7,lVar5,*(undefined8 *)puVar4,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x30),uVar7);
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


