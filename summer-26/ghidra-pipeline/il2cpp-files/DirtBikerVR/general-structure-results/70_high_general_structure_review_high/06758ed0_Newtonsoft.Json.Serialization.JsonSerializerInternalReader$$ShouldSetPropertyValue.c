/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 06758ed0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
               (uint param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_x19;
  ulong uVar9;
  long unaff_x21;
  long *plVar10;
  short *psVar11;
  long unaff_x22;
  
  plVar10 = *(long **)(unaff_x21 + 0xb08);
  if ((*(byte *)(unaff_x22 + 0xb1e) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a5b08);
    *(undefined1 *)(unaff_x22 + 0xb1e) = 1;
  }
  *unaff_x19 = 10;
  FUN_0675fcb8();
  lVar3 = FUN_0675fcc4();
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*plVar10);
  }
  psVar11 = (short *)(lVar3 + 0x14);
  if (param_1 != 0) {
    psVar5 = (short *)(lVar3 + 0x12);
    uVar6 = (ulong)param_1;
    iVar7 = -2;
    do {
      do {
        psVar11 = psVar5;
        uVar9 = uVar6 / 10;
        uVar8 = (uint)uVar6;
        *psVar11 = (short)uVar6 + (short)(uVar6 / 10) * -10 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        psVar5 = psVar11 + -1;
        uVar6 = uVar9;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar8);
  }
  uVar6 = (lVar3 + 0x14) - (long)psVar11;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  unaff_x19[1] = (int)uVar6;
  psVar4 = (short *)FUN_0675fcc4();
  psVar5 = psVar4;
  if (-1 < (int)uVar6 + -1) {
    do {
      uVar8 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar8;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar11;
      psVar5 = psVar4;
      psVar11 = psVar11 + 1;
    } while (uVar8 != 0);
  }
  *psVar4 = 0;
  return;
}


