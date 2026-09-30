/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0574bc58
PROGRAM: Untangled-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined1 auVar4 [16];
  
  plVar1 = *(long **)(unaff_x20 + 0x38);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    uVar2 = 0;
  }
  else {
    if (*plVar1 != *(long *)(*(long *)PTR_DAT_06d59088 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar1,*(long *)(*(long *)PTR_DAT_06d59088 + 0x40));
    }
    auVar4 = thunk_FUN_02ef1964();
    param_2 = auVar4._8_8_;
    uVar2 = auVar4._0_8_;
    uVar3 = *(undefined8 *)(unaff_x22 + 8);
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x8b8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0(uVar2,param_2,uVar3);
}


