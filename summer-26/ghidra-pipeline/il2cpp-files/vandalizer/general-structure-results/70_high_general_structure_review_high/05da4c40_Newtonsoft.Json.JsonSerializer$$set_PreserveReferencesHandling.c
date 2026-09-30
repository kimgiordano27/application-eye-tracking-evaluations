/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 05da4c40
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar4 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075a1578);
    uVar6 = thunk_FUN_03257e30(PTR_DAT_075ea810);
    FUN_05d772a8(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075ea860);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4,uVar5);
  }
  plVar8 = (long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*plVar8 != 0) {
    lVar1 = *plVar8;
    lVar9 = 0;
    do {
      lVar7 = lVar1;
      plVar2 = *(long **)(lVar7 + 0x10);
      if (plVar2 == (long *)0x0) {
LAB_05da4ce4:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x140));
      if ((uVar3 & 1) != 0) {
        if (lVar7 != *plVar8) {
          if (lVar9 == 0) goto LAB_05da4ce4;
          plVar8 = (long *)(lVar9 + 0x20);
        }
        *plVar8 = *(long *)(lVar7 + 0x20);
        thunk_FUN_0329bf60(plVar8);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        return;
      }
      lVar1 = *(long *)(lVar7 + 0x20);
      lVar9 = lVar7;
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  return;
}


