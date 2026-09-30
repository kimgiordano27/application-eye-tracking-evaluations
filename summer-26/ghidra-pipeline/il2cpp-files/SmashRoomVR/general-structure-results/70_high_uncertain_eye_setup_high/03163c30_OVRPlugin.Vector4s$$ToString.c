/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 03163c30
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


void OVRPlugin_Vector4s__ToString
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar5 = (in_s16 + in_s17 + in_s18) - in_s19;
  fVar4 = (param_4 + in_s23 + in_s20) - in_s22;
  FUN_03928f54((in_s21 + param_1 + param_3) - unaff_s8 * param_2,fVar4,fVar5,
               ((param_5 - param_6) - param_7) - param_8);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_03928d34(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar5;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x28),0);
      FUN_03928dd4((unaff_s15 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


