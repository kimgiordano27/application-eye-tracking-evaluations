/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 03163e8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString(float param_1,float param_2,float param_3,float param_4)

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
  
  fVar5 = (unaff_s12 * param_1 + unaff_s13 * param_4 + unaff_s11 * param_3) - unaff_s14 * param_2;
  fVar4 = (unaff_s14 * param_3 + unaff_s12 * param_4 + unaff_s11 * param_2) - unaff_s13 * param_1;
  FUN_03928f54((unaff_s13 * param_2 + unaff_s14 * param_4 + unaff_s11 * param_1) -
               unaff_s12 * param_3,fVar4,fVar5,
               ((unaff_s11 * param_4 - unaff_s14 * param_1) - unaff_s12 * param_2) -
               unaff_s13 * param_3);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_03928d34(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar5;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x28),0);
      FUN_03928dd4((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


