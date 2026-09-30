/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 079d274c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x079d2510) */

undefined8 Newtonsoft_Json_JsonReader__SetPostValueState(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x28;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x079d274c:
  do {
                    /* try { // try from 079d274c to 07ad2773 has its CatchHandler @ 079d28a0 */
    FUN_078c4cb8();
    do {
      while( true ) {
        unaff_w23 = unaff_w23 + 1;
                    /* try { // try from 079d2774 to 07ad278b has its CatchHandler @ 079d286c */
        iVar3 = (**(code **)(*unaff_x22 + 0x178))();
        if (iVar3 <= unaff_w23) {
          return 1;
        }
        plVar4 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        if (plVar4 == (long *)0x0) goto LAB_079d27ac;
        uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        uVar6 = FUN_0796aaa0(uVar5,0,0);
        if ((uVar6 & 1) == 0) break;
        FUN_07a84a68(0);
        if (unaff_x21 == 0) goto LAB_079d27ac;
        FUN_078bb7b4();
        FUN_078bb7b4();
        if (plVar4[8] == 0) {
          in_stack_00000010 = plVar4[3];
          thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
          goto code_r0x079d274c;
        }
        FUN_078bb7b4();
      }
      (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      Newtonsoft_Json_JsonReader__GetTypeForCloseToken();
    } while (in_stack_00000028._4_1_ != '\0');
    iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
    if (iVar3 == -1) {
      in_stack_00000010 = plVar4[3];
      thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
      in_stack_00000008._4_4_ =
           (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
      if (unaff_x21 == 0) goto LAB_079d27ac;
      FUN_078c4cb8();
      if ((int)plVar4[4] != 0xffffff) {
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)plVar4[4]);
        thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
        goto LAB_079d2608;
      }
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
      thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (unaff_x21 == 0) goto LAB_079d27ac;
LAB_079d2608:
      FUN_078c415c();
    }
    lVar7 = FUN_079d192c(plVar4);
    if (lVar7 == 0) goto LAB_079d27ac;
    sVar1 = FUN_078aee34(lVar7,0,0);
    if (sVar1 == 0x3c) {
      plVar8 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar8 == (long *)0x0) {
LAB_079d27ac:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      if (plVar8 == (long *)0x0) goto LAB_079d27ac;
      auVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      _in_stack_00000018 = auVar9;
      uVar5 = thunk_FUN_07a381c8(&stack0x00000018,*(undefined8 *)PTR_DAT_09f302a0,0);
      lVar7 = FUN_079d2264();
      iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      if ((lVar7 == 0) || (iVar3 != -1)) {
        FUN_078ab14c(*(undefined8 *)PTR_DAT_09f42ba0,uVar5,0);
      }
      else {
        FUN_078b5afc(*(undefined8 *)PTR_DAT_09f42bc0,uVar5,lVar7,0);
      }
    }
    uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
    thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
  } while( true );
}


