/*
FUNCTION_NAME: System.Enum$$get_value
ENTRY_POINT: 016a7f60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 246
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Enum__get_value(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long lStack0000000000000028;
  
  lVar2 = tpidr_el0;
  lStack0000000000000028 = *(long *)(lVar2 + 0x28);
  if ((DAT_037785e6 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_037785e6 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
     plVar9 == (long *)0x0)) {
LAB_016a877c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar9 + 0x318))
            (plVar9,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar9 + 800));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_016a877c;
  iVar7 = FUN_016dc294(*(long *)(param_1 + 0x10),0);
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (iVar7 == -1) {
    uVar10 = 0;
    goto LAB_016a82e0;
  }
  uVar10 = FUN_016a7b60(param_1,iVar7);
  uVar15 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  uVar15 = FUN_01780344(uVar15,0);
  uVar11 = FUN_01789ac0(uVar10,uVar15,0);
  if ((uVar11 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_016a877c;
    uVar10 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    goto LAB_016a82e0;
  }
  uVar15 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01780344(uVar15,0);
  uVar11 = FUN_01789ac0(uVar10,uVar15,0);
  if ((uVar11 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_016a877c;
    pcVar13 = *(code **)(*plVar9 + 0x228);
    uVar10 = *(undefined8 *)(*plVar9 + 0x230);
    puVar14 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
LAB_016a820c:
    uVar8 = (*pcVar13)(plVar9,uVar10);
    uVar10 = *puVar14;
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar8);
    goto LAB_016a82dc;
  }
  uVar15 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01780344(uVar15,0);
  uVar11 = FUN_01789ac0(uVar10,uVar15,0);
  if ((uVar11 & 1) == 0) {
    uVar15 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar11 = FUN_01789ac0(uVar10,uVar15,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_016a877c;
      pcVar13 = *(code **)(*plVar9 + 0x1e8);
      uVar10 = *(undefined8 *)(*plVar9 + 0x1f0);
      puVar14 = (undefined8 *)StringLiteral_7239;
      goto LAB_016a82c8;
    }
    uVar15 = *(undefined8 *)StringLiteral_5228;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar11 = FUN_01789ac0(uVar10,uVar15,0);
    if ((uVar11 & 1) == 0) {
      uVar15 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01780344(uVar15,0);
      uVar11 = FUN_01789ac0(uVar10,uVar15,0);
      if ((uVar11 & 1) == 0) {
        uVar15 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        uVar11 = FUN_01789ac0(uVar10,uVar15,0);
        if ((uVar11 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_016a877c;
          pcVar13 = *(code **)(*plVar9 + 0x218);
          uVar10 = *(undefined8 *)(*plVar9 + 0x220);
          puVar14 = (undefined8 *)
                    Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
          ;
          goto LAB_016a8360;
        }
        uVar15 = *(undefined8 *)StringLiteral_6673;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        uVar11 = FUN_01789ac0(uVar10,uVar15,0);
        if ((uVar11 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_016a877c;
          pcVar13 = *(code **)(*plVar9 + 0x238);
          uVar10 = *(undefined8 *)(*plVar9 + 0x240);
          puVar14 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
          goto LAB_016a820c;
        }
        uVar15 = *(undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        uVar11 = FUN_01789ac0(uVar10,uVar15,0);
        if ((uVar11 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_016a877c;
          pcVar13 = *(code **)(*plVar9 + 600);
          uVar10 = *(undefined8 *)(*plVar9 + 0x260);
          puVar14 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
          goto LAB_016a83c8;
        }
        uVar15 = *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_01780344(uVar15,0);
        uVar11 = FUN_01789ac0(uVar10,uVar15,0);
        puVar3 = System_Runtime_InteropServices_InAttribute_TypeInfo;
        if ((uVar11 & 1) == 0) {
          uVar15 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_01780344(uVar15,0);
          uVar11 = FUN_01789ac0(uVar10,uVar15,0);
          puVar3 = PTR_DAT_033f2f78;
          if ((uVar11 & 1) == 0) {
            uVar15 = *(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_01780344(uVar15,0);
            uVar11 = FUN_01789ac0(uVar10,uVar15,0);
            puVar3 = StringLiteral_2672;
            if ((uVar11 & 1) == 0) {
              uVar15 = *(undefined8 *)System_Security_Principal_WindowsImpersonationContext_TypeInfo
              ;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_01780344(uVar15,0);
              uVar11 = FUN_01789ac0(uVar10,uVar15,0);
              if ((uVar11 & 1) != 0) {
                plVar9 = *(long **)(param_1 + 0x10);
                if (plVar9 == (long *)0x0) goto LAB_016a877c;
                pcVar13 = *(code **)(*plVar9 + 0x248);
                uVar10 = *(undefined8 *)(*plVar9 + 0x250);
                puVar14 = (undefined8 *)Newtonsoft_Json_Linq_JToken_TypeInfo;
                goto LAB_016a83c8;
              }
              uVar15 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_01780344(uVar15,0);
              uVar11 = FUN_01789ac0(uVar10,uVar15,0);
              if ((uVar11 & 1) == 0) {
                uVar10 = FUN_016a8788(param_1,iVar7);
                goto LAB_016a82e0;
              }
              lVar12 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,4);
              if (lVar12 == 0) goto LAB_016a877c;
              if (0 < *(int *)(lVar12 + 0x18)) {
                uVar11 = 0;
                do {
                  plVar9 = *(long **)(param_1 + 0x10);
                  if (plVar9 == (long *)0x0) goto LAB_016a877c;
                  uVar8 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  *(undefined4 *)(lVar12 + 0x20 + uVar11 * 4) = uVar8;
                  uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)uVar1);
              }
              puVar3 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
              in_stack_00000018 = 0;
              in_stack_00000020 = 0;
              FUN_017cdbd8(&stack0x00000018,lVar12,0);
              uVar10 = *(undefined8 *)puVar3;
            }
            else {
              plVar9 = *(long **)(param_1 + 0x10);
              if (plVar9 == (long *)0x0) goto LAB_016a877c;
              uVar10 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
              in_stack_00000018 = 0;
              FUN_0174cb44(&stack0x00000018,uVar10,0);
              uVar10 = *(undefined8 *)puVar3;
            }
          }
          else {
            plVar9 = *(long **)(param_1 + 0x10);
            if (plVar9 == (long *)0x0) goto LAB_016a877c;
            in_stack_00000018 =
                 (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
            uVar10 = *(undefined8 *)puVar3;
          }
        }
        else {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_016a877c;
          uVar8 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
          uVar10 = *(undefined8 *)puVar3;
          in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar8);
        }
      }
      else {
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 == (long *)0x0) goto LAB_016a877c;
        pcVar13 = *(code **)(*plVar9 + 0x248);
        uVar10 = *(undefined8 *)(*plVar9 + 0x250);
        puVar14 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
LAB_016a83c8:
        in_stack_00000018 = (*pcVar13)(plVar9,uVar10);
        uVar10 = *puVar14;
      }
    }
    else {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_016a877c;
      pcVar13 = *(code **)(*plVar9 + 0x208);
      uVar10 = *(undefined8 *)(*plVar9 + 0x210);
      puVar14 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
LAB_016a8360:
      uVar6 = (*pcVar13)(plVar9,uVar10);
      uVar10 = *puVar14;
      in_stack_00000018 = CONCAT62(in_stack_00000018._2_6_,uVar6);
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_016a877c;
    pcVar13 = *(code **)(*plVar9 + 0x1d8);
    uVar10 = *(undefined8 *)(*plVar9 + 0x1e0);
    puVar14 = (undefined8 *)UnityEngine_Texture2D___TypeInfo;
LAB_016a82c8:
    uVar5 = (*pcVar13)(plVar9,uVar10);
    uVar10 = *puVar14;
    in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,uVar5);
  }
LAB_016a82dc:
  uVar10 = thunk_FUN_00d61fa0(uVar10);
LAB_016a82e0:
  if (*(long *)(lVar2 + 0x28) != lStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


