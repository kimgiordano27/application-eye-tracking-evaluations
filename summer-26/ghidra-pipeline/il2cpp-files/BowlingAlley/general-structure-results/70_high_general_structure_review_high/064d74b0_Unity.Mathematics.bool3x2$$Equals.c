/*
FUNCTION_NAME: Unity.Mathematics.bool3x2$$Equals
ENTRY_POINT: 064d74b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Mathematics_bool3x2__Equals(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long *plVar7;
  long unaff_x21;
  
  lVar3 = FUN_064c2d88();
  uVar4 = FUN_064c30ec(lVar3 + unaff_x21 * 0x20,0);
  if ((uVar4 & 1) == 0) {
    FUN_06580bb4(unaff_x20[1],0);
    plVar7 = (long *)FUN_064d7350();
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x064d75dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x1a8))();
      return;
    }
  }
  else if (*unaff_x20 != 0) {
    lVar3 = FUN_064c2d88(*unaff_x20,0);
    iVar1 = FUN_064c30f8(unaff_x21 * 0x20 + lVar3,0);
    if (*unaff_x20 != 0) {
      lVar3 = FUN_064c2d88(*unaff_x20,0);
      uVar2 = FUN_064c30f8(lVar3 + (long)iVar1 * 0x20,0);
      if ((*unaff_x20 != 0) && (lVar3 = *(long *)(*unaff_x20 + 0x30), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        plVar7 = *(long **)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
        if (plVar7 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
          }
          uVar4 = FUN_0593b434(uVar5,0,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_0727e478 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            thunk_FUN_032fe01c();
            return;
          }
          uVar5 = thunk_FUN_032e1da0(
                                    Firebase_Analytics_FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo
                                    );
          uVar5 = FUN_057a25c4(uVar5,plVar7,0);
          thunk_FUN_032e1da0(PTR_DAT_07279578);
          uVar6 = thunk_FUN_032a56a0();
          FUN_0592371c(uVar6,uVar5,0);
          uVar5 = thunk_FUN_032e1da0(
                                    Firebase_Analytics_FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar6,uVar5);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


