/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetConnectedControllers
ENTRY_POINT: 076e1e40
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetConnectedControllers
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined8 param_9)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar5 = (unaff_s12 * param_1 + param_7 + param_8) - unaff_s13 * param_2;
                    /* try { // try from 076e1e9c to 077e204b has its CatchHandler @ 076e1e9c
                       catch() { ... } // from try @ 076e1e9c with catch @ 076e1e9c
                       catch() { ... } // from try @ 076e22d8 with catch @ 076e1e9c
                       catch() { ... } // from try @ 076e22e0 with catch @ 076e1e9c
                       catch() { ... } // from try @ 076e236c with catch @ 076e1e9c
                       catch() { ... } // from try @ 076e2430 with catch @ 076e1e9c */
  fVar4 = (unaff_s13 * param_3 + unaff_s12 * param_4 + unaff_s14 * param_2) - unaff_s11 * param_1;
  FUN_08598b14((unaff_s11 * param_2 + unaff_s13 * param_4 + unaff_s14 * param_1) -
               unaff_s12 * param_3,fVar4,fVar5,
               ((param_5 - param_6) - unaff_s12 * param_2) - unaff_s11 * param_3,param_9,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_08598884(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar5;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
      FUN_0859895c((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


