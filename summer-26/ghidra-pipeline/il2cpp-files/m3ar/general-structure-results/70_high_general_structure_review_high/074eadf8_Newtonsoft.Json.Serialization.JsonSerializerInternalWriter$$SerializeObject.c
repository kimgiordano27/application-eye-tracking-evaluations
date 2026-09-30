/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 074eadf8
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(void)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  uint unaff_w19;
  uint uVar12;
  short unaff_w20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long lVar13;
  
  *(undefined1 *)(unaff_x23 + 0xf09) = 1;
  if ((int)unaff_w21 < 2) {
    unaff_w21 = 1;
  }
  bVar6 = (unaff_w19 & 0xffff0000) == 0;
  uVar12 = unaff_w19 >> 0x10;
  if (bVar6) {
    uVar12 = unaff_w19;
  }
  uVar9 = 5;
  if (bVar6) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 2;
  uVar3 = uVar12 >> 8;
  if (uVar12 < 0x100) {
    uVar1 = uVar9;
    uVar3 = uVar12;
  }
  if (0xf < uVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar5 = PTR_DAT_08f9f500;
  uVar12 = unaff_w21;
  if ((int)unaff_w21 <= (int)uVar1) {
    uVar12 = uVar1;
  }
  lVar8 = System_Globalization_HijriCalendar__set_TwoDigitYearMax(uVar12,0);
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  else {
    iVar7 = thunk_FUN_0403d2d0(0);
    lVar13 = lVar8 + iVar7;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  psVar10 = (short *)(lVar13 + (ulong)(uVar12 << 1) + -2);
  iVar7 = unaff_w21 - 2;
  do {
    uVar12 = unaff_w19;
    sVar2 = 0x30;
    if (9 < (uVar12 & 0xe)) {
      sVar2 = unaff_w20;
    }
    psVar11 = psVar10 + -1;
    *psVar10 = sVar2 + ((ushort)uVar12 & 0xf);
    iVar4 = iVar7 + -1;
    bVar6 = -1 < iVar7;
    psVar10 = psVar11;
    iVar7 = iVar4;
    unaff_w19 = uVar12 >> 4;
  } while ((bVar6) || (0xf < uVar12));
  return lVar8;
}


