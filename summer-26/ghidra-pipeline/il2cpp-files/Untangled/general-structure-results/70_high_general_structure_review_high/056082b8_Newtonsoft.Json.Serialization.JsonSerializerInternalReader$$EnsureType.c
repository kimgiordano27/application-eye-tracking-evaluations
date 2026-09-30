/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 056082b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
               (ulong param_1,uint param_2,short param_3,uint param_4,undefined8 param_5,
               undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  uint *unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d03010);
    FUN_02f07e70(PTR_DAT_06d48408);
    FUN_02f07e70(PTR_DAT_06d4e298);
    FUN_02f07e70(PTR_DAT_06d48780);
    *(undefined1 *)(unaff_x26 + 0xcc1) = 1;
  }
  if ((int)param_4 < 2) {
    param_4 = 1;
  }
  uVar10 = 5;
  uVar5 = param_2 >> 0x10;
  if (param_2 >> 0x10 == 0) {
    uVar10 = 1;
    uVar5 = param_2;
  }
  uVar2 = uVar10 | 2;
  if (uVar5 < 0x100) {
    uVar2 = uVar10;
  }
  uVar10 = uVar5 >> 8;
  if (uVar5 < 0x100) {
    uVar10 = uVar5;
  }
  if (0xf < uVar10) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar6 = PTR_DAT_06d48408;
  if ((int)uVar2 <= (int)param_4) {
    uVar2 = param_4;
  }
  if ((int)param_6 < (int)uVar2) {
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = uVar2;
    puVar7 = PTR_DAT_06d4e298;
    lVar8 = FUN_03af7c84(param_5,param_6,*(undefined8 *)puVar6);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar7);
    }
    psVar9 = (short *)(lVar8 + (ulong)(uVar2 << 1));
    iVar11 = param_4 - 2;
    do {
      uVar10 = param_2 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar10) {
        sVar3 = param_3;
      }
      param_2 = param_2 >> 4;
      psVar9 = psVar9 + -1;
      *psVar9 = sVar3 + (short)uVar10;
      iVar4 = iVar11 + -1;
      bVar1 = -1 < iVar11;
      iVar11 = iVar4;
    } while ((bVar1) || (param_2 != 0));
  }
  return (int)uVar2 <= (int)param_6;
}


