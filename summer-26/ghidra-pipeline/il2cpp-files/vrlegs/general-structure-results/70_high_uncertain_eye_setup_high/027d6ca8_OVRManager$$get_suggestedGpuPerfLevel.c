/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 027d6ca8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_suggestedGpuPerfLevel(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  bool in_ZR;
  bool in_CY;
  int in_w8;
  long *unaff_x20;
  
  *(long *)(param_3 + 0x78) = param_1._8_8_;
  *(long *)(param_3 + 0x70) = param_1._0_8_;
  uVar1 = _DAT_00d32e50;
  if (in_CY && !in_ZR) {
    *(undefined8 *)(param_3 + 0x88) = _UNK_00d32e58;
    *(undefined8 *)(param_3 + 0x80) = uVar1;
    uVar1 = _DAT_00d32c30;
    if (in_w8 != 7) {
      *(undefined8 *)(param_3 + 0x98) = _UNK_00d32c38;
      *(undefined8 *)(param_3 + 0x90) = uVar1;
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


