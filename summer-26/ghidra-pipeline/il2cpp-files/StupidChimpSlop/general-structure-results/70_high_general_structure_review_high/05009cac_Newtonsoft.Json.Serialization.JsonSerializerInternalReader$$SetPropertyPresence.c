/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 05009cac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  bool bVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  uint unaff_w19;
  uint unaff_w20;
  short unaff_w21;
  uint unaff_w22;
  long lVar10;
  uint unaff_w24;
  uint uVar11;
  long *unaff_x25;
  long lVar12;
  long unaff_x27;
  long *plVar13;
  
  uVar11 = unaff_w20;
  if (in_ZR || in_NG != in_OV) {
    uVar11 = unaff_w22;
  }
  plVar13 = *(long **)(unaff_x27 + 0xa10);
  lVar7 = thunk_FUN_02d88038((ulong)uVar11,0);
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  else {
    iVar6 = thunk_FUN_02d59a10(0);
    lVar12 = lVar7 + iVar6;
  }
  if (*(int *)(*plVar13 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar5 = (ulong)uVar11 * 2;
  lVar3 = lVar7;
  lVar10 = 0;
  if (unaff_w24 != 0) {
    lVar3 = 0;
    lVar10 = lVar7;
  }
  iVar6 = *(int *)(*plVar13 + 0xe4);
  if (unaff_w24 == 0) {
    if (iVar6 == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if ((int)unaff_w20 < 2) {
      unaff_w20 = 1;
    }
    psVar9 = (short *)(lVar12 + lVar5 + -2);
    iVar6 = unaff_w20 - 2;
    do {
      uVar11 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar11 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar8 = psVar9 + -1;
      *psVar9 = sVar2 + ((ushort)uVar11 & 0xf);
      iVar4 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar9 = psVar8;
      unaff_w19 = uVar11 >> 4;
      iVar6 = iVar4;
    } while ((bVar1) || (lVar10 = lVar3, 0xf < uVar11));
  }
  else {
    if (iVar6 == 0) {
      thunk_FUN_02dabd98();
    }
    psVar9 = (short *)(lVar12 + lVar5 + -2);
    iVar6 = 6;
    do {
      uVar11 = unaff_w19;
      sVar2 = 0x30;
      if (9 < (uVar11 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar8 = psVar9 + -1;
      *psVar9 = sVar2 + ((ushort)uVar11 & 0xf);
      iVar4 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar9 = psVar8;
      unaff_w19 = uVar11 >> 4;
      iVar6 = iVar4;
    } while ((bVar1) || (0xf < uVar11));
    iVar6 = unaff_w20 - 10;
    do {
      uVar11 = unaff_w24;
      sVar2 = 0x30;
      if (9 < (uVar11 & 0xe)) {
        sVar2 = unaff_w21;
      }
      psVar9 = psVar8 + -1;
      *psVar8 = sVar2 + ((ushort)uVar11 & 0xf);
      iVar4 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar8 = psVar9;
      unaff_w24 = uVar11 >> 4;
      iVar6 = iVar4;
    } while ((bVar1) || (0xf < uVar11));
  }
  return lVar10;
}


