/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 07a21e24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;negative_string_building_without_real_collection_sink;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_suggestedGpuPerfLevel(float param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_2 + 0xb0);
  fVar6 = 1.0;
  if (ABS(param_1) <= 1.0) {
    fVar6 = ABS(param_1);
  }
  fVar8 = 1.0;
  if (fVar5 <= 1.0) {
    fVar8 = fVar5;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar5) {
    fVar7 = fVar8;
  }
  if (*(long *)(param_2 + 0x40) == 0) goto LAB_07a22048;
  fVar8 = *(float *)(param_2 + 0x6c);
  cVar1 = *(char *)(param_2 + 0xb4);
  fVar5 = *(float *)(param_2 + 0x74);
  FUN_089c6d28(*(long *)(param_2 + 0x40),1,0);
  if (*(long *)(param_2 + 0x48) == 0) goto LAB_07a22048;
  FUN_089c6d28(*(long *)(param_2 + 0x48),1,0);
  if (*(long *)(param_2 + 0x20) == 0) goto LAB_07a22048;
  FUN_0899153c(*(long *)(param_2 + 0x20),1,0);
  if (*(long *)(param_2 + 0x28) == 0) goto LAB_07a22048;
  FUN_0899153c(*(long *)(param_2 + 0x28),1,0);
  plVar4 = (long *)(param_2 + 0x38);
  if (*plVar4 == 0) goto LAB_07a22048;
  FUN_089c6d28(*plVar4,0.0 <= param_1,0);
  plVar3 = (long *)(param_2 + 0x30);
  if (*plVar3 == 0) goto LAB_07a22048;
  fVar6 = fVar6 * fVar8 + 0.0;
  FUN_089c6d28(*plVar3,param_1 < 0.0,0);
  fVar8 = *(float *)(param_2 + 0x68);
  if (fVar6 <= fVar8) {
    fVar6 = fVar8;
  }
  if (*(long *)(param_2 + 0x28) == 0) goto LAB_07a22048;
  fVar5 = fVar5 * fVar7 + 0.0;
  fVar7 = fVar5 + fVar6;
  if (0.0 <= param_1) {
    fVar8 = fVar7;
  }
  uVar2 = FUN_089c7534(*(long *)(param_2 + 0x28),0);
  uVar2 = OVRManager__get_eyeTextureFormat(fVar8,param_2,uVar2);
  if (cVar1 == '\0') {
    FUN_07a223c0(0,uVar2,*(undefined8 *)(param_2 + 0x48));
    fVar8 = fVar7;
    if (0.0 <= param_1) goto LAB_07a21f98;
LAB_07a21f64:
    FUN_07a22448(*(undefined4 *)(param_2 + 0x68),param_2,*(undefined8 *)(param_2 + 0x48));
    fVar8 = -fVar6 - fVar5;
  }
  else {
    if (param_1 < 0.0) {
      FUN_07a223c0(0,uVar2,*(undefined8 *)(param_2 + 0x48));
      goto LAB_07a21f64;
    }
    FUN_07a223c0(fVar6 - *(float *)(param_2 + 0x68),uVar2,*(undefined8 *)(param_2 + 0x48));
    fVar8 = fVar5 + *(float *)(param_2 + 0x68);
LAB_07a21f98:
    FUN_07a22448(fVar8,param_2,*(undefined8 *)(param_2 + 0x48));
    fVar8 = -*(float *)(param_2 + 0x68);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar2 = FUN_089c7534(*(long *)(param_2 + 0x20),0);
    uVar2 = OVRManager__get_eyeTextureFormat(fVar8,param_2,uVar2);
    fVar8 = 0.0;
    if ((param_1 < 0.0) && (cVar1 != '\0')) {
      fVar8 = *(float *)(param_2 + 0x68) - fVar6;
    }
    FUN_07a223c0(fVar8,uVar2,*(undefined8 *)(param_2 + 0x40));
    if (0.0 <= param_1) {
      fVar7 = *(float *)(param_2 + 0x68);
    }
    else {
      plVar4 = plVar3;
      if (cVar1 != '\0') {
        fVar7 = fVar5 + *(float *)(param_2 + 0x68);
      }
    }
    FUN_07a22448(fVar7,param_2,*(undefined8 *)(param_2 + 0x40));
    FUN_07a2249c(fVar6,fVar5,param_2,*plVar4);
    return;
  }
LAB_07a22048:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


