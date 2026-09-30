/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.Handlers.AccountAnalytics$$StopTrackLoadingOpeningTime
ENTRY_POINT: 0448c794
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void OVA_StellarX_Core_Framework_Analytics_Handlers_AccountAnalytics__StopTrackLoadingOpeningTime
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  
  thunk_FUN_040ec700();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x90) != 0)) {
    if (*(char *)(*(long *)(lVar2 + 0x90) + 0x21) == '\0') {
      plVar5 = *(long **)(lVar2 + 0xf0);
      if (plVar5 == (long *)0x0) goto LAB_0448c828;
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09299b20) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto OVA_StellarX_Core_Framework_Analytics_Handlers_AnalyticsHandler__StopTimer;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09299b20,0);
OVA_StellarX_Core_Framework_Analytics_Handlers_AnalyticsHandler__StopTimer:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
    }
    return;
  }
LAB_0448c828:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


