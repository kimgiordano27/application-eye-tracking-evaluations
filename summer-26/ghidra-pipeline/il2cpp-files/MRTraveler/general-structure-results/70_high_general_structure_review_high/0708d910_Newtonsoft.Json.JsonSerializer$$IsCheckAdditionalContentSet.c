/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 0708d910
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(void)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  thunk_FUN_03cd7500();
  iVar2 = FUN_06f7915c();
  if (-1 < iVar2) {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea25c8);
    FUN_07064ba8(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea25d0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,uVar5);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  iVar2 = FUN_06f79a3c();
  if ((iVar2 != 0) && (iVar2 < 1)) {
    return **(undefined8 **)(*unaff_x19 + 0xb8);
  }
  lVar3 = FUN_06f764fc();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (iVar2 < 2) {
    lVar6 = *unaff_x22;
    if (iVar2 == 1) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
        lVar6 = *unaff_x22;
      }
      if ((*(short *)(*(long *)(lVar6 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x20 + 0x10))) {
        sVar1 = FUN_06f6fafc();
        lVar6 = *unaff_x22;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar6);
          lVar6 = *unaff_x22;
        }
        if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar1) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar6);
          }
          if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar6 = *(long *)(*unaff_x22 + 0xb8) + 0x18;
          goto FUN_0708db00;
        }
      }
    }
  }
  else {
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
      lVar6 = *unaff_x22;
    }
    if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) == 0x5c) {
      sVar1 = FUN_06f6fafc(lVar3,iVar2 + -1,0);
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
        lVar6 = *unaff_x22;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar6);
        }
        if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar6 = *(long *)(*unaff_x22 + 0xb8) + 10;
FUN_0708db00:
        uVar4 = FUN_07059e90(lVar6,0);
        uVar4 = FUN_06f683f8(lVar3,uVar4,0);
        return uVar4;
      }
    }
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar6);
  }
  uVar4 = FUN_0708d3f4(lVar3);
  return uVar4;
}


