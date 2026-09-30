/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 04f2ced4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(long *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x188))
                      (param_1,unaff_w21,*(undefined4 *)(unaff_x19 + 0x14),
                       *(undefined8 *)(*param_1 + 400));
    *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
    thunk_FUN_02bb0e9c();
    *(long *)(unaff_x20 + 0x78) = unaff_x19;
    *(undefined4 *)(unaff_x20 + 0x70) = unaff_w21;
    thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x78));
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


