/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$Invoke
ENTRY_POINT: 06968c28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__Invoke(float param_1,float param_2)

{
  float *pfVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  if (param_2 <= param_1) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    param_2 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s8 / param_2;
    fVar3 = unaff_s9 / param_2;
    param_2 = unaff_s10 / param_2;
  }
  *(float *)(unaff_x19 + 0x6c) = fVar2;
  *(float *)(unaff_x19 + 0x70) = fVar3;
  *(float *)(unaff_x19 + 0x74) = param_2;
  *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(unaff_x19 + 0x78);
  FUN_06968e24();
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) <= *(int *)(unaff_x19 + 0x148) + 2) {
      FUN_0696829c();
    }
    *(undefined2 *)(unaff_x19 + 0x110) = 0;
    *(undefined1 *)(unaff_x19 + 0x112) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


