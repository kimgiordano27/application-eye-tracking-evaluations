/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 074ebe5c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int unaff_w19;
  ulong unaff_x20;
  ulong uVar13;
  int *unaff_x21;
  int unaff_w23;
  int iVar14;
  
  iVar14 = 0xf;
  uVar10 = (uint)(unaff_x20 / 100000000000000);
  if (9 < uVar10) {
    uVar11 = (uint)(unaff_x20 / 100000000000000);
    if (uVar10 < 99 || uVar11 == 99) {
      iVar14 = 0x10;
    }
    else if (uVar11 < 1000) {
      iVar14 = 0x11;
    }
    else if ((uint)(unaff_x20 / 1600000000000000) < 0x271) {
      iVar14 = 0x12;
    }
    else if ((uint)(unaff_x20 / 3200000000000000) < 0xc35) {
      iVar14 = 0x13;
    }
    else if ((uint)(unaff_x20 / 100000000000000) < 1000000) {
      iVar14 = 0x14;
    }
    else {
      iVar14 = 0x15;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar4 = PTR_DAT_08f9f500;
  iVar2 = unaff_w23;
  if (unaff_w23 <= iVar14) {
    iVar2 = iVar14;
  }
  if (unaff_w19 < iVar2) {
    *unaff_x21 = 0;
  }
  else {
    *unaff_x21 = iVar2;
    lVar5 = FUN_04bf98a0();
    lVar6 = *(long *)puVar4;
    iVar14 = unaff_w23 + -2;
    psVar8 = (short *)(lVar5 + (ulong)(uint)(iVar2 << 1));
    while( true ) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar6 = *(long *)puVar4;
      iVar12 = (int)unaff_x20;
      if (unaff_x20 >> 0x20 == 0) break;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar6 = *(long *)puVar4;
      }
      unaff_x20 = unaff_x20 / 1000000000;
      uVar13 = (ulong)(uint)(iVar12 + (int)unaff_x20 * -1000000000);
      iVar12 = 7;
      do {
        do {
          uVar7 = uVar13 / 10;
          uVar10 = (uint)uVar13;
          psVar8 = psVar8 + -1;
          *psVar8 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
          iVar3 = iVar12 + -1;
          bVar1 = -1 < iVar12;
          uVar13 = uVar7;
          iVar12 = iVar3;
        } while (bVar1);
      } while (9 < uVar10);
      unaff_w23 = unaff_w23 + -9;
      iVar14 = iVar14 + -9;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((iVar12 != 0) || (-1 < unaff_w23 + -1)) {
      psVar8 = psVar8 + -1;
      do {
        do {
          uVar10 = (uint)unaff_x20;
          iVar12 = iVar14 + -1;
          uVar13 = (unaff_x20 & 0xffffffff) / 10;
          psVar9 = psVar8 + -1;
          *psVar8 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar14;
          psVar8 = psVar9;
          unaff_x20 = uVar13;
          iVar14 = iVar12;
        } while (bVar1);
      } while (9 < uVar10);
    }
  }
  return iVar2 <= unaff_w19;
}


