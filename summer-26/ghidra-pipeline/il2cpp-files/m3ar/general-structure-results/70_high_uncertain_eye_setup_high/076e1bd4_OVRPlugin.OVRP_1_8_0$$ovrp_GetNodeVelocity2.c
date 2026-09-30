/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 076e1bd4
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

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
  float unaff_s9;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar3 = param_2;
  fVar4 = param_3;
  fVar7 = param_4;
  fVar2 = (float)FUN_08596a20();
  if (unaff_x20 != 0) {
    fVar6 = (unaff_s9 * fVar3 + param_4 * fVar4 + param_3 * fVar7) - param_2 * fVar2;
    fVar5 = (param_3 * fVar2 + param_4 * fVar3 + param_2 * fVar7) - unaff_s9 * fVar4;
    FUN_08598b14((param_2 * fVar4 + param_4 * fVar2 + unaff_s9 * fVar7) - param_3 * fVar3,fVar5,
                 fVar6,((param_4 * fVar7 - unaff_s9 * fVar2) - param_2 * fVar3) - param_3 * fVar4);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar3 = (float)FUN_08598884(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar5;
        fVar4 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
        FUN_0859895c((unaff_s15 + fVar3) - fVar4,in_stack_00000068 - fVar5,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


