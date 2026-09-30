/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 05305dd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_060ed000(*(long *)(unaff_x19 + 0x30),1,0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x40) = unaff_s9;
      *(undefined4 *)(lVar2 + 0x44) = unaff_s10;
      *(undefined4 *)(lVar2 + 0x48) = unaff_s11;
      lVar1 = *(long *)(unaff_x19 + 0x30);
      *(undefined1 *)(lVar2 + 0x4c) = 1;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


