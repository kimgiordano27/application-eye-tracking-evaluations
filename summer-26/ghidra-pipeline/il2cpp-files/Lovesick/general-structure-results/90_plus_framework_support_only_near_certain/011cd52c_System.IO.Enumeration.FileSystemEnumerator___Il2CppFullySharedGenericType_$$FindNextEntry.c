/*
FUNCTION_NAME: System.IO.Enumeration.FileSystemEnumerator<__Il2CppFullySharedGenericType>$$FindNextEntry
ENTRY_POINT: 011cd52c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_IO_Enumeration_FileSystemEnumerator<__Il2CppFullySharedGenericType>__FindNextEntry(void)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  int *piVar13;
  short *psVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 uVar18;
  long unaff_x23;
  long unaff_x29;
  
                    /* try { // try from 011cd52c to 012cd533 has its CatchHandler @ 011cd750 */
  memcpy(unaff_x20,unaff_x22,unaff_x21);
  lVar8 = *unaff_x19;
                    /* try { // try from 011cd540 to 012cd547 has its CatchHandler @ 011cd74c */
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
                    /* try { // try from 011cd54c to 012cd557 has its CatchHandler @ 011cd748 */
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
                    /* try { // try from 011cd55c to 012cd56f has its CatchHandler @ 011cd738 */
    FUN_00d5941c();
  }
  uVar9 = FUN_00da5124();
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                    /* try { // try from 011cd578 to 012cd59b has its CatchHandler @ 011cd754 */
    lVar8 = FUN_00d5941c(lVar8);
  }
  puVar6 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    pvVar2 = *(void **)(unaff_x29 + -0x60);
    if (-1 < *(int *)(lVar8 + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(unaff_x20,pvVar2,unaff_x21);
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    uVar9 = FUN_00da5124();
    if ((uVar9 & 1) == 0) {
LAB_011ce458:
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      goto LAB_011ce4b4;
    }
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
                    /* try { // try from 011cd5a8 to 012cd5ab has its CatchHandler @ 011cd744 */
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01780344(uVar18,0);
                    /* try { // try from 011cd5c0 to 012cd5d3 has its CatchHandler @ 011cd740 */
    uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    uVar9 = FUN_01789ac0(uVar18,uVar10,0);
    lVar8 = *unaff_x19;
                    /* try { // try from 011cd5e4 to 012cd607 has its CatchHandler @ 011cd73c */
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    puVar7 = StringLiteral_13905;
    puVar6 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
                    /* try { // try from 011cd614 to 012cd617 has its CatchHandler @ 011cd734 */
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                    /* try { // try from 011cd618 to 012cd6eb has its CatchHandler @ 011ccecc */
        lVar8 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0();
      if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
      goto LAB_011ce4ec;
      pcVar12 = (char *)thunk_FUN_00d624a0();
      lVar8 = *(long *)puVar7;
      cVar3 = *pcVar12;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar7;
      }
      lVar16 = *unaff_x19;
      puVar15 = *(undefined8 **)(lVar8 + 0xb8) + 1;
      if (cVar3 != '\0') {
        puVar15 = *(undefined8 **)(lVar8 + 0xb8);
      }
      uVar4 = *(ushort *)(lVar16 + 0x132);
      uVar18 = *puVar15;
joined_r0x011cd914:
      lVar8 = lVar16;
      if ((uVar4 & 1) == 0) {
        lVar16 = FUN_00d5941c(lVar16);
        uVar4 = *(ushort *)(*unaff_x19 + 0x132);
        lVar8 = *unaff_x19;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar18;
      (**(code **)(lVar8 + 0x10))(uVar10,lVar8,0,unaff_x29 + -0x58,unaff_x29 + -0x50);
      lVar8 = *(long *)(unaff_x29 + -0x50);
      goto LAB_011ce4b4;
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01780344(uVar18,0);
    uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
    uVar9 = FUN_01789ac0(uVar18,uVar10,0);
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    puVar6 = StringLiteral_6673;
    if ((uVar9 & 1) == 0) {
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
        goto LAB_011ce4ec;
        piVar13 = (int *)thunk_FUN_00d624a0();
        if (*piVar13 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40)) goto LAB_011ce4ec;
        pcVar12 = (char *)thunk_FUN_00d624a0();
        if (*pcVar12 == '\0') goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
        goto LAB_011ce4ec;
        pcVar12 = (char *)thunk_FUN_00d624a0();
        if (*pcVar12 == '\0') goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40)) goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
        goto LAB_011ce4ec;
        plVar11 = (long *)thunk_FUN_00d624a0();
        if (*plVar11 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = 
      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40))
        goto LAB_011ce4ec;
        plVar11 = (long *)thunk_FUN_00d624a0();
        if (*plVar11 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = StringLiteral_5228;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                     + 0x40)) goto LAB_011ce4ec;
        psVar14 = (short *)thunk_FUN_00d624a0();
        if (*psVar14 == 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = Method_System_Nullable<float>_GetValueOrDefault__;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) !=
            *(long *)(*(long *)
                       Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                     + 0x40)) goto LAB_011ce4ec;
        puVar15 = (undefined8 *)thunk_FUN_00d624a0();
        uVar9 = FUN_017b4f64(0,*puVar15,0);
        if ((uVar9 & 1) != 0) goto LAB_011ce458;
      }
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      puVar6 = StringLiteral_10024;
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01780344(*(undefined8 *)puVar6,0);
      uVar9 = FUN_01789ac0(uVar18,uVar10,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(lVar8 + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x60);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        puVar5 = PTR_DAT_033f1148;
        if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d61fa0();
        lVar8 = *(long *)puVar5;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar8);
          lVar8 = *(long *)puVar5;
        }
        if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(lVar8 + 0x40)) {
LAB_011ce4ec:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar15 = (undefined8 *)thunk_FUN_00d624a0(plVar11);
        uVar9 = FUN_017cc45c(0,*puVar15,0);
        if ((uVar9 & 1) != 0) goto LAB_011ce458;
      }
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar11 = (long *)thunk_FUN_00d61fa0();
      if (plVar11 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar11 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) goto LAB_011ce4ec;
      piVar13 = (int *)thunk_FUN_00d624a0();
      uVar1 = *piVar13 + 1;
      if (uVar1 < 10) {
        lVar8 = *(long *)puVar7;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar7;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_011ce4e4;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar16 = *unaff_x19;
        uVar18 = *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        uVar4 = *(ushort *)(lVar16 + 0x132);
        goto joined_r0x011cd914;
      }
    }
  }
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  pvVar2 = *(void **)(unaff_x29 + -0x60);
  if (-1 < *(int *)(lVar8 + 0x28)) {
    pvVar2 = (void *)(unaff_x29 + -0x60);
  }
  memcpy(unaff_x20,pvVar2,unaff_x21);
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar8 = thunk_FUN_00d62348();
  if (lVar8 == 0) {
LAB_011ce4e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar17 = *unaff_x19;
  uVar4 = *(ushort *)(lVar17 + 0x132);
  lVar16 = lVar17;
  if ((uVar4 & 1) == 0) {
    lVar17 = FUN_00d5941c(lVar17);
    uVar4 = *(ushort *)(*unaff_x19 + 0x132);
    lVar16 = *unaff_x19;
  }
  uVar18 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x58);
  lVar17 = lVar16;
  if ((uVar4 & 1) == 0) {
    lVar16 = FUN_00d5941c(lVar16);
    uVar4 = *(ushort *)(*unaff_x19 + 0x132);
    lVar17 = *unaff_x19;
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x58);
  if ((uVar4 & 1) == 0) {
    lVar17 = FUN_00d5941c(lVar17);
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x28);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar17 + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x58) = unaff_x20;
  (**(code **)(lVar16 + 0x10))(uVar18,lVar16,lVar8,unaff_x29 + -0x58,unaff_x20);
LAB_011ce4b4:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x48)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


