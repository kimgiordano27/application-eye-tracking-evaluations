/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$.ctor
ENTRY_POINT: 055d8828
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0___ctor
               (undefined8 param_1)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w20;
  short unaff_w22;
  long *unaff_x23;
  long in_stack_00000008;
  
  thunk_FUN_02e9a04c(param_1);
  if (*(short *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) == unaff_w22) {
    FUN_0548f424();
    uVar2 = FUN_05482ce0();
  }
  else {
    FUN_054935d0();
    FUN_054925a0();
    uVar2 = FUN_0548f424();
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar3 = FUN_055ddde0(uVar2);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_055d3e14(unaff_w20);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    sVar1 = FUN_05487524(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar2 = FUN_0556e974(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar3 = FUN_05482ce0(lVar3,uVar2,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06a7aba8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_02e452e4(lVar3,&stack0x00000008);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = lVar3;
  }
  return in_stack_00000008;
}


