/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 04d4e454
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
               (long param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  sVar1 = FUN_04c045f0(param_1,param_2,0);
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar6);
    lVar6 = *unaff_x23;
  }
  if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar1) {
    FUN_04c0c288(param_1,0,2,0);
    uVar4 = FUN_04bffdac();
  }
  else {
    iVar2 = FUN_04c0fce0(param_1,*(undefined8 *)PTR_DAT_0631d628,0,*(undefined4 *)(param_1 + 0x10),0
                        );
    uVar3 = FUN_04c0ecb4(param_1,0x5c,iVar2 + 1,0);
    uVar4 = FUN_04c0c288(param_1,0,uVar3,0);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar6 = FUN_04d539a8(uVar4);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04d53918(unaff_w20);
  if ((uVar5 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    sVar1 = FUN_04c045f0(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar7);
      lVar7 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar7);
      }
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04cea618(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar6 = FUN_04bffdac(lVar6,uVar4,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_02b4526c(lVar6,&stack0x00000008);
  if ((uVar5 & 1) == 0) {
    in_stack_00000008 = lVar6;
  }
  return in_stack_00000008;
}


