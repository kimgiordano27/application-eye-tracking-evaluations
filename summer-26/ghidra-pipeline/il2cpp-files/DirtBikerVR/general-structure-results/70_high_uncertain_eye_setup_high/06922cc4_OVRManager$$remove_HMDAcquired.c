/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 06922cc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDAcquired(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long in_stack_00000008;
  
                    /* try { // try from 06922cc4 to 06a22ccb has its CatchHandler @ 06922e00 */
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x790));
                    /* try { // try from 06922cd0 to 06a22cdb has its CatchHandler @ 06922df4 */
  FUN_03a8a718(PTR_DAT_084b5798);
                    /* try { // try from 06922ce0 to 06a22ceb has its CatchHandler @ 06922df0 */
  FUN_03a8a718(PTR_DAT_084b57a0);
  *(undefined1 *)(unaff_x22 + 0xeaa) = 1;
                    /* try { // try from 06922cf0 to 06a22cfb has its CatchHandler @ 06922e04 */
  in_stack_00000008 = 0;
  if (*(char *)(unaff_x21 + 0x18) != '\0') {
    thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar3 = thunk_FUN_03ac74bc();
                    /* try { // try from 06922dc4 to 06a22dc7 has its CatchHandler @ 06922df8 */
                    /* try { // try from 06922dc8 to 06a22dcb has its CatchHandler @ 06922e00 */
                    /* try { // try from 06922dcc to 06a22dcf has its CatchHandler @ 06922de8 */
                    /* try { // try from 06922dd0 to 06a22dd3 has its CatchHandler @ 06922dfc */
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084b57a8);
                    /* catch() { ... } // from try @ 06922d7c with catch @ 06922dd4
                       try { // try from 06922dd4 to 06a22e1b has its CatchHandler @ 06922bdc */
                    /* catch() { ... } // from try @ 06922d94 with catch @ 06922dd8 */
                    /* catch() { ... } // from try @ 06922d34 with catch @ 06922ddc */
                    /* catch() { ... } // from try @ 06922c98 with catch @ 06922de0 */
    FUN_06788354(uVar3,uVar4,0);
                    /* catch() { ... } // from try @ 06922c88 with catch @ 06922de4 */
                    /* catch() { ... } // from try @ 06922dcc with catch @ 06922de8 */
                    /* catch() { ... } // from try @ 06922d4c with catch @ 06922dec */
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084b57b0);
                    /* catch() { ... } // from try @ 06922ce0 with catch @ 06922df0 */
                    /* catch() { ... } // from try @ 06922cd0 with catch @ 06922df4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06922dc4 with catch @ 06922df8 */
    FUN_03a8a884(uVar3,uVar4);
  }
                    /* try { // try from 06922cfc to 06a22d33 has its CatchHandler @ 06922bdc */
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    uVar1 = FUN_06036020(*(long *)(unaff_x21 + 0x10),unaff_w20,&stack0x00000008,
                         *(undefined8 *)PTR_DAT_084b5788);
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 06922d4c to 06a22d6b has its CatchHandler @ 06922dec */
      lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b57a0);
      FUN_049d8fb0(lVar2,*(undefined8 *)PTR_DAT_084b5798);
                    /* try { // try from 06922d7c to 06a22d87 has its CatchHandler @ 06922dd4 */
      if ((lVar2 == 0) || (FUN_049da1a4(lVar2), lVar5 == 0)) goto LAB_06922db0;
                    /* try { // try from 06922d94 to 06a22db3 has its CatchHandler @ 06922dd8 */
      FUN_06034544(lVar5,unaff_w20,lVar2,*(undefined8 *)PTR_DAT_084b5780);
    }
    else {
      if (in_stack_00000008 == 0) goto LAB_06922db0;
                    /* try { // try from 06922d34 to 06a22d3f has its CatchHandler @ 06922ddc */
      FUN_049da1a4();
    }
    return;
  }
LAB_06922db0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


