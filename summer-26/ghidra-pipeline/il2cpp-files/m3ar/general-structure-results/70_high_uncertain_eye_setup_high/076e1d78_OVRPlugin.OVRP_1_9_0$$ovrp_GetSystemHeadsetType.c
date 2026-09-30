/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetSystemHeadsetType
ENTRY_POINT: 076e1d78
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetSystemHeadsetType(void)

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
  float in_s3;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar2 = (float)FUN_08575d1c();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar6 = unaff_s10;
    fVar8 = unaff_s9;
    fVar4 = in_s3;
    FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
    fVar3 = (float)FUN_08575760(0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    fVar5 = (fVar2 * fVar8 + unaff_s10 * fVar4 + in_s3 * fVar6) - unaff_s9 * fVar3;
    fVar7 = (unaff_s10 * fVar3 + unaff_s9 * fVar4 + in_s3 * fVar8) - fVar2 * fVar6;
    fVar9 = ((in_s3 * fVar4 - fVar2 * fVar3) - unaff_s10 * fVar6) - unaff_s9 * fVar8;
    fVar2 = (float)FUN_08575760((unaff_s9 * fVar6 + fVar2 * fVar4 + in_s3 * fVar3) -
                                unaff_s10 * fVar8,fVar5,fVar7,fVar9,0);
    if (lVar1 != 0) {
      fVar8 = (unaff_s12 * fVar2 + unaff_s11 * fVar9 + unaff_s14 * fVar7) - unaff_s13 * fVar5;
      fVar6 = (unaff_s13 * fVar7 + unaff_s12 * fVar9 + unaff_s14 * fVar5) - unaff_s11 * fVar2;
      FUN_08598b14((unaff_s11 * fVar5 + unaff_s13 * fVar9 + unaff_s14 * fVar2) - unaff_s12 * fVar7,
                   fVar6,fVar8,
                   ((unaff_s14 * fVar9 - unaff_s13 * fVar2) - unaff_s12 * fVar5) - unaff_s11 * fVar7
                   ,lVar1,0);
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if (lVar1 != 0) {
        fVar2 = (float)FUN_08598884(lVar1,0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar8;
          in_stack_00000068 = in_stack_00000068 + fVar6;
          fVar4 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
          FUN_0859895c((in_stack_00000000 + fVar2) - fVar4,in_stack_00000068 - fVar6,
                       in_stack_00000008._4_4_ - fVar8,lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


