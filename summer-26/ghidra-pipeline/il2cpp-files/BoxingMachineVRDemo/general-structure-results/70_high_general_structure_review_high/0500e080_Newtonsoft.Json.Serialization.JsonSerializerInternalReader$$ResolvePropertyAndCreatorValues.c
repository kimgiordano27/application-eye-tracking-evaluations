/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 0500e080
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int unaff_w19;
  long unaff_x20;
  int iVar10;
  int *unaff_x21;
  short *psVar11;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar12;
  int unaff_w25;
  
  uVar8 = (uint)unaff_x24;
  if (9 < uVar8) {
    if (uVar8 < 100) {
      unaff_w25 = unaff_w25 + 1;
    }
    else if (uVar8 < 1000) {
      unaff_w25 = unaff_w25 + 2;
    }
    else if (uVar8 >> 4 < 0x271) {
      unaff_w25 = unaff_w25 + 3;
    }
    else if (uVar8 >> 5 < 0xc35) {
      unaff_w25 = unaff_w25 + 4;
    }
    else if (uVar8 < 1000000) {
      unaff_w25 = unaff_w25 + 5;
    }
    else {
      unaff_w25 = unaff_w25 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w25 <= unaff_w23) {
    unaff_w25 = unaff_w23;
  }
  iVar1 = *(int *)(unaff_x20 + 0x10) + unaff_w25;
  if (unaff_w19 < iVar1) {
    *unaff_x21 = 0;
    goto LAB_0500e26c;
  }
  *unaff_x21 = iVar1;
  lVar5 = FUN_034850a8();
  puVar3 = PTR_DAT_06777060;
  psVar11 = (short *)(lVar5 + (long)iVar1 * 2);
  iVar10 = unaff_w23 + -2;
  while( true ) {
    iVar9 = *(int *)(*(long *)puVar3 + 0xe4);
    if (iVar9 == 0) {
      thunk_FUN_02dbd7b4();
      iVar9 = *(int *)(*(long *)puVar3 + 0xe4);
    }
    iVar6 = (int)unaff_x24;
    if (unaff_x24 >> 0x20 == 0) break;
    if (iVar9 == 0) {
      thunk_FUN_02dbd7b4();
    }
    unaff_x24 = unaff_x24 / 1000000000;
    uVar12 = (ulong)(uint)(iVar6 + (int)unaff_x24 * -1000000000);
    iVar9 = 7;
    do {
      do {
        uVar7 = uVar12 / 10;
        uVar8 = (uint)uVar12;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
        iVar6 = iVar9 + -1;
        bVar2 = -1 < iVar9;
        uVar12 = uVar7;
        iVar9 = iVar6;
      } while (bVar2);
    } while (9 < uVar8);
    unaff_w23 = unaff_w23 + -9;
    iVar10 = iVar10 + -9;
  }
  if (iVar9 == 0) {
    thunk_FUN_02dbd7b4();
    if (iVar6 == 0) goto LAB_0500e200;
LAB_0500e214:
    do {
      do {
        uVar8 = (uint)unaff_x24;
        uVar12 = (unaff_x24 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
        iVar9 = iVar10 + -1;
        bVar2 = -1 < iVar10;
        unaff_x24 = uVar12;
        iVar10 = iVar9;
      } while (bVar2);
    } while (9 < uVar8);
  }
  else {
    if (iVar6 != 0) goto LAB_0500e214;
LAB_0500e200:
    if (-1 < unaff_w23 + -1) goto LAB_0500e214;
  }
  iVar10 = *(int *)(unaff_x20 + 0x10);
  if (-1 < iVar10 + -1) {
    do {
      iVar10 = iVar10 + -1;
      sVar4 = FUN_04e87a5c();
      psVar11 = psVar11 + -1;
      *psVar11 = sVar4;
    } while (0 < iVar10);
  }
LAB_0500e26c:
  return iVar1 <= unaff_w19;
}


