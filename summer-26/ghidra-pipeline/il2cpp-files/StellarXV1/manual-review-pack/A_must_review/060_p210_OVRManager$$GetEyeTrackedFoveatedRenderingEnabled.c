/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a223d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_089c7534(param_3,0);
  if (DAT_098854eb == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854eb = '\x01';
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
  FUN_089b9364(param_1,*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
               *(undefined4 *)(lVar2 + 0x20),0);
  if (lVar1 != 0) {
    FUN_089dbfa0(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


