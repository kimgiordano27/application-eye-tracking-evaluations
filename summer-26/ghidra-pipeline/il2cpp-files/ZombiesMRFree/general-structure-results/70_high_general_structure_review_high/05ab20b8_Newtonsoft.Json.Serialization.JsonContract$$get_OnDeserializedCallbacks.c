/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 05ab20b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(void)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x20;
  int iVar7;
  
  FUN_02fe925c(PTR_DAT_06f6dbb8);
  FUN_02fe925c(PTR_DAT_06fabd78);
  FUN_02fe925c(PTR_DAT_06fa3610);
  FUN_02fe925c(PTR_DAT_06fabd80);
  *(undefined1 *)(unaff_x19 + 0x1a) = 1;
  plVar6 = unaff_x20 + 0x15;
  if (*plVar6 != 0) goto LAB_05ab22fc;
  if ((char)unaff_x20[0x16] == '\0') {
    FUN_030414c4();
    *(undefined1 *)(unaff_x20 + 0x16) = 1;
  }
  iVar1 = *(int *)((long)unaff_x20 + 0x14);
  iVar7 = (int)unaff_x20[3];
  if (iVar7 == iVar1) {
    if (iVar7 == 0x7c04) {
      lVar3 = (**(code **)(*unaff_x20 + 600))();
      lVar4 = (**(code **)(*unaff_x20 + 600))();
      if ((lVar4 == 0) || (lVar3 == 0)) goto LAB_05ab2310;
      sVar2 = FUN_0596d0e4(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 == 0x79) {
        lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dbb8);
        puVar5 = (undefined8 *)PTR_DAT_06fabd78;
        goto LAB_05ab2268;
      }
      iVar7 = (int)unaff_x20[3];
    }
    if (iVar7 != 4) {
      return 0;
    }
    lVar3 = (**(code **)(*unaff_x20 + 600))();
    lVar4 = (**(code **)(*unaff_x20 + 600))();
    if ((lVar4 != 0) && (lVar3 != 0)) {
      sVar2 = FUN_0596d0e4(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 != 0x79) {
        return 0;
      }
      lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dbb8);
      puVar5 = (undefined8 *)PTR_DAT_06fabd80;
LAB_05ab2268:
      FUN_05ab3564(lVar3,*puVar5,1,0);
      *plVar6 = lVar3;
      thunk_FUN_03048534(plVar6,lVar3);
      return lVar3;
    }
LAB_05ab2310:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (iVar7 == 0x7f) {
    if (*(int *)(*(long *)PTR_DAT_06f6dbb8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    unaff_x20 = (long *)FUN_05aa3bf0();
    *plVar6 = (long)unaff_x20;
  }
  else {
    if (iVar1 == 0x404) {
      unaff_x20 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dbb8);
      FUN_05ab3564(unaff_x20,*(undefined8 *)PTR_DAT_06fa3610,1,0);
    }
    else {
      if (iVar1 == 0x7f) {
        unaff_x20[0x15] = (long)unaff_x20;
        goto LAB_05ab22f8;
      }
      unaff_x20 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dbb8);
      FUN_05ab32ac(unaff_x20,iVar7,1,0);
    }
    *plVar6 = (long)unaff_x20;
  }
LAB_05ab22f8:
  thunk_FUN_03048534(plVar6,unaff_x20);
LAB_05ab22fc:
  return *plVar6;
}


