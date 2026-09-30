/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.PolygonPoint$$.ctor
ENTRY_POINT: 021e8578
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


long UnityEngine_ProBuilder_Poly2Tri_PolygonPoint___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined2 uStack00000000000001b0;
  undefined8 in_stack_000001b8;
  undefined *puVar8;
  
  uVar3 = FUN_01780344(param_1,0);
  uVar10 = *unaff_x19;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                            );
  puVar8 = Method_System_Collections_Generic_List<IRaycaster>_Remove__;
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    _uStack00000000000001b0 = 0;
    in_stack_000001b8 = 0;
    FUN_021f605c(&stack0x000001b0,uVar10,0);
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x18) = in_stack_000001b8;
    *(ulong *)(lVar4 + 0x10) = _uStack00000000000001b0;
    uVar3 = unaff_x19[7];
    *(undefined8 *)(lVar4 + 0xa0) = unaff_x19[8];
    *(undefined8 *)(lVar4 + 0x98) = uVar3;
    uVar1 = *(uint *)(lVar4 + 0xa8) & 0xfffffffe;
    if (*(char *)(unaff_x19 + 0xb) != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xa8) | 1;
    }
    uVar12 = uVar1 & 0xfffffffd;
    if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
      uVar12 = uVar1 | 2;
    }
    *(uint *)(lVar4 + 0xa8) = uVar12;
    _uStack00000000000001b0 = 0;
    in_stack_000001b8 = 0;
    FUN_021f605c(&stack0x000001b0,unaff_x19[10],0);
    *(undefined8 *)(lVar4 + 0x30) = in_stack_000001b8;
    *(ulong *)(lVar4 + 0x28) = _uStack00000000000001b0;
    lVar5 = *(long *)puVar8;
    uVar3 = unaff_x19[6];
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar8;
    }
    puVar2 = Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__;
    lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar8;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar11 == 0) goto LAB_021e8a04;
      FUN_012d239c(lVar11,uVar10,*(undefined8 *)StringLiteral_10246,0);
      *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8) = lVar11;
    }
    uVar3 = FUN_010b5ad8(uVar3,lVar11,*(undefined8 *)StringLiteral_1385);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    uVar6 = FUN_015ff8a0(unaff_x19[3],0);
    if ((uVar6 & 1) == 0) {
      _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffff00000000;
      FUN_021fe1f0(&stack0x000001b0,unaff_x19[3],0);
      *(undefined4 *)(lVar4 + 0x38) = _uStack00000000000001b0;
    }
    puVar8 = 
    Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__;
    uVar6 = FUN_015ff8a0(unaff_x19[1],0);
    if ((uVar6 & 1) == 0) {
      in_stack_000000d0 = 0;
      in_stack_000000d8 = 0;
      FUN_021f605c(&stack0x000000d0,unaff_x19[1],0);
      _uStack00000000000001b0 = in_stack_000000d0;
      in_stack_000001b8 = in_stack_000000d8;
      FUN_012f3a6c(lVar4 + 0x48,&stack0x000001b0,*(undefined8 *)puVar8);
    }
    lVar5 = unaff_x19[2];
    if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
      uVar6 = 0;
      uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar6) goto LAB_021e8a08;
        in_stack_000000d0 = 0;
        in_stack_000000d8 = 0;
        FUN_021f605c(&stack0x000000d0,*(undefined8 *)(lVar5 + 0x20 + uVar6 * 8),0);
        _uStack00000000000001b0 = in_stack_000000d0;
        in_stack_000001b8 = in_stack_000000d8;
        FUN_012f3a6c(lVar4 + 0x48,&stack0x000001b0,*(undefined8 *)puVar8);
        uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    puVar2 = StringLiteral_9027;
    uVar6 = FUN_015ff8a0(unaff_x19[4],0);
    puVar8 = 
    Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__
    ;
    if ((uVar6 & 1) == 0) {
      if (unaff_x19[4] == 0) goto LAB_021e8a04;
      uVar3 = FUN_01604018(unaff_x19[4],0);
      uVar6 = thunk_FUN_015fe514(uVar3,*(undefined8 *)puVar8,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = thunk_FUN_015fe514(uVar3,*(undefined8 *)StringLiteral_13303,0);
        if ((uVar6 & 1) == 0) {
          uVar10 = unaff_x19[4];
          uVar3 = thunk_FUN_00d48444(PTR_DAT_033ee020);
          puVar8 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
          goto LAB_021e8bdc;
        }
        uVar3 = *(undefined8 *)puVar2;
        in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
      }
      else {
        uVar3 = *(undefined8 *)puVar2;
        in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
      }
      _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
      FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar3);
      *(undefined2 *)(lVar4 + 0x40) = uStack00000000000001b0;
    }
    uVar6 = FUN_015ff8a0(unaff_x19[5],0);
    puVar8 = OVRPlugin_OVRP_1_105_0_TypeInfo;
    if ((uVar6 & 1) == 0) {
      if (unaff_x19[5] == 0) goto LAB_021e8a04;
      uVar3 = FUN_01604018(unaff_x19[5],0);
      uVar6 = thunk_FUN_015fe514(uVar3,*(undefined8 *)puVar8,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = thunk_FUN_015fe514(uVar3,*(undefined8 *)
                                          Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                   ,0);
        if ((uVar6 & 1) == 0) {
          uVar10 = unaff_x19[4];
          uVar3 = thunk_FUN_00d48444(StringLiteral_13200);
          puVar8 = System_Collections_Generic_List<HandGrabPose>_TypeInfo;
LAB_021e8bdc:
          uVar7 = thunk_FUN_00d48444(puVar8);
          uVar3 = FUN_01600424(uVar3,uVar10,uVar7,0);
LAB_021e8a28:
          thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017713a8(uVar10,uVar3,0);
          uVar3 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,uVar3);
        }
        uVar3 = *(undefined8 *)puVar2;
        in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
      }
      else {
        uVar3 = *(undefined8 *)puVar2;
        in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
      }
      _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
      FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar3);
      FUN_021e7090(lVar4,_uStack00000000000001b0 & 0xffff);
    }
    if (unaff_x19[0xc] == 0) {
      return lVar4;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
      lVar11 = unaff_x19[0xc];
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          lVar14 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_021e8a08:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar13 = *(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_021e8a04;
            uVar6 = FUN_015ff8a0(*(undefined8 *)(lVar13 + 0x10),0);
            if ((uVar6 & 1) == 0) {
              lVar14 = lVar13;
            }
            if ((uVar6 & 1) != 0) {
              uVar10 = *unaff_x19;
              uVar3 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
              uVar3 = FUN_015f5b28(uVar3,uVar10,0);
              goto LAB_021e8a28;
            }
            if (lVar14 == 0) goto LAB_021e8a04;
            FUN_021ecf78(&stack0x000000e0);
            memcpy(&stack0x00000000,&stack0x000000e0,0xd0);
            FUN_00c66f98(lVar5);
            uVar1 = *(uint *)(lVar11 + 0x18);
            uVar12 = uVar12 + 1;
            lVar14 = lVar13;
          } while ((int)uVar12 < (int)uVar1);
        }
        uVar3 = FUN_01325140(lVar5,*(undefined8 *)StringLiteral_11254);
        *(undefined8 *)(lVar4 + 0x90) = uVar3;
        return lVar4;
      }
    }
  }
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


