/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 07c5aa7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(undefined1 param_1 [16],float param_2,float param_3,float param_4)

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
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar3 = param_4;
  FUN_09537fe0();
  fVar2 = (float)FUN_095165fc(0);
                    /* try { // try from 07c5aa94 to 07d5aabf has its CatchHandler @ 07c5ace8 */
                    /* try { // try from 07c5aac0 to 07d5ab2f has its CatchHandler @ 07c5acf0 */
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar4 = (unaff_s15 * param_3 + unaff_s9 * fVar3 + param_4 * param_2) - unaff_s8 * fVar2;
  fVar5 = (unaff_s9 * fVar2 + unaff_s8 * fVar3 + param_4 * param_3) - unaff_s15 * param_2;
  fVar7 = ((param_4 * fVar3 - unaff_s15 * fVar2) - unaff_s9 * param_2) - unaff_s8 * param_3;
  fVar3 = (float)FUN_095165fc((unaff_s8 * param_2 + unaff_s15 * fVar3 + param_4 * fVar2) -
                              unaff_s9 * param_3,fVar4,fVar5,fVar7,0);
  if (lVar1 != 0) {
    fVar6 = (unaff_s12 * fVar3 + unaff_s13 * fVar7 + unaff_s11 * fVar5) - unaff_s14 * fVar4;
    fVar2 = (unaff_s14 * fVar5 + unaff_s12 * fVar7 + unaff_s11 * fVar4) - unaff_s13 * fVar3;
    FUN_0953a29c((unaff_s13 * fVar4 + unaff_s14 * fVar7 + unaff_s11 * fVar3) - unaff_s12 * fVar5,
                 fVar2,fVar6,
                 ((unaff_s11 * fVar7 - unaff_s14 * fVar3) - unaff_s12 * fVar4) - unaff_s13 * fVar5,
                 lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar3 = (float)FUN_09539d64(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar2;
        fVar4 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
        FUN_09539e3c((in_stack_00000000 + fVar3) - fVar4,in_stack_00000068 - fVar2,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


