/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetRenderModelThumbnailURL$$EndInvoke
ENTRY_POINT: 019d6c5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRRenderModels__GetRenderModelThumbnailURL__EndInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x24;
  
  FUN_010dcdb8();
  FUN_01322050();
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
  System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan();
  return;
}


