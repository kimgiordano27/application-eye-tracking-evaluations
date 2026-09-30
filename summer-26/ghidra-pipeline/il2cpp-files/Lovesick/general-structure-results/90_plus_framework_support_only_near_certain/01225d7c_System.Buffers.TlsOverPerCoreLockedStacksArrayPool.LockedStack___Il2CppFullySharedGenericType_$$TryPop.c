/*
FUNCTION_NAME: System.Buffers.TlsOverPerCoreLockedStacksArrayPool.LockedStack<__Il2CppFullySharedGenericType>$$TryPop
ENTRY_POINT: 01225d7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 139
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack<__Il2CppFullySharedGenericType>__TryPop
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  void *__src;
  undefined8 *puVar7;
  void *unaff_x19;
  size_t unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar8;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar3 = FUN_00d5941c(param_1);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x28) + 0x10))();
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((unaff_w22 < 0) || (iStack0000000000000008 <= unaff_w22)) {
    _iStack0000000000000008 = CONCAT44(uStack000000000000000c,unaff_w22);
    uVar8 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                              );
    uVar8 = thunk_FUN_00d61fa0(uVar8,&stack0x00000008);
    uVar4 = thunk_FUN_00d48444(StringLiteral_3156);
    uVar8 = FUN_015e14fc(uVar4,uVar8,0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_Dispose__
                      );
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0176c6a4(uVar4,uVar8,0);
    uVar8 = thunk_FUN_00d48444(
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar8);
  }
  lVar3 = *unaff_x21;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar8 = FUN_01780344(uVar8,0);
  uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
  uVar5 = FUN_01789ac0(uVar8,uVar4,0);
  if ((uVar5 & 1) != 0) {
    _iStack0000000000000008 = CONCAT71(stack0x00000009,*(undefined1 *)(unaff_x23 + unaff_w22));
    plVar6 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,
                                        &stack0x00000008);
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c(lVar3);
    }
    goto joined_r0x01226344;
  }
  lVar3 = *unaff_x21;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar8 = FUN_01780344(uVar8,0);
  uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
  uVar5 = FUN_01789ac0(uVar8,uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar8 = FUN_01780344(uVar8,0);
    uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
    uVar5 = FUN_01789ac0(uVar8,uVar4,0);
    puVar7 = (undefined8 *)
             Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
    ;
    if ((uVar5 & 1) == 0) {
      lVar3 = *unaff_x21;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      puVar1 = StringLiteral_5228;
      uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = FUN_01780344(uVar8,0);
      uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
      uVar5 = FUN_01789ac0(uVar8,uVar4,0);
      puVar7 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
      if ((uVar5 & 1) == 0) {
        lVar3 = *unaff_x21;
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_00d5941c();
        }
        puVar1 = StringLiteral_6673;
        uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar8 = FUN_01780344(uVar8,0);
        uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
        uVar5 = FUN_01789ac0(uVar8,uVar4,0);
        puVar7 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
        if ((uVar5 & 1) == 0) {
          lVar3 = *unaff_x21;
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
          uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar8 = FUN_01780344(uVar8,0);
          uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
          uVar5 = FUN_01789ac0(uVar8,uVar4,0);
          puVar7 = (undefined8 *)
                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          if ((uVar5 & 1) == 0) {
            lVar3 = *unaff_x21;
            if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
              lVar3 = FUN_00d5941c();
            }
            puVar1 = 
            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
            uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar8 = FUN_01780344(uVar8,0);
            uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar5 = FUN_01789ac0(uVar8,uVar4,0);
            puVar7 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            if ((uVar5 & 1) == 0) {
              lVar3 = *unaff_x21;
              if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                lVar3 = FUN_00d5941c();
              }
              puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
              uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar8 = FUN_01780344(uVar8,0);
              uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
              uVar5 = FUN_01789ac0(uVar8,uVar4,0);
              puVar7 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
              if ((uVar5 & 1) == 0) {
                lVar3 = *unaff_x21;
                if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                  lVar3 = FUN_00d5941c();
                }
                puVar1 = 
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
                uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar8 = FUN_01780344(uVar8,0);
                uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                uVar5 = FUN_01789ac0(uVar8,uVar4,0);
                puVar7 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
                if ((uVar5 & 1) != 0) goto LAB_0122611c;
                lVar3 = *unaff_x21;
                if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                  lVar3 = FUN_00d5941c();
                }
                puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar8 = FUN_01780344(uVar8,0);
                uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                uVar5 = FUN_01789ac0(uVar8,uVar4,0);
                puVar7 = (undefined8 *)PTR_DAT_033f2f78;
                if ((uVar5 & 1) == 0) {
                  thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                  uVar8 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  uVar4 = thunk_FUN_00d48444(
                                            Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                            );
                  FUN_0176c578(uVar8,uVar4,0);
                  uVar4 = thunk_FUN_00d48444(
                                            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar8,uVar4);
                }
              }
            }
            _iStack0000000000000008 = *(undefined8 *)(unaff_x23 + (long)unaff_w22 * 8);
            uVar8 = *puVar7;
            goto LAB_01226304;
          }
        }
LAB_0122611c:
        uVar8 = *puVar7;
        _iStack0000000000000008 =
             CONCAT44(uStack000000000000000c,*(undefined4 *)(unaff_x23 + (long)unaff_w22 * 4));
        goto LAB_01226304;
      }
    }
    uVar8 = *puVar7;
    _iStack0000000000000008 =
         CONCAT62(stack0x0000000a,*(undefined2 *)(unaff_x23 + (long)unaff_w22 * 2));
  }
  else {
    uVar8 = *(undefined8 *)StringLiteral_7239;
    _iStack0000000000000008 = CONCAT71(stack0x00000009,*(undefined1 *)(unaff_x23 + unaff_w22));
  }
LAB_01226304:
  plVar6 = (long *)thunk_FUN_00d61fa0(uVar8,&stack0x00000008);
  lVar3 = *unaff_x21;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
  }
joined_r0x01226344:
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar3 + 0x40)) {
    __src = (void *)thunk_FUN_00d624a0();
    memcpy(unaff_x19,__src,unaff_x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c(plVar6);
}


