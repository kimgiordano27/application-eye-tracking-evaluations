/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 0906c888
PROGRAM: Hyper-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *in_x9;
  long unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))
              (*param_1,*in_x9,*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c));
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_0a178414(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 0906c8f0 to 0916c8ff has its CatchHandler @ 0906ca68 */
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar1 = FUN_0a18bd78(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
                    /* try { // try from 0906c900 to 0916ca7f has its CatchHandler @ 0906c75c */
        FUN_0a17ba14(lVar2,0 < iVar1,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar2 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
          FUN_0a17ba14(lVar2,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


