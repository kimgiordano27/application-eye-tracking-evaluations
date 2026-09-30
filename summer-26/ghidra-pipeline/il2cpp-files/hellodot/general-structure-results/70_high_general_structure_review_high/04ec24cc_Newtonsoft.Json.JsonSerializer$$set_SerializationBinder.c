/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_SerializationBinder
ENTRY_POINT: 04ec24cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_SerializationBinder(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long in_stack_00000008;
  
  puVar2 = PTR_DAT_065c8cd8;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_065f7d58);
    uVar8 = FUN_04d9c6dc(uVar8,0);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar9 = thunk_FUN_02cea894();
    FUN_04e9e938(uVar9,uVar8,0);
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_065f7d60);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar9,uVar8);
  }
  uVar4 = FUN_04db48b0();
  if (*(int *)(unaff_x19 + 0x10) < 2) {
LAB_04ec260c:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_04ec6c78();
    if ((uVar7 & 1) != 0) {
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      if ((*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
        uVar5 = FUN_04db48b0();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar2);
        }
        uVar7 = FUN_04ebdab0(uVar5);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN_04db48b0();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar2);
          }
          uVar7 = FUN_04ebdab0(uVar5);
          if ((uVar7 & 1) == 0) {
            lVar10 = FUN_04eb3344();
            if (lVar10 == 0) goto LAB_04ec2a0c;
            sVar3 = FUN_04db48b0(lVar10,1,0);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar11);
              lVar11 = *(long *)puVar2;
            }
            if (*(short *)(*(long *)(lVar11 + 0xb8) + 0x18) == sVar3) {
              FUN_04dbaed4(lVar10,0,2,0);
              unaff_x19 = FUN_04db00f0();
            }
            else {
              iVar6 = FUN_04dc0108(lVar10,*(undefined8 *)PTR_DAT_065e32a8,0,
                                   *(undefined4 *)(lVar10 + 0x10),0);
              uVar5 = FUN_04dbda58(lVar10,0x5c,iVar6 + 1,0);
              unaff_x19 = FUN_04dbaed4(lVar10,0,uVar5,0);
            }
          }
        }
      }
      goto LAB_04ec28b0;
    }
    uVar7 = FUN_04f778f8(0);
    if ((uVar7 & 1) == 0) {
      do {
        iVar6 = FUN_04dbda58();
        if (iVar6 == -1) {
          iVar6 = -1;
          break;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == *(int *)(unaff_x19 + 0x10)) break;
        sVar3 = FUN_04db48b0();
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar10);
          lVar10 = *(long *)puVar2;
        }
        if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) == sVar3) break;
        sVar3 = FUN_04db48b0();
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar10);
          lVar10 = *(long *)puVar2;
        }
      } while (*(short *)(*(long *)(lVar10 + 0xb8) + 8) != sVar3);
      bVar1 = 0 < iVar6;
    }
    else {
      bVar1 = true;
    }
    lVar10 = FUN_04eb3344();
    if (lVar10 == 0) goto LAB_04ec2a0c;
    sVar3 = FUN_04db48b0(lVar10,*(int *)(lVar10 + 0x10) + -1,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar11 + 0xb8) + 10) == sVar3) {
      unaff_x19 = FUN_04db00f0(lVar10);
    }
    else {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar11);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04e945d8(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_04db9398(lVar10,uVar8);
    }
    if (bVar1) goto LAB_04ec28b0;
  }
  else {
    uVar5 = FUN_04db48b0();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar2);
    }
    uVar7 = FUN_04ebdab0(uVar5);
    if ((uVar7 & 1) == 0) goto LAB_04ec260c;
    uVar5 = FUN_04db48b0();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar2);
    }
    uVar7 = FUN_04ebdab0(uVar5);
    if ((uVar7 & 1) == 0) goto LAB_04ec260c;
    if (*(int *)(unaff_x19 + 0x10) == 2) {
LAB_04ec2a94:
      thunk_FUN_02c7737c(PTR_DAT_065c96d8);
      uVar8 = thunk_FUN_02cea894();
      uVar9 = thunk_FUN_02c7737c(PTR_DAT_065f7d68);
      FUN_04e9e938(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02c7737c(PTR_DAT_065f7d60);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar8,uVar9);
    }
    FUN_04db48b0();
    iVar6 = FUN_04dbda58();
    if (iVar6 < 0) goto LAB_04ec2a94;
    sVar3 = FUN_04db48b0();
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar10);
      lVar10 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar10);
      }
      unaff_x19 = FUN_04dbb06c();
    }
LAB_04ec28b0:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    unaff_x19 = FUN_04ec786c(unaff_x19);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar7 = FUN_04ebdab0(uVar4);
  if ((uVar7 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_04ec2a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar3 = FUN_04db48b0(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar10);
      lVar10 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar10);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04e945d8(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_04db00f0(unaff_x19,uVar8,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar7 = FUN_02ccba1c(unaff_x19,&stack0x00000008);
  if ((uVar7 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


