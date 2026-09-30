/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 056089ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(void)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  short unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  short *psVar8;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  if (unaff_w21 <= unaff_w22) {
    unaff_w21 = unaff_w22;
  }
  lVar6 = thunk_FUN_02eeb2ec(unaff_w21,0);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    iVar5 = thunk_FUN_02ec4808(0);
    lVar7 = lVar6 + iVar5;
  }
  psVar8 = (short *)(lVar7 + (long)unaff_w21 * 2);
  if ((*(int *)(*unaff_x26 + 0xe0) == 0) && (thunk_FUN_02f12b58(), *(int *)(*unaff_x26 + 0xe0) == 0)
     ) {
    thunk_FUN_02f12b58();
  }
  if (unaff_w24 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (unaff_w22 < 2) {
      unaff_w22 = 1;
    }
    iVar5 = unaff_w22 + -2;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar8 = psVar8 + -1;
      *psVar8 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w20 != 0));
  }
  else {
    iVar5 = 6;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar8 = psVar8 + -1;
      *psVar8 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w20 != 0));
    iVar5 = unaff_w22 + -10;
    do {
      uVar1 = unaff_w24 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w24 = unaff_w24 >> 4;
      psVar8 = psVar8 + -1;
      *psVar8 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w24 != 0));
  }
  return lVar6;
}


