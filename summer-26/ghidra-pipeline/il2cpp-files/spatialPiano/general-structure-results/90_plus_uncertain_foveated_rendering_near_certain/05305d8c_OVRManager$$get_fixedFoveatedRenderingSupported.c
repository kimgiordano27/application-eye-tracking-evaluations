/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05305d8c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s14;
  
  fVar7 = unaff_s11 - unaff_s14;
  if (*(int *)(**(long **)(param_1 + 0xf80) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar4 = SQRT(fVar7 * fVar7 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar4 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
  }
  else {
    fVar5 = unaff_s9 / fVar4;
    fVar6 = unaff_s10 / fVar4;
    fVar7 = fVar7 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_060ed000(*(long *)(unaff_x19 + 0x30),1,0);
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x40) = fVar5;
      *(float *)(lVar3 + 0x44) = fVar6;
      *(float *)(lVar3 + 0x48) = fVar7;
      lVar2 = *(long *)(unaff_x19 + 0x30);
      *(undefined1 *)(lVar3 + 0x4c) = 1;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


