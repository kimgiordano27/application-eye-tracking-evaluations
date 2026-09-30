/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager$$FocusExit
ENTRY_POINT: 0675ba54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__FocusExit(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *unaff_x19;
  
  uVar2 = FUN_0699fa58(param_1);
  puVar1 = UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xb8) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = 
  UnityEngine_UIElements_BaseCompositeField_FieldDescription<RectInt,_IntegerField,_int>___TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xbc) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = 
  UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2,_FloatField,_float>___TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xc0) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = UnityEngine_Rendering_ScriptableRenderContext_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xc4) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = UnityEngine_Rendering_Universal_ScreenSpaceLensFlareResolutionParameter_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 200) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = Unity_Services_Analytics_SdkVersion_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xcc) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Sec_SecNamedCurves_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xd0) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = 
  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP160R2FieldElement_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xd4) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP128R1Point_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xd8) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = OVRManager_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xdc) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP160K1Point_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xe0) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  puVar1 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP192R1Field_TypeInfo;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xe4) = uVar2;
  uVar2 = FUN_0699fa58(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xe8) = uVar2;
  return;
}


