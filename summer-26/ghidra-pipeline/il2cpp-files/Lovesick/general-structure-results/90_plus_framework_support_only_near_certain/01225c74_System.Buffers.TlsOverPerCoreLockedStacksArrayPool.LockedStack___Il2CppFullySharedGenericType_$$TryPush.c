/*
FUNCTION_NAME: System.Buffers.TlsOverPerCoreLockedStacksArrayPool.LockedStack<__Il2CppFullySharedGenericType>$$TryPush
ENTRY_POINT: 01225c74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 143
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack<__Il2CppFullySharedGenericType>__TryPush
               (void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  void *__src;
  long lVar9;
  undefined8 *puVar10;
  void *unaff_x19;
  long unaff_x20;
  size_t __n;
  long unaff_x21;
  long *plVar11;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar12;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
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
  *(undefined1 *)(unaff_x20 + 0x45d) = 1;
  plVar11 = (long *)(unaff_x21 + 0x20);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    __n = (size_t)(iVar4 - 0x10);
  }
  else {
    __n = 8;
  }
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar9 = *plVar11;
  uVar1 = *(ushort *)(lVar9 + 0x132);
  lVar5 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_00d5941c(lVar9);
    uVar1 = *(ushort *)(*plVar11 + 0x132);
    lVar5 = *plVar11;
  }
  uVar12 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_00d5941c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  (**(code **)(lVar5 + 0x10))(uVar12,lVar5,0,0,&stack0x00000008);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((unaff_w22 < 0) || (iStack0000000000000008 <= unaff_w22)) {
    _iStack0000000000000008 = CONCAT44(uStack000000000000000c,unaff_w22);
    uVar12 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               );
    uVar12 = thunk_FUN_00d61fa0(uVar12,&stack0x00000008);
    uVar6 = thunk_FUN_00d48444(StringLiteral_3156);
    uVar12 = FUN_015e14fc(uVar6,uVar12,0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                      );
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0176c6a4(uVar6,uVar12,0);
    uVar12 = thunk_FUN_00d48444(
                               Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar12);
  }
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar12 = FUN_01780344(uVar12,0);
  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar7 = FUN_01789ac0(uVar12,uVar6,0);
  if ((uVar7 & 1) != 0) {
    _iStack0000000000000008 = CONCAT71(stack0x00000009,*(undefined1 *)(unaff_x23 + unaff_w22));
    plVar8 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,
                                        &stack0x00000008);
    lVar5 = *plVar11;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c(lVar5);
    }
    goto joined_r0x01226344;
  }
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar12 = FUN_01780344(uVar12,0);
  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar7 = FUN_01789ac0(uVar12,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *plVar11;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar12 = FUN_01780344(uVar12,0);
    uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
    uVar7 = FUN_01789ac0(uVar12,uVar6,0);
    puVar10 = (undefined8 *)
              Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
    ;
    if ((uVar7 & 1) == 0) {
      lVar5 = *plVar11;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      puVar2 = StringLiteral_5228;
      uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar12 = FUN_01780344(uVar12,0);
      uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
      uVar7 = FUN_01789ac0(uVar12,uVar6,0);
      puVar10 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
      if ((uVar7 & 1) == 0) {
        lVar5 = *plVar11;
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        puVar2 = StringLiteral_6673;
        uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar12 = FUN_01780344(uVar12,0);
        uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
        uVar7 = FUN_01789ac0(uVar12,uVar6,0);
        puVar10 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
        if ((uVar7 & 1) == 0) {
          lVar5 = *plVar11;
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
          uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar12 = FUN_01780344(uVar12,0);
          uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
          uVar7 = FUN_01789ac0(uVar12,uVar6,0);
          puVar10 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          if ((uVar7 & 1) == 0) {
            lVar5 = *plVar11;
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            puVar2 = 
            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
            uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            uVar12 = FUN_01780344(uVar12,0);
            uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
            uVar7 = FUN_01789ac0(uVar12,uVar6,0);
            puVar10 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            if ((uVar7 & 1) == 0) {
              lVar5 = *plVar11;
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
              uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              uVar12 = FUN_01780344(uVar12,0);
              uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
              uVar7 = FUN_01789ac0(uVar12,uVar6,0);
              puVar10 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              if ((uVar7 & 1) == 0) {
                lVar5 = *plVar11;
                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                  lVar5 = FUN_00d5941c();
                }
                puVar2 = 
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
                uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar12 = FUN_01780344(uVar12,0);
                uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                uVar7 = FUN_01789ac0(uVar12,uVar6,0);
                puVar10 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
                if ((uVar7 & 1) != 0) goto LAB_0122611c;
                lVar5 = *plVar11;
                if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                  lVar5 = FUN_00d5941c();
                }
                puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar12 = FUN_01780344(uVar12,0);
                uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                uVar7 = FUN_01789ac0(uVar12,uVar6,0);
                puVar10 = (undefined8 *)PTR_DAT_033f2f78;
                if ((uVar7 & 1) == 0) {
                  thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                  uVar12 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  uVar6 = thunk_FUN_00d48444(
                                            Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                            );
                  FUN_0176c578(uVar12,uVar6,0);
                  uVar6 = thunk_FUN_00d48444(
                                            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar12,uVar6);
                }
              }
            }
            _iStack0000000000000008 = *(undefined8 *)(unaff_x23 + (long)unaff_w22 * 8);
            uVar12 = *puVar10;
            goto LAB_01226304;
          }
        }
LAB_0122611c:
        uVar12 = *puVar10;
        _iStack0000000000000008 =
             CONCAT44(uStack000000000000000c,*(undefined4 *)(unaff_x23 + (long)unaff_w22 * 4));
        goto LAB_01226304;
      }
    }
    uVar12 = *puVar10;
    _iStack0000000000000008 =
         CONCAT62(stack0x0000000a,*(undefined2 *)(unaff_x23 + (long)unaff_w22 * 2));
  }
  else {
    uVar12 = *(undefined8 *)StringLiteral_7239;
    _iStack0000000000000008 = CONCAT71(stack0x00000009,*(undefined1 *)(unaff_x23 + unaff_w22));
  }
LAB_01226304:
  plVar8 = (long *)thunk_FUN_00d61fa0(uVar12,&stack0x00000008);
  lVar5 = *plVar11;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c(lVar5);
  }
joined_r0x01226344:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar5 + 0x40)) {
    __src = (void *)thunk_FUN_00d624a0();
    memcpy(unaff_x19,__src,__n);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(plVar8);
}


