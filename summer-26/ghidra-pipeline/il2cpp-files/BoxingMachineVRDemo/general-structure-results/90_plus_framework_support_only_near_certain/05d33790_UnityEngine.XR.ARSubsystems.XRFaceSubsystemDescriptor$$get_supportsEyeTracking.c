/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor$$get_supportsEyeTracking
ENTRY_POINT: 05d33790
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor__get_supportsEyeTracking
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_048956f0(param_1,param_2,*(undefined8 *)PTR_DAT_06781e68,*unaff_x28);
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  puVar3 = PTR_DAT_0678c308;
  FUN_048956f0();
  FUN_048956f0();
  puVar2 = PTR_DAT_0678c2b8;
  FUN_048956f0();
  FUN_048956f0();
  FUN_048956f0();
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  thunk_FUN_02dd37b4(*(undefined8 *)(*unaff_x20 + 0xb8));
  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763578);
  FUN_04887ba4(lVar8,*(undefined8 *)PTR_DAT_06763580);
  puVar7 = Method_Unity_Collections_NativeArray<MetadataValue>_Dispose__;
  puVar6 = Method_Unity_Collections_NativeArray<Matrix4x4>_Copy__;
  puVar5 = Method_Unity_Collections_NativeArray<Matrix4x4>__ctor__;
  puVar4 = Method_Unity_Collections_NativeArray<Keyframe>_Dispose__;
  puVar1 = PTR_DAT_06763590;
  if (lVar8 != 0) {
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be10,2,*(undefined8 *)PTR_DAT_06763590);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be18,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be20,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be28,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be30,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be98,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be50,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be60,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<OcclusionCullingCommonShaderVariables>_Dispose__
                 ,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>_GetHashCode__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678bec0,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678beb8,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678bc60,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be80,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be70,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be90,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be88,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678be78,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>_Dispose__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>_Equals__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<OcclusionCullingDebugShaderVariables>_Dispose__
                 ,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Quaternion>_Dispose__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>__ctor__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<OcclusionCullingDebugShaderVariables>__ctor__
                 ,2,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Quaternion>__ctor__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>_get_IsCreated__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Plane>_CopyFrom__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<Pose>_GetEnumerator__,2,
                 *(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)puVar3,1,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)PTR_DAT_0678c300,1,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*(undefined8 *)puVar2,1,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*unaff_x29,1,*(undefined8 *)puVar1);
    FUN_0488854c(lVar8,*unaff_x27,1,*(undefined8 *)puVar1);
    plVar9 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *plVar9 = lVar8;
    thunk_FUN_02dd37b4(plVar9,lVar8);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>___ctor
              (uVar10,*(undefined8 *)puVar4);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<LightShadowCasterCullingInfo>__ctor__
                               );
    System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>___ctor
              (uVar10,*(undefined8 *)Method_Unity_Collections_NativeArray<Keyframe>__ctor__);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDepthPyramidConstants>_get_IsCreated__
                               );
    FUN_05d23f08();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDerivedData>_get_IsCreated__
                               );
    FUN_05d3255c();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<MetadataValue>__ctor__);
    FUN_05d0c37c(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_Unity_Collections_NativeArray<IntPtr>__ctor__)
    ;
    FUN_05cecd70(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderMipBounds>_Dispose__);
    FUN_05d34624();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<long>_GetSubArray__);
    FUN_05ce1d8c(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OcclusionCullingCommonShaderVariables>__ctor__
                               );
    FUN_05d3bc28(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDerivedData>_Dispose__
                               );
    FUN_05d2b744();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
    FUN_05ced888(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDerivedData>__ctor__);
    UnityEngine_XR_ARSubsystems_XRAnchorSubsystem__GetChanges();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<long>_get_IsCreated__);
    FUN_05ce8f04(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderMipBounds>__ctor__);
    FUN_05d34e8c();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<MeshTransform>__ctor__);
    FUN_05cfb4b0(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_05cf46b4(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_05d0ce94(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<MeshTransform>_Dispose__);
    FUN_05cfe930(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x98);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDepthPyramidConstants>__ctor__
                               );
    FUN_05d164bc(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa0);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__
                               );
    FUN_05d05610(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa8);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderDepthPyramidConstants>_Dispose__
                               );
    FUN_05d1d19c();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xb0);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<MetadataValue>_get_IsCreated__
                               );
    FUN_05d1402c(uVar10,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xb8);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OccluderMipBounds>_get_IsCreated__
                               );
    FUN_05d37898();
    puVar11 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc0);
    *puVar11 = uVar10;
    thunk_FUN_02dd37b4(puVar11,uVar10);
    puVar1 = Method_Unity_Collections_NativeArray<JobHandle>__ctor__;
    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      FUN_0482ec6c(lVar8,0,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20),
                   *(undefined8 *)Method_Unity_Collections_NativeArray<JobHandle>__ctor__);
      lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        FUN_0482ec6c(lVar8,1,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28),
                     *(undefined8 *)puVar1);
        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
        if (lVar8 != 0) {
          FUN_0482ec6c(lVar8,2,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30),
                       *(undefined8 *)puVar1);
          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
          if (lVar8 != 0) {
            FUN_0482ec6c(lVar8,3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38),
                         *(undefined8 *)puVar1);
            lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
            if (lVar8 != 0) {
              FUN_0482ec6c(lVar8,4,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40),
                           *(undefined8 *)puVar1);
              puVar1 = Method_Unity_Collections_NativeArray<JobHandle>_Dispose__;
              lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
              if (lVar8 != 0) {
                FUN_0482ec6c(lVar8,0,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48),
                             *(undefined8 *)
                              Method_Unity_Collections_NativeArray<JobHandle>_Dispose__);
                lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                if (lVar8 != 0) {
                  FUN_0482ec6c(lVar8,1,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50),
                               *(undefined8 *)puVar1);
                  lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                  if (lVar8 != 0) {
                    FUN_0482ec6c(lVar8,2,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x58),
                                 *(undefined8 *)puVar1);
                    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                    if (lVar8 != 0) {
                      FUN_0482ec6c(lVar8,3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x60),
                                   *(undefined8 *)puVar1);
                      lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                      if (lVar8 != 0) {
                        FUN_0482ec6c(lVar8,4,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x68),
                                     *(undefined8 *)puVar1);
                        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                        if (lVar8 != 0) {
                          FUN_0482ec6c(lVar8,5,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x70),
                                       *(undefined8 *)puVar1);
                          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                          if (lVar8 != 0) {
                            FUN_0482ec6c(lVar8,6,*(undefined8 *)
                                                  (*(long *)(*unaff_x20 + 0xb8) + 0x78),
                                         *(undefined8 *)puVar1);
                            lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                            if (lVar8 != 0) {
                              FUN_0482ec6c(lVar8,7,*(undefined8 *)
                                                    (*(long *)(*unaff_x20 + 0xb8) + 0x80),
                                           *(undefined8 *)puVar1);
                              lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                              if (lVar8 != 0) {
                                FUN_0482ec6c(lVar8,8,*(undefined8 *)
                                                      (*(long *)(*unaff_x20 + 0xb8) + 0x88),
                                             *(undefined8 *)puVar1);
                                lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                if (lVar8 != 0) {
                                  FUN_0482ec6c(lVar8,9,*(undefined8 *)
                                                        (*(long *)(*unaff_x20 + 0xb8) + 0x90),
                                               *(undefined8 *)puVar1);
                                  lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                  if (lVar8 != 0) {
                                    FUN_0482ec6c(lVar8,10,*(undefined8 *)
                                                           (*(long *)(*unaff_x20 + 0xb8) + 0x98),
                                                 *(undefined8 *)puVar1);
                                    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                    if (lVar8 != 0) {
                                      FUN_0482ec6c(lVar8,0xb,
                                                   *(undefined8 *)
                                                    (*(long *)(*unaff_x20 + 0xb8) + 0xa0),
                                                   *(undefined8 *)puVar1);
                                      lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                      if (lVar8 != 0) {
                                        FUN_0482ec6c(lVar8,0xc,
                                                     *(undefined8 *)
                                                      (*(long *)(*unaff_x20 + 0xb8) + 0xa8),
                                                     *(undefined8 *)puVar1);
                                        lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                        if (lVar8 != 0) {
                                          FUN_0482ec6c(lVar8,0xd,
                                                       *(undefined8 *)
                                                        (*(long *)(*unaff_x20 + 0xb8) + 0xb0),
                                                       *(undefined8 *)puVar1);
                                          lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                          if (lVar8 != 0) {
                                            FUN_0482ec6c(lVar8,0xe,
                                                         *(undefined8 *)
                                                          (*(long *)(*unaff_x20 + 0xb8) + 0xb8),
                                                         *(undefined8 *)puVar1);
                                            lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                            if (lVar8 != 0) {
                                              FUN_0482ec6c(lVar8,0xf,
                                                           *(undefined8 *)
                                                            (*(long *)(*unaff_x20 + 0xb8) + 0xc0),
                                                           *(undefined8 *)puVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


