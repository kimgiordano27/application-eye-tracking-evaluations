/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$Flush
ENTRY_POINT: 081a2520
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__Flush(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  
  for (; unaff_w21 < unaff_w22; unaff_w21 = unaff_w21 + 1) {
    param_2 = FUN_081a2498();
  }
  *(undefined4 *)(*(long *)(unaff_x19 + 10) + (long)unaff_w20 * 4) = param_2;
  iVar2 = FUN_081a242c(*(undefined8 *)(unaff_x19 + 6),*(undefined8 *)(unaff_x19 + 8));
  if (iVar2 == 0x10) {
    lVar3 = *(long *)(unaff_x19 + 10);
    if (*unaff_x19 < 3) {
      lVar4 = 0;
      iVar2 = 0;
      do {
        iVar1 = *(int *)(lVar3 + lVar4);
        *(int *)(lVar3 + lVar4) = iVar2;
        lVar4 = lVar4 + 4;
        iVar2 = iVar1 + iVar2;
      } while (lVar4 != 0x40);
    }
    else {
      lVar4 = 0;
      iVar2 = 0;
      do {
        iVar1 = *(int *)(lVar3 + 0x20 + lVar4);
        *(int *)(lVar3 + 0x20 + lVar4) = iVar2;
        lVar4 = lVar4 + 4;
        iVar2 = iVar1 + iVar2;
      } while (lVar4 != 0x20);
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar3 + lVar4);
        *(int *)(lVar3 + lVar4) = iVar2;
        lVar4 = lVar4 + 4;
        iVar2 = iVar1 + iVar2;
      } while (lVar4 != 0x20);
    }
    **(undefined4 **)(unaff_x19 + 6) = 0;
  }
  return;
}


