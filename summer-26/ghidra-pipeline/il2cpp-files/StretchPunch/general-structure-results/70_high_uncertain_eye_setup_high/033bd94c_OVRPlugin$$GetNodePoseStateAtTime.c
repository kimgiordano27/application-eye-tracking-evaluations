/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 033bd94c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateAtTime(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  undefined8 uVar5;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
                    /* try { // try from 033bd950 to 034bd953 has its CatchHandler @ 033bd9b4 */
  uVar1 = (**(code **)(param_1 + 0x278))();
  if ((uVar1 & 1) == 0) {
    uVar5 = *unaff_x24;
                    /* try { // try from 033bd968 to 034bd96f has its CatchHandler @ 033bd9ac */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 033bd970 to 034bd99b has its CatchHandler @ 033bd8d4 */
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar5,0);
    uVar1 = FUN_033ab18c();
    if ((uVar1 & 1) != 0) {
      uVar5 = thunk_FUN_01dd295c(StringLiteral_8781);
      uVar5 = FUN_033d6e4c(uVar5,0);
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar4 = thunk_FUN_01de27b8();
      FUN_0328dba4(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01dd295c(StringLiteral_8788);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,uVar5);
    }
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033bd9d8 with catch @ 033bd9e8 */
    FUN_01d7db70();
  }
                    /* try { // try from 033bd99c to 034bd99f has its CatchHandler @ 033bd9bc */
                    /* try { // try from 033bd9a0 to 034bd9a7 has its CatchHandler @ 033bd8d4 */
                    /* try { // try from 033bd9a8 to 034bd9ab has its CatchHandler @ 033bd9ac */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd968 with catch @ 033bd9ac
                       catch(type#1 @ 03fad958) { ... } // from try @ 033bd9a8 with catch @ 033bd9ac
                       try { // try from 033bd9ac to 034bd9d7 has its CatchHandler @ 033bd8d4 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd8ec with catch @ 033bd9b0
                        */
  lVar2 = (**(code **)(*unaff_x21 + 0x208))();
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd950 with catch @ 033bd9b4
                        */
  if (lVar2 != 0) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd934 with catch @ 033bd9b8
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd99c with catch @ 033bd9bc
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bd910 with catch @ 033bd9c0
                        */
    uVar5 = *(undefined8 *)StringLiteral_8776;
    lVar3 = thunk_FUN_01de26bc(lVar2,uVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar2,uVar5);
    }
  }
                    /* try { // try from 033bd9d8 to 034bd9db has its CatchHandler @ 033bd9e8 */
  return;
}


