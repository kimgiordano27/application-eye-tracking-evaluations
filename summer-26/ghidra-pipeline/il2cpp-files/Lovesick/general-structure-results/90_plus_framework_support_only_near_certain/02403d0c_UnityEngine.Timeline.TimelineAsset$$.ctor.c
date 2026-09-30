/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset$$.ctor
ENTRY_POINT: 02403d0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void UnityEngine_Timeline_TimelineAsset___ctor(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long unaff_x19;
  ulong uVar17;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar18;
  uint uVar19;
  long unaff_x25;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xdf8));
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
  thunk_FUN_00d48444(Method_TinyJSON_Variant_ToDateTime__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRLoader>_Contains__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<GizmoRenderer>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033f0718);
  thunk_FUN_00d48444(
                    System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                    );
  thunk_FUN_00d48444(System_Collections_Generic_List<XRReferenceImage>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x269) = 1;
  lVar9 = thunk_FUN_00d62348(*unaff_x21);
  puVar5 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_79);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    puVar5 = Method_TinyJSON_Variant_ToDateTime__;
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)PTR_DAT_033f6e48);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar5 = StringLiteral_11796;
      if (lVar11 != 0) {
        FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f43d0);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar12 != 0) {
          in_stack_00000058 = lVar10;
          FUN_01320e50(lVar12,*(undefined8 *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
          if (unaff_x25 != 0) {
            uVar17 = *(ulong *)(unaff_x25 + 0x18);
            iVar16 = (int)uVar17;
            lVar10 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                                  ,iVar16 << 1);
            puVar5 = StringLiteral_7349;
            if (0 < iVar16) {
              lVar18 = 0;
              uVar17 = uVar17 & 0xffffffff;
              uVar22 = 0xffffffffffffffff;
              uVar14 = 0;
              puVar21 = (undefined8 *)(unaff_x25 + 0x20);
              do {
                if (*(uint *)(unaff_x25 + 0x18) <= uVar14) {
LAB_0240438c:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar2 = *(undefined4 *)puVar21;
                uVar3 = *(undefined4 *)((long)puVar21 + 4);
                uVar1 = uVar14 + 1;
                uVar19 = 0;
                if (uVar1 != uVar17) {
                  uVar19 = (uint)uVar1;
                }
                uStack0000000000000028 = uVar2;
                uStack000000000000002c = uVar3;
                uStack0000000000000030 = uVar2;
                uStack0000000000000034 = uVar3;
                uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000028);
                if (lVar10 == 0) goto LAB_02404390;
                if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar22 + 1) goto LAB_0240438c;
                lVar15 = lVar10 + (lVar18 >> 0x20) * 0x18;
                *(undefined4 *)(lVar15 + 0x20) = uVar2;
                *(undefined4 *)(lVar15 + 0x24) = uVar3;
                *(undefined8 *)(lVar15 + 0x28) = 0;
                *(undefined8 *)(lVar15 + 0x30) = uVar13;
                if ((*(uint *)(unaff_x25 + 0x18) <= uVar14) ||
                   (*(uint *)(unaff_x25 + 0x18) <= uVar19)) goto LAB_0240438c;
                uVar24 = *puVar21;
                uVar25 = *(undefined8 *)(unaff_x25 + (long)(int)uVar19 * 0xc + 0x20);
                in_stack_00000040 = uVar24;
                in_stack_00000048 = uVar25;
                uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000040);
                uVar22 = uVar22 + 2;
                if (*(uint *)(lVar10 + 0x18) <= uVar22) goto LAB_0240438c;
                lVar15 = lVar18 + 0x100000000;
                lVar18 = lVar18 + 0x200000000;
                lVar15 = lVar10 + (lVar15 >> 0x20) * 0x18;
                *(ulong *)(lVar15 + 0x20) =
                     CONCAT44(((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar25 >> 0x20)) *
                              0.5,((float)uVar24 + (float)uVar25) * 0.5);
                *(undefined8 *)(lVar15 + 0x28) = 0;
                *(undefined8 *)(lVar15 + 0x30) = uVar13;
                uVar14 = uVar1;
                puVar21 = (undefined8 *)((long)puVar21 + 0xc);
              } while (uVar1 != uVar17);
            }
            lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_List<XRLoader>_Contains__
                                       );
            puVar5 = UnityEngine_EventSystems_EventSystem_TypeInfo;
            if (lVar18 != 0) {
              FUN_02455744(lVar18,0);
              FUN_02456c48(lVar18,lVar10,0,0);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar5 = System_Collections_Generic_List<XRReferenceImage>_TypeInfo;
              if (lVar10 != 0) {
                FUN_02456fe4(lVar10,0,*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                             ,0);
                FUN_02456e28(lVar18,0,0,3,lVar10,0);
                lVar10 = *(long *)puVar5;
                uVar13 = *(undefined8 *)(lVar18 + 0x80);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *(long *)puVar5;
                }
                lVar15 = in_stack_00000058;
                puVar4 = StringLiteral_8567;
                lVar20 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                if (lVar20 == 0) {
                  FUN_02414be8(*(undefined4 *)(lVar10 + 0xe0));
                  return;
                }
                uVar13 = FUN_010dcdb8(uVar13,lVar20,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                     );
                uVar13 = FUN_010df6b8(uVar13,*(undefined8 *)puVar4);
                lVar10 = *(long *)puVar5;
                uVar24 = *(undefined8 *)(lVar18 + 0x70);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar10);
                  lVar10 = *(long *)puVar5;
                }
                puVar4 = PTR_DAT_033eedf8;
                lVar20 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                if (lVar20 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar10);
                    lVar10 = *(long *)puVar5;
                  }
                  uVar25 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar20 == 0) goto LAB_02404390;
                  FUN_012d239c(lVar20,uVar25,*(undefined8 *)PTR_DAT_033f0718,0);
                  *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar20;
                  lVar15 = in_stack_00000058;
                }
                puVar4 = 
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                ;
                uVar24 = FUN_010dcdb8(uVar24,lVar20,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                                     );
                uVar24 = FUN_010df6b8(uVar24,*(undefined8 *)puVar4);
                lVar10 = *(long *)puVar5;
                uVar25 = *(undefined8 *)(lVar18 + 0x70);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar10);
                  lVar10 = *(long *)puVar5;
                }
                puVar4 = StringLiteral_1507;
                lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
                if (lVar18 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar10);
                    lVar10 = *(long *)puVar5;
                  }
                  uVar23 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar18 == 0) goto LAB_02404390;
                  FUN_012d239c(lVar18,uVar23,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                               ,0);
                  *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar18;
                  lVar15 = in_stack_00000058;
                }
                puVar8 = StringLiteral_10491;
                puVar7 = StringLiteral_9135;
                puVar6 = StringLiteral_2811;
                puVar4 = Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__;
                puVar5 = PTR_DAT_033f1c70;
                uVar25 = FUN_010dcdb8(uVar25,lVar18,
                                      *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_37__);
                uVar25 = FUN_010df6b8(uVar25,*(undefined8 *)puVar8);
                FUN_01322050(lVar9,uVar24,*(undefined8 *)puVar5);
                FUN_01322050(lVar15,uVar13,*(undefined8 *)puVar6);
                FUN_01322050(lVar12,uVar25,*(undefined8 *)puVar4);
                FUN_0240394c(*(undefined4 *)(lVar9 + 0x18),lVar11);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                puVar7 = StringLiteral_12929;
                puVar6 = StringLiteral_10837;
                puVar4 = Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__;
                puVar5 = System_Collections_Generic_ICollection<IList<int>>_TypeInfo;
                if (lVar10 != 0) {
                  FUN_01320e50(lVar10,*(undefined8 *)
                                       UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                              );
                  UnityEngine_Timeline_TimelineAsset__DeleteTrack(lVar9,lVar15,lVar10);
                  FUN_02403688(lVar10);
                  FUN_024036d8(lVar9,lVar12,lVar15,lVar11,lVar10);
                  uVar13 = FUN_01325140(lVar12,*(undefined8 *)puVar4);
                  uVar24 = FUN_01325140(lVar9,*(undefined8 *)puVar7);
                  uVar25 = FUN_01325140(lVar15,*(undefined8 *)puVar6);
                  uVar23 = FUN_01325140(lVar11,*(undefined8 *)puVar5);
                  if (unaff_x22 != 0) {
                    FUN_0266ed50(unaff_x22,0);
                    FUN_0266b9c4(unaff_x22,uVar24,0);
                    FUN_0266db2c(unaff_x22,uVar25,0);
                    FUN_0266bb1c(unaff_x22,uVar23,0);
                    FUN_0266c128(unaff_x22,uVar13,0);
                    FUN_024039f8(&stack0x00000028,uVar24);
                    unaff_x20[2] = in_stack_00000038;
                    unaff_x20[1] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
                    *unaff_x20 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
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
LAB_02404390:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


