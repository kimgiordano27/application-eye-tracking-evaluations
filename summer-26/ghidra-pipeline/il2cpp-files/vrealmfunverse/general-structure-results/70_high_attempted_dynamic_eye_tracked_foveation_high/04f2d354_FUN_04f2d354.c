/*
FUNCTION_NAME: FUN_04f2d354
ENTRY_POINT: 04f2d354
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_04f2d354(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_066c993c & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Hand,_Climbable>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Hand,_HandPoseGestureData>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Hand,_Transform>_TypeInfo);
    DAT_066c993c = 1;
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* try { // try from 04f2d3b0 to 0502d3d7 has its CatchHandler @ 04f2d96c */
    bVar1 = FUN_04f1d378(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x70),
                         *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x10),
                         *(undefined8 *)(lVar2 + 0x18),0);
    if (*(byte *)(param_1 + 0x60) == (bVar1 & 1)) {
      return;
    }
    Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


