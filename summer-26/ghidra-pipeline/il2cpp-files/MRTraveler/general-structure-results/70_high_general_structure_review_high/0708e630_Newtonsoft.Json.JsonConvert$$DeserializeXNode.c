/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 0708e630
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
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  lVar4 = FUN_07053ad0();
  if (lVar4 != 0) {
    sVar1 = FUN_06f6fafc(lVar4,1,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar7);
      lVar7 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 0x18) == sVar1) {
      FUN_06f764fc(lVar4,0,2,0);
      uVar5 = FUN_06f683f8();
    }
    else {
      iVar2 = FUN_06f7b728(lVar4,*(undefined8 *)PTR_DAT_08e92eb8,0,*(undefined4 *)(lVar4 + 0x10),0);
      uVar3 = FUN_06f79078(lVar4,0x5c,iVar2 + 1,0);
      uVar5 = FUN_06f764fc(lVar4,0,uVar3,0);
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar4 = FUN_0708eb34(uVar5);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_0708eaa8(unaff_w20);
    if ((uVar6 & 1) != 0) {
      if (lVar4 == 0) goto Newtonsoft_Json_JsonConverterAttribute__get_ConverterType;
      sVar1 = FUN_06f6fafc(lVar4,*(int *)(lVar4 + 0x10) + -1,0);
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
        uVar5 = FUN_07059e90(*(long *)(*unaff_x23 + 0xb8) + 10,0);
        lVar4 = FUN_06f683f8(lVar4,uVar5,0);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_08e9bb38 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = thunk_FUN_03c8f538(lVar4,&stack0x00000008,0);
    if ((uVar6 & 1) == 0) {
      in_stack_00000008 = lVar4;
    }
    return in_stack_00000008;
  }
Newtonsoft_Json_JsonConverterAttribute__get_ConverterType:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


