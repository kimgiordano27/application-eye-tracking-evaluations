/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 079cb870
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  ulong unaff_x21;
  
  FUN_04447ba8(PTR_DAT_09f424b0);
  FUN_04447ba8(PTR_DAT_09f424b8);
  FUN_04447ba8(PTR_DAT_09f414c8);
  *(undefined1 *)(unaff_x20 + 0xcf8) = 1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0x7f;
  lVar4 = FUN_079b8b3c(0);
  thunk_FUN_04456600();
  plVar7 = (long *)(unaff_x19 + 0x30);
  *plVar7 = lVar4;
  thunk_FUN_044bb4b4(plVar7,lVar4);
  if ((unaff_x21 & 1) == 0) {
    lVar4 = *plVar7;
    thunk_FUN_04456600();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar5 = (long *)FUN_079b8f48(lVar4,0);
    thunk_FUN_04456600();
    if (plVar5 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      lVar4 = *(long *)PTR_DAT_09f40388;
      if (*plVar5 != lVar4) {
LAB_079cb918:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar5);
      }
      *plVar7 = (long)plVar5;
      if (*plVar5 != lVar4) goto LAB_079cb918;
    }
    thunk_FUN_044bb4b4(plVar7,plVar5);
  }
  puVar3 = PTR_DAT_09f424b8;
  puVar2 = PTR_DAT_09f424b0;
  puVar1 = PTR_DAT_09f414c8;
  uVar6 = FUN_079ba1ec(0);
  thunk_FUN_04456600();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x40),uVar6);
  *(undefined8 *)(unaff_x19 + 0x48) = **(undefined8 **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
  thunk_FUN_044bb4b4();
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x58),uVar6);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x50),uVar6);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)puVar3;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)puVar1;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)puVar3;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x70));
  *(undefined4 *)(unaff_x19 + 0x24) = 0x101;
  return;
}


