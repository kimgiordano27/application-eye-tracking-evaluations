/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01a00e08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x9d0));
  *(undefined1 *)(unaff_x20 + 0x8c1) = 1;
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x18);
  lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_ArrayList_ReadOnlyArrayList_Clear__);
  if ((lVar1 != 0) && (FUN_011c181c(), lVar2 != 0)) {
    FUN_019f0910(lVar2,lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


