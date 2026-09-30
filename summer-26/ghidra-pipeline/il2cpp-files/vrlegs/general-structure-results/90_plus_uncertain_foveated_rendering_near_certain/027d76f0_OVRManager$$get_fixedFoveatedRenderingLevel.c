/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 027d76f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d76a8 with catch @ 027d76f0
                        */
  *(undefined1 *)(unaff_x23 + 0x2a) = in_w8;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *unaff_x22;
  }
                    /* try { // try from 027d7708 to 028d771f has its CatchHandler @ 027d777c */
  if (unaff_x20 != 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 027d7720 to 028d776b has its CatchHandler @ 027d7634 */
    FUN_027d77a8(&stack0x00000008);
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
                    /* try { // try from 027d776c to 028d777b has its CatchHandler @ 027d777c */
  uVar2 = thunk_FUN_01a89e68();
                    /* catch() { ... } // from try @ 027d7708 with catch @ 027d777c
                       catch() { ... } // from try @ 027d776c with catch @ 027d777c */
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cea430);
                    /* try { // try from 027d7780 to 028d7783 has its CatchHandler @ 027d778c */
                    /* try { // try from 027d7784 to 028d778f has its CatchHandler @ 027d7634 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d7780 with catch @ 027d778c
                        */
  FUN_026a44fc(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb80);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar3);
}


