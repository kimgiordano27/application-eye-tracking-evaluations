/*
FUNCTION_NAME: FUN_05e90f98
ENTRY_POINT: 05e90f98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e9149c) */

void FUN_05e90f98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  ulong *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
  puVar1 = PTR_DAT_069fc720;
  if ((DAT_06dc3c94 & 1) == 0) {
    FUN_02d965b8(Method_Unity_Collections_NativeArray<NetworkEndpoint>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fe108);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarComputeSkinnedPrimitive_VertexIndices>__ctor__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<PacketBuffer>_get_IsCreated__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    FUN_02d965b8(PTR_DAT_069fe100);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    FUN_02d965b8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>_GetEnumerator__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_GetEnumerator__)
    ;
    FUN_02d965b8(
                Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>_GetEnumerator__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    FUN_02d965b8(PTR_DAT_069fc720);
    DAT_06dc3c94 = 1;
  }
  local_70 = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar7 = FUN_05d38880(4,0);
  local_c8 = 0;
  FUN_042cd308(&local_c8,0x10,uVar7,*(undefined8 *)puVar2);
  uVar8 = *(undefined8 *)puVar3;
  *(ulong *)(param_1 + 0x18) = local_c8;
  uVar8 = FUN_02d966a4(uVar8,4);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  LeanTween__value();
  uVar8 = FUN_02d966a4(*(undefined8 *)puVar1,4);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  LeanTween__value();
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04eda970(uVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x30),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_04fd88d4(uVar8,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x38),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_GetEnumerator__
                            );
  FUN_03c5e5ac(uVar8,*(undefined8 *)
                      Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_Clear__);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x40),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_04ff0cf0(uVar8,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<OvrAvatarComputeSkinnedPrimitive_VertexIndices>__ctor__
              );
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x48),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_04f93df4(uVar8,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x50),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<PacketBuffer>_get_IsCreated__);
  FUN_04e88224(uVar8,*(undefined8 *)Method_Unity_Collections_NativeArray<NetworkEndpoint>_Dispose__)
  ;
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x58),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__
                            );
  FUN_0400f984(uVar8,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x60),uVar8);
  puVar1 = PTR_DAT_069fe100;
  *(undefined8 *)(param_1 + 0x90) = DAT_010fc6e0;
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04fe9f68(uVar8,*(undefined8 *)PTR_DAT_069fe108);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x98),uVar8);
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x78),param_2);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  LeanTween__value((undefined8 *)(param_1 + 0x70),param_3);
  if (param_4 == (long *)0x0) {
    local_c8 = local_c8 & 0xffffffffffffff00;
    param_4 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)
                                          Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                                         ,&local_c8);
    if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  lVar10 = *param_4;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__) {
        puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05e913e0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_02dd004c(param_4,*(long *)
                                 Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__
                        ,0);
LAB_05e913e0:
  lVar10 = (*(code *)*puVar9)(param_4,puVar9[1]);
  if (lVar10 != 0) {
    Unity_Collections_NativeArray<AttachmentDescriptor>__CopySafe
              (&local_c8,lVar10,
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>_GetEnumerator__
              );
    puVar2 = 
    Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__;
    puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
    uStack_88 = puStack_c0;
    local_90 = local_c8;
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    local_c8 = 0;
    puStack_c0 = &local_90;
    while (uVar11 = FUN_0518ddf0(&local_90,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      local_d0 = local_70;
      FUN_05e915a0(param_1,&local_e0);
    }
    FUN_0518ddec(&local_90,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


