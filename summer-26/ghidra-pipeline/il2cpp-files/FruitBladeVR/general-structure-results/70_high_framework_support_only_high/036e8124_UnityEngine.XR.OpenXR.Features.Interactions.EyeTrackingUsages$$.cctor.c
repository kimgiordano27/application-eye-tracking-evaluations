/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages$$.cctor
ENTRY_POINT: 036e8124
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 local_38;
  
  puVar5 = PTR_StringLiteral_8445_03ce7a78;
  puVar4 = PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo_03ce7a70;
  puVar3 = PTR_StringLiteral_8444_03ce7a68;
  puVar2 = PTR_Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor___03cb8a80;
  puVar1 = PTR_Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor___03cb8a78;
  if ((DAT_03ef7520 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo_03ce7a70
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor___03cb8a80);
    FUN_01c5c92c(PTR_Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor___03cb8a78);
    FUN_01c5c92c(PTR_StringLiteral_8445_03ce7a78);
    FUN_01c5c92c(PTR_StringLiteral_8444_03ce7a68);
    DAT_03ef7520 = 1;
  }
  local_38 = 0;
  UnityEngine_XR_InputFeatureUsage<Vector3>___ctor
            (&local_38,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = local_38;
  thunk_FUN_01cc8040(*(undefined8 *)(*(long *)puVar4 + 0xb8),0);
  local_48 = 0;
  UnityEngine_XR_InputFeatureUsage<Quaternion>___ctor
            (&local_48,*(undefined8 *)puVar5,*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar4;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = local_48;
  thunk_FUN_01cc8040(*(long *)(lVar6 + 0xb8) + 8,0);
  return;
}


