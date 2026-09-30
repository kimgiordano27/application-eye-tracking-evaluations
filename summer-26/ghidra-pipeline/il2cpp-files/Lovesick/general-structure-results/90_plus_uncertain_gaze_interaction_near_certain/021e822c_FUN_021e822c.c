/*
FUNCTION_NAME: FUN_021e822c
ENTRY_POINT: 021e822c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 290
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_7
*/


long FUN_021e822c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined1 auStack_210 [208];
  ulong local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [208];
  ulong local_60;
  undefined8 uStack_58;
  
  if ((DAT_037817d4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1385);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOVirtual_<>c__DisplayClass0_0_<Float>b__2__);
    thunk_FUN_00d48444(StringLiteral_13753);
    thunk_FUN_00d48444(StringLiteral_7533);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__);
    thunk_FUN_00d48444(StringLiteral_11254);
    thunk_FUN_00d48444(OVR_OpenVR_VREvent_t_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7948);
    thunk_FUN_00d48444(StringLiteral_9027);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10246);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IRaycaster>_Remove__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__);
    thunk_FUN_00d48444(StringLiteral_13303);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Data_RoomData>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_get_Task__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_037817d4 = 1;
  }
  puVar3 = StringLiteral_13753;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  memset(auStack_130,0,0xd0);
  uVar4 = FUN_015ff8a0(param_1[9],0);
  puVar2 = StringLiteral_7533;
  puVar8 = Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__;
  if ((uVar4 & 1) == 0) {
    lVar6 = param_1[9];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_00da5328(lVar6,0,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
    uVar4 = FUN_01789ac0(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__;
      if (plVar5 == (long *)0x0) goto LAB_021e8a04;
      if ((*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__ != 0) &&
         (lVar6 = thunk_FUN_00d6225c(*(long *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s16__,
                                     *(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_021e8a6c:
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 == 0) {
LAB_021e8a08:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar5[4] = *(long *)puVar8;
      lVar6 = param_1[9];
      if (lVar6 != 0) {
        lVar13 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar13 == 0) goto LAB_021e8a6c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      puVar8 = Method_System_Collections_Generic_List<Data_RoomData>__ctor__;
      if (uVar9 < 2) goto LAB_021e8a08;
      plVar5[5] = lVar6;
      lVar6 = *(long *)puVar8;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) goto LAB_021e8a6c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 3) goto LAB_021e8a08;
      plVar5[6] = *(long *)puVar8;
      lVar6 = *param_1;
      if (lVar6 != 0) {
        lVar13 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar13 == 0) goto LAB_021e8a6c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_get_Task__
      ;
      if (uVar9 < 4) goto LAB_021e8a08;
      plVar5[7] = lVar6;
      lVar6 = *(long *)puVar8;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) goto LAB_021e8a6c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      puVar2 = StringLiteral_302;
      if (uVar9 < 5) goto LAB_021e8a08;
      plVar5[8] = *(long *)puVar8;
      uVar11 = FUN_01600844(plVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar11,0);
      goto LAB_021e8560;
    }
    uVar7 = *(undefined8 *)Method_DG_Tweening_DOVirtual_<>c__DisplayClass0_0_<Float>b__2__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar5 = (long *)FUN_01780344(uVar7,0);
    if (plVar5 == (long *)0x0) goto LAB_021e8a04;
    uVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x2d0));
    if ((uVar4 & 1) == 0) {
      uVar11 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      uVar11 = FUN_00da4fb8(uVar11,5);
      FUN_00ac2be8();
      puVar8 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
      uVar7 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                );
      FUN_00acb0b4(uVar11,uVar7);
      uVar7 = thunk_FUN_00d48444(puVar8);
      FUN_00acb320(uVar11,0,uVar7);
      lVar6 = param_1[9];
      FUN_00ac2be8(uVar11);
      FUN_00acb0b4(uVar11,lVar6);
      FUN_00acb320(uVar11,1,lVar6);
      FUN_00ac2be8(uVar11);
      puVar8 = Method_System_Collections_Generic_List<Data_RoomData>__ctor__;
      uVar7 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Data_RoomData>__ctor__);
      FUN_00acb0b4(uVar11,uVar7);
      uVar7 = thunk_FUN_00d48444(puVar8);
      FUN_00acb320(uVar11,2,uVar7);
      lVar6 = *param_1;
      FUN_00ac2be8(uVar11);
      FUN_00acb0b4(uVar11,lVar6);
      FUN_00acb320(uVar11,3,lVar6);
      FUN_00ac2be8(uVar11);
      puVar8 = 
      Method_UnityEngine_ProBuilder_MeshOperations_MergeElements_<>c__DisplayClass0_0_<MergePairs>b__0__
      ;
      uVar7 = thunk_FUN_00d48444(
                                Method_UnityEngine_ProBuilder_MeshOperations_MergeElements_<>c__DisplayClass0_0_<MergePairs>b__0__
                                );
      FUN_00acb0b4(uVar11,uVar7);
      uVar7 = thunk_FUN_00d48444(puVar8);
      FUN_00acb320(uVar11,4,uVar7);
      uVar11 = FUN_01600844(uVar11,0);
      goto LAB_021e8a28;
    }
  }
  else {
    uVar4 = FUN_015ff8a0(param_1[1],0);
    uVar11 = 0;
    if ((uVar4 & 1) != 0) {
LAB_021e8560:
      uVar11 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01780344(uVar11,0);
    }
  }
  lVar13 = *param_1;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                            );
  puVar8 = Method_System_Collections_Generic_List<IRaycaster>_Remove__;
  if (lVar6 == 0) goto LAB_021e8a04;
  FUN_017b46ec(lVar6,0);
  local_60 = 0;
  uStack_58 = 0;
  FUN_021f605c(&local_60,lVar13,0);
  *(undefined8 *)(lVar6 + 0x20) = uVar11;
  *(undefined8 *)(lVar6 + 0x18) = uStack_58;
  *(ulong *)(lVar6 + 0x10) = local_60;
  lVar13 = param_1[7];
  *(long *)(lVar6 + 0xa0) = param_1[8];
  *(long *)(lVar6 + 0x98) = lVar13;
  uVar9 = *(uint *)(lVar6 + 0xa8) & 0xfffffffe;
  if ((char)param_1[0xb] != '\0') {
    uVar9 = *(uint *)(lVar6 + 0xa8) | 1;
  }
  uVar15 = uVar9 & 0xfffffffd;
  if (*(char *)((long)param_1 + 0x59) != '\0') {
    uVar15 = uVar9 | 2;
  }
  *(uint *)(lVar6 + 0xa8) = uVar15;
  local_60 = 0;
  uStack_58 = 0;
  FUN_021f605c(&local_60,param_1[10],0);
  *(undefined8 *)(lVar6 + 0x30) = uStack_58;
  *(ulong *)(lVar6 + 0x28) = local_60;
  lVar13 = *(long *)puVar8;
  lVar12 = param_1[6];
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar8;
  }
  puVar1 = Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__;
  lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar13 = *(long *)puVar8;
    }
    uVar11 = **(undefined8 **)(lVar13 + 0xb8);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar14 == 0) goto LAB_021e8a04;
    FUN_012d239c(lVar14,uVar11,*(undefined8 *)StringLiteral_10246,0);
    *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8) = lVar14;
  }
  uVar11 = FUN_010b5ad8(lVar12,lVar14,*(undefined8 *)StringLiteral_1385);
  *(undefined8 *)(lVar6 + 0x88) = uVar11;
  uVar4 = FUN_015ff8a0(param_1[3],0);
  if ((uVar4 & 1) == 0) {
    local_60 = local_60 & 0xffffffff00000000;
    FUN_021fe1f0(&local_60,param_1[3],0);
    *(undefined4 *)(lVar6 + 0x38) = (undefined4)local_60;
  }
  puVar8 = 
  Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__;
  uVar4 = FUN_015ff8a0(param_1[1],0);
  if ((uVar4 & 1) == 0) {
    local_140 = 0;
    uStack_138 = 0;
    FUN_021f605c(&local_140,param_1[1],0);
    local_60 = local_140;
    uStack_58 = uStack_138;
    FUN_012f3a6c(lVar6 + 0x48,&local_60,*(undefined8 *)puVar8);
  }
  lVar13 = param_1[2];
  if ((lVar13 != 0) && (0 < (int)*(ulong *)(lVar13 + 0x18))) {
    uVar4 = 0;
    uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar4) goto LAB_021e8a08;
      local_140 = 0;
      uStack_138 = 0;
      FUN_021f605c(&local_140,*(undefined8 *)(lVar13 + 0x20 + uVar4 * 8),0);
      local_60 = local_140;
      uStack_58 = uStack_138;
      FUN_012f3a6c(lVar6 + 0x48,&local_60,*(undefined8 *)puVar8);
      uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar13 + 0x18));
  }
  puVar1 = StringLiteral_9027;
  uVar4 = FUN_015ff8a0(param_1[4],0);
  puVar8 = 
  Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__;
  if ((uVar4 & 1) != 0) {
LAB_021e8870:
    uVar4 = FUN_015ff8a0(param_1[5],0);
    puVar8 = OVRPlugin_OVRP_1_105_0_TypeInfo;
    if ((uVar4 & 1) == 0) {
      if (param_1[5] == 0) goto LAB_021e8a04;
      uVar11 = FUN_01604018(param_1[5],0);
      uVar4 = thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar8,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                           Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                   ,0);
        if ((uVar4 & 1) == 0) {
          lVar6 = param_1[4];
          uVar11 = thunk_FUN_00d48444(StringLiteral_13200);
          puVar8 = System_Collections_Generic_List<HandGrabPose>_TypeInfo;
          goto LAB_021e8bdc;
        }
        uVar11 = *(undefined8 *)puVar1;
        local_140 = local_140 & 0xffffffffffffff00;
      }
      else {
        uVar11 = *(undefined8 *)puVar1;
        local_140 = CONCAT71(local_140._1_7_,1);
      }
      local_60 = local_60 & 0xffffffffffff0000;
      FUN_01347274(&local_60,&local_140,uVar11);
      FUN_021e7090(lVar6,local_60 & 0xffff);
    }
    if (param_1[0xc] == 0) {
      return lVar6;
    }
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
    if (lVar13 != 0) {
      FUN_01320e50(lVar13,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
      puVar8 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
      lVar12 = param_1[0xc];
      if (lVar12 != 0) {
        uVar9 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar9) {
          uVar15 = 0;
          lVar14 = 0;
          do {
            if (uVar9 <= uVar15) goto LAB_021e8a08;
            lVar16 = *(long *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
            if (lVar16 == 0) goto LAB_021e8a04;
            uVar4 = FUN_015ff8a0(*(undefined8 *)(lVar16 + 0x10),0);
            if ((uVar4 & 1) == 0) {
              lVar14 = lVar16;
            }
            if ((uVar4 & 1) != 0) {
              lVar6 = *param_1;
              uVar11 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
              uVar11 = FUN_015f5b28(uVar11,lVar6,0);
              goto LAB_021e8a28;
            }
            if (lVar14 == 0) goto LAB_021e8a04;
            FUN_021ecf78(auStack_130);
            memcpy(auStack_210,auStack_130,0xd0);
            FUN_00c66f98(lVar13,auStack_210,*(undefined8 *)puVar8);
            uVar9 = *(uint *)(lVar12 + 0x18);
            uVar15 = uVar15 + 1;
            lVar14 = lVar16;
          } while ((int)uVar15 < (int)uVar9);
        }
        uVar11 = FUN_01325140(lVar13,*(undefined8 *)StringLiteral_11254);
        *(undefined8 *)(lVar6 + 0x90) = uVar11;
        return lVar6;
      }
    }
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (param_1[4] == 0) goto LAB_021e8a04;
  uVar11 = FUN_01604018(param_1[4],0);
  uVar4 = thunk_FUN_015fe514(uVar11,*(undefined8 *)puVar8,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = *(undefined8 *)puVar1;
    local_140 = local_140 & 0xffffffffffffff00;
LAB_021e885c:
    local_60 = local_60 & 0xffffffffffff0000;
    FUN_01347274(&local_60,&local_140,uVar11);
    *(undefined2 *)(lVar6 + 0x40) = (undefined2)local_60;
    goto LAB_021e8870;
  }
  uVar4 = thunk_FUN_015fe514(uVar11,*(undefined8 *)StringLiteral_13303,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = *(undefined8 *)puVar1;
    local_140 = CONCAT71(local_140._1_7_,1);
    goto LAB_021e885c;
  }
  lVar6 = param_1[4];
  uVar11 = thunk_FUN_00d48444(PTR_DAT_033ee020);
  puVar8 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
LAB_021e8bdc:
  uVar7 = thunk_FUN_00d48444(puVar8);
  uVar11 = FUN_01600424(uVar11,lVar6,uVar7,0);
LAB_021e8a28:
  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
  uVar7 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_017713a8(uVar7,uVar11,0);
  uVar11 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar11);
}


