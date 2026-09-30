/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 036939f8
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


void OVRPlugin_Vector4s___cctor(undefined1 param_1 [16],float param_2,float param_3)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000018;
  float in_stack_00000068;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar2 = (float)FUN_040674b0(0);
                    /* try { // try from 03693a24 to 03793a33 has its CatchHandler @ 03693aa0 */
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = param_2, fVar6 = param_3, fVar8 = in_stack_00000018,
     fVar3 = (float)FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
                    /* try { // try from 03693a34 to 03793a3b has its CatchHandler @ 03693a9c */
    fVar7 = (fVar2 * fVar4 + in_stack_00000018 * fVar6 + param_3 * fVar8) - param_2 * fVar3;
    fVar5 = (param_3 * fVar3 + in_stack_00000018 * fVar4 + param_2 * fVar8) - fVar2 * fVar6;
    FUN_0407d5e8((param_2 * fVar6 + in_stack_00000018 * fVar3 + fVar2 * fVar8) - param_3 * fVar4,
                 fVar5,fVar7,
                 ((in_stack_00000018 * fVar8 - fVar2 * fVar3) - param_2 * fVar4) - param_3 * fVar6,
                 lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_0407d3c8(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar7;
        in_stack_00000068 = in_stack_00000068 + fVar5;
        fVar4 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x28),0);
        FUN_0407d468((unaff_s15 + fVar2) - fVar4,in_stack_00000068 - fVar5,
                     in_stack_00000008._4_4_ - fVar7,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


