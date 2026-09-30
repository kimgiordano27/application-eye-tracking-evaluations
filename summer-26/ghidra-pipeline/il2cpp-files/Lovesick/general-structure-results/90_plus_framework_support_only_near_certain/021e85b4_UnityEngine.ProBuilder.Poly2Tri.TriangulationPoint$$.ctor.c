/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint$$.ctor
ENTRY_POINT: 021e85b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 200
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_4
*/


long UnityEngine_ProBuilder_Poly2Tri_TriangulationPoint___ctor(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar8;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined2 uStack00000000000001b0;
  undefined8 in_stack_000001b8;
  undefined *puVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x2c8))();
  if ((uVar3 & 1) == 0) {
    uVar9 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    uVar9 = FUN_00da4fb8(uVar9,5);
    FUN_00ac2be8();
    puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
    uVar12 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                               );
    FUN_00acb0b4(uVar9,uVar12);
    uVar12 = thunk_FUN_00d48444(puVar7);
    FUN_00acb320(uVar9,0,uVar12);
    uVar12 = unaff_x19[9];
    FUN_00ac2be8(uVar9);
    FUN_00acb0b4(uVar9,uVar12);
    FUN_00acb320(uVar9,1,uVar12);
    FUN_00ac2be8(uVar9);
    puVar7 = Method_System_Collections_Generic_List<Data_RoomData>__ctor__;
    uVar12 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Data_RoomData>__ctor__);
    FUN_00acb0b4(uVar9,uVar12);
    uVar12 = thunk_FUN_00d48444(puVar7);
    FUN_00acb320(uVar9,2,uVar12);
    uVar12 = *unaff_x19;
    FUN_00ac2be8(uVar9);
    FUN_00acb0b4(uVar9,uVar12);
    FUN_00acb320(uVar9,3,uVar12);
    FUN_00ac2be8(uVar9);
    puVar7 = 
    Method_UnityEngine_ProBuilder_MeshOperations_MergeElements_<>c__DisplayClass0_0_<MergePairs>b__0__
    ;
    uVar12 = thunk_FUN_00d48444(
                               Method_UnityEngine_ProBuilder_MeshOperations_MergeElements_<>c__DisplayClass0_0_<MergePairs>b__0__
                               );
    FUN_00acb0b4(uVar9,uVar12);
    uVar12 = thunk_FUN_00d48444(puVar7);
    FUN_00acb320(uVar9,4,uVar12);
    uVar9 = FUN_01600844(uVar9,0);
    goto LAB_021e8a28;
  }
  uVar9 = *unaff_x19;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                            );
  puVar7 = Method_System_Collections_Generic_List<IRaycaster>_Remove__;
  if (lVar4 == 0) goto LAB_021e8a04;
  FUN_017b46ec(lVar4,0);
  _uStack00000000000001b0 = 0;
  in_stack_000001b8 = 0;
  FUN_021f605c(&stack0x000001b0,uVar9,0);
  *(undefined8 *)(lVar4 + 0x20) = unaff_x21;
  *(undefined8 *)(lVar4 + 0x18) = in_stack_000001b8;
  *(ulong *)(lVar4 + 0x10) = _uStack00000000000001b0;
  uVar9 = unaff_x19[7];
  *(undefined8 *)(lVar4 + 0xa0) = unaff_x19[8];
  *(undefined8 *)(lVar4 + 0x98) = uVar9;
  uVar1 = *(uint *)(lVar4 + 0xa8) & 0xfffffffe;
  if (*(char *)(unaff_x19 + 0xb) != '\0') {
    uVar1 = *(uint *)(lVar4 + 0xa8) | 1;
  }
  uVar11 = uVar1 & 0xfffffffd;
  if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
    uVar11 = uVar1 | 2;
  }
  *(uint *)(lVar4 + 0xa8) = uVar11;
  _uStack00000000000001b0 = 0;
  in_stack_000001b8 = 0;
  FUN_021f605c(&stack0x000001b0,unaff_x19[10],0);
  *(undefined8 *)(lVar4 + 0x30) = in_stack_000001b8;
  *(ulong *)(lVar4 + 0x28) = _uStack00000000000001b0;
  lVar5 = *(long *)puVar7;
  uVar9 = unaff_x19[6];
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar7;
  }
  puVar2 = Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__;
  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar7;
    }
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar10 == 0) goto LAB_021e8a04;
    FUN_012d239c(lVar10,uVar12,*(undefined8 *)StringLiteral_10246,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar10;
  }
  uVar9 = FUN_010b5ad8(uVar9,lVar10,*(undefined8 *)StringLiteral_1385);
  *(undefined8 *)(lVar4 + 0x88) = uVar9;
  uVar3 = FUN_015ff8a0(unaff_x19[3],0);
  if ((uVar3 & 1) == 0) {
    _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffff00000000;
    FUN_021fe1f0(&stack0x000001b0,unaff_x19[3],0);
    *(undefined4 *)(lVar4 + 0x38) = _uStack00000000000001b0;
  }
  puVar7 = 
  Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__;
  uVar3 = FUN_015ff8a0(unaff_x19[1],0);
  if ((uVar3 & 1) == 0) {
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    FUN_021f605c(&stack0x000000d0,unaff_x19[1],0);
    _uStack00000000000001b0 = in_stack_000000d0;
    in_stack_000001b8 = in_stack_000000d8;
    FUN_012f3a6c(lVar4 + 0x48,&stack0x000001b0,*(undefined8 *)puVar7);
  }
  lVar5 = unaff_x19[2];
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar3 = 0;
    uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar3) goto LAB_021e8a08;
      in_stack_000000d0 = 0;
      in_stack_000000d8 = 0;
      FUN_021f605c(&stack0x000000d0,*(undefined8 *)(lVar5 + 0x20 + uVar3 * 8),0);
      _uStack00000000000001b0 = in_stack_000000d0;
      in_stack_000001b8 = in_stack_000000d8;
      FUN_012f3a6c(lVar4 + 0x48,&stack0x000001b0,*(undefined8 *)puVar7);
      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  puVar2 = StringLiteral_9027;
  uVar3 = FUN_015ff8a0(unaff_x19[4],0);
  puVar7 = 
  Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__;
  if ((uVar3 & 1) != 0) {
LAB_021e8870:
    uVar3 = FUN_015ff8a0(unaff_x19[5],0);
    puVar7 = OVRPlugin_OVRP_1_105_0_TypeInfo;
    if ((uVar3 & 1) == 0) {
      if (unaff_x19[5] == 0) goto LAB_021e8a04;
      uVar9 = FUN_01604018(unaff_x19[5],0);
      uVar3 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar7,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_015fe514(uVar9,*(undefined8 *)
                                          Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                   ,0);
        if ((uVar3 & 1) == 0) {
          uVar12 = unaff_x19[4];
          uVar9 = thunk_FUN_00d48444(StringLiteral_13200);
          puVar7 = System_Collections_Generic_List<HandGrabPose>_TypeInfo;
          goto LAB_021e8bdc;
        }
        uVar9 = *(undefined8 *)puVar2;
        in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
      }
      else {
        uVar9 = *(undefined8 *)puVar2;
        in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
      }
      _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
      FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar9);
      FUN_021e7090(lVar4,_uStack00000000000001b0 & 0xffff);
    }
    if (unaff_x19[0xc] == 0) {
      return lVar4;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
      lVar10 = unaff_x19[0xc];
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar11 = 0;
          lVar14 = 0;
          do {
            if (uVar1 <= uVar11) {
LAB_021e8a08:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar13 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_021e8a04;
            uVar3 = FUN_015ff8a0(*(undefined8 *)(lVar13 + 0x10),0);
            if ((uVar3 & 1) == 0) {
              lVar14 = lVar13;
            }
            if ((uVar3 & 1) != 0) {
              uVar12 = *unaff_x19;
              uVar9 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
              uVar9 = FUN_015f5b28(uVar9,uVar12,0);
              goto LAB_021e8a28;
            }
            if (lVar14 == 0) goto LAB_021e8a04;
            FUN_021ecf78(&stack0x000000e0);
            memcpy(&stack0x00000000,&stack0x000000e0,0xd0);
            FUN_00c66f98(lVar5);
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar11 = uVar11 + 1;
            lVar14 = lVar13;
          } while ((int)uVar11 < (int)uVar1);
        }
        uVar9 = FUN_01325140(lVar5,*(undefined8 *)StringLiteral_11254);
        *(undefined8 *)(lVar4 + 0x90) = uVar9;
        return lVar4;
      }
    }
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (unaff_x19[4] == 0) goto LAB_021e8a04;
  uVar9 = FUN_01604018(unaff_x19[4],0);
  uVar3 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar7,0);
  if ((uVar3 & 1) != 0) {
    uVar9 = *(undefined8 *)puVar2;
    in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
LAB_021e885c:
    _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
    FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar9);
    *(undefined2 *)(lVar4 + 0x40) = uStack00000000000001b0;
    goto LAB_021e8870;
  }
  uVar3 = thunk_FUN_015fe514(uVar9,*(undefined8 *)StringLiteral_13303,0);
  if ((uVar3 & 1) != 0) {
    uVar9 = *(undefined8 *)puVar2;
    in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
    goto LAB_021e885c;
  }
  uVar12 = unaff_x19[4];
  uVar9 = thunk_FUN_00d48444(PTR_DAT_033ee020);
  puVar7 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
LAB_021e8bdc:
  uVar6 = thunk_FUN_00d48444(puVar7);
  uVar9 = FUN_01600424(uVar9,uVar12,uVar6,0);
LAB_021e8a28:
  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
  uVar12 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_017713a8(uVar12,uVar9,0);
  uVar9 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar9);
}


