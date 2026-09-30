/*
FUNCTION_NAME: FUN_0122c8c0
ENTRY_POINT: 0122c8c0
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


void FUN_0122c8c0(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  byte *pbVar10;
  ushort *puVar11;
  uint *puVar12;
  float *pfVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *__dest;
  long *plVar18;
  ulong __n;
  undefined1 *__dest_00;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_80 [8];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_03776464 & 1) == 0) {
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
    DAT_03776464 = 1;
  }
  plVar18 = (long *)(param_3 + 0x20);
  lVar7 = *plVar18;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar6 = thunk_FUN_00d42afc();
    uVar15 = iVar6 - 0x10;
  }
  else {
    uVar15 = 8;
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  __n = (ulong)uVar15;
  uVar17 = __n + 0xf & 0x1fffffff0;
  __dest_00 = auStack_80 + -uVar17;
  __dest = __dest_00 + -uVar17;
  lVar7 = *plVar18;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar19 = FUN_01780344(uVar19,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
  uVar17 = FUN_01789ac0(uVar19,uVar8,0);
  if ((uVar17 & 1) == 0) {
    lVar7 = *plVar18;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar4 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar19 = FUN_01780344(uVar19,0);
    uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar17 = FUN_01789ac0(uVar19,uVar8,0);
    if ((uVar17 & 1) != 0) {
      memcpy(__dest_00,param_1,__n);
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
      memcpy(__dest,param_2,__n);
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
      plVar2 = (long *)StringLiteral_7239;
      goto joined_r0x0122cc4c;
    }
    lVar7 = *plVar18;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar19 = FUN_01780344(uVar19,0);
    uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar17 = FUN_01789ac0(uVar19,uVar8,0);
    if ((uVar17 & 1) == 0) {
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar4 = StringLiteral_5228;
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar19 = FUN_01780344(uVar19,0);
      uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
      uVar17 = FUN_01789ac0(uVar19,uVar8,0);
      if ((uVar17 & 1) != 0) {
        memcpy(__dest_00,param_1,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
        memcpy(__dest,param_2,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
        plVar2 = (long *)Method_System_Data_Common_UInt32Storage_Aggregate__;
        goto joined_r0x0122cebc;
      }
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      puVar4 = StringLiteral_6673;
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar19 = FUN_01780344(uVar19,0);
      uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
      uVar17 = FUN_01789ac0(uVar19,uVar8,0);
      if ((uVar17 & 1) == 0) {
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar19 = FUN_01780344(uVar19,0);
        uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
        uVar17 = FUN_01789ac0(uVar19,uVar8,0);
        if ((uVar17 & 1) == 0) {
          lVar7 = *plVar18;
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          puVar4 = 
          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
          uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar19 = FUN_01780344(uVar19,0);
          uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
          uVar17 = FUN_01789ac0(uVar19,uVar8,0);
          if ((uVar17 & 1) == 0) {
            lVar7 = *plVar18;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
            uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            uVar19 = FUN_01780344(uVar19,0);
            uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
            uVar17 = FUN_01789ac0(uVar19,uVar8,0);
            if ((uVar17 & 1) == 0) {
              lVar7 = *plVar18;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              puVar4 = 
              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
              uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              uVar19 = FUN_01780344(uVar19,0);
              uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
              uVar17 = FUN_01789ac0(uVar19,uVar8,0);
              if ((uVar17 & 1) != 0) {
                memcpy(__dest_00,param_1,__n);
                lVar7 = *plVar18;
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
                memcpy(__dest,param_2,__n);
                lVar7 = *plVar18;
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
                puVar3 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                if (plVar9 == (long *)0x0) goto LAB_0122d620;
                if (*(long *)(*plVar9 + 0x40) !=
                    *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
                goto LAB_0122d628;
                pfVar13 = (float *)thunk_FUN_00d624a0(plVar9);
                if (plVar18 == (long *)0x0) goto LAB_0122d620;
                if (*(long *)(*plVar18 + 0x40) == *(long *)(*(long *)puVar3 + 0x40)) {
                  fVar20 = *pfVar13;
                  pfVar13 = (float *)thunk_FUN_00d624a0(plVar18);
                  bVar5 = fVar20 == *pfVar13;
                  goto LAB_0122ccac;
                }
                goto LAB_0122d630;
              }
              lVar7 = *plVar18;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              uVar19 = FUN_01780344(uVar19,0);
              uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
              uVar17 = FUN_01789ac0(uVar19,uVar8,0);
              if ((uVar17 & 1) == 0) {
                thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                uVar19 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                uVar8 = thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                          );
                FUN_0176c578(uVar19,uVar8,0);
                uVar8 = thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_set_ReadTimeout__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar19,uVar8);
              }
              memcpy(__dest_00,param_1,__n);
              lVar7 = *plVar18;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
              memcpy(__dest,param_2,__n);
              lVar7 = *plVar18;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
              puVar3 = PTR_DAT_033f2f78;
              if (plVar9 == (long *)0x0) goto LAB_0122d620;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40))
              goto LAB_0122d628;
              pdVar14 = (double *)thunk_FUN_00d624a0(plVar9);
              if (plVar18 == (long *)0x0) goto LAB_0122d620;
              if (*(long *)(*plVar18 + 0x40) != *(long *)(*(long *)puVar3 + 0x40))
              goto LAB_0122d630;
              dVar21 = *pdVar14;
              pdVar14 = (double *)thunk_FUN_00d624a0(plVar18);
              bVar5 = dVar21 == *pdVar14;
              goto LAB_0122ccac;
            }
            memcpy(__dest_00,param_1,__n);
            lVar7 = *plVar18;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
            memcpy(__dest,param_2,__n);
            lVar7 = *plVar18;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
            plVar2 = (long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
          }
          else {
            memcpy(__dest_00,param_1,__n);
            lVar7 = *plVar18;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
            memcpy(__dest,param_2,__n);
            lVar7 = *plVar18;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
            plVar2 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
          }
          if (plVar9 == (long *)0x0) goto LAB_0122d620;
          if (*(long *)(*plVar9 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d628;
          plVar9 = (long *)thunk_FUN_00d624a0(plVar9);
          if (plVar18 == (long *)0x0) goto LAB_0122d620;
          if (*(long *)(*plVar18 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d630;
          lVar7 = *plVar9;
          plVar18 = (long *)thunk_FUN_00d624a0(plVar18);
          bVar5 = lVar7 == *plVar18;
          goto LAB_0122ccac;
        }
        memcpy(__dest_00,param_1,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
        memcpy(__dest,param_2,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
        plVar2 = (long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      }
      else {
        memcpy(__dest_00,param_1,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
        memcpy(__dest,param_2,__n);
        lVar7 = *plVar18;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
        plVar2 = (long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
      }
      if (plVar9 == (long *)0x0) goto LAB_0122d620;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d628;
      puVar12 = (uint *)thunk_FUN_00d624a0(plVar9);
      if (plVar18 == (long *)0x0) goto LAB_0122d620;
      if (*(long *)(*plVar18 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d630;
      uVar15 = *puVar12;
      puVar12 = (uint *)thunk_FUN_00d624a0(plVar18);
      uVar16 = *puVar12;
    }
    else {
      memcpy(__dest_00,param_1,__n);
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
      memcpy(__dest,param_2,__n);
      lVar7 = *plVar18;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
      plVar2 = (long *)
               Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
      ;
joined_r0x0122cebc:
      if (plVar9 == (long *)0x0) goto LAB_0122d620;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d628;
      puVar11 = (ushort *)thunk_FUN_00d624a0(plVar9);
      if (plVar18 == (long *)0x0) goto LAB_0122d620;
      if (*(long *)(*plVar18 + 0x40) != *(long *)(*plVar2 + 0x40)) goto LAB_0122d630;
      uVar15 = (uint)*puVar11;
      puVar11 = (ushort *)thunk_FUN_00d624a0(plVar18);
      uVar16 = (uint)*puVar11;
    }
  }
  else {
    memcpy(__dest_00,param_1,__n);
    lVar7 = *plVar18;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar9 = (long *)thunk_FUN_00d61fa0(lVar7,__dest_00);
    memcpy(__dest,param_2,__n);
    lVar7 = *plVar18;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar18 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
    plVar2 = (long *)UnityEngine_Texture2D___TypeInfo;
joined_r0x0122cc4c:
    if (plVar9 == (long *)0x0) {
LAB_0122d620:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*plVar2 + 0x40)) {
LAB_0122d628:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar9);
    }
    pbVar10 = (byte *)thunk_FUN_00d624a0(plVar9);
    if (plVar18 == (long *)0x0) goto LAB_0122d620;
    if (*(long *)(*plVar18 + 0x40) != *(long *)(*plVar2 + 0x40)) {
LAB_0122d630:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar18);
    }
    uVar15 = (uint)*pbVar10;
    pbVar10 = (byte *)thunk_FUN_00d624a0(plVar18);
    uVar16 = (uint)*pbVar10;
  }
  bVar5 = uVar15 == uVar16;
LAB_0122ccac:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


