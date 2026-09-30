/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 06249eb0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(long *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int unaff_w19;
  long unaff_x20;
  int iVar10;
  int *unaff_x21;
  short *psVar11;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar12;
  int unaff_w25;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = unaff_w25 + 4;
  if (unaff_w25 + 4 <= unaff_w23) {
    iVar1 = unaff_w23;
  }
  iVar1 = *(int *)(unaff_x20 + 0x10) + iVar1;
  if (unaff_w19 < iVar1) {
    *unaff_x21 = 0;
    goto LAB_0624a038;
  }
  *unaff_x21 = iVar1;
  lVar5 = FUN_04077754();
  puVar3 = PTR_DAT_07daae20;
  psVar11 = (short *)(lVar5 + (long)iVar1 * 2);
  iVar10 = unaff_w23 + -2;
  while( true ) {
    iVar8 = *(int *)(*(long *)puVar3 + 0xe4);
    if (iVar8 == 0) {
      thunk_FUN_03798b70();
      iVar8 = *(int *)(*(long *)puVar3 + 0xe4);
    }
    iVar6 = (int)unaff_x24;
    if (unaff_x24 >> 0x20 == 0) break;
    if (iVar8 == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x24 = unaff_x24 / 1000000000;
    uVar12 = (ulong)(uint)(iVar6 + (int)unaff_x24 * -1000000000);
    iVar8 = 7;
    do {
      do {
        uVar7 = uVar12 / 10;
        uVar9 = (uint)uVar12;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
        iVar6 = iVar8 + -1;
        bVar2 = -1 < iVar8;
        uVar12 = uVar7;
        iVar8 = iVar6;
      } while (bVar2);
    } while (9 < uVar9);
    unaff_w23 = unaff_w23 + -9;
    iVar10 = iVar10 + -9;
  }
  if (iVar8 == 0) {
    thunk_FUN_03798b70();
    if (iVar6 == 0) goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject;
LAB_06249fe0:
    do {
      do {
        uVar9 = (uint)unaff_x24;
        uVar12 = (unaff_x24 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
        iVar8 = iVar10 + -1;
        bVar2 = -1 < iVar10;
        unaff_x24 = uVar12;
        iVar10 = iVar8;
      } while (bVar2);
    } while (9 < uVar9);
  }
  else {
    if (iVar6 != 0) goto LAB_06249fe0;
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject:
    if (-1 < unaff_w23 + -1) goto LAB_06249fe0;
  }
  iVar10 = *(int *)(unaff_x20 + 0x10);
  if (-1 < iVar10 + -1) {
    do {
      iVar10 = iVar10 + -1;
      sVar4 = FUN_060bb390();
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4;
    } while (0 < iVar10);
  }
LAB_0624a038:
  return iVar1 <= unaff_w19;
}


