/*
FUNCTION_NAME: Unity.Services.Multiplayer.Player$$set_LastUpdated
ENTRY_POINT: 05f6ba2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Multiplayer_Player__set_LastUpdated(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 local_230;
  undefined1 *puStack_228;
  long local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [128];
  
  if ((DAT_06dc4426 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRPointCloud>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_GetEnumerator__);
    FUN_02d965b8(
                Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                );
    FUN_02d965b8(Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__);
    FUN_02d965b8(PTR_DAT_06a00dd8);
    FUN_02d965b8(UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_ICollection<ISessionInfo>_TypeInfo);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<Response>_get_IsCompleted__);
    FUN_02d965b8(PTR_DAT_06a00de0);
    FUN_02d965b8(System_Collections_Generic_ICollection<OVRBone>_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<BoundedPlane,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>__ctor__
                );
    DAT_06dc4426 = 1;
  }
  puVar1 = PTR_DAT_06a00dd8;
  memset(auStack_d0,0,0x90);
  local_160 = 0;
  uStack_158 = 0;
  plVar7 = (long *)(param_1 + 0x10);
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  if (*plVar7 != 0) {
    FUN_0422c8ec(plVar7,*(undefined8 *)puVar1);
    *plVar7 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar4 = FUN_04f108d0(*(long *)(param_1 + 0x40),
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRPointCloud>__ctor__
                            ),
       puVar2 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__,
       puVar3 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__, lVar4 == 0))
    goto LAB_05f6bd98;
    FUN_049d8f64(&local_230,lVar4,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<BoundedPlane,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>__ctor__
                );
    memcpy(auStack_d0,&local_230,0x90);
    local_230 = 0;
    puStack_228 = auStack_d0;
    while (uVar5 = FUN_0523f9c4(auStack_d0,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      pvVar6 = memcpy(&local_150,auStack_c0,0x80);
      FUN_05f6b8e4(pvVar6,&local_150);
    }
    FUN_0523f9c0(auStack_d0,*(undefined8 *)puVar3);
  }
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_05f6bd98:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04f10db0(*(long *)(param_1 + 0x40),
                 *(undefined8 *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__)
    ;
  }
  local_160 = *(long *)(param_1 + 0x48);
  uStack_158 = *(undefined8 *)(param_1 + 0x50);
  if (local_160 != 0) {
    FUN_042b1aa0(&local_160,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__);
    local_160 = 0;
    uStack_158 = 0;
    *(long *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  local_170 = *(long *)(param_1 + 0x20);
  uStack_168 = *(undefined8 *)(param_1 + 0x28);
  if (local_170 != 0) {
    FUN_0426f794(&local_170,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                );
    local_170 = 0;
    uStack_168 = 0;
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  local_180 = *(long *)(param_1 + 0x30);
  uStack_178 = *(undefined8 *)(param_1 + 0x38);
  if (local_180 != 0) {
    FUN_0422c8ec(&local_180,*(undefined8 *)puVar1);
    local_180 = 0;
    uStack_178 = 0;
    *(long *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar3 = UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo;
  local_190 = *(long *)(param_1 + 0x58);
  uStack_188 = *(undefined8 *)(param_1 + 0x60);
  if (local_190 != 0) {
    FUN_0427396c(&local_190,
                 *(undefined8 *)
                  UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo);
    local_190 = 0;
    uStack_188 = 0;
    *(long *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar2 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo;
  local_1a0 = *(long *)(param_1 + 0x68);
  uStack_198 = *(undefined8 *)(param_1 + 0x70);
  if (local_1a0 != 0) {
    FUN_0426a408(&local_1a0,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo);
    *(long *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  local_1a0 = *(long *)(param_1 + 0x88);
  uStack_198 = *(undefined8 *)(param_1 + 0x90);
  if (local_1a0 != 0) {
    FUN_0426a408(&local_1a0,*(undefined8 *)puVar2);
    local_1a0 = 0;
    uStack_198 = 0;
    *(long *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  local_180 = *(long *)(param_1 + 0x98);
  uStack_178 = *(undefined8 *)(param_1 + 0xa0);
  if (local_180 != 0) {
    FUN_0422c8ec(&local_180,*(undefined8 *)puVar1);
    local_180 = 0;
    uStack_178 = 0;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  local_190 = *(long *)(param_1 + 0x78);
  uStack_188 = *(undefined8 *)(param_1 + 0x80);
  if (local_190 != 0) {
    FUN_0427396c(&local_190,*(undefined8 *)puVar3);
    *(long *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}


