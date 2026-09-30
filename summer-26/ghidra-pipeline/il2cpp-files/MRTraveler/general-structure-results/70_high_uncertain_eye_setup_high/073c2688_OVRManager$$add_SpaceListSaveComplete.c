/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 073c2688
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,ulong param_5
               )

{
  long unaff_x19;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong uVar4;
  ulong in_stack_00000000;
  uint in_stack_00000008;
  
  uVar4 = in_stack_00000000 >> 0x20;
  if ((param_5 & 1) == 0) {
                    /* try { // try from 073c26b0 to 074c26b3 has its CatchHandler @ 073c2730 */
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_073c2734;
    FUN_073bf998();
    in_stack_00000000 = in_stack_00000000 & 0xffffffff;
                    /* try { // try from 073c26c0 to 074c26c7 has its CatchHandler @ 073c2738 */
    param_3 = (ulong)in_stack_00000008;
  }
  else {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_073c2734;
    in_stack_00000000 = FUN_085eb198(*(long *)(unaff_x19 + 0x38),0);
    uVar4 = param_2;
  }
  uVar2 = (ulong)(uint)(unaff_s9 - (float)uVar4);
  uVar3 = (ulong)(uint)(unaff_s8 - (float)param_3);
  uVar1 = FUN_085d297c(unaff_s10 - (float)in_stack_00000000,uVar2,uVar3,0);
                    /* try { // try from 073c26dc to 074c26e3 has its CatchHandler @ 073c2734 */
  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 073c26f0 to 074c26fb has its CatchHandler @ 073c2728 */
                    /* try { // try from 073c26fc to 074c2723 has its CatchHandler @ 073c2658 */
    FUN_07346df8(in_stack_00000000,uVar4,param_3,uVar1,uVar2,uVar3,param_4,
                 *(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 073c2724 to 074c2727 has its CatchHandler @ 073c272c */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c26f0 with catch @ 073c2728
                       try { // try from 073c2728 to 074c274f has its CatchHandler @ 073c2658 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c2724 with catch @ 073c272c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c26b0 with catch @ 073c2730
                        */
    return;
  }
LAB_073c2734:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c26dc with catch @ 073c2734
                        */
  FUN_03c8fb30();
}


