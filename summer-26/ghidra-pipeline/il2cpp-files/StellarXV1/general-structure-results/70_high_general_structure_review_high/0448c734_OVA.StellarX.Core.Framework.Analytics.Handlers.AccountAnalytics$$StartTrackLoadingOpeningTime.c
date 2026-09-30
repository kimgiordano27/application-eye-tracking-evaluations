/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.Handlers.AccountAnalytics$$StartTrackLoadingOpeningTime
ENTRY_POINT: 0448c734
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


long OVA_StellarX_Core_Framework_Analytics_Handlers_AccountAnalytics__StartTrackLoadingOpeningTime
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_09299df0;
  if ((DAT_0988757a & 1) == 0) {
    FUN_04077588(PTR_DAT_09299b20);
    FUN_04077588(PTR_DAT_09299df0);
    DAT_0988757a = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_0449a600(uVar2,lVar6);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0xf0) = uVar2;
    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0xf0),uVar2);
    lVar6 = *(long *)(param_1 + 0x10);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x90) != 0)) {
      if (*(char *)(*(long *)(lVar6 + 0x90) + 0x21) == '\0') {
        plVar7 = *(long **)(lVar6 + 0xf0);
        if (plVar7 == (long *)0x0) goto LAB_0448c828;
        lVar6 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09299b20) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto OVA_StellarX_Core_Framework_Analytics_Handlers_AnalyticsHandler__StopTimer;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09299b20,0);
OVA_StellarX_Core_Framework_Analytics_Handlers_AnalyticsHandler__StopTimer:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
      }
      return param_1;
    }
  }
LAB_0448c828:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


