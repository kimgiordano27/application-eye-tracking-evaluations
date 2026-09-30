/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 074ebddc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
               (ulong param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long unaff_x24;
  
  if ((*(byte *)(unaff_x24 + 0xf15) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65580);
    FUN_0403162c(PTR_DAT_08f99650);
    FUN_0403162c(PTR_DAT_08f9f500);
    FUN_0403162c(PTR_DAT_08f8ca68);
    *(undefined1 *)(unaff_x24 + 0xf15) = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_1 < 10000000) {
    iVar14 = 1;
    uVar13 = param_1;
  }
  else if (param_1 < 100000000000000) {
    iVar14 = 8;
    uVar13 = param_1 / 10000000;
  }
  else {
    iVar14 = 0xf;
    uVar13 = param_1 / 100000000000000;
  }
  uVar11 = (uint)uVar13;
  if (9 < uVar11) {
    if (uVar11 < 100) {
      iVar14 = iVar14 + 1;
    }
    else if (uVar11 < 1000) {
      iVar14 = iVar14 + 2;
    }
    else if (uVar11 >> 4 < 0x271) {
      iVar14 = iVar14 + 3;
    }
    else if (uVar11 >> 5 < 0xc35) {
      iVar14 = iVar14 + 4;
    }
    else if (uVar11 < 1000000) {
      iVar14 = iVar14 + 5;
    }
    else {
      iVar14 = iVar14 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar5 = PTR_DAT_08f9f500;
  puVar4 = PTR_DAT_08f99650;
  iVar2 = param_2;
  if (param_2 <= iVar14) {
    iVar2 = iVar14;
  }
  if ((int)param_4 < iVar2) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar2;
    lVar6 = FUN_04bf98a0(param_3,param_4,*(undefined8 *)puVar4);
    lVar7 = *(long *)puVar5;
    iVar14 = param_2 + -2;
    psVar9 = (short *)(lVar6 + (ulong)(uint)(iVar2 << 1));
    while( true ) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar7 = *(long *)puVar5;
      iVar12 = (int)param_1;
      if (param_1 >> 0x20 == 0) break;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar7 = *(long *)puVar5;
      }
      param_1 = param_1 / 1000000000;
      uVar13 = (ulong)(uint)(iVar12 + (int)param_1 * -1000000000);
      iVar12 = 7;
      do {
        do {
          uVar8 = uVar13 / 10;
          uVar11 = (uint)uVar13;
          psVar9 = psVar9 + -1;
          *psVar9 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
          iVar3 = iVar12 + -1;
          bVar1 = -1 < iVar12;
          uVar13 = uVar8;
          iVar12 = iVar3;
        } while (bVar1);
      } while (9 < uVar11);
      param_2 = param_2 + -9;
      iVar14 = iVar14 + -9;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((iVar12 != 0) || (-1 < param_2 + -1)) {
      psVar9 = psVar9 + -1;
      do {
        do {
          uVar11 = (uint)param_1;
          iVar12 = iVar14 + -1;
          uVar13 = (param_1 & 0xffffffff) / 10;
          psVar10 = psVar9 + -1;
          *psVar9 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar14;
          psVar9 = psVar10;
          param_1 = uVar13;
          iVar14 = iVar12;
        } while (bVar1);
      } while (9 < uVar11);
    }
  }
  return iVar2 <= (int)param_4;
}


