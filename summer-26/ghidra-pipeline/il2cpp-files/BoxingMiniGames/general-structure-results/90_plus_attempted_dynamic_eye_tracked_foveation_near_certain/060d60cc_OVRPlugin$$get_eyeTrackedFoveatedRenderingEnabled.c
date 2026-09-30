/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 060d60cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar8 = unaff_s8 - unaff_s11;
  fVar9 = unaff_s9 - unaff_s12;
  plVar5 = *(long **)(unaff_x21 + 0xdf0);
  fVar10 = unaff_s10 - unaff_s13;
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_079f4dc0;
  fVar6 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar7 = DAT_01651354;
  if (fVar6 <= DAT_01651354) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar10 = pfVar4[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  lVar2 = FUN_071bd0d0();
  lVar3 = FUN_071bd0d0();
  if (lVar3 != 0) {
    fVar6 = (float)FUN_071d0360(lVar3,0);
    if (DAT_07ed76b6 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b6 = '\x01';
    }
    if (lVar2 != 0) {
      fVar7 = fVar7 - fVar9;
      param_3 = param_3 - fVar10;
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      thunk_FUN_071d1b70(fVar6 - fVar8,fVar7,param_3,*(undefined4 *)(lVar3 + 0x18),
                         *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),lVar2,0);
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      lVar2 = FUN_071bd0d0();
      if (lVar2 != 0) {
        fVar8 = (float)FUN_071d0360(lVar2,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar9 = fVar7;
          fVar10 = param_3;
          fVar6 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_07ed78be == '\0') {
            FUN_03642964(PTR_DAT_079f4df0);
            DAT_07ed78be = '\x01';
          }
          if (*(int *)(*plVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar2 = FUN_071bd0d0(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
            fVar8 = SQRT((param_3 - fVar10) * (param_3 - fVar10) +
                         (fVar8 - fVar6) * (fVar8 - fVar6) + (fVar7 - fVar9) * (fVar7 - fVar9));
            FUN_071d0c1c(fVar8 * *(float *)(unaff_x19 + 100),fVar8 * *(float *)(unaff_x19 + 0x68),
                         fVar8 * *(float *)(unaff_x19 + 0x6c),lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


