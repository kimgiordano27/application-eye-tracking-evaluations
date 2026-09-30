/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_InitializeInsightPassthrough
ENTRY_POINT: 01db83bc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0__ovrp_InitializeInsightPassthrough(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = thunk_FUN_010400dc(**(undefined8 **)(param_1 + 0x4e0));
                    /* try { // try from 01db83c8 to 01eb83d3 has its CatchHandler @ 01db8480 */
  FUN_01db6158();
  uVar2 = FUN_01db899c();
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x48);
                    /* try { // try from 01db83ec to 01eb83ef has its CatchHandler @ 01db8468 */
    thunk_FUN_00ffe618();
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x20);
      thunk_FUN_00ffe618();
      if (lVar5 != 0) {
                    /* try { // try from 01db8400 to 01eb840b has its CatchHandler @ 01db8478 */
                    /* try { // try from 01db8410 to 01eb8413 has its CatchHandler @ 01db8474 */
        uVar3 = FUN_01dbf094(lVar5,0,lVar1,0);
        return uVar3;
      }
    }
LAB_01db84a0:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_023515e8,1);
    if (plVar4 == (long *)0x0) goto LAB_01db84a0;
    lVar5 = thunk_FUN_0103ffe0(lVar1,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
      uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar3,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar4[4] = lVar1;
    thunk_FUN_0106e12c(plVar4 + 4,lVar1);
    uVar3 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353530);
    FUN_01c65690(uVar3,plVar4,0);
  }
  return uVar3;
}


