/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 07c85674
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetFaceState2(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar4;
  float fVar5;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  long in_stack_00000030;
  undefined8 in_stack_00000048;
  
  while( true ) {
    bVar1 = FUN_07c857dc();
                    /* try { // try from 07c85678 to 07d8568f has its CatchHandler @ 07c858bc */
    fVar5 = ABS(in_stack_00000048._4_4_);
                    /* try { // try from 07c85690 to 07d85697 has its CatchHandler @ 07c858a4 */
    if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 07c8569c to 07d8569f has its CatchHandler @ 07c8589c */
                    /* try { // try from 07c856a0 to 07d856b3 has its CatchHandler @ 07c858bc */
    FUN_07476e6c(in_stack_00000048._4_4_,unaff_d8,*(long *)(unaff_x19 + 0x58),unaff_x20,*unaff_x24);
    *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar1 & fVar5 <= (float)unaff_d8;
    uVar2 = FUN_0768d020(&stack0x00000020,*unaff_x23);
    if ((uVar2 & 1) == 0) break;
    if (unaff_w22 == 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      fVar4 = *(float *)(in_stack_00000030 + 0x14);
      fVar5 = *(float *)(in_stack_00000030 + 0x18) * unaff_s9;
    }
    else {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      fVar4 = *(float *)(in_stack_00000030 + 0x14);
      fVar5 = *(float *)(in_stack_00000030 + 0x18) * unaff_s10;
    }
    unaff_d8 = (ulong)(uint)(fVar4 + fVar5);
    unaff_x20 = in_stack_00000030;
  }
                    /* try { // try from 07c856c4 to 07d856c7 has its CatchHandler @ 07c858ac */
  FUN_0768d01c(&stack0x00000020,*(undefined8 *)PTR_DAT_09f509f0);
  lVar3 = *(long *)(unaff_x19 + 0x50);
  if (lVar3 != 0) {
    fVar5 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    bVar1 = *(byte *)(unaff_x19 + 0x61);
    if (unaff_w22 == bVar1) {
      fVar4 = *(float *)(unaff_x19 + 100);
    }
    else {
      *(float *)(unaff_x19 + 100) = fVar5;
      fVar4 = fVar5;
    }
    if (*(float *)(unaff_x19 + 0x48) <= fVar5 - fVar4) {
      *(byte *)(unaff_x19 + 0x60) = bVar1;
    }
    else {
      bVar1 = *(byte *)(unaff_x19 + 0x60);
    }
                    /* try { // try from 07c85724 to 07d8574f has its CatchHandler @ 07c858a0 */
    return bVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


