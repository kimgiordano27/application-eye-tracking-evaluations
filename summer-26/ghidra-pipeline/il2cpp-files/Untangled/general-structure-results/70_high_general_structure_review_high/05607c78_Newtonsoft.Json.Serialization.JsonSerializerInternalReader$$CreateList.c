/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 05607c78
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(void)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  uint in_w9;
  int iVar7;
  long unaff_x19;
  int unaff_w21;
  ulong unaff_x22;
  ulong uVar8;
  int unaff_w23;
  short *psVar9;
  long lVar10;
  
  if (9 < in_w9) {
    if (in_w9 < 100) {
      unaff_w21 = unaff_w21 + 1;
    }
    else if (in_w9 < 1000) {
      unaff_w21 = unaff_w21 + 2;
    }
    else if (in_w9 >> 4 < 0x271) {
      unaff_w21 = unaff_w21 + 3;
    }
    else {
      unaff_w21 = unaff_w21 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar3 = PTR_DAT_06d4e298;
  if (unaff_x19 != 0) {
    if (unaff_w21 <= unaff_w23) {
      unaff_w21 = unaff_w23;
    }
    iVar7 = *(int *)(unaff_x19 + 0x10) + unaff_w21;
    lVar6 = thunk_FUN_02eeb2ec(iVar7,0);
    if (lVar6 == 0) {
      lVar10 = 0;
    }
    else {
      iVar5 = thunk_FUN_02ec4808(0);
      lVar10 = lVar6 + iVar5;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    psVar9 = (short *)(lVar10 + (long)iVar7 * 2);
    iVar7 = unaff_w23 + -2;
    do {
      do {
        uVar2 = (uint)unaff_x22;
        uVar8 = (unaff_x22 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        iVar5 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        unaff_x22 = uVar8;
        iVar7 = iVar5;
      } while (bVar1);
    } while (9 < uVar2);
    iVar7 = *(int *)(unaff_x19 + 0x10);
    if (-1 < iVar7 + -1) {
      do {
        iVar7 = iVar7 + -1;
        sVar4 = FUN_05460528();
        psVar9 = psVar9 + -1;
        *psVar9 = sVar4;
      } while (0 < iVar7);
    }
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


