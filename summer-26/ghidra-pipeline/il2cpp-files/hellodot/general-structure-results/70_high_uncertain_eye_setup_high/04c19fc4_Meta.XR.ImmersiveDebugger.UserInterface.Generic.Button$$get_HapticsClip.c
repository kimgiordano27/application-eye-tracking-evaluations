/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$get_HapticsClip
ENTRY_POINT: 04c19fc4
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__get_HapticsClip(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *in_x9;
  long unaff_x19;
  long lVar6;
  undefined4 uStack000000000000000c;
  
  lVar1 = (*in_x9)();
  if (lVar1 == 0) {
                    /* try { // try from 04c1a050 to 04d1a05b has its CatchHandler @ 04c1995c */
    return;
  }
  lVar6 = *(long *)(unaff_x19 + 0x18);
                    /* try { // try from 04c19fd8 to 04d19fdb has its CatchHandler @ 04c19fe8 */
  plVar2 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
                    /* catch() { ... } // from try @ 04c19fd8 with catch @ 04c19fe8 */
  uStack000000000000000c = 0;
  lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x0000000c);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_02c94d60();
                    /* catch() { ... } // from try @ 04c19f64 with catch @ 04c1a064
                       catch() { ... } // from try @ 04c1a028 with catch @ 04c1a064
                       catch() { ... } // from try @ 04c1a05c with catch @ 04c1a064 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c1a068 to 04d1a15b has its CatchHandler @ 04c1a068
                       catch() { ... } // from try @ 04c1a068 with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a1bc with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a3d8 with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a400 with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a4b0 with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a534 with catch @ 04c1a068
                       catch() { ... } // from try @ 04c1a594 with catch @ 04c1a068 */
      FUN_02ce7b54(uVar5,0);
    }
                    /* try { // try from 04c1a028 to 04d1a04f has its CatchHandler @ 04c1a064 */
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c1a05c to 04d1a063 has its CatchHandler @ 04c1a064 */
      FUN_02ce7c84();
    }
    plVar2[4] = lVar3;
    if (lVar6 != 0) {
      System_GC__GetGeneration(lVar6,lVar1,plVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


