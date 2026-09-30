/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 076e1ddc
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar3 = (unaff_s9 * param_3 + param_7 + param_8) - unaff_s8 * param_1;
  fVar5 = (unaff_s15 * param_1 + in_s16 + in_s17) - unaff_s9 * param_2;
  fVar7 = ((param_4 - in_s18) - unaff_s15 * param_2) - unaff_s8 * param_3;
  fVar2 = (float)FUN_08575760((param_6 + param_5) - unaff_s15 * param_3,fVar3,fVar5,fVar7);
  if (unaff_x20 != 0) {
    fVar6 = (unaff_s12 * fVar2 + unaff_s11 * fVar7 + unaff_s14 * fVar5) - unaff_s13 * fVar3;
    fVar4 = (unaff_s13 * fVar5 + unaff_s12 * fVar7 + unaff_s14 * fVar3) - unaff_s11 * fVar2;
    FUN_08598b14((unaff_s11 * fVar3 + unaff_s13 * fVar7 + unaff_s14 * fVar2) - unaff_s12 * fVar5,
                 fVar4,fVar6,
                 ((unaff_s14 * fVar7 - unaff_s13 * fVar2) - unaff_s12 * fVar3) - unaff_s11 * fVar5);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_08598884(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar4;
        fVar3 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
        FUN_0859895c((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


