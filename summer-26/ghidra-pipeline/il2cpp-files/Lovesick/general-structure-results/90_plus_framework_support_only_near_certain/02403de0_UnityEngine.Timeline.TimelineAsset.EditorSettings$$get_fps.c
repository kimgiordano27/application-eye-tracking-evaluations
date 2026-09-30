/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.EditorSettings$$get_fps
ENTRY_POINT: 02403de0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Timeline_TimelineAsset_EditorSettings__get_fps
               (undefined8 *param_1,undefined8 param_2)

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
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar16;
  uint uVar17;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar5 = StringLiteral_11796;
  FUN_01320e50(param_2,*param_1);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    if (unaff_x25 != 0) {
      uVar15 = *(ulong *)(unaff_x25 + 0x18);
      iVar14 = (int)uVar15;
      lVar10 = FUN_00da4fb8(*(undefined8 *)
                             Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                            ,iVar14 << 1);
      puVar5 = StringLiteral_7349;
      if (0 < iVar14) {
        lVar16 = 0;
        uVar15 = uVar15 & 0xffffffff;
        uVar19 = 0xffffffffffffffff;
        uVar12 = 0;
        puVar18 = (undefined8 *)(unaff_x25 + 0x20);
        do {
          if (*(uint *)(unaff_x25 + 0x18) <= uVar12) {
LAB_0240438c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar2 = *(undefined4 *)puVar18;
          uVar3 = *(undefined4 *)((long)puVar18 + 4);
          uVar1 = uVar12 + 1;
          uVar17 = 0;
          if (uVar1 != uVar15) {
            uVar17 = (uint)uVar1;
          }
          uStack0000000000000028 = uVar2;
          uStack000000000000002c = uVar3;
          uStack0000000000000030 = uVar2;
          uStack0000000000000034 = uVar3;
          uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000028);
          if (lVar10 == 0) goto LAB_02404390;
          if ((ulong)*(uint *)(lVar10 + 0x18) <= uVar19 + 1) goto LAB_0240438c;
          lVar13 = lVar10 + (lVar16 >> 0x20) * 0x18;
          *(undefined4 *)(lVar13 + 0x20) = uVar2;
          *(undefined4 *)(lVar13 + 0x24) = uVar3;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = uVar11;
          if ((*(uint *)(unaff_x25 + 0x18) <= uVar12) || (*(uint *)(unaff_x25 + 0x18) <= uVar17))
          goto LAB_0240438c;
          uVar21 = *puVar18;
          uVar22 = *(undefined8 *)(unaff_x25 + (long)(int)uVar17 * 0xc + 0x20);
          in_stack_00000040 = uVar21;
          in_stack_00000048 = uVar22;
          uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000040);
          uVar19 = uVar19 + 2;
          if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_0240438c;
          lVar13 = lVar16 + 0x100000000;
          lVar16 = lVar16 + 0x200000000;
          lVar13 = lVar10 + (lVar13 >> 0x20) * 0x18;
          *(ulong *)(lVar13 + 0x20) =
               CONCAT44(((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar22 >> 0x20)) * 0.5,
                        ((float)uVar21 + (float)uVar22) * 0.5);
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = uVar11;
          uVar12 = uVar1;
          puVar18 = (undefined8 *)((long)puVar18 + 0xc);
        } while (uVar1 != uVar15);
      }
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<XRLoader>_Contains__);
      puVar5 = UnityEngine_EventSystems_EventSystem_TypeInfo;
      if (lVar16 != 0) {
        FUN_02455744(lVar16,0);
        FUN_02456c48(lVar16,lVar10,0,0);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        puVar5 = System_Collections_Generic_List<XRReferenceImage>_TypeInfo;
        if (lVar10 != 0) {
          FUN_02456fe4(lVar10,0,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_StringHelpers_MakeUniqueName<InputControlLayout_ControlItem>__
                       ,0);
          FUN_02456e28(lVar16,0,0,3,lVar10,0);
          lVar10 = *(long *)puVar5;
          uVar11 = *(undefined8 *)(lVar16 + 0x80);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar5;
          }
          puVar4 = StringLiteral_8567;
          lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar13 == 0) {
            FUN_02414be8(*(undefined4 *)(lVar10 + 0xe0));
            return;
          }
          uVar11 = FUN_010dcdb8(uVar11,lVar13,
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                               );
          uVar11 = FUN_010df6b8(uVar11,*(undefined8 *)puVar4);
          lVar10 = *(long *)puVar5;
          uVar21 = *(undefined8 *)(lVar16 + 0x70);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
            lVar10 = *(long *)puVar5;
          }
          puVar4 = PTR_DAT_033eedf8;
          lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar13 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
              lVar10 = *(long *)puVar5;
            }
            uVar22 = **(undefined8 **)(lVar10 + 0xb8);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar13 == 0) goto LAB_02404390;
            FUN_012d239c(lVar13,uVar22,*(undefined8 *)PTR_DAT_033f0718,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar13;
          }
          puVar4 = 
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
          ;
          uVar21 = FUN_010dcdb8(uVar21,lVar13,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_get_Count__
                               );
          uVar21 = FUN_010df6b8(uVar21,*(undefined8 *)puVar4);
          lVar10 = *(long *)puVar5;
          uVar22 = *(undefined8 *)(lVar16 + 0x70);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
            lVar10 = *(long *)puVar5;
          }
          puVar4 = StringLiteral_1507;
          lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
          if (lVar16 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
              lVar10 = *(long *)puVar5;
            }
            uVar20 = **(undefined8 **)(lVar10 + 0xb8);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar16 == 0) goto LAB_02404390;
            FUN_012d239c(lVar16,uVar20,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRGLTFInputNode,_OVRGLTFAnimatinonNode>_TypeInfo
                         ,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar16;
          }
          puVar8 = StringLiteral_10491;
          puVar7 = StringLiteral_9135;
          puVar6 = StringLiteral_2811;
          puVar4 = Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__;
          puVar5 = PTR_DAT_033f1c70;
          uVar22 = FUN_010dcdb8(uVar22,lVar16,
                                *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_37__);
          uVar22 = FUN_010df6b8(uVar22,*(undefined8 *)puVar8);
          FUN_01322050(unaff_x21,uVar21,*(undefined8 *)puVar5);
          FUN_01322050(unaff_x23,uVar11,*(undefined8 *)puVar6);
          FUN_01322050(lVar9,uVar22,*(undefined8 *)puVar4);
          FUN_0240394c(*(undefined4 *)(unaff_x21 + 0x18),param_2);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          puVar7 = StringLiteral_12929;
          puVar6 = StringLiteral_10837;
          puVar4 = Method_System_Collections_Generic_List<ARTrackedObject>_get_Count__;
          puVar5 = System_Collections_Generic_ICollection<IList<int>>_TypeInfo;
          if (lVar10 != 0) {
            FUN_01320e50(lVar10,*(undefined8 *)
                                 UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                        );
            UnityEngine_Timeline_TimelineAsset__DeleteTrack(unaff_x21,unaff_x23,lVar10);
            FUN_02403688(lVar10);
            FUN_024036d8(unaff_x21,lVar9,unaff_x23,param_2,lVar10);
            uVar11 = FUN_01325140(lVar9,*(undefined8 *)puVar4);
            uVar21 = FUN_01325140(unaff_x21,*(undefined8 *)puVar7);
            uVar22 = FUN_01325140(unaff_x23,*(undefined8 *)puVar6);
            uVar20 = FUN_01325140(param_2,*(undefined8 *)puVar5);
            if (unaff_x22 != 0) {
              FUN_0266ed50(unaff_x22,0);
              FUN_0266b9c4(unaff_x22,uVar21,0);
              FUN_0266db2c(unaff_x22,uVar22,0);
              FUN_0266bb1c(unaff_x22,uVar20,0);
              FUN_0266c128(unaff_x22,uVar11,0);
              FUN_024039f8(&stack0x00000028,uVar21);
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
LAB_02404390:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


