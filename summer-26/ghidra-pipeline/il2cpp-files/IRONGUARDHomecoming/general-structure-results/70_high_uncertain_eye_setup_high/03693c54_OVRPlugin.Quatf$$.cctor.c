/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 03693c54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf___cctor
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
                    /* try { // try from 03693c5c to 03793c6b has its CatchHandler @ 03693cc8 */
                    /* try { // try from 03693c80 to 03793c87 has its CatchHandler @ 03693cc0 */
                    /* try { // try from 03693c88 to 03793cbb has its CatchHandler @ 03693c1c */
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar3 = (unaff_s15 * param_3 + in_s16 + in_s17) - unaff_s8 * param_1;
  fVar5 = (unaff_s9 * param_1 + unaff_s8 * param_4 + unaff_s10 * param_3) - unaff_s15 * param_2;
  fVar7 = ((unaff_s10 * param_4 - unaff_s15 * param_1) - unaff_s9 * param_2) - unaff_s8 * param_3;
                    /* try { // try from 03693cbc to 03793cbf has its CatchHandler @ 03693cc4 */
  fVar2 = (float)FUN_04066fb8((unaff_s8 * param_2 + param_5 + param_6) - unaff_s9 * param_3,fVar3,
                              fVar5,fVar7,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693c80 with catch @ 03693cc0
                       try { // try from 03693cc0 to 03793cdf has its CatchHandler @ 03693c1c */
  if (lVar1 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693cbc with catch @ 03693cc4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693c5c with catch @ 03693cc8
                        */
                    /* try { // try from 03693ce0 to 03793ce3 has its CatchHandler @ 03693cf0 */
                    /* catch() { ... } // from try @ 03693ce0 with catch @ 03693cf0 */
                    /* try { // try from 03693cfc to 03793d07 has its CatchHandler @ 03693d1c */
                    /* try { // try from 03693d08 to 03793d13 has its CatchHandler @ 03693c1c */
                    /* try { // try from 03693d14 to 03793d1b has its CatchHandler @ 03693d1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03693cfc with catch @ 03693d1c
                       catch(type#2 @ 00000000) { ... } // from try @ 03693d14 with catch @ 03693d1c
                        */
    fVar6 = (unaff_s12 * fVar2 + unaff_s13 * fVar7 + unaff_s11 * fVar5) - unaff_s14 * fVar3;
    fVar4 = (unaff_s14 * fVar5 + unaff_s12 * fVar7 + unaff_s11 * fVar3) - unaff_s13 * fVar2;
    FUN_0407d5e8((unaff_s13 * fVar3 + unaff_s14 * fVar7 + unaff_s11 * fVar2) - unaff_s12 * fVar5,
                 fVar4,fVar6,
                 ((unaff_s11 * fVar7 - unaff_s14 * fVar2) - unaff_s12 * fVar3) - unaff_s13 * fVar5,
                 lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_0407d3c8(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar4;
        fVar3 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x28),0);
        FUN_0407d468((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


