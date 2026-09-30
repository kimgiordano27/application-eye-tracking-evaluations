/*
FUNCTION_NAME: FUN_0122d684
ENTRY_POINT: 0122d684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0122d684(void *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  void *__src;
  undefined4 uVar8;
  undefined8 *puVar9;
  size_t __n;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_38;
  
  if ((DAT_03776465 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
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
    DAT_03776465 = 1;
  }
  plVar10 = (long *)(param_2 + 0x20);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    __n = (size_t)(iVar3 - 0x10);
  }
  else {
    __n = 8;
  }
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar11 = FUN_01780344(uVar11,0);
  uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
  uVar6 = FUN_01789ac0(uVar11,uVar5,0);
  puVar9 = (undefined8 *)UnityEngine_Texture2D___TypeInfo;
  if ((uVar6 & 1) == 0) {
    lVar4 = *plVar10;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar11 = FUN_01780344(uVar11,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    uVar6 = FUN_01789ac0(uVar11,uVar5,0);
    puVar9 = (undefined8 *)StringLiteral_7239;
    if ((uVar6 & 1) == 0) {
      lVar4 = *plVar10;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar11 = FUN_01780344(uVar11,0);
      uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
      uVar6 = FUN_01789ac0(uVar11,uVar5,0);
      puVar9 = (undefined8 *)
               Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
      if ((uVar6 & 1) == 0) {
        lVar4 = *plVar10;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        puVar1 = StringLiteral_5228;
        uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar11 = FUN_01780344(uVar11,0);
        uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
        uVar6 = FUN_01789ac0(uVar11,uVar5,0);
        puVar9 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
        if ((uVar6 & 1) == 0) {
          lVar4 = *plVar10;
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          puVar1 = StringLiteral_6673;
          uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar11 = FUN_01780344(uVar11,0);
          uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
          uVar6 = FUN_01789ac0(uVar11,uVar5,0);
          puVar9 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
          if ((uVar6 & 1) == 0) {
            lVar4 = *plVar10;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
            uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar11 = FUN_01780344(uVar11,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar6 = FUN_01789ac0(uVar11,uVar5,0);
            puVar9 = (undefined8 *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            if ((uVar6 & 1) != 0) goto LAB_0122db3c;
            lVar4 = *plVar10;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar1 = 
            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
            uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar11 = FUN_01780344(uVar11,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar6 = FUN_01789ac0(uVar11,uVar5,0);
            puVar9 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
            if ((uVar6 & 1) != 0) {
LAB_0122dc30:
              uVar11 = *puVar9;
              local_38 = 1;
              goto LAB_0122d8e0;
            }
            lVar4 = *plVar10;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
            uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar11 = FUN_01780344(uVar11,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar6 = FUN_01789ac0(uVar11,uVar5,0);
            puVar9 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
            if ((uVar6 & 1) != 0) goto LAB_0122dc30;
            lVar4 = *plVar10;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar1 = 
            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
            uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar11 = FUN_01780344(uVar11,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar6 = FUN_01789ac0(uVar11,uVar5,0);
            if ((uVar6 & 1) == 0) {
              lVar4 = *plVar10;
              if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                lVar4 = FUN_00d5941c();
              }
              puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar11 = FUN_01780344(uVar11,0);
              uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
              uVar6 = FUN_01789ac0(uVar11,uVar5,0);
              if ((uVar6 & 1) == 0) {
                thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                uVar11 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                uVar5 = thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                          );
                FUN_0176c578(uVar11,uVar5,0);
                uVar5 = thunk_FUN_00d48444(Method_System_Data_DataRow_CheckColumn__);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar11,uVar5);
              }
              uVar11 = *(undefined8 *)PTR_DAT_033f2f78;
              local_38 = 0x3ff0000000000000;
              goto LAB_0122d8e0;
            }
            uVar11 = *(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
            uVar8 = 0x3f800000;
          }
          else {
LAB_0122db3c:
            uVar11 = *puVar9;
            uVar8 = 1;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar8);
          goto LAB_0122d8e0;
        }
      }
      uVar11 = *puVar9;
      local_38 = CONCAT62(local_38._2_6_,1);
      goto LAB_0122d8e0;
    }
  }
  uVar11 = *puVar9;
  local_38 = CONCAT71(local_38._1_7_,1);
LAB_0122d8e0:
  plVar7 = (long *)thunk_FUN_00d61fa0(uVar11,&local_38);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar7 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar7);
  }
  __src = (void *)thunk_FUN_00d624a0();
  memcpy(param_1,__src,__n);
  return;
}


