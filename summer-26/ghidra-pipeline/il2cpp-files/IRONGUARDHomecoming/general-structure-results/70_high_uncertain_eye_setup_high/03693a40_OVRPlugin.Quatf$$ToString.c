/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 03693a40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s15;
  float in_s17;
  float in_s18;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
                    /* try { // try from 03693a54 to 03793a5f has its CatchHandler @ 03693aa4 */
                    /* try { // try from 03693a60 to 03793a97 has its CatchHandler @ 036939e4 */
  fVar5 = (unaff_s9 * param_2 + in_s17 + in_s18) - unaff_s10 * param_1;
  fVar4 = (unaff_s8 * param_1 + unaff_s11 * param_2 + unaff_s10 * param_4) - unaff_s9 * param_3;
                    /* try { // try from 03693a98 to 03793a9b has its CatchHandler @ 03693aa4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693a34 with catch @ 03693a9c
                       try { // try from 03693a9c to 03793abb has its CatchHandler @ 036939e4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693a24 with catch @ 03693aa0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03693a54 with catch @ 03693aa4
                       catch(type#1 @ 042b3198) { ... } // from try @ 03693a98 with catch @ 03693aa4
                        */
  FUN_0407d5e8((unaff_s10 * param_3 + unaff_s11 * param_1 + unaff_s9 * param_4) - unaff_s8 * param_2
               ,fVar4,fVar5,((param_5 - param_6) - unaff_s10 * param_2) - param_8);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0407d3c8(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar5;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x28),0);
      FUN_0407d468((unaff_s15 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


