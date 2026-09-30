/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 079d47ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Binder(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  
  *(undefined1 *)(unaff_x22 + 0xd3d) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f22398);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f42c78);
    FUN_0799eb50(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42c90);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  }
  lVar6 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = lVar6;
      if (*(long **)(lVar7 + 0x10) == (long *)0x0) goto LAB_079d4898;
      uVar2 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x138))();
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(lVar7 + 0x18) = unaff_x20;
        thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x18));
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f42c88);
  FUN_07a80df4(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = unaff_x21;
    thunk_FUN_044bb4b4();
    *(undefined8 *)(lVar6 + 0x18) = unaff_x20;
    thunk_FUN_044bb4b4();
    plVar1 = (long *)(unaff_x19 + 0x10);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x20);
    }
    *plVar1 = lVar6;
    thunk_FUN_044bb4b4(plVar1,lVar6);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
LAB_079d4898:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


