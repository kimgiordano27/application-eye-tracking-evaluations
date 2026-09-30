/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 052ed568
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 123
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x918);
  uVar2 = *puVar3;
  lVar1 = thunk_FUN_02f45174(param_1,uVar2);
  if (lVar1 != 0) {
    uVar2 = *puVar3;
    *(long *)(unaff_x19 + 0xa8) = lVar1;
    lVar1 = thunk_FUN_02f45174(param_1,uVar2);
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48(param_1,uVar2);
}


