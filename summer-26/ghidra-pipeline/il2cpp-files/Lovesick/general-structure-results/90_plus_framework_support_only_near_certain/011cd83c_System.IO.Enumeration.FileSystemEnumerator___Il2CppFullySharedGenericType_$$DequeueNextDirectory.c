/*
FUNCTION_NAME: System.IO.Enumeration.FileSystemEnumerator<__Il2CppFullySharedGenericType>$$DequeueNextDirectory
ENTRY_POINT: 011cd83c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_IO_Enumeration_FileSystemEnumerator<__Il2CppFullySharedGenericType>__DequeueNextDirectory
               (long param_1)

{
  uint uVar1;
  void *pvVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  char *pcVar9;
  short *psVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  undefined8 uVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  size_t unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  
  puVar4 = StringLiteral_6673;
  if ((unaff_x22 & 1) == 0) {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__ + 0x40))
      goto LAB_011ce4ec;
      piVar7 = (int *)thunk_FUN_00d624a0();
      if (*piVar7 != 0) goto LAB_011cdadc;
LAB_011ce458:
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      goto LAB_011ce4b4;
    }
LAB_011cdadc:
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)UnityEngine_Texture2D___TypeInfo + 0x40))
      goto LAB_011ce4ec;
      pcVar9 = (char *)thunk_FUN_00d624a0();
      if (*pcVar9 == '\0') goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)StringLiteral_7239 + 0x40))
      goto LAB_011ce4ec;
      pcVar9 = (char *)thunk_FUN_00d624a0();
      if (*pcVar9 == '\0') goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0x40)) goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
      goto LAB_011ce4ec;
      plVar6 = (long *)thunk_FUN_00d624a0();
      if (*plVar6 == 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__ + 0x40))
      goto LAB_011ce4ec;
      plVar6 = (long *)thunk_FUN_00d624a0();
      if (*plVar6 == 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = StringLiteral_5228;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
      goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                   + 0x40)) goto LAB_011ce4ec;
      psVar10 = (short *)thunk_FUN_00d624a0();
      if (*psVar10 == 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = Method_System_Nullable<float>_GetValueOrDefault__;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                   + 0x40)) goto LAB_011ce4ec;
      puVar11 = (undefined8 *)thunk_FUN_00d624a0();
      uVar8 = FUN_017b4f64(0,*puVar11,0);
      if ((uVar8 & 1) != 0) goto LAB_011ce458;
    }
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar4 = StringLiteral_10024;
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    uVar15 = FUN_01780344(uVar15,0);
    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar8 = FUN_01789ac0(uVar15,uVar14,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(lVar5 + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x60);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar5 = *unaff_x19;
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      puVar4 = PTR_DAT_033f1148;
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      plVar6 = (long *)thunk_FUN_00d61fa0();
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar4;
      }
      if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar5 + 0x40)) {
LAB_011ce4ec:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar11 = (undefined8 *)thunk_FUN_00d624a0(plVar6);
      uVar8 = FUN_017cc45c(0,*puVar11,0);
      if ((uVar8 & 1) != 0) goto LAB_011ce458;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    pvVar2 = *(void **)(unaff_x29 + -0x60);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x60);
    }
    memcpy(unaff_x20,pvVar2,unaff_x21);
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    plVar6 = (long *)thunk_FUN_00d61fa0();
    if (plVar6 == (long *)0x0) goto LAB_011ce4e4;
    if (*(long *)(*plVar6 + 0x40) !=
        *(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                 + 0x40)) goto LAB_011ce4ec;
    piVar7 = (int *)thunk_FUN_00d624a0();
    uVar1 = *piVar7 + 1;
    if (uVar1 < 10) {
      lVar5 = *unaff_x25;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *unaff_x25;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_011ce4e4;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar13 = *unaff_x19;
      uVar15 = *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x132);
      lVar5 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_00d5941c(lVar13);
        uVar3 = *(ushort *)(*unaff_x19 + 0x132);
        lVar5 = *unaff_x19;
      }
      uVar14 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar5 = FUN_00d5941c(lVar5);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar15;
      (**(code **)(lVar5 + 0x10))(uVar14,lVar5,0,unaff_x29 + -0x58,unaff_x29 + -0x50);
      lVar5 = *(long *)(unaff_x29 + -0x50);
      goto LAB_011ce4b4;
    }
  }
                    /* catch() { ... } // from try @ 011cd5c0 with catch @ 011cd740 */
  lVar5 = *unaff_x19;
                    /* catch() { ... } // from try @ 011cd5a8 with catch @ 011cd744 */
                    /* catch() { ... } // from try @ 011cd54c with catch @ 011cd748 */
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 011cd540 with catch @ 011cd74c
                       catch() { ... } // from try @ 011cd710 with catch @ 011cd74c */
    lVar5 = FUN_00d5941c();
  }
                    /* catch() { ... } // from try @ 011cd52c with catch @ 011cd750 */
                    /* catch() { ... } // from try @ 011cd578 with catch @ 011cd754 */
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
                    /* try { // try from 011cd76c to 012cd76f has its CatchHandler @ 011cd7f4 */
  pvVar2 = *(void **)(unaff_x29 + -0x60);
  if (-1 < *(int *)(lVar5 + 0x28)) {
    pvVar2 = (void *)(unaff_x29 + -0x60);
  }
  memcpy(unaff_x20,pvVar2,unaff_x21);
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar5 = thunk_FUN_00d62348();
  if (lVar5 == 0) {
LAB_011ce4e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *unaff_x19;
                    /* try { // try from 011cd7b8 to 012cd7df has its CatchHandler @ 011cd800 */
  uVar3 = *(ushort *)(lVar12 + 0x132);
  lVar13 = lVar12;
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_00d5941c(lVar12);
    uVar3 = *(ushort *)(*unaff_x19 + 0x132);
    lVar13 = *unaff_x19;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x58);
  lVar12 = lVar13;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_00d5941c(lVar13);
    uVar3 = *(ushort *)(*unaff_x19 + 0x132);
    lVar12 = *unaff_x19;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_00d5941c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar12 + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x58) = unaff_x20;
  (**(code **)(lVar13 + 0x10))(uVar15,lVar13,lVar5,unaff_x29 + -0x58,unaff_x20);
LAB_011ce4b4:
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x48)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


