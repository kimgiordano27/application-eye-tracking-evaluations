/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01f80b80
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_13;validity_or_gating_hits_7;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x21;
  
  lVar3 = (**(code **)(param_1 + 0x1a8))();
  iVar2 = (**(code **)(*unaff_x21 + 0x198))();
  if (iVar2 == 0x80) {
    if (lVar3 == 0) goto OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled;
    iVar2 = FUN_01e6c788(lVar3,0x2b,0);
    lVar3 = FUN_01e6b644(lVar3,iVar2 + 1,0);
  }
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x10)) {
      sVar1 = FUN_01e60d24();
      if (sVar1 == 0x2a) {
        uVar4 = FUN_01e69ff4();
        if (lVar3 != 0) {
          FUN_01e68768(lVar3,uVar4,4,0);
          return;
        }
        goto OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled;
      }
    }
    if (lVar3 != 0) {
      FUN_01e68100(lVar3);
      return;
    }
  }
OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


