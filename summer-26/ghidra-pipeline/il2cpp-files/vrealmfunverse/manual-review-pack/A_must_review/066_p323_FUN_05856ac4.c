/*
FUNCTION_NAME: FUN_05856ac4
ENTRY_POINT: 05856ac4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 192
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


uint FUN_05856ac4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = Method_Unity_Collections_NativeArray<float4>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<float3>_Dispose__;
  if ((DAT_066d2e3e & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<float4x4>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<quaternion>_Dispose__);
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<float4>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<float3>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_066d2e3e = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_036aae34(lVar10,*(undefined8 *)puVar2);
  puVar8 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar7 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__;
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__;
  puVar3 = Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__;
  puVar2 = 
  Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
  ;
  puVar1 = Method_Unity_Collections_NativeArray<quaternion>_Dispose__;
  if (param_1[10] != 0) {
    FUN_04490cc4(&local_e0,param_1[10],
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__);
    local_90 = local_e0;
    local_e0 = 0;
    puStack_88 = puStack_d8;
    local_78 = uStack_c8;
    local_80 = uStack_d0;
    puStack_d8 = &local_90;
    while (uVar11 = FUN_047cab64(&local_90,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
      local_e8 = 0;
      local_a0 = (undefined4)local_80;
      uStack_9c = (undefined4)((ulong)local_80 >> 0x20);
      local_98 = (undefined4)local_78;
      local_f0 = 0;
      FUN_04176aa0(&local_f0,local_80,CONCAT44((undefined4)local_78,uStack_9c),*(undefined8 *)puVar8
                  );
      if (lVar10 == 0) {
LAB_05856e78:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_05856e78;
      uVar16 = *(uint *)(lVar10 + 0x18);
      if (uVar16 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)uVar16 * 0xc;
        *(uint *)(lVar10 + 0x18) = uVar16 + 1;
        *(undefined8 *)(lVar13 + 0x20) = local_f0;
        *(undefined4 *)(lVar13 + 0x28) = local_e8;
      }
      else {
        FUN_036ab6f0(lVar10,local_f0,local_e8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_047cac90(&local_90,*(undefined8 *)puVar1);
    FUN_05856f24(param_1);
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar13 = *(long *)puVar7;
    }
    puVar14 = *(undefined8 **)(lVar13 + 0xb8);
    lVar15 = puVar14[1];
    if (lVar15 == 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar17 = *puVar14;
      lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<float4>_Dispose__);
      FUN_042dd0b8(lVar15,uVar17,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__,0
                  );
      plVar12 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar12 = lVar15;
      thunk_FUN_02bb0e9c(plVar12,lVar15);
    }
    if (lVar10 != 0) {
      FUN_036ad1a8(lVar10,lVar15,*(undefined8 *)puVar6);
      if (DAT_066c29d4 == '\0') {
        FUN_02b3c81c(PTR_DAT_0631b2c0);
        DAT_066c29d4 = '\x01';
      }
      uStack_68 = (*(undefined8 **)(*(long *)PTR_DAT_0631b2c0 + 0xb8))[1];
      local_70 = **(undefined8 **)(*(long *)PTR_DAT_0631b2c0 + 0xb8);
      FUN_036ac218(&local_c0,lVar10,*(undefined8 *)puVar5);
      local_e0 = 0;
      uVar16 = 1;
      puStack_d8 = &local_c0;
      while (uVar11 = FUN_04707984(&local_c0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
        uVar9 = (**(code **)(*param_1 + 0x1b8))
                          (param_1,local_b0 & 0xffffffff,local_b0._4_4_,local_a8 & 0xffffffff,
                           &local_70,*(undefined8 *)(*param_1 + 0x1c0));
        uVar16 = uVar16 & uVar9;
      }
      FUN_04707980(&local_c0,*(undefined8 *)Method_Unity_Collections_NativeArray<float4x4>_Dispose__
                  );
      return uVar16;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


