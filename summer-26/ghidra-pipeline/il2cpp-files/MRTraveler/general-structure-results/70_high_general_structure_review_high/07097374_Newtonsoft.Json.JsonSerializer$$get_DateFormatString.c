/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatString
ENTRY_POINT: 07097374
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_DateFormatString(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  int unaff_w20;
  uint unaff_w23;
  
  puVar1 = PTR_DAT_08ea2830;
  if (in_w8 < unaff_w20) {
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar3 = thunk_FUN_03cf5234();
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80498);
    FUN_070619b8(uVar3,uVar4,uVar5,0);
LAB_07097554:
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea28b8);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar3,uVar4);
  }
  if (unaff_w23 != 0x10000000) {
    if ((0x1f < unaff_w23) && (unaff_w23 != 0x40000000)) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar3 = thunk_FUN_03cf5234();
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
      FUN_0705df24(uVar3,uVar4,uVar5,0);
      goto LAB_07097554;
    }
    if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_0941be42 == '\0') {
      FUN_03c8f898(PTR_DAT_08ea2830);
      DAT_0941be42 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    if (**(char **)(lVar2 + 0xb8) == '\0') {
      FUN_07098b30();
      return;
    }
  }
  FUN_070975b4();
  return;
}


