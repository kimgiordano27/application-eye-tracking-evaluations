/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetRenderModelOriginalPath$$.ctor
ENTRY_POINT: 019d6c88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVR_OpenVR_IVRRenderModels__GetRenderModelOriginalPath___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x24;
  
  FUN_00bfba38();
  lVar2 = *unaff_x24;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x24;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x24;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar2,uVar3,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<float>__,0
                );
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = lVar2;
  }
                    /* try { // try from 019d6d18 to 01ad6d3f has its CatchHandler @ 019d6ed0 */
  System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan();
  return;
}


