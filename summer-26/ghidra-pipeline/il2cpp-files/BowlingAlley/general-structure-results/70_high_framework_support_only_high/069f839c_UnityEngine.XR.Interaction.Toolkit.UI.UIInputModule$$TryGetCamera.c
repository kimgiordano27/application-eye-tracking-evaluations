/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule$$TryGetCamera
ENTRY_POINT: 069f839c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__TryGetCamera(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 800));
  thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
  thunk_FUN_032e1da0(Method_System_Nullable<StreamingContext>_get_HasValue__);
  thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
  thunk_FUN_032e1da0(Method_System_Nullable<Vector4>_get_HasValue__);
  thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
  thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
  thunk_FUN_032e1da0(Method_System_Nullable<InputAction_CallbackContext>_get_Value__);
  thunk_FUN_032e1da0(Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
  thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
  *(undefined1 *)(unaff_x21 + 0x4e4) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  FUN_03b98080();
  lVar1 = UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessTrackedDevice();
  if (lVar1 == 0) {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2a00(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__,0);
  }
  lVar1 = UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessTrackedDevice();
  return lVar1 != 0;
}


