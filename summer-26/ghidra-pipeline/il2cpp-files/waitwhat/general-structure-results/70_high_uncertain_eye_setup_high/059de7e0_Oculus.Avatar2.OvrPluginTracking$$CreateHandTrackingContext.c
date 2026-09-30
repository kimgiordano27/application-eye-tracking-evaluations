/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingContext
ENTRY_POINT: 059de7e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingContext(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  long unaff_x21;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x13f) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2920);
    FUN_03188a78(PTR_DAT_07109bc0);
    *(undefined1 *)(unaff_x22 + 0x13f) = 1;
  }
  puVar1 = PTR_DAT_07109bc0;
  if (param_1 == (long *)0x0) {
                    /* try { // try from 059de85c to 05ade8ab has its CatchHandler @ 059de85c
                       catch() { ... } // from try @ 059de85c with catch @ 059de85c
                       catch() { ... } // from try @ 059de8d8 with catch @ 059de85c
                       catch() { ... } // from try @ 059de91c with catch @ 059de85c
                       catch() { ... } // from try @ 059de954 with catch @ 059de85c */
    FUN_03188b1c(*(undefined8 *)PTR_DAT_070c2920,unaff_w19);
    return;
  }
  if (unaff_x21 != 0) {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07109bc0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_059de88c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07109bc0,1);
LAB_059de88c:
    (*(code *)*puVar2)(param_1);
  }
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
                    /* try { // try from 059de8ac to 05ade8b7 has its CatchHandler @ 059de91c */
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_059de8e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 059de8cc to 05ade8d7 has its CatchHandler @ 059de920 */
  puVar2 = (undefined8 *)FUN_031c0d08(param_1,*(long *)puVar1,0);
                    /* try { // try from 059de8d8 to 05ade917 has its CatchHandler @ 059de85c */
LAB_059de8e8:
                    /* WARNING: Could not recover jumptable at 0x059de900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,unaff_w19,puVar2[1]);
  return;
}


