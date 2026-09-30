/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.Hands.ObjectResetPlane$$.ctor
ENTRY_POINT: 06992a14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8 UnityEngine_XR_Interaction_Toolkit_Samples_Hands_ObjectResetPlane___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int in_w8;
  long lVar4;
  undefined8 *unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
    param_1 = *unaff_x24;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x10) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_1 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    FUN_055ca0a0(uVar1,uVar6,
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__,0
                );
    puVar2 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_0333a630(puVar2,uVar1);
  }
  uVar1 = FUN_039a7bf0();
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar4);
    lVar4 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    FUN_055ca58c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
                 ,0);
    plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar3 = lVar5;
    thunk_FUN_0333a630(plVar3,lVar5);
  }
  uVar1 = FUN_03996c3c(uVar1,lVar5,
                       *(undefined8 *)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  uVar1 = FUN_039a6ef0(uVar1,*(undefined8 *)PTR_DAT_072891b8);
  *unaff_x19 = uVar1;
  thunk_FUN_0333a630();
  return 1;
}


