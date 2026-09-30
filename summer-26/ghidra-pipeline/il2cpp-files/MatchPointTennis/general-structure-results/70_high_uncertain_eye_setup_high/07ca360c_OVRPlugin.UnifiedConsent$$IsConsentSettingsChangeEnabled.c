/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 07ca360c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xa12) = 1;
  plVar5 = *(long **)(unaff_x19 + 0x18);
                    /* try { // try from 07ca3618 to 07da3623 has its CatchHandler @ 07ca390c */
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 07ca363c to 07da364b has its CatchHandler @ 07ca3908 */
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f50ed8) {
                    /* try { // try from 07ca3664 to 07da3677 has its CatchHandler @ 07ca390c */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07ca3670;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f50ed8,0);
LAB_07ca3670:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if (lVar2 != 0) {
      FUN_07c9ed44(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


