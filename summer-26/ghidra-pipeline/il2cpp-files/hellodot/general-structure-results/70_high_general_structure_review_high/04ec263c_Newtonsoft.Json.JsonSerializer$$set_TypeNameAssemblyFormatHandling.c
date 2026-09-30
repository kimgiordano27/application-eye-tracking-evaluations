/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 04ec263c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_TypeNameAssemblyFormatHandling(long param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  if ((*(short *)(*(long *)(param_1 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
    uVar2 = FUN_04db48b0();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x23);
    }
    uVar4 = FUN_04ebdab0(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_04db48b0();
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*unaff_x23);
      }
      uVar4 = FUN_04ebdab0(uVar2);
      if ((uVar4 & 1) == 0) {
        lVar5 = FUN_04eb3344();
        if (lVar5 == 0) goto LAB_04ec2a0c;
        sVar1 = FUN_04db48b0(lVar5,1,0);
        lVar7 = *unaff_x23;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar7);
          lVar7 = *unaff_x23;
        }
        if (*(short *)(*(long *)(lVar7 + 0xb8) + 0x18) == sVar1) {
          FUN_04dbaed4(lVar5,0,2,0);
          unaff_x19 = FUN_04db00f0();
        }
        else {
          iVar3 = FUN_04dc0108(lVar5,*(undefined8 *)PTR_DAT_065e32a8,0,*(undefined4 *)(lVar5 + 0x10)
                               ,0);
          uVar2 = FUN_04dbda58(lVar5,0x5c,iVar3 + 1,0);
          unaff_x19 = FUN_04dbaed4(lVar5,0,uVar2,0);
        }
      }
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar5 = FUN_04ec786c(unaff_x19);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_04ebdab0(unaff_w20);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) {
LAB_04ec2a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    sVar1 = FUN_04db48b0(lVar5,*(int *)(lVar5 + 0x10) + -1,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
      lVar7 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar7);
      }
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar5 = FUN_04db00f0(lVar5,uVar6,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_02ccba1c(lVar5,&stack0x00000008);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = lVar5;
  }
  return in_stack_00000008;
}


