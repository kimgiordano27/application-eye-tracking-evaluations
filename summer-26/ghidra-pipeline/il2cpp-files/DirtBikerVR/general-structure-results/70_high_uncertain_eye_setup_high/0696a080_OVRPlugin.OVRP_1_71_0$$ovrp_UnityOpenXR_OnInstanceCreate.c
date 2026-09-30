/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 0696a080
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    lVar2 = thunk_FUN_03ac74bc(param_1);
    *(undefined8 *)(lVar2 + 0x18) = in_stack_00000008;
    *(undefined8 *)(lVar2 + 0x10) = in_stack_00000000;
    FUN_0679343c(lVar2,0);
    FUN_0696a158(lVar2,*(undefined8 *)(unaff_x19 + 0x10),param_2);
                    /* try { // try from 0696a0b0 to 06a6a0b3 has its CatchHandler @ 0696a12c */
    lVar3 = *(long *)(unaff_x19 + 0x38);
                    /* try { // try from 0696a0b4 to 06a6a0b7 has its CatchHandler @ 0696a128 */
    if (lVar3 == 0) break;
                    /* try { // try from 0696a0b8 to 06a6a0bb has its CatchHandler @ 0696a124 */
                    /* try { // try from 0696a0bc to 06a6a0bf has its CatchHandler @ 069691bc */
    lVar4 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 0696a0c0 to 06a6a0c3 has its CatchHandler @ 0696a0e0 */
    lVar6 = *unaff_x25;
                    /* try { // try from 0696a0c4 to 06a6a0c7 has its CatchHandler @ 0696a0d8 */
                    /* try { // try from 0696a0c8 to 06a6a103 has its CatchHandler @ 069691bc */
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 0696a0c4 with catch @ 0696a0d8 */
                    /* catch() { ... } // from try @ 06969fd0 with catch @ 0696a0dc */
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* catch() { ... } // from try @ 0696a0c0 with catch @ 0696a0e0 */
                    /* catch() { ... } // from try @ 06969fa4 with catch @ 0696a0e4 */
                    /* catch() { ... } // from try @ 06969f40 with catch @ 0696a0e8 */
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar2;
      thunk_FUN_03afed3c(plVar5,lVar2);
    }
    else {
      FUN_04de85b0(lVar3,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w20 = unaff_w20 + 1;
    if (((*(long *)(unaff_x19 + 0x10) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x58), lVar2 == 0)) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w20) {
      FUN_0693839c();
      return;
    }
    param_2 = FUN_04de82e0(lVar2,unaff_w20,*unaff_x23);
    param_1 = *unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


