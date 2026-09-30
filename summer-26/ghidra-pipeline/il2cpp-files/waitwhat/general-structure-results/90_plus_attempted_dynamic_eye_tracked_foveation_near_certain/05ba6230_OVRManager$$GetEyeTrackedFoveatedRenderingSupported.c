/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05ba6230
PROGRAM: waitwhat-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  cVar1 = *(char *)(unaff_x20 + 0x7aa);
  *(undefined1 *)(unaff_x19 + 0x7c) = 1;
  if (cVar1 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x20 + 0x7aa) = 1;
  }
  puVar2 = PTR_DAT_070c1a80;
  lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar6 = *(float *)(lVar3 + 0x1c);
  fVar7 = *(float *)(lVar3 + 0x20);
  FUN_06a63570(*(undefined4 *)(lVar3 + 0x18),fVar6,fVar7,unaff_x19 + 0x50,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar3 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
    fVar4 = (float)FUN_069e6fbc(lVar3,0);
    if (DAT_07547004 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_07547004 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar9 = *(float *)(lVar3 + 0x28);
      fVar8 = *(float *)(lVar3 + 0x2c);
      fVar10 = *(float *)(lVar3 + 0x24);
      fVar5 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
      fVar5 = fVar5 * 0.5 + *(float *)(unaff_x19 + 0x28);
      FUN_06a63558(fVar4 + fVar10 * fVar5,fVar6 + fVar9 * fVar5,fVar7 + fVar8 * fVar5,
                   unaff_x19 + 0x50,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


