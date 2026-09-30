/*
FUNCTION_NAME: OVRPlugin$$CreateEnvironmentRaycasterAsync
ENTRY_POINT: 060e8774
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateEnvironmentRaycasterAsync(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
                    /* try { // try from 060e8774 to 061e8777 has its CatchHandler @ 060e8780 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 060e8778 to 061e8783 has its CatchHandler @ 060e82dc */
                    /* catch() { ... } // from try @ 060e8774 with catch @ 060e8780 */
    FUN_03642964(PTR_DAT_07a246d0);
    *(undefined1 *)(unaff_x20 + 0xc31) = 1;
  }
  plVar5 = *(long **)(unaff_x19 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a246d0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_060e87ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a246d0,1);
LAB_060e87ec:
                    /* WARNING: Could not recover jumptable at 0x060e87fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


