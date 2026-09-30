/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 060d61b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 162
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar4 = unaff_s9 - unaff_s12;
  fVar6 = unaff_s10 - unaff_s13;
  lVar1 = *(long *)(param_1 + 0xb8);
  thunk_FUN_071d1b70(unaff_s8 - unaff_s11,fVar4,fVar6,*(undefined4 *)(lVar1 + 0x18),
                     *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20));
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    return;
  }
  lVar1 = FUN_071bd0d0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_071d0360(lVar1,0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      fVar5 = fVar4;
      fVar7 = fVar6;
      fVar3 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x50),0);
      if (DAT_07ed78be == '\0') {
        FUN_03642964(PTR_DAT_079f4df0);
        DAT_07ed78be = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar1 = FUN_071bd0d0(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
        fVar4 = SQRT((fVar6 - fVar7) * (fVar6 - fVar7) +
                     (fVar2 - fVar3) * (fVar2 - fVar3) + (fVar4 - fVar5) * (fVar4 - fVar5));
        FUN_071d0c1c(fVar4 * *(float *)(unaff_x19 + 100),fVar4 * *(float *)(unaff_x19 + 0x68),
                     fVar4 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


