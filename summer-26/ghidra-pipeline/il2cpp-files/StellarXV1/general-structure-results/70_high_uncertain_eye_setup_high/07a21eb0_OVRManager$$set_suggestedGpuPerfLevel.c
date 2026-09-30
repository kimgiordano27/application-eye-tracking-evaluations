/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 07a21eb0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;negative_string_building_without_real_collection_sink;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__set_suggestedGpuPerfLevel(void)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float fVar3;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07a22048;
  FUN_089c6d28(*(long *)(unaff_x19 + 0x38),0.0 <= unaff_s8,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07a22048;
  fVar3 = unaff_s9 * unaff_s13 + unaff_s10;
  FUN_089c6d28(*(long *)(unaff_x19 + 0x30),unaff_s8 < 0.0,0);
  fVar2 = *(float *)(unaff_x19 + 0x68);
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07a22048;
  fVar4 = unaff_s12 * unaff_s11 + unaff_s10;
  fVar5 = fVar4 + fVar3;
  if (0.0 <= unaff_s8) {
    fVar2 = fVar5;
  }
  FUN_089c7534(*(long *)(unaff_x19 + 0x28),0);
  uVar1 = OVRManager__get_eyeTextureFormat(fVar2);
  if (unaff_w20 == 0) {
    FUN_07a223c0(0,uVar1,*(undefined8 *)(unaff_x19 + 0x48));
    fVar2 = fVar5;
    if (0.0 <= unaff_s8) goto LAB_07a21f98;
LAB_07a21f64:
    FUN_07a22448(*(undefined4 *)(unaff_x19 + 0x68));
    fVar2 = -fVar3 - fVar4;
  }
  else {
    if (unaff_s8 < 0.0) {
      FUN_07a223c0(0,uVar1,*(undefined8 *)(unaff_x19 + 0x48));
      goto LAB_07a21f64;
    }
    FUN_07a223c0(fVar3 - *(float *)(unaff_x19 + 0x68),uVar1,*(undefined8 *)(unaff_x19 + 0x48));
    fVar2 = fVar4 + *(float *)(unaff_x19 + 0x68);
LAB_07a21f98:
    FUN_07a22448(fVar2);
    fVar2 = -*(float *)(unaff_x19 + 0x68);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_089c7534(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = OVRManager__get_eyeTextureFormat(fVar2);
    fVar2 = 0.0;
    if ((unaff_s8 < 0.0) && (unaff_w20 != 0)) {
      fVar2 = *(float *)(unaff_x19 + 0x68) - fVar3;
    }
    FUN_07a223c0(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x40));
    if (0.0 <= unaff_s8) {
      fVar5 = *(float *)(unaff_x19 + 0x68);
    }
    else if (unaff_w20 != 0) {
      fVar5 = fVar4 + *(float *)(unaff_x19 + 0x68);
    }
    FUN_07a22448(fVar5);
    FUN_07a2249c(fVar3,fVar4);
    return;
  }
LAB_07a22048:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


