/*
FUNCTION_NAME: FUN_097034a8
ENTRY_POINT: 097034a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_097034a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0a5473d3 & 1) == 0) {
    FUN_04447ba8(FullSerializer_fsIgnoreAttribute_var);
    FUN_04447ba8(PTR_DAT_09f1e530);
    DAT_0a5473d3 = 1;
  }
  if (param_2 != 0) {
    plVar4 = *(long **)(param_1 + 0x110);
    lVar5 = *(long *)(param_1 + 0xe8);
    lVar6 = *(long *)(param_1 + 0x60);
    lVar7 = *(long *)(param_2 + 0x1a8);
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    thunk_FUN_044bb4b4(param_2 + 0x1a8,0);
    puVar2 = FullSerializer_fsIgnoreAttribute_var;
    puVar1 = PTR_DAT_09f1e530;
    do {
      if (lVar7 == 0) {
        return;
      }
      lVar8 = *(long *)(lVar7 + 0x18);
      if (*(char *)(lVar7 + 0x2c) == '\0') {
        if (lVar5 == 0) break;
        FUN_097f7440(lVar5,*(undefined4 *)(lVar7 + 0x28),0);
      }
      else {
        if (plVar4 == (long *)0x0) break;
        plVar3 = *(long **)(lVar7 + 0x20);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != *(long *)puVar1) {
          plVar3 = (long *)0x0;
        }
        (**(code **)(*plVar4 + 0x188))
                  (plVar4,param_2,plVar3,*(undefined4 *)(lVar7 + 0x28),
                   *(undefined8 *)(*plVar4 + 400));
      }
      if (lVar6 == 0) break;
      System_Collections_Generic_ArraySortHelper<RaycastHit2D>__Heapsort
                (lVar6,lVar7,*(undefined8 *)puVar2);
      lVar7 = lVar8;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


