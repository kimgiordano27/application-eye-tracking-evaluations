/*
FUNCTION_NAME: FUN_00e8b5a4
ENTRY_POINT: 00e8b5a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00e8b5a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_DeferredShaderData_GetOrUpdateNativeArray<PreTile>__;
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>_Init__;
  puVar2 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_28>_SliceWithStride<Vector4>__
  ;
  puVar1 = OVRPlugin_OVRP_1_6_0_TypeInfo;
                    /* catch() { ... } // from try @ 00e8b0fc with catch @ 00e8b5b8 */
                    /* catch() { ... } // from try @ 00e8b02c with catch @ 00e8b5bc
                       catch() { ... } // from try @ 00e8b0b0 with catch @ 00e8b5bc */
                    /* catch() { ... } // from try @ 00e8b2ec with catch @ 00e8b5c0 */
                    /* catch() { ... } // from try @ 00e8b1bc with catch @ 00e8b5c4
                       catch() { ... } // from try @ 00e8b2d4 with catch @ 00e8b5c4 */
                    /* catch() { ... } // from try @ 00e8b388 with catch @ 00e8b5c8 */
                    /* catch() { ... } // from try @ 00e8b364 with catch @ 00e8b5e0 */
  if ((DAT_03774fd2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e8b1f8 with catch @ 00e8b5e4 */
                    /* catch() { ... } // from try @ 00e8b080 with catch @ 00e8b5e8 */
                    /* catch() { ... } // from try @ 00e8b058 with catch @ 00e8b5ec */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_28>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_6_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DeferredShaderData_GetOrUpdateNativeArray<PreTile>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>_Init__);
    DAT_03774fd2 = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)puVar2;
  FUN_00e77240(param_1);
  return;
}


