/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 0708e500
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  iVar2 = FUN_06f79078();
  if (iVar2 < 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea2608);
    FUN_07064ba8(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea2600);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,uVar5);
  }
  sVar1 = FUN_06f6fafc();
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar6);
    lVar6 = *unaff_x23;
  }
  if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar1) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
    }
    unaff_x19 = FUN_06f76694();
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar6 = FUN_0708eb34(unaff_x19);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_0708eaa8(unaff_w20);
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    sVar1 = FUN_06f6fafc(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar7);
      lVar7 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar7);
      }
      if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar4 = FUN_07059e90(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar6 = FUN_06f683f8(lVar6,uVar4,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e9bb38 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = thunk_FUN_03c8f538(lVar6,&stack0x00000008,0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000008 = lVar6;
  }
  return in_stack_00000008;
}


