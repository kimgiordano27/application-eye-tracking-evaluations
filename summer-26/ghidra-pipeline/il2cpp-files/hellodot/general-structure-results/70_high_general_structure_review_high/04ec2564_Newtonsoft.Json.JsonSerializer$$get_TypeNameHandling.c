/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameHandling
ENTRY_POINT: 04ec2564
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


long Newtonsoft_Json_JsonSerializer__get_TypeNameHandling(ulong param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar5 = FUN_04ec6c78();
    if ((uVar5 & 1) != 0) {
      lVar8 = *unaff_x23;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *unaff_x23;
      }
      if ((*(short *)(*(long *)(lVar8 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
        uVar4 = FUN_04db48b0();
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*unaff_x23);
        }
        uVar5 = FUN_04ebdab0(uVar4);
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_04db48b0();
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*unaff_x23);
          }
          uVar5 = FUN_04ebdab0(uVar4);
          if ((uVar5 & 1) == 0) {
            lVar8 = FUN_04eb3344();
            if (lVar8 == 0) goto LAB_04ec2a0c;
            sVar2 = FUN_04db48b0(lVar8,1,0);
            lVar9 = *unaff_x23;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar9);
              lVar9 = *unaff_x23;
            }
            if (*(short *)(*(long *)(lVar9 + 0xb8) + 0x18) == sVar2) {
              FUN_04dbaed4(lVar8,0,2,0);
              unaff_x19 = FUN_04db00f0();
            }
            else {
              iVar3 = FUN_04dc0108(lVar8,*(undefined8 *)PTR_DAT_065e32a8,0,
                                   *(undefined4 *)(lVar8 + 0x10),0);
              uVar4 = FUN_04dbda58(lVar8,0x5c,iVar3 + 1,0);
              unaff_x19 = FUN_04dbaed4(lVar8,0,uVar4,0);
            }
          }
        }
      }
      goto LAB_04ec28b0;
    }
    uVar5 = FUN_04f778f8(0);
    if ((uVar5 & 1) == 0) {
      do {
        iVar3 = FUN_04dbda58();
        if (iVar3 == -1) {
          iVar3 = -1;
          break;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == *(int *)(unaff_x19 + 0x10)) break;
        sVar2 = FUN_04db48b0();
        lVar8 = *unaff_x23;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar8);
          lVar8 = *unaff_x23;
        }
        if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) == sVar2) break;
        sVar2 = FUN_04db48b0();
        lVar8 = *unaff_x23;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar8);
          lVar8 = *unaff_x23;
        }
      } while (*(short *)(*(long *)(lVar8 + 0xb8) + 8) != sVar2);
      bVar1 = 0 < iVar3;
    }
    else {
      bVar1 = true;
    }
    lVar8 = FUN_04eb3344();
    if (lVar8 == 0) goto LAB_04ec2a0c;
    sVar2 = FUN_04db48b0(lVar8,*(int *)(lVar8 + 0x10) + -1,0);
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar9);
      lVar9 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar9 + 0xb8) + 10) == sVar2) {
      unaff_x19 = FUN_04db00f0(lVar8);
    }
    else {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar9);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      unaff_x19 = FUN_04db9398(lVar8,uVar6);
    }
    if (bVar1) goto LAB_04ec28b0;
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) == 2) {
LAB_04ec2a94:
      thunk_FUN_02c7737c(PTR_DAT_065c96d8);
      uVar6 = thunk_FUN_02cea894();
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_065f7d68);
      FUN_04e9e938(uVar6,uVar7,0);
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_065f7d60);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar6,uVar7);
    }
    FUN_04db48b0();
    iVar3 = FUN_04dbda58();
    if (iVar3 < 0) goto LAB_04ec2a94;
    sVar2 = FUN_04db48b0();
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar8);
      lVar8 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) != sVar2) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar8);
      }
      unaff_x19 = FUN_04dbb06c();
    }
LAB_04ec28b0:
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    unaff_x19 = FUN_04ec786c(unaff_x19);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar5 = FUN_04ebdab0(unaff_w20);
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_04ec2a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar2 = FUN_04db48b0(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar8);
      lVar8 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) != sVar2) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar8);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      unaff_x19 = FUN_04db00f0(unaff_x19,uVar6,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar5 = FUN_02ccba1c(unaff_x19,&stack0x00000008);
  if ((uVar5 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


