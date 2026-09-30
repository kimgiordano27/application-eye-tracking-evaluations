/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MissingMemberHandling
ENTRY_POINT: 04ec2774
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_MissingMemberHandling(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long *unaff_x23;
  long in_stack_00000008;
  
  do {
    sVar1 = FUN_04db48b0();
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) == sVar1) break;
    sVar1 = FUN_04db48b0();
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 8) == sVar1) break;
    iVar2 = FUN_04dbda58();
    if (iVar2 == -1) {
      unaff_w21 = -1;
      break;
    }
    unaff_w21 = iVar2 + 1;
  } while (unaff_w21 != *(int *)(unaff_x19 + 0x10));
  lVar5 = FUN_04eb3344();
  if (lVar5 != 0) {
    sVar1 = FUN_04db48b0(lVar5,*(int *)(lVar5 + 0x10) + -1,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar6);
      lVar6 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) == sVar1) {
      lVar5 = FUN_04db00f0(lVar5);
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar4 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar5 = FUN_04db9398(lVar5,uVar4);
    }
    if (0 < unaff_w21) {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar5 = FUN_04ec786c(lVar5);
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_04ebdab0(unaff_w20);
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) goto LAB_04ec2a0c;
      sVar1 = FUN_04db48b0(lVar5,*(int *)(lVar5 + 0x10) + -1,0);
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
        lVar6 = *unaff_x23;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
        }
        if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
        lVar5 = FUN_04db00f0(lVar5,uVar4,0);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_02ccba1c(lVar5,&stack0x00000008);
    if ((uVar3 & 1) == 0) {
      in_stack_00000008 = lVar5;
    }
    return in_stack_00000008;
  }
LAB_04ec2a0c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


