/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_depthQuality
ENTRY_POINT: 05304d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_depthQuality
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,ulong param_5
               )

{
  long unaff_x19;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if ((param_5 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05304dcc;
    FUN_05302210((long)&stack0x00000000 + 4);
    fVar1 = in_stack_00000000._4_4_;
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
  }
  else {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05304dcc;
    fVar1 = (float)FUN_060ffbe4(*(long *)(unaff_x19 + 0x38),0);
  }
  fVar3 = unaff_s9 - param_2;
  fVar4 = unaff_s8 - param_3;
  uVar2 = FUN_060df954(unaff_s10 - fVar1,fVar3,fVar4,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0528c874(fVar1,param_2,param_3,uVar2,fVar3,fVar4,param_4,*(long *)(unaff_x19 + 0x30),0);
    return;
  }
LAB_05304dcc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


