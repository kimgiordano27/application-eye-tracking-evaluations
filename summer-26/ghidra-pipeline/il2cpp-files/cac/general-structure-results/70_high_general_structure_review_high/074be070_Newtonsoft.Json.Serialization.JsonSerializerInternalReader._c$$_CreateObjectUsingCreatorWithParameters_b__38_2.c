/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_2
ENTRY_POINT: 074be070
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_2
               (void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  char cVar6;
  long unaff_x19;
  short *unaff_x20;
  long lVar7;
  int iVar8;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  
  FUN_07346f30();
  if (unaff_w26 < 1) {
    return;
  }
  if (DAT_0968e4c0 == '\0') {
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c0 = '\x01';
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(unaff_x27 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_073213d0();
      *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar8 = unaff_w26;
    if (-unaff_w28 < unaff_w26) {
      iVar8 = -unaff_w28;
    }
    FUN_073473f4();
    unaff_w26 = unaff_w26 - iVar8;
    if (unaff_w26 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_09129228;
  iVar8 = unaff_w26 + 1;
  cVar6 = DAT_0968d807;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (cVar6 == '\0') {
      FUN_03f13384(puVar4);
      cVar6 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_07346f30();
      cVar6 = DAT_0968d807;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 2) {
      return;
    }
  } while( true );
}


