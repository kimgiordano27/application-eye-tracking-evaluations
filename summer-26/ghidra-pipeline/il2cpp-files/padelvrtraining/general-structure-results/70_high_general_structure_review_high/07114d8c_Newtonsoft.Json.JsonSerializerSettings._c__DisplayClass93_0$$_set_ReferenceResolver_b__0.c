/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 07114d8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0
               (long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(**(long **)(param_1 + 0xdc8) + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar1 = FUN_07113838();
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x78), plVar2 != (long *)0x0)) {
    iVar4 = 1;
    do {
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) < iVar4) {
        return;
      }
      lVar3 = FUN_07111080(lVar1,iVar4);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0x10)) {
        FUN_07111080(lVar1,iVar4);
        FUN_0711424c();
      }
      plVar2 = *(long **)(lVar1 + 0x78);
      iVar4 = iVar4 + 1;
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


