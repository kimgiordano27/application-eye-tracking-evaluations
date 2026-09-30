/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 0744dec8
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(long param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int iVar11;
  long unaff_x23;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack000000000000002c;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0xaf0));
  FUN_03f13384(PTR_DAT_09131298);
  FUN_03f13384(PTR_DAT_091312a0);
  FUN_03f13384(PTR_DAT_091312a8);
  FUN_03f13384(PTR_DAT_091312b0);
  FUN_03f13384(PTR_DAT_091312b8);
  FUN_03f13384(PTR_DAT_091312c0);
  FUN_03f13384(PTR_DAT_09131288);
  *(undefined1 *)(unaff_x23 + 0x44) = 1;
  *unaff_x19 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  cStack000000000000002c = '\0';
  iVar3 = (**(code **)(*unaff_x22 + 0x178))();
  puVar1 = PTR_DAT_0910b550;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar11 = 0;
    do {
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (plVar6 == (long *)0x0) goto LAB_0744e2fc;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar8 = FUN_073dfe9c(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        FUN_0744e300();
        if (cStack000000000000002c == '\0') {
          iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          if (iVar3 == -1) {
            in_stack_00000010 = plVar6[3];
            thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x68),&stack0x00000010);
            in_stack_00000008._4_4_ =
                 (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
            thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
            if (unaff_x21 == 0) goto LAB_0744e2fc;
            FUN_0733abb0();
            if ((int)plVar6[4] != 0xffffff) {
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)plVar6[4]);
              thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x50),&stack0x00000010);
              goto LAB_0744e15c;
            }
          }
          else {
            uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar4);
            thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
            if (unaff_x21 == 0) goto LAB_0744e2fc;
LAB_0744e15c:
            FUN_0733a0d0();
          }
          lVar9 = FUN_0744d474(plVar6);
          if (lVar9 == 0) goto LAB_0744e2fc;
          sVar2 = FUN_073213d0(lVar9,0,0);
          if (sVar2 == 0x3c) {
            plVar10 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            if (plVar10 == (long *)0x0) {
LAB_0744e2fc:
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            if (plVar10 == (long *)0x0) goto LAB_0744e2fc;
            auVar12 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            _in_stack_00000018 = auVar12;
            uVar7 = thunk_FUN_074aef34(&stack0x00000018,*(undefined8 *)PTR_DAT_09131288,0);
            lVar9 = FUN_0744ddb0();
            iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if ((iVar3 == -1) && (lVar9 != 0)) {
              FUN_07327fec(*(undefined8 *)PTR_DAT_091312a8,uVar7,lVar9,0);
            }
            else {
              FUN_0731d5f8(*(undefined8 *)PTR_DAT_09131290,uVar7,0);
            }
          }
          uVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar4);
          thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
          goto LAB_0744e29c;
        }
      }
      else {
        if (iVar3 == 0 && (unaff_w20 & 1) == 0) {
          if (unaff_x21 == 0) goto LAB_0744e2fc;
        }
        else {
          FUN_074fcefc(0);
          if (unaff_x21 == 0) goto LAB_0744e2fc;
          FUN_07331848();
        }
        FUN_07331848();
        if (plVar6[8] == 0) {
          in_stack_00000010 = plVar6[3];
          thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
LAB_0744e29c:
          FUN_0733abb0();
        }
        else {
          FUN_07331848();
        }
        iVar3 = 1;
      }
      iVar11 = iVar11 + 1;
      iVar5 = (**(code **)(*unaff_x22 + 0x178))();
    } while (iVar11 < iVar5);
  }
  return iVar3;
}


