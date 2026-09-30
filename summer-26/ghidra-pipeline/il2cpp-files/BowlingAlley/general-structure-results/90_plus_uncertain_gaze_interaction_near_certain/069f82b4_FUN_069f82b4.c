/*
FUNCTION_NAME: FUN_069f82b4
ENTRY_POINT: 069f82b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_16;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_16
*/


bool FUN_069f82b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar1 = Method_System_Nullable<StringComparison>_get_HasValue__;
  if ((DAT_076e24e4 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Nullable<StringComparison>_get_HasValue__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_System_Nullable<MaterialBase_AlphaMode>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<MaterialBase_AlphaMode>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<MaterialGenerator_MaterialType>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<MaterialGenerator_MaterialType>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<MaterialGenerator_MaterialType>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRInput_Controller>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<CAPI_ovrAvatar2EyePoseProviderNative>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<StreamingContext>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<Vector4>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<InputAction_CallbackContext>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    DAT_076e24e4 = 1;
  }
  puVar10 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
  puVar9 = Method_System_Nullable<OVRPlugin_Result>_get_HasValue__;
  puVar8 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar7 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  puVar6 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
  puVar5 = Method_System_Nullable<OVRInput_Controller>_get_HasValue__;
  puVar4 = Method_System_Nullable<MaterialBase_AlphaMode>_get_Value__;
  puVar3 = Method_System_Nullable<MaterialBase_AlphaMode>_get_HasValue__;
  puVar2 = Method_System_Nullable<TimeSpan>_GetValueOrDefault__;
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar1;
  }
  FUN_03b98080(param_1,**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)puVar8,*(undefined8 *)puVar7)
  ;
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),*(undefined8 *)puVar2,
               *(undefined8 *)puVar4);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
               *(undefined8 *)puVar9,*(undefined8 *)puVar6);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),
               *(undefined8 *)puVar10,*(undefined8 *)puVar5);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),
               *(undefined8 *)Method_System_Nullable<StreamingContext>_get_HasValue__,
               *(undefined8 *)puVar3);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
               *(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__,
               *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),
               *(undefined8 *)Method_System_Nullable<InputAction_CallbackContext>_get_Value__,
               *(undefined8 *)Method_System_Nullable<MaterialGenerator_MaterialType>_get_HasValue__)
  ;
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),
               *(undefined8 *)Method_System_Nullable<OVRPlugin_Result>_get_Value__,
               *(undefined8 *)Method_System_Nullable<OVRInput_Controller>__ctor__);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40),
               *(undefined8 *)
                Method_System_Nullable<CAPI_ovrAvatar2EyePoseProviderNative>_get_Value__,
               *(undefined8 *)
                Method_System_Nullable<MaterialGenerator_MaterialType>_GetValueOrDefault__);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),
               *(undefined8 *)Method_System_Nullable<Vector4>_get_HasValue__,
               *(undefined8 *)Method_System_Nullable<MaterialGenerator_MaterialType>__ctor__);
  FUN_03b98080(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),
               *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_Value__,
               *(undefined8 *)Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__);
  lVar11 = UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessTrackedDevice(param_1);
  if (lVar11 == 0) {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2a00(*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__,0);
  }
  lVar11 = UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessTrackedDevice(param_1);
  return lVar11 != 0;
}


