/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 079d7eec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Binder
               (long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
      FUN_079d8724(param_1,iVar3 + 1);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    if (iVar3 - param_2 != 0 && (int)param_2 <= iVar3) {
      FUN_07a612b4(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10),
                   param_2 + 1,iVar3 - param_2,0);
      FUN_07a612b4(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x18),
                   param_2 + 1,*(int *)(param_1 + 0x20) - param_2,0);
    }
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 != (long *)0x0) {
      if ((param_3 != 0) &&
         (lVar1 = thunk_FUN_04485110(param_3,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0)) {
LAB_079d8018:
        uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar2,0);
      }
      if (param_2 < *(uint *)(plVar4 + 3)) {
        plVar4[(long)(int)param_2 + 4] = param_3;
        thunk_FUN_044bb4b4(plVar4 + (long)(int)param_2 + 4,param_3);
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_079d8010;
        if ((param_4 != 0) &&
           (lVar1 = thunk_FUN_04485110(param_4,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0))
        goto LAB_079d8018;
        if (param_2 < *(uint *)(plVar4 + 3)) {
          plVar4[(long)(int)param_2 + 4] = param_4;
          thunk_FUN_044bb4b4(plVar4 + (long)(int)param_2 + 4,param_4);
          *(ulong *)(param_1 + 0x20) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) + 1,
                        (int)*(undefined8 *)(param_1 + 0x20) + 1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
LAB_079d8010:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


