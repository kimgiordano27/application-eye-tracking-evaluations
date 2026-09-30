/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatHandling
ENTRY_POINT: 0744e0c0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0744e060) */

undefined8
Newtonsoft_Json_JsonSerializerSettings__get_DateFormatHandling
          (undefined8 param_1,undefined8 param_2,long param_3)

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
  
code_r0x0744e0c0:
  thunk_FUN_03f4e2c4(param_1,param_3);
  do {
    FUN_0733abb0();
    do {
      while( true ) {
        unaff_w23 = unaff_w23 + 1;
        iVar3 = (**(code **)(*unaff_x22 + 0x178))();
        if (iVar3 <= unaff_w23) {
          return 1;
        }
        plVar4 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        if (plVar4 == (long *)0x0) goto LAB_0744e2fc;
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar6 = FUN_073dfe9c(uVar5,0,0);
        if ((uVar6 & 1) == 0) break;
        FUN_074fcefc(0);
        if (unaff_x21 == 0) goto LAB_0744e2fc;
        FUN_07331848();
        FUN_07331848();
        if (plVar4[8] == 0) {
          in_stack_00000010 = plVar4[3];
          thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
          param_1 = *(undefined8 *)(unaff_x28 + 0x48);
          param_3 = (long)&stack0x00000008 + 4;
          goto code_r0x0744e0c0;
        }
        FUN_07331848();
      }
      (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      FUN_0744e300();
    } while (in_stack_00000028._4_1_ != '\0');
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (iVar3 == -1) {
      in_stack_00000010 = plVar4[3];
      thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
      in_stack_00000008._4_4_ =
           (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
      if (unaff_x21 == 0) goto LAB_0744e2fc;
      FUN_0733abb0();
      if ((int)plVar4[4] != 0xffffff) {
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)plVar4[4]);
        thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
        goto LAB_0744e15c;
      }
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
      thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (unaff_x21 == 0) goto LAB_0744e2fc;
LAB_0744e15c:
      FUN_0733a0d0();
    }
    lVar7 = FUN_0744d474(plVar4);
    if (lVar7 == 0) goto LAB_0744e2fc;
    sVar1 = FUN_073213d0(lVar7,0,0);
    if (sVar1 == 0x3c) {
      plVar8 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar8 == (long *)0x0) {
LAB_0744e2fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      if (plVar8 == (long *)0x0) goto LAB_0744e2fc;
      auVar9 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      _in_stack_00000018 = auVar9;
      uVar5 = thunk_FUN_074aef34(&stack0x00000018,*(undefined8 *)PTR_DAT_09131288,0);
      lVar7 = FUN_0744ddb0();
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if ((iVar3 == -1) && (lVar7 != 0)) {
        FUN_07327fec(*(undefined8 *)PTR_DAT_091312a8,uVar5,lVar7,0);
      }
      else {
        FUN_0731d5f8(*(undefined8 *)PTR_DAT_09131290,uVar5,0);
      }
    }
    uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
  } while( true );
}


