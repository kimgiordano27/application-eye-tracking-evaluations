/*
FUNCTION_NAME: Oculus.Platform.Message<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0122decc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void Oculus_Platform_Message<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  void *__src;
  undefined8 *puVar8;
  void *unaff_x19;
  size_t __n;
  long *unaff_x21;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
    param_1 = FUN_00d5941c();
  }
  if (*(int *)(param_1 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    __n = (size_t)(iVar3 - 0x10);
  }
  else {
    __n = 8;
  }
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar4 = *unaff_x21;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar9 = FUN_01780344(uVar9,0);
  uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
  uVar6 = FUN_01789ac0(uVar9,uVar5,0);
  puVar8 = (undefined8 *)UnityEngine_Texture2D___TypeInfo;
  if ((uVar6 & 1) == 0) {
    lVar4 = *unaff_x21;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar9 = FUN_01780344(uVar9,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    uVar6 = FUN_01789ac0(uVar9,uVar5,0);
    puVar8 = (undefined8 *)StringLiteral_7239;
    if ((uVar6 & 1) == 0) {
      lVar4 = *unaff_x21;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
      uVar6 = FUN_01789ac0(uVar9,uVar5,0);
      puVar8 = (undefined8 *)
               Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
      if ((uVar6 & 1) == 0) {
        lVar4 = *unaff_x21;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        puVar1 = StringLiteral_5228;
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar9 = FUN_01780344(uVar9,0);
        uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
        uVar6 = FUN_01789ac0(uVar9,uVar5,0);
        puVar8 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
        if ((uVar6 & 1) == 0) {
          lVar4 = *unaff_x21;
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          puVar1 = StringLiteral_6673;
          uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
          uVar6 = FUN_01789ac0(uVar9,uVar5,0);
          puVar8 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
          if ((uVar6 & 1) == 0) {
            lVar4 = *unaff_x21;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
            uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar9 = FUN_01780344(uVar9,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
            uVar6 = FUN_01789ac0(uVar9,uVar5,0);
            puVar8 = (undefined8 *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
            if ((uVar6 & 1) == 0) {
              lVar4 = *unaff_x21;
              if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                lVar4 = FUN_00d5941c();
              }
              puVar1 = 
              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
              ;
              uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar9 = FUN_01780344(uVar9,0);
              uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
              uVar6 = FUN_01789ac0(uVar9,uVar5,0);
              puVar8 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
              if ((uVar6 & 1) == 0) {
                lVar4 = *unaff_x21;
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar9 = FUN_01780344(uVar9,0);
                uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                uVar6 = FUN_01789ac0(uVar9,uVar5,0);
                puVar8 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
                if ((uVar6 & 1) == 0) {
                  lVar4 = *unaff_x21;
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  puVar1 = 
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                  ;
                  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar2);
                  }
                  uVar9 = FUN_01780344(uVar9,0);
                  uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                  uVar6 = FUN_01789ac0(uVar9,uVar5,0);
                  puVar8 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
                  if ((uVar6 & 1) != 0) goto LAB_0122e244;
                  lVar4 = *unaff_x21;
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar2);
                  }
                  uVar9 = FUN_01780344(uVar9,0);
                  uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                  uVar6 = FUN_01789ac0(uVar9,uVar5,0);
                  puVar8 = (undefined8 *)PTR_DAT_033f2f78;
                  if ((uVar6 & 1) == 0) {
                    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                    uVar9 = thunk_FUN_00d62348();
                    FUN_00ac2be8();
                    uVar5 = thunk_FUN_00d48444(
                                              Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                              );
                    FUN_0176c578(uVar9,uVar5,0);
                    uVar5 = thunk_FUN_00d48444(
                                              Method_System_Collections_Generic_List<Material>_Clear__
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar9,uVar5);
                  }
                }
              }
              uVar9 = *puVar8;
              in_stack_00000008 = 0xffffffffffffffff;
              goto LAB_0122dfe8;
            }
          }
LAB_0122e244:
          uVar9 = *puVar8;
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,0xffffffff);
          goto LAB_0122dfe8;
        }
      }
      uVar9 = *puVar8;
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0xffff);
      goto LAB_0122dfe8;
    }
  }
  uVar9 = *puVar8;
  in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,0xff);
LAB_0122dfe8:
  plVar7 = (long *)thunk_FUN_00d61fa0(uVar9,&stack0x00000008);
  lVar4 = *unaff_x21;
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
  memcpy(unaff_x19,__src,__n);
  return;
}


