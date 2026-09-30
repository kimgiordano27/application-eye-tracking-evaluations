/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 0717e938
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
               (ulong param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  short *psVar11;
  
  if ((DAT_09842fe6 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    FUN_03d2d2b0(PTR_DAT_0920eb10);
    DAT_09842fe6 = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_1 < 10000000) {
    iVar10 = 1;
    uVar8 = (uint)param_1;
  }
  else if (param_1 < 100000000000000) {
    uVar8 = (uint)(param_1 / 10000000);
    iVar10 = 8;
  }
  else {
    uVar8 = (uint)(param_1 / 100000000000000);
    iVar10 = 0xf;
  }
  if (9 < uVar8) {
    if (uVar8 < 100) {
      iVar10 = iVar10 + 1;
    }
    else if (uVar8 < 1000) {
      iVar10 = iVar10 + 2;
    }
    else if (uVar8 >> 4 < 0x271) {
      iVar10 = iVar10 + 3;
    }
    else if (uVar8 >> 5 < 0xc35) {
      iVar10 = iVar10 + 4;
    }
    else if (uVar8 < 1000000) {
      iVar10 = iVar10 + 5;
    }
    else {
      iVar10 = iVar10 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (iVar10 <= param_2) {
    iVar10 = param_2;
  }
  lVar4 = thunk_FUN_03d8fde4(iVar10,0);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    iVar3 = thunk_FUN_03d2dfa8(0);
    lVar6 = lVar4 + iVar3;
  }
  puVar2 = PTR_DAT_0920eb10;
  iVar3 = param_2 + -2;
  psVar11 = (short *)(lVar6 + (ulong)(uint)(iVar10 << 1));
  while( true ) {
    iVar10 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar10 == 0) {
      thunk_FUN_03db619c();
      iVar10 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar5 = (int)param_1;
    if (param_1 >> 0x20 == 0) break;
    if (iVar10 == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = param_1 / 1000000000;
    uVar9 = (ulong)(uint)(iVar5 + (int)param_1 * -1000000000);
    iVar10 = 7;
    do {
      do {
        uVar7 = uVar9 / 10;
        uVar8 = (uint)uVar9;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
        iVar5 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar9 = uVar7;
        iVar10 = iVar5;
      } while (bVar1);
    } while (9 < uVar8);
    param_2 = param_2 + -9;
    iVar3 = iVar3 + -9;
  }
  if (iVar10 == 0) {
    thunk_FUN_03db619c();
  }
  if ((iVar5 != 0) || (-1 < param_2 + -1)) {
    do {
      do {
        uVar8 = (uint)param_1;
        uVar9 = (param_1 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
        iVar10 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        param_1 = uVar9;
        iVar3 = iVar10;
      } while (bVar1);
    } while (9 < uVar8);
  }
  return lVar4;
}


