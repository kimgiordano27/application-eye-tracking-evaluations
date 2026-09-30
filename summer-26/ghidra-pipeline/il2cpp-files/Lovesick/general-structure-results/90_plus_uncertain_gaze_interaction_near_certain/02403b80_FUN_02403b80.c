/*
FUNCTION_NAME: FUN_02403b80
ENTRY_POINT: 02403b80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 213
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


void FUN_02403b80(undefined8 *param_1,long param_2,long param_3)

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
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar5 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
  if ((DAT_03782269 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(UnityEngine_EventSystems_EventSystem_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_37__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                      );
    thunk_FUN_00d48444(StringLiteral_10491);
    thunk_FUN_00d48444(StringLiteral_8567);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1507);
    thunk_FUN_00d48444(PTR_DAT_033eedf8);
    thunk_FUN_00d48444(StringLiteral_2811);
    thunk_FUN_00d48444(PTR_DAT_033f1c70);
    thunk_FUN_00d48444(Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__);
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<IList<int>>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_12929);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(PTR_DAT_033f43d0);
    thunk_FUN_00d48444(
                      UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_79);
    thunk_FUN_00d48444(UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9135);
    thunk_FUN_00d48444(StringLiteral_11796);
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
    DAT_03782269 = 1;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
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
          FUN_01320e50(lVar12,*(undefined8 *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
          if (param_3 != 0) {
            uVar18 = *(ulong *)(param_3 + 0x18);
            iVar17 = (int)uVar18;
            lVar13 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                                  ,iVar17 << 1);
            puVar5 = StringLiteral_7349;
            if (0 < iVar17) {
              lVar19 = 0;
              uVar18 = uVar18 & 0xffffffff;
              uVar22 = 0xffffffffffffffff;
              uVar15 = 0;
              puVar21 = (undefined8 *)(param_3 + 0x20);
              do {
                if (*(uint *)(param_3 + 0x18) <= uVar15) {
LAB_0240438c:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar2 = *(undefined4 *)puVar21;
                uVar3 = *(undefined4 *)((long)puVar21 + 4);
                uVar1 = uVar15 + 1;
                uVar20 = 0;
                if (uVar1 != uVar18) {
                  uVar20 = (uint)uVar1;
                }
                local_a8 = uVar2;
                uStack_a4 = uVar3;
                local_a0 = uVar2;
                uStack_9c = uVar3;
                uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_a8);
                if (lVar13 == 0) goto LAB_02404390;
                if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar22 + 1) goto LAB_0240438c;
                lVar16 = lVar13 + (lVar19 >> 0x20) * 0x18;
                *(undefined4 *)(lVar16 + 0x20) = uVar2;
                *(undefined4 *)(lVar16 + 0x24) = uVar3;
                *(undefined8 *)(lVar16 + 0x28) = 0;
                *(undefined8 *)(lVar16 + 0x30) = uVar14;
                if ((*(uint *)(param_3 + 0x18) <= uVar15) || (*(uint *)(param_3 + 0x18) <= uVar20))
                goto LAB_0240438c;
                uVar24 = *puVar21;
                uVar25 = *(undefined8 *)(param_3 + (long)(int)uVar20 * 0xc + 0x20);
                local_90 = uVar24;
                uStack_88 = uVar25;
                uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_90);
                uVar22 = uVar22 + 2;
                if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_0240438c;
                lVar16 = lVar19 + 0x100000000;
                lVar19 = lVar19 + 0x200000000;
                lVar16 = lVar13 + (lVar16 >> 0x20) * 0x18;
                *(ulong *)(lVar16 + 0x20) =
                     CONCAT44(((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar25 >> 0x20)) *
                              0.5,((float)uVar24 + (float)uVar25) * 0.5);
                *(undefined8 *)(lVar16 + 0x28) = 0;
                *(undefined8 *)(lVar16 + 0x30) = uVar14;
                uVar15 = uVar1;
                puVar21 = (undefined8 *)((long)puVar21 + 0xc);
              } while (uVar1 != uVar18);
            }
            lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_List<XRLoader>_Contains__
                                       );
            puVar5 = UnityEngine_EventSystems_EventSystem_TypeInfo;
            if (lVar19 != 0) {
              FUN_02455744(lVar19,0);
              FUN_02456c48(lVar19,lVar13,0,0);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar5 = System_Collections_Generic_List<XRReferenceImage>_TypeInfo;
              if (lVar13 != 0) {
                FUN_02456fe4(lVar13,0,*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                             ,0);
                FUN_02456e28(lVar19,0,0,3,lVar13,0);
                lVar13 = *(long *)puVar5;
                uVar14 = *(undefined8 *)(lVar19 + 0x80);
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar13 = *(long *)puVar5;
                }
                puVar4 = StringLiteral_8567;
                lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                if (lVar16 == 0) {
                  FUN_02414be8(*(undefined4 *)(lVar13 + 0xe0));
                  return;
                }
                uVar14 = FUN_010dcdb8(uVar14,lVar16,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                     );
                uVar14 = FUN_010df6b8(uVar14,*(undefined8 *)puVar4);
                lVar13 = *(long *)puVar5;
                uVar24 = *(undefined8 *)(lVar19 + 0x70);
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar13);
                  lVar13 = *(long *)puVar5;
                }
                puVar4 = PTR_DAT_033eedf8;
                lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                if (lVar16 == 0) {
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar13);
                    lVar13 = *(long *)puVar5;
                  }
                  uVar25 = **(undefined8 **)(lVar13 + 0xb8);
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar16 == 0) goto LAB_02404390;
                  FUN_012d239c(lVar16,uVar25,*(undefined8 *)PTR_DAT_033f0718,0);
                  *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar16;
                }
                puVar4 = 
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                ;
                uVar24 = FUN_010dcdb8(uVar24,lVar16,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                                     );
                uVar24 = FUN_010df6b8(uVar24,*(undefined8 *)puVar4);
                lVar13 = *(long *)puVar5;
                uVar25 = *(undefined8 *)(lVar19 + 0x70);
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar13);
                  lVar13 = *(long *)puVar5;
                }
                puVar4 = StringLiteral_1507;
                lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
                if (lVar19 == 0) {
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar13);
                    lVar13 = *(long *)puVar5;
                  }
                  uVar23 = **(undefined8 **)(lVar13 + 0xb8);
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar19 == 0) goto LAB_02404390;
                  FUN_012d239c(lVar19,uVar23,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                               ,0);
                  *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar19;
                }
                puVar8 = StringLiteral_10491;
                puVar7 = StringLiteral_9135;
                puVar6 = StringLiteral_2811;
                puVar4 = Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__;
                puVar5 = PTR_DAT_033f1c70;
                uVar25 = FUN_010dcdb8(uVar25,lVar19,
                                      *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_37__);
                uVar25 = FUN_010df6b8(uVar25,*(undefined8 *)puVar8);
                FUN_01322050(lVar9,uVar24,*(undefined8 *)puVar5);
                FUN_01322050(lVar10,uVar14,*(undefined8 *)puVar6);
                FUN_01322050(lVar12,uVar25,*(undefined8 *)puVar4);
                FUN_0240394c(*(undefined4 *)(lVar9 + 0x18),lVar11);
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
                puVar7 = StringLiteral_12929;
                puVar6 = StringLiteral_10837;
                puVar4 = Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__;
                puVar5 = System_Collections_Generic_ICollection<IList<int>>_TypeInfo;
                if (lVar13 != 0) {
                  FUN_01320e50(lVar13,*(undefined8 *)
                                       UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                              );
                  UnityEngine_Timeline_TimelineAsset__DeleteTrack(lVar9,lVar10,lVar13);
                  FUN_02403688(lVar13);
                  FUN_024036d8(lVar9,lVar12,lVar10,lVar11,lVar13);
                  uVar14 = FUN_01325140(lVar12,*(undefined8 *)puVar4);
                  uVar24 = FUN_01325140(lVar9,*(undefined8 *)puVar7);
                  uVar25 = FUN_01325140(lVar10,*(undefined8 *)puVar6);
                  uVar23 = FUN_01325140(lVar11,*(undefined8 *)puVar5);
                  if (param_2 != 0) {
                    FUN_0266ed50(param_2,0);
                    FUN_0266b9c4(param_2,uVar24,0);
                    FUN_0266db2c(param_2,uVar25,0);
                    FUN_0266bb1c(param_2,uVar23,0);
                    FUN_0266c128(param_2,uVar14,0);
                    FUN_024039f8(&local_a8,uVar24);
                    param_1[2] = uStack_98;
                    param_1[1] = CONCAT44(uStack_9c,local_a0);
                    *param_1 = CONCAT44(uStack_a4,local_a8);
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


