/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 07097794
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  int unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined *puVar7;
  
  puVar7 = PTR_DAT_08ea2830;
  if ((unaff_w23 != in_w8) && (unaff_w23 != 0x40000000)) {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
    FUN_0705df24(uVar4,uVar5,uVar6,0);
    goto LAB_07097a0c;
  }
  uVar1 = *(uint *)(unaff_x22 + 0x10);
  if ((uVar1 == 0) && (unaff_w20 + 1 < 2)) {
    unaff_w20 = -(uint)(*(int *)(unaff_x21 + 0x10) != 0);
LAB_07097850:
    return (ulong)unaff_w20;
  }
  if (((int)unaff_w20 < 0) || ((int)uVar1 < (int)unaff_w20)) {
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80480);
    puVar7 = PTR_DAT_08e80488;
  }
  else {
    if (uVar1 == unaff_w20) {
      unaff_w19 = unaff_w19 - (uint)(0 < unaff_w19);
      unaff_w20 = unaff_w20 - 1;
      if ((unaff_w19 < 0) || (*(int *)(unaff_x21 + 0x10) != 0)) goto LAB_070977f0;
      if (-2 < (int)(unaff_w20 - unaff_w19)) goto LAB_07097850;
LAB_070977f4:
      if (-1 < (int)((unaff_w20 - unaff_w19) + 1)) {
        if (unaff_w23 == 0x10000000) {
          uVar2 = FUN_07097a6c();
          return uVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_0941be42 == '\0') {
          FUN_03c8f898(PTR_DAT_08ea2830);
          DAT_0941be42 = '\x01';
        }
        lVar3 = *(long *)puVar7;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *(long *)puVar7;
        }
        if (**(char **)(lVar3 + 0xb8) == '\0') {
          uVar2 = FUN_07098b30();
          return uVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_08e9bb60 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar2 = FUN_07095094();
        return uVar2;
      }
    }
    else {
LAB_070977f0:
      if (-1 < unaff_w19) goto LAB_070977f4;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
    puVar7 = PTR_DAT_08e80498;
  }
  uVar6 = thunk_FUN_03ce5214(puVar7);
  FUN_070619b8(uVar4,uVar5,uVar6,0);
LAB_07097a0c:
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea28c8);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,uVar5);
}


