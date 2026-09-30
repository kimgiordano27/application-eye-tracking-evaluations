/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 06758940
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar12;
  long unaff_x21;
  short *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  short unaff_w27;
  
  while( true ) {
    lVar5 = *unaff_x23;
    iVar10 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *unaff_x23;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x20 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x24;
    unaff_x20 = SUB168(auVar3 * auVar4,8) >> 0xb;
    psVar7 = unaff_x22 + -1;
    uVar12 = (ulong)(uint)(iVar10 - (int)unaff_x20 * unaff_w25);
    iVar10 = 7;
    do {
      do {
        unaff_x22 = psVar7;
        uVar8 = uVar12 * (unaff_x26 & 0xffffffff);
        uVar9 = uVar8 >> 0x23;
        uVar11 = (uint)uVar12;
        *unaff_x22 = (short)uVar12 + (short)(uint)(uVar8 >> 0x23) * unaff_w27 + 0x30;
        iVar2 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar7 = unaff_x22 + -1;
        uVar12 = uVar9;
        iVar10 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (iVar10 != 0) {
    psVar7 = unaff_x22 + -1;
    iVar10 = -2;
    do {
      do {
        unaff_x22 = psVar7;
        uVar11 = (uint)unaff_x20;
        uVar12 = (unaff_x20 & 0xffffffff) / 10;
        *unaff_x22 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar7 = unaff_x22 + -1;
        unaff_x20 = uVar12;
        iVar10 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
  }
  uVar12 = unaff_x21 - (long)unaff_x22;
  if ((long)uVar12 < 0) {
    uVar12 = uVar12 + 1;
  }
  uVar12 = uVar12 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar12;
  psVar6 = (short *)FUN_0675fcc4();
  psVar7 = psVar6;
  if (-1 < (int)uVar12 + -1) {
    do {
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulong)uVar11;
      psVar6 = psVar7 + 1;
      *psVar7 = *unaff_x22;
      psVar7 = psVar6;
      unaff_x22 = unaff_x22 + 1;
    } while (uVar11 != 0);
  }
  *psVar6 = 0;
  return;
}


