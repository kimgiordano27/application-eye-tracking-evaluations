/*
FUNCTION_NAME: FUN_01bd95b0
ENTRY_POINT: 01bd95b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 259
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_01bd95b0(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_0377e849 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
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
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
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
    DAT_0377e849 = 1;
  }
  puVar2 = StringLiteral_11159;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar17 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar14 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    uVar13 = thunk_FUN_00d48444(StringLiteral_5910);
    FUN_016f4460(uVar17,uVar14,uVar13,0);
    uVar14 = thunk_FUN_00d48444(StringLiteral_7898);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar17,uVar14);
  }
  plVar5 = (long *)thunk_FUN_00d93c64(param_1,0);
  uVar17 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  plVar6 = (long *)FUN_01780344(uVar17,0);
  if (plVar5 == plVar6) {
    uVar17 = *(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
    lVar15 = thunk_FUN_00d6225c(param_1,uVar17);
    if (lVar15 != 0) {
      FUN_01bda18c(lVar15,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_1,uVar17);
  }
  uVar17 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar17,0);
  if (plVar5 == plVar6) {
    if (param_2 != (long *)0x0) {
      if (*param_1 ==
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
        pcVar16 = *(code **)(*param_2 + 0x2b8);
        uVar17 = *(undefined8 *)(*param_2 + 0x2c0);
        goto LAB_01bd9d4c;
      }
      goto LAB_01bda0fc;
    }
    goto LAB_01bda0f8;
  }
  uVar17 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar17,0);
  if (plVar5 == plVar6) {
    if (param_2 == (long *)0x0) goto LAB_01bda0f8;
    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
    goto LAB_01bda0fc;
    pbVar9 = (byte *)thunk_FUN_00d624a0(param_1);
    uVar4 = (uint)*pbVar9;
    pcVar16 = *(code **)(*param_2 + 0x1b8);
    uVar17 = *(undefined8 *)(*param_2 + 0x1c0);
    goto LAB_01bd9c8c;
  }
  uVar17 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar17,0);
  if (plVar5 == plVar6) {
    if (param_2 == (long *)0x0) goto LAB_01bda0f8;
    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
    goto LAB_01bda0fc;
    pbVar9 = (byte *)thunk_FUN_00d624a0(param_1);
    pcVar16 = *(code **)(*param_2 + 0x1c8);
    uVar17 = *(undefined8 *)(*param_2 + 0x1d0);
LAB_01bd9c48:
    uVar4 = (uint)*pbVar9;
    goto LAB_01bd9c8c;
  }
  uVar17 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar17,0);
  if (plVar5 == plVar6) {
    if (param_2 == (long *)0x0) goto LAB_01bda0f8;
    if (*(long *)(*param_1 + 0x40) !=
        *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40)) goto LAB_01bda0fc;
    puVar11 = (ushort *)thunk_FUN_00d624a0(param_1);
    pcVar16 = *(code **)(*param_2 + 0x208);
    uVar17 = *(undefined8 *)(*param_2 + 0x210);
  }
  else {
    uVar17 = *(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar17,0);
    puVar2 = StringLiteral_2672;
    if (plVar5 == plVar6) {
      if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)StringLiteral_2672 + 0x40))
      goto LAB_01bda0fc;
      puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_1);
      local_38 = *puVar8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      param_1 = (long *)FUN_0174d880(&local_38,0);
      if (param_2 == (long *)0x0) goto LAB_01bda0f8;
      lVar15 = *param_2;
LAB_01bd9cf0:
      pcVar16 = *(code **)(lVar15 + 0x288);
      uVar17 = *(undefined8 *)(lVar15 + 0x290);
LAB_01bd9d4c:
      (*pcVar16)(param_2,param_1,uVar17);
      return;
    }
    uVar17 = *(undefined8 *)StringLiteral_3349;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar17,0);
    if (plVar5 == plVar6) {
      if (*(long *)(*param_1 + 0x40) ==
          *(long *)(*(long *)
                     UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo + 0x40
                   )) {
        puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        uStack_48 = puVar8[1];
        local_50 = *puVar8;
        param_1 = (long *)FUN_0176b070(&local_50,0);
        if (param_2 != (long *)0x0) {
          pcVar16 = *(code **)(*param_2 + 0x1e8);
          uVar17 = *(undefined8 *)(*param_2 + 0x1f0);
          goto LAB_01bd9d4c;
        }
        goto LAB_01bda0f8;
      }
LAB_01bda0fc:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_1);
    }
    uVar17 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar17,0);
    if (plVar5 == plVar6) {
      if (param_2 == (long *)0x0) goto LAB_01bda0f8;
      if (*(long *)(*param_1 + 0x40) ==
          *(long *)(*(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo + 0x40)) {
        puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        (**(code **)(*param_2 + 0x238))(param_2,*puVar8,puVar8[1],*(undefined8 *)(*param_2 + 0x240))
        ;
        return;
      }
      goto LAB_01bda0fc;
    }
    uVar17 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar17,0);
    if (plVar5 == plVar6) {
      if (param_2 == (long *)0x0) goto LAB_01bda0f8;
      if (*(long *)(*param_1 + 0x40) == *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
        puVar8 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        (**(code **)(*param_2 + 0x228))(*puVar8,param_2,*(undefined8 *)(*param_2 + 0x230));
        return;
      }
      goto LAB_01bda0fc;
    }
    uVar17 = *(undefined8 *)StringLiteral_5228;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar17,0);
    if (plVar5 != plVar6) {
      uVar17 = *(undefined8 *)
                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar6 = (long *)FUN_01780344(uVar17,0);
      if (plVar5 == plVar6) {
        if (param_2 == (long *)0x0) goto LAB_01bda0f8;
        if (*(long *)(*param_1 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                     0x40)) goto LAB_01bda0fc;
        puVar12 = (uint *)thunk_FUN_00d624a0(param_1);
        lVar15 = *param_2;
        uVar4 = *puVar12;
      }
      else {
        uVar17 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 == (long *)0x0) goto LAB_01bda0f8;
          if (*(long *)(*param_1 + 0x40) !=
              *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
          goto LAB_01bda0fc;
          param_1 = (long *)thunk_FUN_00d624a0(param_1);
          lVar15 = *param_2;
          param_1 = (long *)*param_1;
          goto LAB_01bd9cf0;
        }
        uVar17 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 == (long *)0x0) goto LAB_01bda0f8;
          if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
          goto LAB_01bda0fc;
          pbVar9 = (byte *)thunk_FUN_00d624a0(param_1);
          pcVar16 = *(code **)(*param_2 + 0x1d8);
          uVar17 = *(undefined8 *)(*param_2 + 0x1e0);
          goto LAB_01bd9c48;
        }
        uVar17 = *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 != (long *)0x0) {
            if (*(long *)(*param_1 + 0x40) ==
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40)) {
              puVar10 = (undefined4 *)thunk_FUN_00d624a0(param_1);
              (**(code **)(*param_2 + 0x2a8))(*puVar10,param_2,*(undefined8 *)(*param_2 + 0x2b0));
              return;
            }
            goto LAB_01bda0fc;
          }
          goto LAB_01bda0f8;
        }
        uVar17 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 == (long *)0x0) goto LAB_01bda0f8;
          if (*(long *)(*param_1 + 0x40) !=
              *(long *)(*(long *)
                         Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                       + 0x40)) goto LAB_01bda0fc;
          puVar11 = (ushort *)thunk_FUN_00d624a0(param_1);
          pcVar16 = *(code **)(*param_2 + 600);
          uVar17 = *(undefined8 *)(*param_2 + 0x260);
          goto LAB_01bd9c88;
        }
        uVar17 = *(undefined8 *)StringLiteral_6673;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 != (long *)0x0) {
            if (*(long *)(*param_1 + 0x40) ==
                *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40)) {
              puVar12 = (uint *)thunk_FUN_00d624a0(param_1);
              uVar4 = *puVar12;
              pcVar16 = *(code **)(*param_2 + 0x278);
              uVar17 = *(undefined8 *)(*param_2 + 0x280);
              goto LAB_01bd9c8c;
            }
            goto LAB_01bda0fc;
          }
          goto LAB_01bda0f8;
        }
        uVar17 = *(undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        if (plVar5 == plVar6) {
          if (param_2 == (long *)0x0) goto LAB_01bda0f8;
          if (*(long *)(*param_1 + 0x40) !=
              *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40))
          goto LAB_01bda0fc;
          param_1 = (long *)thunk_FUN_00d624a0(param_1);
          param_1 = (long *)*param_1;
          pcVar16 = *(code **)(*param_2 + 0x298);
          uVar17 = *(undefined8 *)(*param_2 + 0x2a0);
          goto LAB_01bd9d4c;
        }
        uVar17 = *(undefined8 *)System_Security_Principal_WindowsImpersonationContext_TypeInfo;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar17,0);
        puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
        if (plVar5 == plVar6) {
          if (*(long *)(*param_1 + 0x40) !=
              *(long *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0x40)) goto LAB_01bda0fc;
          param_1 = (long *)thunk_FUN_00d624a0(param_1);
          param_1 = (long *)*param_1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (param_2 != (long *)0x0) {
            pcVar16 = *(code **)(*param_2 + 0x288);
            uVar17 = *(undefined8 *)(*param_2 + 0x290);
            goto LAB_01bd9d4c;
          }
LAB_01bda0f8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (plVar5 == (long *)0x0) goto LAB_01bda0f8;
        uVar7 = (**(code **)(*plVar5 + 0x5c8))(plVar5,*(undefined8 *)(*plVar5 + 0x5d0));
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_01bda1cc(plVar5);
          if ((uVar7 & 1) == 0) {
            FUN_00ac2be8(plVar5);
            uVar17 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
            uVar14 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_List<ShadowUtility_Edge>_get_Item__
                                       );
            uVar17 = FUN_015f6780(uVar14,uVar17,0);
            thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
            uVar14 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            FUN_017713a8(uVar14,uVar17,0);
            uVar17 = thunk_FUN_00d48444(StringLiteral_7898);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar14,uVar17);
          }
          lVar15 = *param_1;
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(lVar15 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
          goto LAB_01bda0fc;
          param_1 = (long *)(**(code **)(lVar15 + 0x2f8))(param_1,*(undefined8 *)(lVar15 + 0x300));
          if (param_2 != (long *)0x0) {
            pcVar16 = *(code **)(*param_2 + 0x2b8);
            uVar17 = *(undefined8 *)(*param_2 + 0x2c0);
            goto LAB_01bd9d4c;
          }
          goto LAB_01bda0f8;
        }
        if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_016feb0c(param_1,0);
        if (param_2 == (long *)0x0) goto LAB_01bda0f8;
        lVar15 = *param_2;
      }
      pcVar16 = *(code **)(lVar15 + 0x268);
      uVar17 = *(undefined8 *)(lVar15 + 0x270);
      goto LAB_01bd9c8c;
    }
    if (param_2 == (long *)0x0) goto LAB_01bda0f8;
    if (*(long *)(*param_1 + 0x40) !=
        *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
    goto LAB_01bda0fc;
    puVar11 = (ushort *)thunk_FUN_00d624a0(param_1);
    pcVar16 = *(code **)(*param_2 + 0x248);
    uVar17 = *(undefined8 *)(*param_2 + 0x250);
  }
LAB_01bd9c88:
  uVar4 = (uint)*puVar11;
LAB_01bd9c8c:
  (*pcVar16)(param_2,uVar4,uVar17);
  return;
}


