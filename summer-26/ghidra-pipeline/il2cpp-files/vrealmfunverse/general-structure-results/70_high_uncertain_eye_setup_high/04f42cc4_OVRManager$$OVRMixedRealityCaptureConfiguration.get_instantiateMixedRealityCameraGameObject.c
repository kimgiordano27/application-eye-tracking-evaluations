/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject
ENTRY_POINT: 04f42cc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
               (long param_1,float param_2,float param_3,float param_4)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  fVar1 = unaff_s11 * unaff_s11 + param_2 + param_3;
  if (**(float **)(**(long **)(param_1 + 0x600) + 0xb8) <= fVar1) {
    fVar2 = unaff_s9 * unaff_s11 + unaff_s8 * unaff_s12 + unaff_s10 * unaff_s13;
    param_4 = (unaff_s12 * fVar2) / fVar1;
    unaff_s8 = unaff_s8 - param_4;
    unaff_s9 = unaff_s9 - (unaff_s11 * fVar2) / fVar1;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar1 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
    if (*(char *)(unaff_x19 + 0xd5) == '\0') {
      fVar2 = 0.0;
    }
    else {
      fVar2 = *(float *)(unaff_x19 + 0x4c);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05c9c070(unaff_s8 + fVar1,fVar2 + unaff_s15 + *(float *)(unaff_x19 + 0x48),
                   unaff_s9 + param_4,*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_04f3f86c(in_stack_00000020,uStack000000000000001c,uStack0000000000000018,
                     *(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_04f3f808(uStack0000000000000014,uStack0000000000000010,uStack000000000000000c,
                       uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


