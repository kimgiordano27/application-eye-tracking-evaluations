/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 050dcb98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling
               (ulong param_1,short param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  uint *unaff_x23;
  long unaff_x25;
  ulong uVar17;
  long unaff_x27;
  long *plVar18;
  
  plVar18 = *(long **)(unaff_x27 + 0xf80);
  if ((*(byte *)(unaff_x25 + 0xbef) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(PTR_DAT_067d5f10);
    FUN_02f08768(PTR_DAT_067dbd90);
    FUN_02f08768(PTR_DAT_067d60d8);
    *(undefined1 *)(unaff_x25 + 0xbef) = 1;
  }
  uVar17 = param_1 >> 0x20;
  uVar5 = uVar17;
  if (uVar17 == 0) {
    uVar5 = param_1;
  }
  uVar15 = 9;
  if (uVar17 == 0) {
    uVar15 = 1;
  }
  uVar12 = uVar5 >> 0x10;
  uVar4 = uVar12;
  if (uVar12 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar15 | 4;
  if (uVar12 == 0) {
    uVar3 = uVar15;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar15 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar15 = uVar3;
  }
  if (0xf < uVar5) {
    uVar15 = uVar15 + 1;
  }
  if (*(int *)(*plVar18 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar9 = PTR_DAT_067dbd90;
  puVar8 = PTR_DAT_067d5f10;
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar15) {
    uVar3 = uVar15;
  }
  if ((int)param_5 < (int)uVar3) {
    *unaff_x23 = 0;
  }
  else {
    *unaff_x23 = uVar3;
    lVar10 = FUN_034702c8(param_4,param_5,*(undefined8 *)puVar8);
    lVar11 = *(long *)puVar9;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar11);
    }
    iVar16 = *(int *)(*(long *)puVar9 + 0xe4);
    if ((int)(param_1 >> 0x20) == 0) {
      if (iVar16 == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(int *)(*plVar18 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((int)param_3 < 2) {
        param_3 = 1;
      }
      psVar14 = (short *)(lVar10 + (ulong)uVar3 * 2 + -2);
      iVar16 = param_3 - 2;
      do {
        uVar15 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar15 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar15 & 0xe)) {
          sVar2 = param_2;
        }
        psVar13 = psVar14 + -1;
        *psVar14 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar16 + -1;
        bVar1 = -1 < iVar16;
        psVar14 = psVar13;
        iVar16 = iVar6;
      } while ((bVar1) || (0xf < uVar15));
    }
    else {
      if (iVar16 == 0) {
        thunk_FUN_02f6670c();
      }
      psVar14 = (short *)(lVar10 + (ulong)uVar3 * 2 + -2);
      iVar16 = 6;
      do {
        uVar15 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar15 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar15 & 0xe)) {
          sVar2 = param_2;
        }
        psVar13 = psVar14 + -1;
        *psVar14 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar16 + -1;
        bVar1 = -1 < iVar16;
        psVar14 = psVar13;
        iVar16 = iVar6;
      } while ((bVar1) || (0xf < uVar15));
      iVar16 = param_3 - 10;
      do {
        uVar15 = (uint)uVar17;
        uVar7 = (ushort)uVar17;
        uVar17 = (ulong)(uVar15 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar15 & 0xe)) {
          sVar2 = param_2;
        }
        psVar14 = psVar13 + -1;
        *psVar13 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar16 + -1;
        bVar1 = -1 < iVar16;
        psVar13 = psVar14;
        iVar16 = iVar6;
      } while ((bVar1) || (0xf < uVar15));
    }
  }
  return (int)uVar3 <= (int)param_5;
}


