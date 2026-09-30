/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$DeactivateWithFlush
ENTRY_POINT: 08194de8
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__DeactivateWithFlush(double param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  bool in_ZR;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  double unaff_d8;
  
  iVar3 = unaff_w26;
  if (!in_ZR) {
    iVar3 = unaff_w25;
  }
  uVar1 = iVar3 + (int)((long)(param_1 + unaff_d8) >> 0x34);
  while( true ) {
    uVar5 = FUN_0818b3fc();
    uVar6 = FUN_0818bb84();
    uVar6 = FUN_0818e8f4(unaff_x20 + 0xf0,uVar6,0);
    lVar7 = *(long *)(unaff_x20 + 0x200);
    unaff_x23 = unaff_x23 & (unaff_x27 << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffffU);
    *(undefined4 *)(*(long *)(unaff_x20 + 0x1f0) + (long)unaff_w21 * 4) = uVar6;
    *(undefined4 *)(lVar7 + (long)unaff_w21 * 4) = uVar5;
    if (unaff_x23 == 0) break;
    unaff_w21 = unaff_w21 + 1;
    uVar2 = unaff_x23 & -unaff_x23 & 0xffffffff;
    iVar3 = unaff_w26;
    uVar4 = (unaff_x23 & -unaff_x23) >> 0x20;
    if (uVar2 != 0) {
      iVar3 = unaff_w25;
      uVar4 = uVar2;
    }
    uVar1 = iVar3 + (int)((long)((double)(uVar4 | unaff_x24) + unaff_d8) >> 0x34);
  }
  return;
}


