/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_session_handle_set
ENTRY_POINT: 090185f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_session_handle_set
          (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8(PTR_DAT_09fc0040);
                    /* try { // try from 09018608 to 0911860b has its CatchHandler @ 09018648 */
  FUN_04447ba8(PTR_DAT_09f265f0);
                    /* try { // try from 0901860c to 0911860f has its CatchHandler @ 09018640 */
                    /* try { // try from 09018610 to 09118613 has its CatchHandler @ 0901863c */
  *(undefined1 *)(unaff_x20 + 0x60e) = 1;
  puVar1 = PTR_DAT_09f265f0;
                    /* try { // try from 09018614 to 09118617 has its CatchHandler @ 09018630 */
  if (unaff_x19 == 0) {
                    /* catch() { ... } // from try @ 0901845c with catch @ 09018658 */
    return 0;
  }
                    /* try { // try from 09018618 to 0911861b has its CatchHandler @ 09018308 */
                    /* try { // try from 0901861c to 0911861f has its CatchHandler @ 09018628 */
                    /* try { // try from 09018620 to 09118667 has its CatchHandler @ 09018308 */
                    /* catch() { ... } // from try @ 0901861c with catch @ 09018628 */
  uVar2 = FUN_078b4450(*(undefined8 *)PTR_DAT_09f265f0,0);
                    /* catch() { ... } // from try @ 090184f0 with catch @ 0901862c */
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 09018614 with catch @ 09018630 */
                    /* catch() { ... } // from try @ 09018510 with catch @ 09018634 */
                    /* catch() { ... } // from try @ 09018520 with catch @ 09018638 */
                    /* catch() { ... } // from try @ 09018610 with catch @ 0901863c */
                    /* catch() { ... } // from try @ 0901860c with catch @ 09018640 */
    if (*(int *)(*(long *)PTR_DAT_09fc0040 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 09018500 with catch @ 09018644 */
      thunk_FUN_044a54b4();
    }
                    /* catch() { ... } // from try @ 09018608 with catch @ 09018648 */
                    /* catch() { ... } // from try @ 09018540 with catch @ 0901864c */
                    /* catch() { ... } // from try @ 09018530 with catch @ 09018650 */
                    /* catch() { ... } // from try @ 090184b8 with catch @ 09018654 */
    uVar3 = FUN_09018748();
    return uVar3;
  }
                    /* try { // try from 09018668 to 0911866b has its CatchHandler @ 09018684 */
  lVar4 = FUN_07b6d64c();
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 09018668 with catch @ 09018684 */
    uVar2 = FUN_07b6de5c(lVar4,*(undefined8 *)puVar1,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    if ((uVar2 & 1) == 0) {
      thunk_FUN_044adef4(PTR_DAT_09f273a8);
      uVar3 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc0050);
      uVar7 = thunk_FUN_044adef4(PTR_DAT_09f265f0);
      FUN_07a603a8(uVar3,uVar6,uVar7,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc0058);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3,uVar6);
    }
    if ((lVar4 != 0) &&
       (plVar5 = (long *)FUN_07b6d26c(lVar4,*(undefined8 *)puVar1,0), plVar5 != (long *)0x0)) {
      uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_09fc0040 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc0040);
      }
      uVar3 = FUN_09018cdc(uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


