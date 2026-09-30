/*
FUNCTION_NAME: UnityEngine.Rendering.Blitter$$BlitCubeToOctahedral2DQuadSingleChannel
ENTRY_POINT: 05e90fec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 201
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e9149c) */

void UnityEngine_Rendering_Blitter__BlitCubeToOctahedral2DQuadSingleChannel
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x24 + 0xc94) = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uVar3 = FUN_05d38880(4,0);
  in_stack_00000018 = 0;
  FUN_042cd308(&stack0x00000018,0x10,uVar3,*unaff_x29);
  uVar4 = *unaff_x28;
  *(ulong *)(param_2 + 0x18) = in_stack_00000018;
  uVar4 = FUN_02d966a4(uVar4,4);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  LeanTween__value();
  uVar4 = FUN_02d966a4(*unaff_x27,4);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  LeanTween__value();
  uVar4 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_04eda970(uVar4,*unaff_x23);
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x30),uVar4);
  uVar4 = thunk_FUN_02dd3144(*unaff_x25);
  FUN_04fd88d4(uVar4,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x38),uVar4);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_GetEnumerator__
                            );
  FUN_03c5e5ac(uVar4,*(undefined8 *)
                      Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_Clear__);
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x40),uVar4);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_04ff0cf0(uVar4,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<OvrAvatarComputeSkinnedPrimitive_VertexIndices>__ctor__
              );
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x48),uVar4);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_04f93df4(uVar4,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x50),uVar4);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<PacketBuffer>_get_IsCreated__);
  FUN_04e88224(uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<NetworkEndpoint>_Dispose__)
  ;
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x58),uVar4);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__
                            );
  FUN_0400f984(uVar4,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
  *(undefined8 *)(param_2 + 0x60) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x60),uVar4);
  puVar1 = PTR_DAT_069fe100;
  *(undefined8 *)(param_2 + 0x90) = DAT_010fc6e0;
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04fe9f68(uVar4,*(undefined8 *)PTR_DAT_069fe108);
  *(undefined8 *)(param_2 + 0x98) = uVar4;
  LeanTween__value((undefined8 *)(param_2 + 0x98),uVar4);
  FUN_0552aca4(param_2,0);
  *(undefined8 *)(param_2 + 0x78) = param_3;
  LeanTween__value((undefined8 *)(param_2 + 0x78),param_3);
  *(undefined8 *)(param_2 + 0x70) = param_4;
  LeanTween__value((undefined8 *)(param_2 + 0x70),param_4);
  if (param_5 == (long *)0x0) {
    in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
    param_5 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)
                                          Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                                         ,&stack0x00000018);
    if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  lVar6 = *param_5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05e913e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(param_5,*(long *)
                                 Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__
                        ,0);
LAB_05e913e0:
  lVar6 = (*(code *)*puVar5)(param_5,puVar5[1]);
  if (lVar6 != 0) {
    Unity_Collections_NativeArray<AttachmentDescriptor>__CopySafe
              (&stack0x00000018,lVar6,
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<Vector3>>_GetEnumerator__
              );
    puVar2 = 
    Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__;
    puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000068 = in_stack_00000030;
    in_stack_00000060 = in_stack_00000028;
    in_stack_00000070 = in_stack_00000038;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000050;
    while (uVar7 = FUN_0518ddf0(&stack0x00000050,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      FUN_05e915a0(param_2);
    }
    FUN_0518ddec(&stack0x00000050,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


