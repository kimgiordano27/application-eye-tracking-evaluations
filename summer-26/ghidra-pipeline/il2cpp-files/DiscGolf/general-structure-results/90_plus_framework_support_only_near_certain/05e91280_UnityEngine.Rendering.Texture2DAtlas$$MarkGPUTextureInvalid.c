/*
FUNCTION_NAME: UnityEngine.Rendering.Texture2DAtlas$$MarkGPUTextureInvalid
ENTRY_POINT: 05e91280
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_19;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05e9149c) */

void UnityEngine_Rendering_Texture2DAtlas__MarkGPUTextureInvalid(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  FUN_04f93df4();
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x23;
  LeanTween__value();
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<PacketBuffer>_get_IsCreated__);
  FUN_04e88224(uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<NetworkEndpoint>_Dispose__)
  ;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x58),uVar3);
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__
                            );
  FUN_0400f984(uVar3,*(undefined8 *)
                      Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x60),uVar3);
  puVar1 = PTR_DAT_069fe100;
  *(undefined8 *)(unaff_x19 + 0x90) = DAT_010fc6e0;
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04fe9f68(uVar3,*(undefined8 *)PTR_DAT_069fe108);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x98),uVar3);
  FUN_0552aca4();
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x22;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x21;
  LeanTween__value();
  if (unaff_x20 == (long *)0x0) {
    in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
    unaff_x20 = (long *)thunk_FUN_02dd2d7c(*(undefined8 *)
                                            Method_Unity_Services_Authentication_Shared_Multimap<string,_string>_GetEnumerator__
                                           ,&stack0x00000018);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05e913e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(unaff_x20,
                        *(long *)
                         Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__,0);
LAB_05e913e0:
  lVar5 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
  if (lVar5 != 0) {
    Unity_Collections_NativeArray<AttachmentDescriptor>__CopySafe
              (&stack0x00000018,lVar5,
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
    while (uVar6 = FUN_0518ddf0(&stack0x00000050,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
      FUN_05e915a0();
    }
    FUN_0518ddec(&stack0x00000050,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


