/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 02c07584
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticInitializeMixedRealityCapture(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int unaff_w19;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  byte unaff_w26;
  ulong unaff_x28;
  int unaff_w29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  
  while( true ) {
    bVar2 = (**(code **)(param_1 + 0x2d8))(unaff_x25,*(undefined8 *)(param_1 + 0x2e0));
    if ((unaff_w19 == 0 & bVar2) == ((unaff_w26 | bVar2) & 1)) goto LAB_02c07658;
    lVar3 = (**(code **)(*unaff_x25 + 0x2f8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x300));
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) != unaff_w19) goto LAB_02c07658;
    do {
      if (*(int *)(*(long *)PTR_DAT_037f87b8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
                    /* try { // try from 02c075ec to 02d075ff has its CatchHandler @ 02c076a0 */
      uVar4 = FUN_02c070a0(unaff_x25,unaff_w23,unaff_w22);
      uVar1 = in_stack_00000038;
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 02c07604 to 02d07607 has its CatchHandler @ 02c07860 */
        if (unaff_w29 != 0) {
                    /* try { // try from 02c07608 to 02d0760b has its CatchHandler @ 02c0785c */
                    /* try { // try from 02c0760c to 02d0766f has its CatchHandler @ 02c071c4 */
          if (*(int *)(*(long *)PTR_DAT_037f87b8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar4 = FUN_02c06d3c(unaff_x25,uVar1,in_stack_00000008._4_4_ != 0);
          if ((uVar4 & 1) == 0) goto LAB_02c07658;
        }
        FUN_0264f80c(&stack0x00000010,unaff_x25,*(undefined8 *)PTR_DAT_0380aea8);
      }
LAB_02c07658:
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x28) {
                    /* try { // try from 02c07670 to 02d07673 has its CatchHandler @ 02c0769c */
                    /* try { // try from 02c07674 to 02d07683 has its CatchHandler @ 02c071c4 */
                    /* try { // try from 02c07684 to 02d07687 has its CatchHandler @ 02c07698 */
                    /* try { // try from 02c07688 to 02d0768f has its CatchHandler @ 02c07690 */
        in_stack_00000000[2] = in_stack_00000020;
                    /* catch() { ... } // from try @ 02c07688 with catch @ 02c07690
                       try { // try from 02c07690 to 02d076b7 has its CatchHandler @ 02c071c4 */
        in_stack_00000000[1] = in_stack_00000018;
        *in_stack_00000000 = in_stack_00000010;
                    /* catch() { ... } // from try @ 02c07514 with catch @ 02c07694 */
                    /* catch() { ... } // from try @ 02c074cc with catch @ 02c07698
                       catch() { ... } // from try @ 02c07684 with catch @ 02c07698 */
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02c07670 with catch @ 02c0769c */
        FUN_017fc5b0();
      }
      unaff_x25 = *(long **)(unaff_x21 + unaff_x28 * 8);
    } while (unaff_w19 == -1);
    if (unaff_x25 == (long *)0x0) break;
    param_1 = *unaff_x25;
    unaff_w26 = unaff_w19 < 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02c075ec with catch @ 02c076a0 */
  FUN_017fc5a8();
}


