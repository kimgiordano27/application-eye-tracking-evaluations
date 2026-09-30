/*
FUNCTION_NAME: FUN_05ef6a00
ENTRY_POINT: 05ef6a00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21;functionality_possible_biometrics_hits_2
*/


void FUN_05ef6a00(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__;
                    /* try { // try from 05ef6a0c to 05ff6a1b has its CatchHandler @ 05ef6cf8 */
                    /* try { // try from 05ef6a20 to 05ff6a27 has its CatchHandler @ 05ef6cfc */
  if ((DAT_06dc400e & 1) == 0) {
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_Dispose__
                );
                    /* try { // try from 05ef6a44 to 05ff6a47 has its CatchHandler @ 05ef6cd0 */
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_GetEnumerator__
                );
                    /* try { // try from 05ef6a48 to 05ff6a4f has its CatchHandler @ 05ef6ce0 */
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_ToArray__
                );
                    /* try { // try from 05ef6a58 to 05ff6a6f has its CatchHandler @ 05ef6cf0 */
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_op_Implicit__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_Dispose__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_ToArray__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_get_Length__
                );
    FUN_02d965b8(
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_op_Implicit__
                );
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
                    /* try { // try from 05ef6abc to 05ff6abf has its CatchHandler @ 05ef6cd4 */
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>__ctor__
                );
                    /* try { // try from 05ef6ac0 to 05ff6ac7 has its CatchHandler @ 05ef6ce8 */
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>_GetEnumerator__
                );
                    /* try { // try from 05ef6acc to 05ff6ad3 has its CatchHandler @ 05ef6cec */
    FUN_02d965b8(
                Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>__ctor__
                );
                    /* try { // try from 05ef6ae8 to 05ff6aeb has its CatchHandler @ 05ef6ccc */
                    /* try { // try from 05ef6aec to 05ff6afb has its CatchHandler @ 05ef6cdc */
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<RadioButton>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__);
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<VisualElement>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<CreationContext_AttributeOverrideRange>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<CreationContext_SerializedDataOverrideRange>>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6b20 to 05ff6b23 has its CatchHandler @ 05ef6ca8 */
                    /* try { // try from 05ef6b24 to 05ff6b2f has its CatchHandler @ 05ef6cc0 */
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<FocusController_FocusedElement>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<HID_HIDElementDescriptor>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_Pool_PooledObject<List<MultiColumnCollectionHeader_SortedColumnState>>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<List<XRTargetEvaluator>>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6b54 to 05ff6b57 has its CatchHandler @ 05ef6ca0 */
                    /* try { // try from 05ef6b58 to 05ff6b63 has its CatchHandler @ 05ef6cb8 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<ActivateEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DeactivateEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DropEventArgs>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6b78 to 05ff6b83 has its CatchHandler @ 05ef6cb4 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<FocusEnterEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<FocusExitEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverEnterEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverExitEventArgs>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6ba4 to 05ff6bb3 has its CatchHandler @ 05ef6cb0 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupRegisteredEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupUnregisteredEventArgs>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6bdc to 05ff6bdf has its CatchHandler @ 05ef6ca4 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractorRegisteredEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractorUnregisteredEventArgs>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6bf0 to 05ff6bfb has its CatchHandler @ 05ef6cbc */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<SelectEnterEventArgs>_System_IDisposable_Dispose__
                );
                    /* try { // try from 05ef6bfc to 05ff6c8f has its CatchHandler @ 05ef68c4 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<SelectExitEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<TeleportingEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_PopupField<string>__ctor__);
    FUN_02d965b8(Method_UnityEngine_UIElements_PopupField<string>_set_index__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<bool>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<byte>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<char>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<DateTime>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<Decimal>__ctor__);
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<double>__ctor__);
                    /* try { // try from 05ef6c90 to 05ff6c93 has its CatchHandler @ 05ef6ce4 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<Exception>__ctor__);
                    /* try { // try from 05ef6c94 to 05ff6c9b has its CatchHandler @ 05ef68c4 */
                    /* try { // try from 05ef6c9c to 05ff6c9f has its CatchHandler @ 05ef6cc4 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<short>__ctor__);
                    /* catch() { ... } // from try @ 05ef6b54 with catch @ 05ef6ca0
                       try { // try from 05ef6ca0 to 05ff6d17 has its CatchHandler @ 05ef68c4 */
                    /* catch() { ... } // from try @ 05ef6bdc with catch @ 05ef6ca4 */
                    /* catch() { ... } // from try @ 05ef6b20 with catch @ 05ef6ca8 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<int>__ctor__);
                    /* catch() { ... } // from try @ 05ef69b4 with catch @ 05ef6cac */
                    /* catch() { ... } // from try @ 05ef6ba4 with catch @ 05ef6cb0 */
                    /* catch() { ... } // from try @ 05ef6b78 with catch @ 05ef6cb4 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__);
                    /* catch() { ... } // from try @ 05ef6b58 with catch @ 05ef6cb8 */
                    /* catch() { ... } // from try @ 05ef6bf0 with catch @ 05ef6cbc */
                    /* catch() { ... } // from try @ 05ef6b24 with catch @ 05ef6cc0 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__);
                    /* catch() { ... } // from try @ 05ef6c9c with catch @ 05ef6cc4 */
                    /* catch() { ... } // from try @ 05ef69b8 with catch @ 05ef6cc8 */
                    /* catch() { ... } // from try @ 05ef6ae8 with catch @ 05ef6ccc */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__);
                    /* catch() { ... } // from try @ 05ef6a44 with catch @ 05ef6cd0 */
                    /* catch() { ... } // from try @ 05ef6abc with catch @ 05ef6cd4 */
                    /* catch() { ... } // from try @ 05ef69f4 with catch @ 05ef6cd8 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__);
                    /* catch() { ... } // from try @ 05ef6aec with catch @ 05ef6cdc */
                    /* catch() { ... } // from try @ 05ef6a48 with catch @ 05ef6ce0 */
                    /* catch() { ... } // from try @ 05ef6c90 with catch @ 05ef6ce4 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<ushort>__ctor__);
                    /* catch() { ... } // from try @ 05ef6ac0 with catch @ 05ef6ce8 */
                    /* catch() { ... } // from try @ 05ef6acc with catch @ 05ef6cec */
                    /* catch() { ... } // from try @ 05ef6a58 with catch @ 05ef6cf0 */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<uint>__ctor__);
                    /* catch() { ... } // from try @ 05ef69f8 with catch @ 05ef6cf4 */
                    /* catch() { ... } // from try @ 05ef6a0c with catch @ 05ef6cf8 */
                    /* catch() { ... } // from try @ 05ef6a20 with catch @ 05ef6cfc */
    FUN_02d965b8(Method_System_Linq_Expressions_PrimitiveParameterExpression<ulong>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_PropertyBag<InlineStyleAccess>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_PropertyBag<ResolvedStyleAccess>__ctor__);
                    /* try { // try from 05ef6d18 to 05ff6d1b has its CatchHandler @ 05ef6d24 */
    FUN_02d965b8(Method_Unity_Properties_PropertyCollection<InlineStyleAccess>__ctor__);
                    /* catch() { ... } // from try @ 05ef6d18 with catch @ 05ef6d24 */
                    /* try { // try from 05ef6d28 to 05ff6d2f has its CatchHandler @ 05ef6d38 */
    FUN_02d965b8(Method_Unity_Properties_PropertyCollection<ResolvedStyleAccess>__ctor__);
                    /* try { // try from 05ef6d30 to 05ff6d3b has its CatchHandler @ 05ef68c4 */
                    /* catch() { ... } // from try @ 05ef6d28 with catch @ 05ef6d38 */
    FUN_02d965b8(Method_Unity_Properties_Property<Angle,_AngleUnit>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_Property<Angle,_float>__ctor__);
    FUN_02d965b8(Method_Unity_Properties_Property<Background,_RenderTexture>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>_CopyFrom__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<bool>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt16Wrapper>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt8Wrapper>__
                );
    FUN_02d965b8(Method_Unity_Properties_Property<Background,_Sprite>__ctor__);
    DAT_06dc400e = 1;
  }
  puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  lVar9 = *(long *)puVar2;
  uStack_90 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  uStack_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2d0 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar9 = *(long *)puVar2;
  }
  puVar8 = Method_Unity_Properties_Property<Background,_Sprite>__ctor__;
  puVar6 = Method_System_Linq_Expressions_PrimitiveParameterExpression<int>__ctor__;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<FocusEnterEventArgs>_System_IDisposable_Dispose__
  ;
  puVar5 = Method_UnityEngine_Pool_PooledObject<List<RadioButton>>_System_IDisposable_Dispose__;
  uVar12 = *(undefined8 *)puVar4;
  lVar9 = **(long **)(lVar9 + 0xb8);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  local_98 = FUN_054f73b4(uVar12,0);
  LeanTween__value(&local_98,local_98);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05e94130(uVar12,0,*(undefined8 *)puVar6,0);
  uStack_90 = uVar12;
  LeanTween__value(&uStack_90,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar3,0);
  local_88 = uVar12;
  LeanTween__value(&local_88,uVar12);
  puVar4 = 
  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>__ctor__;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar11 = *(long *)
              Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>__ctor__
    ;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar7 = Method_UnityEngine_UIElements_PopupField<string>_set_index__;
    puVar6 = Method_UnityEngine_Pool_PooledObject<List<VisualElement>>_System_IDisposable_Dispose__;
    puVar3 = 
    Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_Dispose__
    ;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + 0x30) = local_88;
        *(undefined8 *)(lVar10 + 0x28) = uStack_90;
        *(undefined8 *)(lVar10 + 0x20) = local_98;
        LeanTween__value(lVar10 + 0x20,0);
      }
      else {
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                  (lVar9,&local_80,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
      local_a0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_b0 = FUN_054f73b4(*(undefined8 *)puVar3,0);
      LeanTween__value(&local_b0,local_b0);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
      uStack_a8 = uVar12;
      LeanTween__value(&uStack_a8,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
      local_a0 = uVar12;
      LeanTween__value(&local_a0,uVar12);
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar7 = Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__;
        puVar6 = 
        Method_UnityEngine_Pool_PooledObject<List<CreationContext_AttributeOverrideRange>>_System_IDisposable_Dispose__
        ;
        puVar3 = 
        Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_GetEnumerator__
        ;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + 0x30) = local_a0;
            *(undefined8 *)(lVar10 + 0x28) = uStack_a8;
            *(undefined8 *)(lVar10 + 0x20) = local_b0;
            LeanTween__value(lVar10 + 0x20,0);
          }
          else {
            uStack_78 = uStack_a8;
            local_80 = local_b0;
            local_70 = local_a0;
            Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                      (lVar9,&local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
          local_b8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_c8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
          LeanTween__value(&local_c8,local_c8);
          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
          uStack_c0 = uVar12;
          LeanTween__value(&uStack_c0,uVar12);
          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
          FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
          local_b8 = uVar12;
          LeanTween__value(&local_b8,uVar12);
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar7 = Method_System_Linq_Expressions_PrimitiveParameterExpression<bool>__ctor__;
            puVar6 = 
            Method_UnityEngine_Pool_PooledObject<List<CreationContext_SerializedDataOverrideRange>>_System_IDisposable_Dispose__
            ;
            puVar3 = 
            Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_ToArray__
            ;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + 0x30) = local_b8;
                *(undefined8 *)(lVar10 + 0x28) = uStack_c0;
                *(undefined8 *)(lVar10 + 0x20) = local_c8;
                LeanTween__value(lVar10 + 0x20,0);
              }
              else {
                uStack_78 = uStack_c0;
                local_80 = local_c8;
                local_70 = local_b8;
                Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                          (lVar9,&local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
              local_d0 = 0;
              local_e0 = 0;
              uStack_d8 = 0;
              local_e0 = FUN_054f73b4(*(undefined8 *)puVar3,0);
              LeanTween__value(&local_e0,local_e0);
              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
              FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
              uStack_d8 = uVar12;
              LeanTween__value(&uStack_d8,uVar12);
              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
              FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
              local_d0 = uVar12;
              LeanTween__value(&local_d0,uVar12);
              if (lVar9 != 0) {
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar11 = *(long *)puVar4;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                puVar7 = Method_System_Linq_Expressions_PrimitiveParameterExpression<byte>__ctor__;
                puVar6 = 
                Method_UnityEngine_Pool_PooledObject<List<FocusController_FocusedElement>>_System_IDisposable_Dispose__
                ;
                puVar3 = 
                Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2EntityAssetType>_op_Implicit__
                ;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar10 + 0x30) = local_d0;
                    *(undefined8 *)(lVar10 + 0x28) = uStack_d8;
                    *(undefined8 *)(lVar10 + 0x20) = local_e0;
                    LeanTween__value(lVar10 + 0x20,0);
                  }
                  else {
                    uStack_78 = uStack_d8;
                    local_80 = local_e0;
                    local_70 = local_d0;
                    Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                              (lVar9,&local_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                  uStack_f0 = 0;
                  local_e8 = 0;
                  local_f8 = 0;
                  local_f8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                  LeanTween__value(&local_f8,local_f8);
                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                  uStack_f0 = uVar12;
                  LeanTween__value(&uStack_f0,uVar12);
                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                  local_e8 = uVar12;
                  LeanTween__value(&local_e8,uVar12);
                  if (lVar9 != 0) {
                    lVar10 = *(long *)(lVar9 + 0x10);
                    lVar11 = *(long *)puVar4;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    puVar7 = 
                    Method_System_Linq_Expressions_PrimitiveParameterExpression<char>__ctor__;
                    puVar6 = 
                    Method_UnityEngine_Pool_PooledObject<List<HID_HIDElementDescriptor>>_System_IDisposable_Dispose__
                    ;
                    puVar3 = 
                    Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_Dispose__
                    ;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar10 + 0x30) = local_e8;
                        *(undefined8 *)(lVar10 + 0x28) = uStack_f0;
                        *(undefined8 *)(lVar10 + 0x20) = local_f8;
                        LeanTween__value(lVar10 + 0x20,0);
                      }
                      else {
                        uStack_78 = uStack_f0;
                        local_80 = local_f8;
                        local_70 = local_e8;
                        Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                  (lVar9,&local_80,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                      uStack_108 = 0;
                      local_100 = 0;
                      local_110 = 0;
                      local_110 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                      LeanTween__value(&local_110,local_110);
                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                      FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                      uStack_108 = uVar12;
                      LeanTween__value(&uStack_108,uVar12);
                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                      FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                      local_100 = uVar12;
                      LeanTween__value(&local_100,uVar12);
                      if (lVar9 != 0) {
                        lVar10 = *(long *)(lVar9 + 0x10);
                        lVar11 = *(long *)puVar4;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        puVar7 = 
                        Method_System_Linq_Expressions_PrimitiveParameterExpression<Decimal>__ctor__
                        ;
                        puVar6 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<List<XRTargetEvaluator>>_System_IDisposable_Dispose__
                        ;
                        puVar3 = 
                        Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_get_Length__
                        ;
                        if (lVar10 != 0) {
                          uVar1 = *(uint *)(lVar9 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar10 + 0x30) = local_100;
                            *(undefined8 *)(lVar10 + 0x28) = uStack_108;
                            *(undefined8 *)(lVar10 + 0x20) = local_110;
                            LeanTween__value(lVar10 + 0x20,0);
                          }
                          else {
                            uStack_78 = uStack_108;
                            local_80 = local_110;
                            local_70 = local_100;
                            Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                      (lVar9,&local_80,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                          uStack_120 = 0;
                          local_118 = 0;
                          local_128 = 0;
                          local_128 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                          LeanTween__value(&local_128,local_128);
                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                          FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                          uStack_120 = uVar12;
                          LeanTween__value(&uStack_120,uVar12);
                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                          FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                          local_118 = uVar12;
                          LeanTween__value(&local_118,uVar12);
                          if (lVar9 != 0) {
                            lVar10 = *(long *)(lVar9 + 0x10);
                            lVar11 = *(long *)puVar4;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            puVar7 = 
                            Method_System_Linq_Expressions_PrimitiveParameterExpression<double>__ctor__
                            ;
                            puVar6 = 
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<ActivateEventArgs>_System_IDisposable_Dispose__
                            ;
                            puVar3 = 
                            Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_op_Implicit__
                            ;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar10 + 0x30) = local_118;
                                *(undefined8 *)(lVar10 + 0x28) = uStack_120;
                                *(undefined8 *)(lVar10 + 0x20) = local_128;
                                LeanTween__value(lVar10 + 0x20,0);
                              }
                              else {
                                uStack_78 = uStack_120;
                                local_80 = local_128;
                                local_70 = local_118;
                                Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                          (lVar9,&local_80,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                              uStack_138 = 0;
                              local_130 = 0;
                              local_140 = 0;
                              local_140 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                              LeanTween__value(&local_140,local_140);
                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                              FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                              uStack_138 = uVar12;
                              LeanTween__value(&uStack_138,uVar12);
                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                              FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                              local_130 = uVar12;
                              LeanTween__value(&local_130,uVar12);
                              if (lVar9 != 0) {
                                lVar10 = *(long *)(lVar9 + 0x10);
                                lVar11 = *(long *)puVar4;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                puVar7 = 
                                Method_System_Linq_Expressions_PrimitiveParameterExpression<Exception>__ctor__
                                ;
                                puVar6 = 
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DeactivateEventArgs>_System_IDisposable_Dispose__
                                ;
                                puVar3 = Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar10 + 0x30) = local_130;
                                    *(undefined8 *)(lVar10 + 0x28) = uStack_138;
                                    *(undefined8 *)(lVar10 + 0x20) = local_140;
                                    LeanTween__value(lVar10 + 0x20,0);
                                  }
                                  else {
                                    uStack_78 = uStack_138;
                                    local_80 = local_140;
                                    local_70 = local_130;
                                    Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                              (lVar9,&local_80,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                    ;
                                  }
                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                  uStack_150 = 0;
                                  local_148 = 0;
                                  local_158 = 0;
                                  local_158 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                  LeanTween__value(&local_158,local_158);
                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                  uStack_150 = uVar12;
                                  LeanTween__value(&uStack_150,uVar12);
                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                  local_148 = uVar12;
                                  LeanTween__value(&local_148,uVar12);
                                  if (lVar9 != 0) {
                                    lVar10 = *(long *)(lVar9 + 0x10);
                                    lVar11 = *(long *)puVar4;
                                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                    puVar7 = 
                                    Method_System_Linq_Expressions_PrimitiveParameterExpression<short>__ctor__
                                    ;
                                    puVar6 = 
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DropEventArgs>_System_IDisposable_Dispose__
                                    ;
                                    puVar3 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
                                    if (lVar10 != 0) {
                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar10 + 0x30) = local_148;
                                        *(undefined8 *)(lVar10 + 0x28) = uStack_150;
                                        *(undefined8 *)(lVar10 + 0x20) = local_158;
                                        LeanTween__value(lVar10 + 0x20,0);
                                      }
                                      else {
                                        uStack_78 = uStack_150;
                                        local_80 = local_158;
                                        local_70 = local_148;
                                        Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                  (lVar9,&local_80,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                      uStack_168 = 0;
                                      local_160 = 0;
                                      local_170 = 0;
                                      local_170 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                      LeanTween__value(&local_170,local_170);
                                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                      FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                      uStack_168 = uVar12;
                                      LeanTween__value(&uStack_168,uVar12);
                                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                      FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                      local_160 = uVar12;
                                      LeanTween__value(&local_160,uVar12);
                                      if (lVar9 != 0) {
                                        lVar10 = *(long *)(lVar9 + 0x10);
                                        lVar11 = *(long *)puVar4;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        puVar7 = 
                                        Method_System_Linq_Expressions_PrimitiveParameterExpression<float>__ctor__
                                        ;
                                        puVar6 = 
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverExitEventArgs>_System_IDisposable_Dispose__
                                        ;
                                        puVar3 = 
                                        Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__;
                                        if (lVar10 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                            lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar10 + 0x30) = local_160;
                                            *(undefined8 *)(lVar10 + 0x28) = uStack_168;
                                            *(undefined8 *)(lVar10 + 0x20) = local_170;
                                            LeanTween__value(lVar10 + 0x20,0);
                                          }
                                          else {
                                            uStack_78 = uStack_168;
                                            local_80 = local_170;
                                            local_70 = local_160;
                                            Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                      (lVar9,&local_80,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                          }
                                          lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                          uStack_180 = 0;
                                          local_178 = 0;
                                          local_188 = 0;
                                          local_188 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                          LeanTween__value(&local_188,local_188);
                                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                          FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                          uStack_180 = uVar12;
                                          LeanTween__value(&uStack_180,uVar12);
                                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                          FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                          local_178 = uVar12;
                                          LeanTween__value(&local_178,uVar12);
                                          if (lVar9 != 0) {
                                            lVar10 = *(long *)(lVar9 + 0x10);
                                            lVar11 = *(long *)puVar4;
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            puVar7 = 
                                            Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__
                                            ;
                                            puVar6 = 
                                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
                                            ;
                                            puVar3 = 
                                            Method_Unity_Collections_NativeArray<bool>__ctor__;
                                            if (lVar10 != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar10 + 0x30) = local_178;
                                                *(undefined8 *)(lVar10 + 0x28) = uStack_180;
                                                *(undefined8 *)(lVar10 + 0x20) = local_188;
                                                LeanTween__value(lVar10 + 0x20,0);
                                              }
                                              else {
                                                uStack_78 = uStack_180;
                                                local_80 = local_188;
                                                local_70 = local_178;
                                                Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                          (lVar9,&local_80,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                              }
                                              lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                              uStack_198 = 0;
                                              local_190 = 0;
                                              local_1a0 = 0;
                                              local_1a0 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                              LeanTween__value(&local_1a0,local_1a0);
                                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                              FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                              uStack_198 = uVar12;
                                              LeanTween__value(&uStack_198,uVar12);
                                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                              FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                              local_190 = uVar12;
                                              LeanTween__value(&local_190,uVar12);
                                              if (lVar9 != 0) {
                                                lVar10 = *(long *)(lVar9 + 0x10);
                                                lVar11 = *(long *)puVar4;
                                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                                puVar7 = 
                                                Method_System_Linq_Expressions_PrimitiveParameterExpression<ushort>__ctor__
                                                ;
                                                puVar6 = 
                                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
                                                ;
                                                puVar3 = 
                                                Method_Unity_Collections_NativeArray<bool>_CopyFrom__
                                                ;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)(lVar10 + 0x30) = local_190;
                                                    *(undefined8 *)(lVar10 + 0x28) = uStack_198;
                                                    *(undefined8 *)(lVar10 + 0x20) = local_1a0;
                                                    LeanTween__value(lVar10 + 0x20,0);
                                                  }
                                                  else {
                                                    uStack_78 = uStack_198;
                                                    local_80 = local_1a0;
                                                    local_70 = local_190;
                                                                                                        
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_1b0 = 0;
                                                  local_1a8 = 0;
                                                  local_1b8 = 0;
                                                  local_1b8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_1b8,local_1b8);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_1b0 = uVar12;
                                                  LeanTween__value(&uStack_1b0,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_1a8 = uVar12;
                                                  LeanTween__value(&local_1a8,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_System_Linq_Expressions_PrimitiveParameterExpression<uint>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupRegisteredEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<bool>_Dispose__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_1a8;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_1b0;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_1b8;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_1b0;
                                                      local_80 = local_1b8;
                                                      local_70 = local_1a8;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_1c8 = 0;
                                                  local_1c0 = 0;
                                                  local_1d0 = 0;
                                                  local_1d0 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_1d0,local_1d0);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_1c8 = uVar12;
                                                  LeanTween__value(&uStack_1c8,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_1c0 = uVar12;
                                                  LeanTween__value(&local_1c0,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_System_Linq_Expressions_PrimitiveParameterExpression<ulong>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupUnregisteredEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_1c0;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_1c8;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_1d0;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_1c8;
                                                      local_80 = local_1d0;
                                                      local_70 = local_1c0;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_1e0 = 0;
                                                  local_1d8 = 0;
                                                  local_1e8 = 0;
                                                  local_1e8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_1e8,local_1e8);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_1e0 = uVar12;
                                                  LeanTween__value(&uStack_1e0,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_1d8 = uVar12;
                                                  LeanTween__value(&local_1d8,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_PropertyCollection<ResolvedStyleAccess>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<SelectExitEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_1d8;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_1e0;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_1e8;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_1e0;
                                                      local_80 = local_1e8;
                                                      local_70 = local_1d8;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_1f8 = 0;
                                                  local_1f0 = 0;
                                                  local_200 = 0;
                                                  local_200 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_200,local_200);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_1f8 = uVar12;
                                                  LeanTween__value(&uStack_1f8,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_1f0 = uVar12;
                                                  LeanTween__value(&local_1f0,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_System_Linq_Expressions_PrimitiveParameterExpression<DateTime>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Pool_PooledObject<List<MultiColumnCollectionHeader_SortedColumnState>>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Oculus_Avatar2_OvrAvatarHelperExtensions_NativeArrayDisposeWrapper<CAPI_ovrAvatar2NodeId>_ToArray__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_1f0;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_1f8;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_200;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_1f8;
                                                      local_80 = local_200;
                                                      local_70 = local_1f0;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_210 = 0;
                                                  local_208 = 0;
                                                  local_218 = 0;
                                                  local_218 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_218,local_218);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_210 = uVar12;
                                                  LeanTween__value(&uStack_210,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_208 = uVar12;
                                                  LeanTween__value(&local_208,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_PropertyBag<InlineStyleAccess>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractorRegisteredEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_208;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_210;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_218;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_210;
                                                      local_80 = local_218;
                                                      local_70 = local_208;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_228 = 0;
                                                  local_220 = 0;
                                                  local_230 = 0;
                                                  local_230 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_230,local_230);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_228 = uVar12;
                                                  LeanTween__value(&uStack_228,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_220 = uVar12;
                                                  LeanTween__value(&local_220,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_System_Linq_Expressions_PrimitiveParameterExpression<sbyte>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<HoverEnterEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>_GetEnumerator__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_220;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_228;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_230;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_228;
                                                      local_80 = local_230;
                                                      local_70 = local_220;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_240 = 0;
                                                  local_238 = 0;
                                                  local_248 = 0;
                                                  local_248 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_248,local_248);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_240 = uVar12;
                                                  LeanTween__value(&uStack_240,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_238 = uVar12;
                                                  LeanTween__value(&local_238,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_System_Linq_Expressions_PrimitiveParameterExpression<long>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<FocusExitEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<float>>__ctor__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_238;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_240;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_248;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_240;
                                                      local_80 = local_248;
                                                      local_70 = local_238;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_258 = 0;
                                                  local_250 = 0;
                                                  local_260 = 0;
                                                  local_260 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_260,local_260);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_258 = uVar12;
                                                  LeanTween__value(&uStack_258,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_250 = uVar12;
                                                  LeanTween__value(&local_250,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_PropertyBag<ResolvedStyleAccess>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractorUnregisteredEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_250;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_258;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_260;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_258;
                                                      local_80 = local_260;
                                                      local_70 = local_250;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_270 = 0;
                                                  local_268 = 0;
                                                  local_278 = 0;
                                                  local_278 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_278,local_278);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_270 = uVar12;
                                                  LeanTween__value(&uStack_270,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_268 = uVar12;
                                                  LeanTween__value(&local_268,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_PropertyCollection<InlineStyleAccess>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<SelectEnterEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_268;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_270;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_278;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_270;
                                                      local_80 = local_278;
                                                      local_70 = local_268;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_288 = 0;
                                                  local_280 = 0;
                                                  local_290 = 0;
                                                  local_290 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_290,local_290);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_288 = uVar12;
                                                  LeanTween__value(&uStack_288,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_280 = uVar12;
                                                  LeanTween__value(&local_280,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_Property<Angle,_AngleUnit>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<TeleportingEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt16Wrapper>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_280;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_288;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_290;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_288;
                                                      local_80 = local_290;
                                                      local_70 = local_280;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_2a0 = 0;
                                                  local_298 = 0;
                                                  local_2a8 = 0;
                                                  local_2a8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_2a8,local_2a8);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_2a0 = uVar12;
                                                  LeanTween__value(&uStack_2a0,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_298 = uVar12;
                                                  LeanTween__value(&local_298,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_Property<Angle,_float>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_298;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_2a0;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_2a8;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_2a0;
                                                      local_80 = local_2a8;
                                                      local_70 = local_298;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_2b8 = 0;
                                                  local_2b0 = 0;
                                                  local_2c0 = 0;
                                                  local_2c0 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_2c0,local_2c0);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_2b8 = uVar12;
                                                  LeanTween__value(&uStack_2b8,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_2b0 = uVar12;
                                                  LeanTween__value(&local_2b0,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar7 = 
                                                  Method_Unity_Properties_Property<Background,_RenderTexture>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_UIElements_PopupField<string>__ctor__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt8Wrapper>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)(lVar10 + 0x30) = local_2b0;
                                                      *(undefined8 *)(lVar10 + 0x28) = uStack_2b8;
                                                      *(undefined8 *)(lVar10 + 0x20) = local_2c0;
                                                      LeanTween__value(lVar10 + 0x20,0);
                                                    }
                                                    else {
                                                      uStack_78 = uStack_2b8;
                                                      local_80 = local_2c0;
                                                      local_70 = local_2b0;
                                                                                                            
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                                                  uStack_2d0 = 0;
                                                  local_2c8 = 0;
                                                  local_2d8 = 0;
                                                  local_2d8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  LeanTween__value(&local_2d8,local_2d8);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e94130(uVar12,0,*(undefined8 *)puVar7,0);
                                                  uStack_2d0 = uVar12;
                                                  LeanTween__value(&uStack_2d0,uVar12);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05e942c4(uVar12,0,*(undefined8 *)puVar6,0);
                                                  local_2c8 = uVar12;
                                                  LeanTween__value(&local_2c8,uVar12);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar11 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)(lVar10 + 0x30) = local_2c8;
                                                        *(undefined8 *)(lVar10 + 0x28) = uStack_2d0;
                                                        *(undefined8 *)(lVar10 + 0x20) = local_2d8;
                                                        LeanTween__value(lVar10 + 0x20,0);
                                                      }
                                                      else {
                                                        uStack_78 = uStack_2d0;
                                                        local_80 = local_2d8;
                                                        local_70 = local_2c8;
                                                                                                                
                                                  Unity_Collections_NativeArray<AttachmentDescriptor>___ctor
                                                            (lVar9,&local_80,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


