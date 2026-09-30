/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetToken
ENTRY_POINT: 079d2648
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

undefined8 Newtonsoft_Json_JsonReader__SetToken(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x28;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x079d2648:
  plVar5 = (long *)(**(code **)(param_1 + 0x1a8))(unaff_x24,*(undefined8 *)(param_1 + 0x1b0));
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    if (plVar5 != (long *)0x0) {
      auVar8 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      _in_stack_00000018 = auVar8;
      uVar6 = thunk_FUN_07a381c8(&stack0x00000018,*(undefined8 *)PTR_DAT_09f302a0,0);
      lVar7 = FUN_079d2264();
      iVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
      if ((lVar7 == 0) || (iVar2 != -1)) {
        FUN_078ab14c(*(undefined8 *)PTR_DAT_09f42ba0,uVar6,0);
      }
      else {
        FUN_078b5afc(*(undefined8 *)PTR_DAT_09f42bc0,uVar6,lVar7,0);
      }
LAB_079d2724:
      uVar3 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
      thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
Newtonsoft_Json_JsonReader__SetPostValueState:
      FUN_078c4cb8();
      do {
        while( true ) {
          unaff_w23 = unaff_w23 + 1;
          iVar2 = (**(code **)(*unaff_x22 + 0x178))();
          if (iVar2 <= unaff_w23) {
            return 1;
          }
          unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
          if (unaff_x24 == (long *)0x0) goto LAB_079d27ac;
          uVar6 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          uVar4 = FUN_0796aaa0(uVar6,0,0);
          if ((uVar4 & 1) != 0) break;
          (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          Newtonsoft_Json_JsonReader__GetTypeForCloseToken();
          if (in_stack_00000028._4_1_ == '\0') {
            iVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0))
            ;
            if (iVar2 == -1) {
              in_stack_00000010 = unaff_x24[3];
              thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
              in_stack_00000008._4_4_ =
                   (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
              thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
              if (unaff_x21 == 0) goto LAB_079d27ac;
              FUN_078c4cb8();
              if ((int)unaff_x24[4] != 0xffffff) {
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
                thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
                goto LAB_079d2608;
              }
            }
            else {
              uVar3 = (**(code **)(*unaff_x24 + 0x198))
                                (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
              thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
              if (unaff_x21 == 0) goto LAB_079d27ac;
LAB_079d2608:
              FUN_078c415c();
            }
            lVar7 = FUN_079d192c(unaff_x24);
            if (lVar7 == 0) goto LAB_079d27ac;
            sVar1 = FUN_078aee34(lVar7,0,0);
            if (sVar1 != 0x3c) goto LAB_079d2724;
            param_1 = *unaff_x24;
            goto code_r0x079d2648;
          }
        }
        FUN_07a84a68(0);
        if (unaff_x21 == 0) break;
        FUN_078bb7b4();
        FUN_078bb7b4();
        if (unaff_x24[8] == 0) goto LAB_079d253c;
        FUN_078bb7b4();
      } while( true );
    }
  }
LAB_079d27ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_079d253c:
  in_stack_00000010 = unaff_x24[3];
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
  in_stack_00000008._4_4_ =
       (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
  goto Newtonsoft_Json_JsonReader__SetPostValueState;
}


