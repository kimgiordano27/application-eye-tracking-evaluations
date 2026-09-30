/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 050dcbd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  short unaff_w22;
  uint *unaff_x23;
  long unaff_x25;
  ulong uVar16;
  long *unaff_x27;
  
  FUN_02f08768();
  FUN_02f08768(PTR_DAT_067d60d8);
  *(undefined1 *)(unaff_x25 + 0xbef) = 1;
  uVar16 = unaff_x20 >> 0x20;
  uVar5 = uVar16;
  if (uVar16 == 0) {
    uVar5 = unaff_x20;
  }
  uVar14 = 9;
  if (uVar16 == 0) {
    uVar14 = 1;
  }
  uVar11 = uVar5 >> 0x10;
  uVar4 = uVar11;
  if (uVar11 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar14 | 4;
  if (uVar11 == 0) {
    uVar3 = uVar14;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar14 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar14 = uVar3;
  }
  if (0xf < uVar5) {
    uVar14 = uVar14 + 1;
  }
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar8 = PTR_DAT_067dbd90;
  uVar3 = unaff_w21;
  if ((int)unaff_w21 <= (int)uVar14) {
    uVar3 = uVar14;
  }
  if (unaff_w19 < (int)uVar3) {
    *unaff_x23 = 0;
  }
  else {
    *unaff_x23 = uVar3;
    lVar9 = FUN_034702c8();
    lVar10 = *(long *)puVar8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar10);
    }
    iVar15 = *(int *)(*(long *)puVar8 + 0xe4);
    if ((int)(unaff_x20 >> 0x20) == 0) {
      if (iVar15 == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((int)unaff_w21 < 2) {
        unaff_w21 = 1;
      }
      psVar13 = (short *)(lVar9 + (ulong)uVar3 * 2 + -2);
      iVar15 = unaff_w21 - 2;
      do {
        uVar14 = (uint)unaff_x20;
        uVar7 = (ushort)unaff_x20;
        unaff_x20 = (ulong)(uVar14 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar14 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar12 = psVar13 + -1;
        *psVar13 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar15 + -1;
        bVar1 = -1 < iVar15;
        psVar13 = psVar12;
        iVar15 = iVar6;
      } while ((bVar1) || (0xf < uVar14));
    }
    else {
      if (iVar15 == 0) {
        thunk_FUN_02f6670c();
      }
      psVar13 = (short *)(lVar9 + (ulong)uVar3 * 2 + -2);
      iVar15 = 6;
      do {
        uVar14 = (uint)unaff_x20;
        uVar7 = (ushort)unaff_x20;
        unaff_x20 = (ulong)(uVar14 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar14 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar12 = psVar13 + -1;
        *psVar13 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar15 + -1;
        bVar1 = -1 < iVar15;
        psVar13 = psVar12;
        iVar15 = iVar6;
      } while ((bVar1) || (0xf < uVar14));
      iVar15 = unaff_w21 - 10;
      do {
        uVar14 = (uint)uVar16;
        uVar7 = (ushort)uVar16;
        uVar16 = (ulong)(uVar14 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar14 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar13 = psVar12 + -1;
        *psVar12 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar15 + -1;
        bVar1 = -1 < iVar15;
        psVar12 = psVar13;
        iVar15 = iVar6;
      } while ((bVar1) || (0xf < uVar14));
    }
  }
  return (int)uVar3 <= unaff_w19;
}


