/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 0500b9e8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  bool in_ZR;
  undefined2 uVar5;
  char cVar6;
  long unaff_x19;
  short *unaff_x20;
  long lVar7;
  int iVar8;
  int unaff_w26;
  int unaff_w28;
  
  if (in_ZR) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_0500bb30:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_04e7a3d8();
      *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x0500ba3c;
    }
  }
  FUN_04e98608();
joined_r0x0500ba3c:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    iVar8 = unaff_w26;
    if (-unaff_w28 < unaff_w26) {
      iVar8 = -unaff_w28;
    }
    FUN_04e989a0();
    unaff_w26 = unaff_w26 - iVar8;
    if (unaff_w26 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_06650d78;
  iVar8 = unaff_w26 + 1;
  cVar6 = DAT_06a4e421;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (cVar6 == '\0') {
      FUN_02d4dc40(puVar4);
      cVar6 = '\x01';
      DAT_06a4e421 = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0500bb30;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_04e984dc();
      cVar6 = DAT_06a4e421;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 2) {
      return;
    }
  } while( true );
}


