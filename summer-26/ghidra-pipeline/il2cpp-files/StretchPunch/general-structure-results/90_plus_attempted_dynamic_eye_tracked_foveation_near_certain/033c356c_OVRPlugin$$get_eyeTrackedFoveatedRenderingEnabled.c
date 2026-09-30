/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 033c356c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 148
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


int OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *unaff_x19;
  int iVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    *(undefined1 *)(unaff_x20 + 0x99d) = 1;
  }
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  iVar3 = 0;
  do {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033c35a4 to 034c35cf has its CatchHandler @ 033c39e8 */
    unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x828))
                                  (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x830));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)puVar1);
    }
    iVar3 = iVar3 + 1;
    uVar2 = FUN_033ab18c(unaff_x19,0,0);
  } while ((uVar2 & 1) != 0);
  return iVar3;
}


