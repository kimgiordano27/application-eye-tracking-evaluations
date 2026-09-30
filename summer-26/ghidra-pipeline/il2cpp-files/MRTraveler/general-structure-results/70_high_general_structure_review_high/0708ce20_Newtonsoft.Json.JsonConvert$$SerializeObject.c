/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0708ce20
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03c8f898(PTR_DAT_08e71968);
  *(undefined1 *)(unaff_x21 + 0xd8d) = 1;
  puVar1 = PTR_DAT_08e69920;
  if (unaff_x19 == 0) {
    unaff_x19 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08e69920 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar3 = FUN_06f7915c();
    if (iVar3 != -1) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar5 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08ea2588);
      FUN_07064ba8(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08ea2590);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar5,uVar6);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar3 = FUN_0708cfdc();
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x10) == 0) {
        if (-1 < iVar3) goto LAB_0708cf38;
      }
      else {
        if (*(int *)(unaff_x19 + 0x10) == 0) {
          unaff_x20 = **(long **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
        }
        else if ((0 < *(int *)(unaff_x20 + 0x10)) && (sVar2 = FUN_06f6fafc(), sVar2 != 0x2e)) {
          unaff_x20 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e71968);
        }
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            return unaff_x20;
          }
          FUN_06f764fc();
        }
      }
      lVar4 = FUN_06f683f8();
      return lVar4;
    }
    if (-1 < iVar3) {
LAB_0708cf38:
      lVar4 = FUN_06f764fc();
      return lVar4;
    }
  }
  return unaff_x19;
}


