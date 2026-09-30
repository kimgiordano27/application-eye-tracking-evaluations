/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 0708e558
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  uVar2 = FUN_06f76694();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar3 = FUN_0708eb34(uVar2);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar4 = FUN_0708eaa8(unaff_w20);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    sVar1 = FUN_06f6fafc(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
      lVar5 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar5);
      }
      if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_07059e90(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar3 = FUN_06f683f8(lVar3,uVar2,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e9bb38 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar4 = thunk_FUN_03c8f538(lVar3,&stack0x00000008,0);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = lVar3;
  }
  return in_stack_00000008;
}


