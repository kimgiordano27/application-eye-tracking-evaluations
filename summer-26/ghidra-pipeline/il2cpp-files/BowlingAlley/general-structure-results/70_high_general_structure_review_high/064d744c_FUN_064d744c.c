/*
FUNCTION_NAME: FUN_064d744c
ENTRY_POINT: 064d744c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_064d744c(long *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_076df736 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727e478);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    DAT_076df736 = 1;
  }
  if (param_1[1] == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar5 = thunk_FUN_032a56a0();
    uVar8 = thunk_FUN_032e1da0(
                              System_Dynamic_ExpandoObject_ValueCollection_<GetEnumerator>d__15_TypeInfo
                              );
    FUN_0592371c(uVar5,uVar8,0);
    uVar8 = thunk_FUN_032e1da0(
                              Firebase_Analytics_FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,uVar8);
  }
  uVar5 = FUN_06580bac(param_1[1],0);
  if (*param_1 != 0) {
    uVar1 = *(ushort *)(param_1[1] + 0x16);
    lVar6 = FUN_064c2d88(*param_1,0);
    uVar7 = FUN_064c30ec(lVar6 + (ulong)uVar1 * 0x20,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_06580bb4(param_1[1],0);
      plVar9 = (long *)FUN_064d7350(param_1);
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x064d75dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar5,uVar4,*(undefined8 *)(*plVar9 + 0x1b0));
        return;
      }
    }
    else if (*param_1 != 0) {
      lVar6 = FUN_064c2d88(*param_1,0);
      iVar2 = FUN_064c30f8((ulong)uVar1 * 0x20 + lVar6,0);
      if (*param_1 != 0) {
        lVar6 = FUN_064c2d88(*param_1,0);
        uVar3 = FUN_064c30f8(lVar6 + (long)iVar2 * 0x20,0);
        if ((*param_1 != 0) && (lVar6 = *(long *)(*param_1 + 0x30), lVar6 != 0)) {
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar9 = *(long **)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
          if (plVar9 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
            if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
            }
            uVar7 = FUN_0593b434(uVar8,0,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_0727e478 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              thunk_FUN_032fe01c(uVar5,uVar8,0);
              return;
            }
            uVar5 = thunk_FUN_032e1da0(
                                      Firebase_Analytics_FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo
                                      );
            uVar5 = FUN_057a25c4(uVar5,plVar9,0);
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar8 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar8,uVar5,0);
            uVar5 = thunk_FUN_032e1da0(
                                      Firebase_Analytics_FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar8,uVar5);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


