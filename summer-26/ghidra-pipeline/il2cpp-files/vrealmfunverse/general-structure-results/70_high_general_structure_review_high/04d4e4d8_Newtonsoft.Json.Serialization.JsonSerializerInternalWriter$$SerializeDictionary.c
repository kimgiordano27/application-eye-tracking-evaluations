/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 04d4e4d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  do {
    iVar2 = FUN_04c0ecb4();
    if (iVar2 == -1) {
      iVar2 = -1;
      break;
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == *(int *)(unaff_x19 + 0x10)) break;
    sVar1 = FUN_04c045f0();
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) == sVar1) break;
    sVar1 = FUN_04c045f0();
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar5);
      lVar5 = *unaff_x23;
    }
  } while (*(short *)(*(long *)(lVar5 + 0xb8) + 8) != sVar1);
  lVar5 = FUN_04d3e684(0);
  if (lVar5 != 0) {
    sVar1 = FUN_04c045f0(lVar5,*(int *)(lVar5 + 0x10) + -1,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar6);
      lVar6 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) == sVar1) {
      lVar5 = FUN_04bffdac(lVar5);
    }
    else {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar6);
      }
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04cea618(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar5 = FUN_04c0a5c4(lVar5,uVar4);
    }
    if (0 < iVar2) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar5 = FUN_04d539a8(lVar5);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_04d53918(unaff_w20);
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) goto LAB_04d4e798;
      sVar1 = FUN_04c045f0(lVar5,*(int *)(lVar5 + 0x10) + -1,0);
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar6);
        lVar6 = *unaff_x23;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar1) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar6);
        }
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_04cea618(*(long *)(*unaff_x23 + 0xb8) + 10,0);
        lVar5 = FUN_04bffdac(lVar5,uVar4,0);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_02b4526c(lVar5,&stack0x00000008);
    if ((uVar3 & 1) == 0) {
      in_stack_00000008 = lVar5;
    }
    return in_stack_00000008;
  }
LAB_04d4e798:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


