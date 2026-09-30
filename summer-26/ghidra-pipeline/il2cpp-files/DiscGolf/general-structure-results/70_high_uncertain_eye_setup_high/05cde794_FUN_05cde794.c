/*
FUNCTION_NAME: FUN_05cde794
ENTRY_POINT: 05cde794
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05cde794(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
                    /* try { // try from 05cde794 to 05dde797 has its CatchHandler @ 05cde8bc */
                    /* try { // try from 05cde798 to 05dde79b has its CatchHandler @ 05cde8ac */
                    /* try { // try from 05cde79c to 05dde79f has its CatchHandler @ 05cde8a4 */
                    /* try { // try from 05cde7a0 to 05dde7a3 has its CatchHandler @ 05cde894 */
                    /* try { // try from 05cde7a4 to 05dde7a7 has its CatchHandler @ 05cde878 */
                    /* try { // try from 05cde7a8 to 05dde7ab has its CatchHandler @ 05cde874 */
  if ((DAT_06dc2d45 & 1) == 0) {
                    /* try { // try from 05cde7ac to 05dde7af has its CatchHandler @ 05cde86c */
                    /* try { // try from 05cde7b0 to 05dde7b3 has its CatchHandler @ 05cddbc4 */
                    /* try { // try from 05cde7b4 to 05dde7b7 has its CatchHandler @ 05cde85c */
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
                    /* try { // try from 05cde7b8 to 05dde7bb has its CatchHandler @ 05cde84c */
                    /* try { // try from 05cde7bc to 05dde7bf has its CatchHandler @ 05cde844 */
    DAT_06dc2d45 = 1;
  }
                    /* try { // try from 05cde7c0 to 05dde7c3 has its CatchHandler @ 05cde82c */
                    /* try { // try from 05cde7c4 to 05dde7c7 has its CatchHandler @ 05cde814 */
                    /* try { // try from 05cde7c8 to 05dde7cb has its CatchHandler @ 05cddbc4 */
  lVar1 = FUN_05ce8620(param_1,0);
  if ((lVar1 != 0) && (plVar2 = (long *)FUN_05c40580(lVar1,0), plVar2 != (long *)0x0)) {
    lVar1 = *(long *)
             Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__;
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    lVar4 = plVar2[2];
    uVar3 = thunk_FUN_02dd3144(lVar1);
    FUN_05cd8830(uVar3,lVar4,0);
    auVar5 = FUN_05ce8620(param_1,0);
    lVar1 = UnityEngine_InputSystem_StepCounter__set_current(auVar5._0_8_,auVar5._8_8_,auVar5._0_8_)
    ;
    plVar2 = (long *)(param_1 + 0x88);
    *plVar2 = lVar1;
    LeanTween__value(plVar2);
    if (*plVar2 != 0) {
      FUN_05c41ab4(*plVar2,uVar3,0);
      if (*plVar2 != 0) {
        FUN_05c41e1c(*plVar2,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


