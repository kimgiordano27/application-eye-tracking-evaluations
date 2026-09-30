/*
FUNCTION_NAME: FUN_01224f58
ENTRY_POINT: 01224f58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01224f58(undefined8 *param_1,long param_2,int param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int local_44;
  
  if ((DAT_0377645c & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    DAT_0377645c = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  plVar9 = (long *)(param_4 + 0x20);
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar13 = FUN_01780344(uVar13,0);
  uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar6 = FUN_01789ac0(uVar13,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *plVar9;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
    if ((uVar6 & 1) == 0) {
      lVar4 = *plVar9;
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar13 = FUN_01780344(uVar13,0);
      uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
      uVar6 = FUN_01789ac0(uVar13,uVar5,0);
      if ((uVar6 & 1) == 0) {
        lVar4 = *plVar9;
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        puVar2 = StringLiteral_5228;
        uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar13 = FUN_01780344(uVar13,0);
        uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
        uVar6 = FUN_01789ac0(uVar13,uVar5,0);
        if ((uVar6 & 1) == 0) {
          lVar4 = *plVar9;
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          puVar2 = StringLiteral_6673;
          uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar13 = FUN_01780344(uVar13,0);
          uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
          uVar6 = FUN_01789ac0(uVar13,uVar5,0);
          if ((uVar6 & 1) == 0) {
            lVar4 = *plVar9;
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
            uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            uVar13 = FUN_01780344(uVar13,0);
            uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
            uVar6 = FUN_01789ac0(uVar13,uVar5,0);
            if ((uVar6 & 1) == 0) {
              lVar4 = *plVar9;
              if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                lVar4 = FUN_00d5941c();
              }
              puVar2 = 
              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
              ;
              uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              uVar13 = FUN_01780344(uVar13,0);
              uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
              uVar6 = FUN_01789ac0(uVar13,uVar5,0);
              if ((uVar6 & 1) == 0) {
                lVar4 = *plVar9;
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar13 = FUN_01780344(uVar13,0);
                uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                uVar6 = FUN_01789ac0(uVar13,uVar5,0);
                if ((uVar6 & 1) == 0) {
                  lVar4 = *plVar9;
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  puVar2 = 
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                  ;
                  uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar3);
                  }
                  uVar13 = FUN_01780344(uVar13,0);
                  uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                  uVar6 = FUN_01789ac0(uVar13,uVar5,0);
                  if ((uVar6 & 1) == 0) {
                    lVar4 = *plVar9;
                    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                      lVar4 = FUN_00d5941c();
                    }
                    puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                    uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar3);
                    }
                    uVar13 = FUN_01780344(uVar13,0);
                    uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                    uVar6 = FUN_01789ac0(uVar13,uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
                      uVar13 = thunk_FUN_00d62348();
                      FUN_00ac2be8();
                      uVar5 = thunk_FUN_00d48444(
                                                Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                                );
                      FUN_0176c578(uVar13,uVar5,0);
                      uVar5 = thunk_FUN_00d48444(
                                                Method_System_Collections_Generic_HashSet_Enumerator<Action>_MoveNext__
                                                );
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar13,uVar5);
                    }
                    lVar4 = 0;
                    puVar12 = (undefined8 *)(param_2 + (long)param_3 * 8);
                    while( true ) {
                      lVar7 = *plVar9;
                      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                        lVar7 = FUN_00d5941c();
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                        lVar7 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar8 = *plVar9;
                      uVar1 = *(ushort *)(lVar8 + 0x132);
                      lVar7 = lVar8;
                      if ((uVar1 & 1) == 0) {
                        lVar8 = FUN_00d5941c(lVar8);
                        uVar1 = *(ushort *)(*plVar9 + 0x132);
                        lVar7 = *plVar9;
                      }
                      uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar7 = FUN_00d5941c(lVar7);
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                      (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
                      if (local_44 <= lVar4) break;
                      lVar4 = lVar4 + 1;
                      *param_1 = *puVar12;
                      param_1 = param_1 + 1;
                      puVar12 = puVar12 + 1;
                    }
                  }
                  else {
                    lVar4 = 0;
                    puVar11 = (undefined4 *)(param_2 + (long)param_3 * 4);
                    while( true ) {
                      lVar7 = *plVar9;
                      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                        lVar7 = FUN_00d5941c();
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                        lVar7 = FUN_00d5941c();
                      }
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar8 = *plVar9;
                      uVar1 = *(ushort *)(lVar8 + 0x132);
                      lVar7 = lVar8;
                      if ((uVar1 & 1) == 0) {
                        lVar8 = FUN_00d5941c(lVar8);
                        uVar1 = *(ushort *)(*plVar9 + 0x132);
                        lVar7 = *plVar9;
                      }
                      uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                      if ((uVar1 & 1) == 0) {
                        lVar7 = FUN_00d5941c(lVar7);
                      }
                      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                      (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
                      if (local_44 <= lVar4) break;
                      lVar4 = lVar4 + 1;
                      *(undefined4 *)param_1 = *puVar11;
                      param_1 = (undefined8 *)((long)param_1 + 4);
                      puVar11 = puVar11 + 1;
                    }
                  }
                }
                else {
                  lVar4 = 0;
                  puVar12 = (undefined8 *)(param_2 + (long)param_3 * 8);
                  while( true ) {
                    lVar7 = *plVar9;
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c();
                    }
                    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                      lVar7 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar8 = *plVar9;
                    uVar1 = *(ushort *)(lVar8 + 0x132);
                    lVar7 = lVar8;
                    if ((uVar1 & 1) == 0) {
                      lVar8 = FUN_00d5941c(lVar8);
                      uVar1 = *(ushort *)(*plVar9 + 0x132);
                      lVar7 = *plVar9;
                    }
                    uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar7 = FUN_00d5941c(lVar7);
                    }
                    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                    (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
                    if (local_44 <= lVar4) break;
                    lVar4 = lVar4 + 1;
                    *param_1 = *puVar12;
                    param_1 = param_1 + 1;
                    puVar12 = puVar12 + 1;
                  }
                }
              }
              else {
                lVar4 = 0;
                puVar12 = (undefined8 *)(param_2 + (long)param_3 * 8);
                while( true ) {
                  lVar7 = *plVar9;
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c();
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    lVar7 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar8 = *plVar9;
                  uVar1 = *(ushort *)(lVar8 + 0x132);
                  lVar7 = lVar8;
                  if ((uVar1 & 1) == 0) {
                    lVar8 = FUN_00d5941c(lVar8);
                    uVar1 = *(ushort *)(*plVar9 + 0x132);
                    lVar7 = *plVar9;
                  }
                  uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                  (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
                  if (local_44 <= lVar4) break;
                  lVar4 = lVar4 + 1;
                  *param_1 = *puVar12;
                  param_1 = param_1 + 1;
                  puVar12 = puVar12 + 1;
                }
              }
            }
            else {
              lVar4 = 0;
              puVar11 = (undefined4 *)(param_2 + (long)param_3 * 4);
              while( true ) {
                lVar7 = *plVar9;
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                  lVar7 = FUN_00d5941c();
                }
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar8 = *plVar9;
                uVar1 = *(ushort *)(lVar8 + 0x132);
                lVar7 = lVar8;
                if ((uVar1 & 1) == 0) {
                  lVar8 = FUN_00d5941c(lVar8);
                  uVar1 = *(ushort *)(*plVar9 + 0x132);
                  lVar7 = *plVar9;
                }
                uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar7 = FUN_00d5941c(lVar7);
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
                if (local_44 <= lVar4) break;
                lVar4 = lVar4 + 1;
                *(undefined4 *)param_1 = *puVar11;
                param_1 = (undefined8 *)((long)param_1 + 4);
                puVar11 = puVar11 + 1;
              }
            }
          }
          else {
            lVar4 = 0;
            puVar11 = (undefined4 *)(param_2 + (long)param_3 * 4);
            while( true ) {
              lVar7 = *plVar9;
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c();
              }
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar8 = *plVar9;
              uVar1 = *(ushort *)(lVar8 + 0x132);
              lVar7 = lVar8;
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_00d5941c(lVar8);
                uVar1 = *(ushort *)(*plVar9 + 0x132);
                lVar7 = *plVar9;
              }
              uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
              (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
              if (local_44 <= lVar4) break;
              lVar4 = lVar4 + 1;
              *(undefined4 *)param_1 = *puVar11;
              param_1 = (undefined8 *)((long)param_1 + 4);
              puVar11 = puVar11 + 1;
            }
          }
        }
        else {
          lVar4 = 0;
          puVar10 = (undefined2 *)(param_2 + (long)param_3 * 2);
          while( true ) {
            lVar7 = *plVar9;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_00d5941c();
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar8 = *plVar9;
            uVar1 = *(ushort *)(lVar8 + 0x132);
            lVar7 = lVar8;
            if ((uVar1 & 1) == 0) {
              lVar8 = FUN_00d5941c(lVar8);
              uVar1 = *(ushort *)(*plVar9 + 0x132);
              lVar7 = *plVar9;
            }
            uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar7 = FUN_00d5941c(lVar7);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
            (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
            if (local_44 <= lVar4) break;
            lVar4 = lVar4 + 1;
            *(undefined2 *)param_1 = *puVar10;
            param_1 = (undefined8 *)((long)param_1 + 2);
            puVar10 = puVar10 + 1;
          }
        }
      }
      else {
        lVar4 = 0;
        puVar10 = (undefined2 *)(param_2 + (long)param_3 * 2);
        while( true ) {
          lVar7 = *plVar9;
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar8 = *plVar9;
          uVar1 = *(ushort *)(lVar8 + 0x132);
          lVar7 = lVar8;
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
            uVar1 = *(ushort *)(*plVar9 + 0x132);
            lVar7 = *plVar9;
          }
          uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
          (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
          if (local_44 <= lVar4) break;
          lVar4 = lVar4 + 1;
          *(undefined2 *)param_1 = *puVar10;
          param_1 = (undefined8 *)((long)param_1 + 2);
          puVar10 = puVar10 + 1;
        }
      }
    }
    else {
      lVar4 = 0;
      while( true ) {
        lVar7 = *plVar9;
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = *plVar9;
        uVar1 = *(ushort *)(lVar8 + 0x132);
        lVar7 = lVar8;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
          uVar1 = *(ushort *)(*plVar9 + 0x132);
          lVar7 = *plVar9;
        }
        uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_00d5941c(lVar7);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
        if (local_44 <= lVar4) break;
        *(undefined1 *)((long)param_1 + lVar4) = *(undefined1 *)(param_2 + param_3 + lVar4);
        lVar4 = lVar4 + 1;
      }
    }
  }
  else {
    lVar4 = 0;
    while( true ) {
      lVar7 = *plVar9;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = *plVar9;
      uVar1 = *(ushort *)(lVar8 + 0x132);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
        uVar1 = *(ushort *)(*plVar9 + 0x132);
        lVar7 = *plVar9;
      }
      uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      (**(code **)(lVar7 + 0x10))(uVar13,lVar7,0,0,&local_44);
      if (local_44 <= lVar4) break;
      *(undefined1 *)((long)param_1 + lVar4) = *(undefined1 *)(param_2 + param_3 + lVar4);
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


