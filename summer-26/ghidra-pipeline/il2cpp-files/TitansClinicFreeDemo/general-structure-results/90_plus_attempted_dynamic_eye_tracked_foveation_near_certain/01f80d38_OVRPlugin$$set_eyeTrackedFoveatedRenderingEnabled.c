/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01f80d38
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar3 = FUN_01e6b644();
  if (unaff_x20 == 0) {
LAB_01f80ddc:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    sVar1 = FUN_01e60d24();
    if (sVar1 == 0x2a) {
      lVar4 = FUN_01e69ff4();
      if (lVar4 == 0) goto LAB_01f80ddc;
      iVar2 = FUN_01e6758c(uVar3,0,lVar4,0,*(undefined4 *)(lVar4 + 0x10),5,0);
      goto LAB_01f80dc8;
    }
  }
  iVar2 = FUN_01e672c0();
LAB_01f80dc8:
  return iVar2 == 0;
}


