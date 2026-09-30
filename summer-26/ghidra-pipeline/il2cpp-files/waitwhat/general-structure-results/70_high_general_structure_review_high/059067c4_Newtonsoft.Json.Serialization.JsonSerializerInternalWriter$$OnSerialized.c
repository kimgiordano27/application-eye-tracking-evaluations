/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 059067c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(undefined8 param_1)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = FUN_05906c64(param_1);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_05906bd4(unaff_w20);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    sVar1 = FUN_057b9840(lVar2,*(int *)(lVar2 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar5);
      }
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_05897428(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar2 = FUN_057b27f0(lVar2,uVar4,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_070fbbf0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_0318f87c(lVar2,&stack0x00000008);
  if ((uVar3 & 1) == 0) {
    in_stack_00000008 = lVar2;
  }
  return in_stack_00000008;
}


