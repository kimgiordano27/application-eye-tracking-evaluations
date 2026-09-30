/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange
ENTRY_POINT: 05304cf0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (param_1 != 0) {
    lVar1 = *unaff_x21;
    *(undefined4 *)(param_1 + 0x58) = unaff_s14;
    *(undefined4 *)(param_1 + 0x5c) = unaff_s13;
    *(undefined4 *)(param_1 + 0x60) = unaff_s12;
    *(undefined4 *)(param_1 + 100) = unaff_s11;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_060f078c(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05304dcc;
      FUN_05302210((long)&stack0x00000000 + 4);
      fVar4 = in_stack_00000000._4_4_;
      param_3 = fStack0000000000000008;
      param_4 = fStack000000000000000c;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05304dcc;
      fVar4 = (float)FUN_060ffbe4(*(long *)(unaff_x19 + 0x38),0);
    }
    fVar6 = unaff_s9 - param_3;
    fVar7 = unaff_s8 - param_4;
    uVar5 = FUN_060df954(unaff_s10 - fVar4,fVar6,fVar7,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_0528c874(fVar4,param_3,param_4,uVar5,fVar6,fVar7,param_5,*(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
LAB_05304dcc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


