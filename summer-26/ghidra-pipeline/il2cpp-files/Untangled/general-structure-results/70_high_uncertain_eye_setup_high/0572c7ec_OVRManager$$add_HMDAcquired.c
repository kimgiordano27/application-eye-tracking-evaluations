/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 0572c7ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
                    /* try { // try from 0572c7ec to 0582c7f3 has its CatchHandler @ 0572cb58 */
                    /* try { // try from 0572c7f4 to 0582c7f7 has its CatchHandler @ 0572cb50 */
                    /* try { // try from 0572c7f8 to 0582c7fb has its CatchHandler @ 0572cb48 */
                    /* try { // try from 0572c7fc to 0582c7ff has its CatchHandler @ 0572cabc */
  plVar1 = (long *)(**(code **)(*unaff_x20 + 0x248))();
                    /* try { // try from 0572c800 to 0582c813 has its CatchHandler @ 0572caa8 */
  lVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58778);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0572c828 to 0582c833 has its CatchHandler @ 0572ca80 */
    if (*plVar1 != *(long *)PTR_DAT_06d02350) {
                    /* catch() { ... } // from try @ 0572c7fc with catch @ 0572cabc */
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar1);
    }
  }
                    /* try { // try from 0572c834 to 0582c837 has its CatchHandler @ 0572cab4 */
                    /* try { // try from 0572c838 to 0582c83b has its CatchHandler @ 0572cb60 */
                    /* try { // try from 0572c83c to 0582c83f has its CatchHandler @ 0572ca98 */
  FUN_0572b548(lVar2,plVar1);
  plVar1 = (long *)(unaff_x19 + 0xe);
                    /* try { // try from 0572c840 to 0582c843 has its CatchHandler @ 0572caac */
                    /* try { // try from 0572c844 to 0582c847 has its CatchHandler @ 0572ca8c */
  *plVar1 = lVar2;
                    /* try { // try from 0572c848 to 0582c85f has its CatchHandler @ 0572ca90 */
  thunk_FUN_02f411dc(plVar1,lVar2);
  lVar2 = *(long *)(unaff_x19 + 0xe);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0572c800 with catch @ 0572caa8 */
    FUN_02f080c0();
  }
                    /* try { // try from 0572c860 to 0582c867 has its CatchHandler @ 0572ca7c */
  uVar6 = *(undefined8 *)(unaff_x19 + 0xc);
                    /* try { // try from 0572c86c to 0582c87f has its CatchHandler @ 0572ca78 */
  uVar3 = thunk_FUN_02ef170c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_06d55150);
  FUN_0572c2dc(lVar2,uVar3,uVar6);
                    /* try { // try from 0572c884 to 0582c8d7 has its CatchHandler @ 0572ca74 */
  if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0572c72c with catch @ 0572caac
                       catch() { ... } // from try @ 0572c840 with catch @ 0572caac */
    FUN_02f080c0();
  }
  lVar2 = FUN_0572cc94(*plVar1,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(unaff_x19 + 10));
  if (lVar2 != 0) {
    auVar7 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar2,0,0);
    uVar4 = FUN_0551f17c();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar7;
      thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_03500ad0(unaff_x19 + 2);
    }
    else {
      FUN_0551f198();
      puVar5 = (undefined8 *)(unaff_x19 + 0xe);
      uVar3 = *puVar5;
      *unaff_x19 = 0xfffffffe;
      *puVar5 = 0;
      thunk_FUN_02f411dc(puVar5,0);
      if (*(int *)(*(long *)PTR_DAT_06d58758 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_043b2468(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_06d58830);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0572c34c with catch @ 0572cab0 */
  FUN_02f080c0();
}


