/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$.cctor
ENTRY_POINT: 033f8324
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033f84d0) */

int OVRPlugin_OVRP_1_79_0___cctor(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_00000008;
  
  if (in_w8 < unaff_w22) {
    thunk_FUN_01dd295c(StringLiteral_9443);
    uVar4 = thunk_FUN_01de27b8();
    FUN_033f3194();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_9442);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar5);
  }
  iVar2 = *(int *)(unaff_x21 + 0x18);
  thunk_FUN_01da0934();
  iVar7 = unaff_w20 + unaff_w22;
                    /* try { // try from 033f8344 to 034f8347 has its CatchHandler @ 033f83c0 */
  if ((iVar7 == 1) || (iVar2 == 1)) {
    FUN_033f8594(*(undefined8 *)(unaff_x21 + 0x20));
  }
  else if (1 < iVar2) {
    OVRPlugin_OVRP_1_62_0___cctor(*(undefined8 *)(unaff_x21 + 0x20));
                    /* try { // try from 033f8358 to 034f8363 has its CatchHandler @ 033f83d0 */
  }
  puVar3 = StringLiteral_6721;
                    /* try { // try from 033f8368 to 034f836b has its CatchHandler @ 033f83cc */
  iVar8 = iVar7;
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    iVar1 = iVar7;
                    /* try { // try from 033f837c to 034f838f has its CatchHandler @ 033f83e8 */
    if (-1 < iVar7 - iVar2) {
      iVar1 = iVar2;
    }
                    /* try { // try from 033f8394 to 034f839f has its CatchHandler @ 033f83c8 */
    while ((iVar8 = iVar1, 0 < iVar7 - iVar2 &&
           (lVar6 = *(long *)(unaff_x21 + 0x30), iVar8 = iVar7, lVar6 != 0))) {
      FUN_033f81c0();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar7 = iVar7 + -1;
      FUN_03400250(lVar6,0,0);
    }
  }
  thunk_FUN_01da0934();
  lVar6 = *(long *)(unaff_x21 + 0x28);
  *(int *)(unaff_x21 + 0x10) = iVar8;
  thunk_FUN_01da0934();
  if (((0 < iVar8) && (unaff_w20 == 0)) && (lVar6 != 0)) {
    lVar6 = *(long *)(unaff_x21 + 0x28);
    thunk_FUN_01da0934();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_033f48b4(lVar6);
    unaff_w20 = 0;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01dccd6c();
  }
  return unaff_w20;
}


