/*
FUNCTION_NAME: FUN_011cd330
ENTRY_POINT: 011cd330
PROGRAM: Lovesick-libil2cpp.so
SCORE: 175
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


long FUN_011cd330(void *****param_1,long param_2)

{
  void *****pppppvVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  int *piVar13;
  short *psVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  void **ppvVar21;
  ulong __n;
  void *__s;
  undefined8 uVar22;
  void ****local_70;
  void **local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70 = param_1;
  if ((DAT_037763e0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13905);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<float>_GetValueOrDefault__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
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
    thunk_FUN_00d48444(StringLiteral_10024);
    thunk_FUN_00d48444(PTR_DAT_033f1148);
    DAT_037763e0 = 1;
  }
  plVar20 = (long *)(param_2 + 0x20);
  lVar9 = *plVar20;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  if (*(int *)(lVar9 + 0x28) < 0) {
    iVar8 = thunk_FUN_00d42afc();
    uVar16 = iVar8 - 0x10;
  }
  else {
    uVar16 = 8;
  }
  __n = (ulong)uVar16;
  uVar19 = __n + 0xf & 0x1fffffff0;
  ppvVar21 = (void **)((long)&local_70 - uVar19);
  __s = (void *)((long)ppvVar21 - uVar19);
  memset(__s,0,__n);
  memset(__s,0,__n);
  memcpy(ppvVar21,__s,__n);
  lVar9 = *plVar20;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  uVar19 = FUN_00da5124(lVar9,ppvVar21);
  lVar9 = *plVar20;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c(lVar9);
  }
  puVar6 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar19 & 1) == 0) {
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pppppvVar1 = local_70;
    if (-1 < *(int *)(lVar9 + 0x28)) {
      pppppvVar1 = &local_70;
    }
    memcpy(ppvVar21,pppppvVar1,__n);
    lVar9 = *plVar20;
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    uVar19 = FUN_00da5124(lVar9,ppvVar21);
    if ((uVar19 & 1) == 0) {
LAB_011ce458:
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      goto LAB_011ce4b4;
    }
  }
  else {
    uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_01780344(uVar22,0);
    uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    uVar19 = FUN_01789ac0(uVar22,uVar10,0);
    lVar9 = *plVar20;
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    puVar7 = StringLiteral_13905;
    puVar6 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
    if ((uVar19 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      pppppvVar1 = local_70;
      if (-1 < *(int *)(lVar9 + 0x28)) {
        pppppvVar1 = &local_70;
      }
      memcpy(ppvVar21,pppppvVar1,__n);
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
      if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
      goto LAB_011ce4ec;
      pcVar12 = (char *)thunk_FUN_00d624a0();
      lVar9 = *(long *)puVar7;
      cVar2 = *pcVar12;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *(long *)puVar7;
      }
      lVar17 = *plVar20;
      puVar15 = *(undefined8 **)(lVar9 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar15 = *(undefined8 **)(lVar9 + 0xb8);
      }
      uVar3 = *(ushort *)(lVar17 + 0x132);
      ppvVar21 = (void **)*puVar15;
joined_r0x011cd914:
      lVar9 = lVar17;
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_00d5941c(lVar17);
        uVar3 = *(ushort *)(*plVar20 + 0x132);
        lVar9 = *plVar20;
      }
      uVar22 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_00d5941c(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      local_68 = ppvVar21;
      (**(code **)(lVar9 + 0x10))(uVar22,lVar9,0,&local_68,&local_60);
      lVar9 = local_60;
      goto LAB_011ce4b4;
    }
    uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_01780344(uVar22,0);
    uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    uVar19 = FUN_01789ac0(uVar22,uVar10,0);
    lVar9 = *plVar20;
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
    }
    puVar6 = StringLiteral_6673;
    if ((uVar19 & 1) == 0) {
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
        goto LAB_011ce4ec;
        piVar13 = (int *)thunk_FUN_00d624a0();
        if (*piVar13 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40)) goto LAB_011ce4ec;
        pcVar12 = (char *)thunk_FUN_00d624a0();
        if (*pcVar12 == '\0') goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
        goto LAB_011ce4ec;
        pcVar12 = (char *)thunk_FUN_00d624a0();
        if (*pcVar12 == '\0') goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40)) goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
        goto LAB_011ce4ec;
        plVar11 = (long *)thunk_FUN_00d624a0();
        if (*plVar11 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = 
      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40))
        goto LAB_011ce4ec;
        plVar11 = (long *)thunk_FUN_00d624a0();
        if (*plVar11 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = StringLiteral_5228;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = Method_System_Nullable<float>_GetValueOrDefault__;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                     + 0x40)) goto LAB_011ce4ec;
        puVar15 = (undefined8 *)thunk_FUN_00d624a0();
        uVar19 = FUN_017b4f64(0,*puVar15,0);
        if ((uVar19 & 1) != 0) goto LAB_011ce458;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar6 = StringLiteral_10024;
      uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar22 = FUN_01780344(uVar22,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar19 = FUN_01789ac0(uVar22,uVar10,0);
      if ((uVar19 & 1) != 0) {
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        pppppvVar1 = local_70;
        if (-1 < *(int *)(lVar9 + 0x28)) {
          pppppvVar1 = &local_70;
        }
        memcpy(ppvVar21,pppppvVar1,__n);
        lVar9 = *plVar20;
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        puVar5 = PTR_DAT_033f1148;
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar9 = *(long *)puVar5;
        }
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(lVar9 + 0x40)) {
LAB_011ce4ec:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar15 = (undefined8 *)thunk_FUN_00d624a0(plVar11);
        uVar19 = FUN_017cc45c(0,*puVar15,0);
        if ((uVar19 & 1) != 0) goto LAB_011ce458;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      pppppvVar1 = local_70;
      if (-1 < *(int *)(lVar9 + 0x28)) {
        pppppvVar1 = &local_70;
      }
      memcpy(ppvVar21,pppppvVar1,__n);
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0(lVar9,ppvVar21);
      if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar11 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) goto LAB_011ce4ec;
      piVar13 = (int *)thunk_FUN_00d624a0();
      uVar16 = *piVar13 + 1;
      if (uVar16 < 10) {
        lVar9 = *(long *)puVar7;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)puVar7;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
        if (lVar9 == 0) goto LAB_011ce4e4;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar17 = *plVar20;
        ppvVar21 = *(void ***)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
        uVar3 = *(ushort *)(lVar17 + 0x132);
        goto joined_r0x011cd914;
      }
    }
  }
  lVar9 = *plVar20;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  pppppvVar1 = local_70;
  if (-1 < *(int *)(lVar9 + 0x28)) {
    pppppvVar1 = &local_70;
  }
  memcpy(ppvVar21,pppppvVar1,__n);
  lVar9 = *plVar20;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar9 = thunk_FUN_00d62348();
  if (lVar9 == 0) {
LAB_011ce4e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar18 = *plVar20;
  uVar3 = *(ushort *)(lVar18 + 0x132);
  lVar17 = lVar18;
  if ((uVar3 & 1) == 0) {
    lVar18 = FUN_00d5941c(lVar18);
    uVar3 = *(ushort *)(*plVar20 + 0x132);
    lVar17 = *plVar20;
  }
  uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x58);
  lVar18 = lVar17;
  if ((uVar3 & 1) == 0) {
    lVar17 = FUN_00d5941c(lVar17);
    uVar3 = *(ushort *)(*plVar20 + 0x132);
    lVar18 = *plVar20;
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar18 = FUN_00d5941c(lVar18);
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x28);
  if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
    lVar18 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar18 + 0x28)) {
    ppvVar21 = *ppvVar21;
  }
  local_68 = ppvVar21;
  (**(code **)(lVar17 + 0x10))(uVar22,lVar17,lVar9,&local_68,ppvVar21);
LAB_011ce4b4:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


