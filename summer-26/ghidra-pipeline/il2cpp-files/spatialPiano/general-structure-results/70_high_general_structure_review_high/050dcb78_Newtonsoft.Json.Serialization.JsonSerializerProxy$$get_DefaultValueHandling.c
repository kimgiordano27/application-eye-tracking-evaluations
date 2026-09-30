/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 050dcb78
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling
               (ulong param_1,short param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               uint *param_6)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  
  puVar8 = PTR_DAT_067c8f80;
  if ((DAT_06bb9bef & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(PTR_DAT_067d5f10);
    FUN_02f08768(PTR_DAT_067dbd90);
    FUN_02f08768(PTR_DAT_067d60d8);
    DAT_06bb9bef = 1;
  }
  uVar18 = param_1 >> 0x20;
  uVar5 = uVar18;
  if (uVar18 == 0) {
    uVar5 = param_1;
  }
  uVar16 = 9;
  if (uVar18 == 0) {
    uVar16 = 1;
  }
  uVar13 = uVar5 >> 0x10;
  uVar4 = uVar13;
  if (uVar13 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar16 | 4;
  if (uVar13 == 0) {
    uVar3 = uVar16;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar16 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar16 = uVar3;
  }
  if (0xf < uVar5) {
    uVar16 = uVar16 + 1;
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar10 = PTR_DAT_067dbd90;
  puVar9 = PTR_DAT_067d5f10;
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar16) {
    uVar3 = uVar16;
  }
  if ((int)param_5 < (int)uVar3) {
    *param_6 = 0;
  }
  else {
    *param_6 = uVar3;
    lVar11 = FUN_034702c8(param_4,param_5,*(undefined8 *)puVar9);
    lVar12 = *(long *)puVar10;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar12);
    }
    iVar17 = *(int *)(*(long *)puVar10 + 0xe4);
    if ((int)(param_1 >> 0x20) == 0) {
      if (iVar17 == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((int)param_3 < 2) {
        param_3 = 1;
      }
      psVar15 = (short *)(lVar11 + (ulong)uVar3 * 2 + -2);
      iVar17 = param_3 - 2;
      do {
        uVar16 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar16 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar16 & 0xe)) {
          sVar2 = param_2;
        }
        psVar14 = psVar15 + -1;
        *psVar15 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar17 + -1;
        bVar1 = -1 < iVar17;
        psVar15 = psVar14;
        iVar17 = iVar6;
      } while ((bVar1) || (0xf < uVar16));
    }
    else {
      if (iVar17 == 0) {
        thunk_FUN_02f6670c();
      }
      psVar15 = (short *)(lVar11 + (ulong)uVar3 * 2 + -2);
      iVar17 = 6;
      do {
        uVar16 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar16 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar16 & 0xe)) {
          sVar2 = param_2;
        }
        psVar14 = psVar15 + -1;
        *psVar15 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar17 + -1;
        bVar1 = -1 < iVar17;
        psVar15 = psVar14;
        iVar17 = iVar6;
      } while ((bVar1) || (0xf < uVar16));
      iVar17 = param_3 - 10;
      do {
        uVar16 = (uint)uVar18;
        uVar7 = (ushort)uVar18;
        uVar18 = (ulong)(uVar16 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar16 & 0xe)) {
          sVar2 = param_2;
        }
        psVar15 = psVar14 + -1;
        *psVar14 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar17 + -1;
        bVar1 = -1 < iVar17;
        psVar14 = psVar15;
        iVar17 = iVar6;
      } while ((bVar1) || (0xf < uVar16));
    }
  }
  return (int)uVar3 <= (int)param_5;
}


