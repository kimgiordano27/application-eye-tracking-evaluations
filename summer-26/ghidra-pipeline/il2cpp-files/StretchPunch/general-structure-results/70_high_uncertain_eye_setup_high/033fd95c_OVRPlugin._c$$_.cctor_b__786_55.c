/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_55
ENTRY_POINT: 033fd95c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__786_55(ulong param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 033fd984 with catch @ 033fd960
                       catch() { ... } // from try @ 033fd9b4 with catch @ 033fd960
                       catch() { ... } // from try @ 033fd9f8 with catch @ 033fd960 */
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9533);
                    /* try { // try from 033fd974 to 034fd983 has its CatchHandler @ 033fd984 */
    FUN_01d7d918(StringLiteral_9535);
    *(undefined1 *)(unaff_x22 + 0xc1a) = 1;
  }
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fd974 with catch @ 033fd984
                       try { // try from 033fd984 to 034fd99b has its CatchHandler @ 033fd960 */
  if ((unaff_x21 & 1) == 0) {
    plVar2 = (long *)FUN_01d7d930(*(undefined8 *)StringLiteral_9535);
                    /* try { // try from 033fd99c to 034fd9b3 has its CatchHandler @ 033fd9f0 */
    if (*plVar2 != 0) {
      if (*(long *)(*plVar2 + 0x18) == 0) goto LAB_033fda6c;
      FUN_033fda70();
      goto LAB_033fda4c;
    }
  }
                    /* try { // try from 033fd9b4 to 034fd9df has its CatchHandler @ 033fd960 */
  plVar2 = (long *)(param_2 + 0x10);
  lVar5 = *plVar2;
  thunk_FUN_01da0934();
  if (lVar5 == 0) {
LAB_033fda6c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar3 = FUN_033fdf4c(lVar5);
  puVar1 = StringLiteral_9533;
  while ((uVar3 & 1) == 0) {
    thunk_FUN_01da0934();
    uVar4 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    FUN_033fd75c();
    FUN_01d996c0(lVar5 + 0x20,uVar4,0);
    while (lVar6 = *(long *)(lVar5 + 0x20), thunk_FUN_01da0934(), lVar6 != 0) {
      thunk_FUN_01da0934();
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      thunk_FUN_01da0934();
      FUN_01d996c0(plVar2,uVar4,lVar5);
      lVar5 = *plVar2;
      thunk_FUN_01da0934();
      if (lVar5 == 0) goto LAB_033fda6c;
    }
    uVar3 = FUN_033fdf4c(lVar5);
  }
LAB_033fda4c:
  thunk_FUN_01d6903c(0);
  FUN_033fd850(param_2);
  return;
}


