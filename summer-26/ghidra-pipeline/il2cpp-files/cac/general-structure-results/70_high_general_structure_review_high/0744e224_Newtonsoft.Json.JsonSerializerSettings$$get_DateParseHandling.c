/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 0744e224
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

undefined8 Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling(undefined **param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x0744e224:
  FUN_07327fec(*(undefined8 *)param_1[0x55],unaff_x25,unaff_x26,0);
LAB_0744e274:
  uVar2 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
  in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
  thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
LAB_0744e29c:
  FUN_0733abb0();
  do {
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      iVar3 = (**(code **)(*unaff_x22 + 0x178))();
      if (iVar3 <= unaff_w23) {
        return 1;
      }
      unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (unaff_x24 == (long *)0x0) goto LAB_0744e2fc;
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      uVar5 = FUN_073dfe9c(uVar4,0,0);
      if ((uVar5 & 1) != 0) break;
      (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      FUN_0744e300();
      if (in_stack_00000028._4_1_ == '\0') {
        iVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
        if (iVar3 == -1) {
          in_stack_00000010 = unaff_x24[3];
          thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
          thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
          if (unaff_x21 == 0) goto LAB_0744e2fc;
          FUN_0733abb0();
          if ((int)unaff_x24[4] != 0xffffff) {
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
            thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x50),&stack0x00000010);
            goto LAB_0744e15c;
          }
        }
        else {
          uVar2 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
          thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
          if (unaff_x21 == 0) goto LAB_0744e2fc;
LAB_0744e15c:
          FUN_0733a0d0();
        }
        lVar6 = FUN_0744d474(unaff_x24);
        if (lVar6 != 0) {
          sVar1 = FUN_073213d0(lVar6,0,0);
          if (sVar1 != 0x3c) goto LAB_0744e274;
          plVar7 = (long *)(**(code **)(*unaff_x24 + 0x1b8))
                                     (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          if (plVar7 != (long *)0x0) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
            ;
            if (plVar7 != (long *)0x0) {
              auVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
              _in_stack_00000018 = auVar8;
              unaff_x25 = thunk_FUN_074aef34(&stack0x00000018,*(undefined8 *)PTR_DAT_09131288,0);
              unaff_x26 = FUN_0744ddb0();
              iVar3 = (**(code **)(*unaff_x24 + 0x1a8))
                                (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
              if ((iVar3 == -1) && (unaff_x26 != 0)) {
                param_1 = &PTR_DAT_09131000;
                goto code_r0x0744e224;
              }
              FUN_0731d5f8(*(undefined8 *)PTR_DAT_09131290,unaff_x25,0);
              goto LAB_0744e274;
            }
          }
        }
LAB_0744e2fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
    }
    FUN_074fcefc(0);
    if (unaff_x21 == 0) goto LAB_0744e2fc;
    FUN_07331848();
    FUN_07331848();
    if (unaff_x24[8] == 0) break;
    FUN_07331848();
  } while( true );
  in_stack_00000010 = unaff_x24[3];
  thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
  in_stack_00000008._4_4_ =
       (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
  thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
  goto LAB_0744e29c;
}


