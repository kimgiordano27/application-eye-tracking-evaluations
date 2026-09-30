/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.PolygonSet$$.ctor
ENTRY_POINT: 021e8610
PROGRAM: Lovesick-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_ProBuilder_Poly2Tri_PolygonSet___ctor(undefined1 param_1 [16])

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long lVar12;
  long lVar13;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined2 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined *puVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  *(long *)(unaff_x20 + 0x18) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x10) = param_1._0_8_;
  uVar8 = unaff_x19[7];
  *(undefined8 *)(unaff_x20 + 0xa0) = unaff_x19[8];
  *(undefined8 *)(unaff_x20 + 0x98) = uVar8;
  uVar1 = *(uint *)(unaff_x20 + 0xa8) & 0xfffffffe;
  if (*(char *)(unaff_x19 + 0xb) != '\0') {
    uVar1 = *(uint *)(unaff_x20 + 0xa8) | 1;
  }
  uVar10 = uVar1 & 0xfffffffd;
  if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
    uVar10 = uVar1 | 2;
  }
  *(uint *)(unaff_x20 + 0xa8) = uVar10;
  _uStack00000000000001b0 = 0;
  uStack00000000000001b8 = 0;
  FUN_021f605c(&stack0x000001b0,unaff_x19[10],0);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack00000000000001b8;
  *(ulong *)(unaff_x20 + 0x28) = _uStack00000000000001b0;
  lVar3 = *unaff_x24;
  uVar8 = unaff_x19[6];
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x24;
  }
  puVar6 = Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__;
  lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *unaff_x24;
    }
    uVar11 = **(undefined8 **)(lVar3 + 0xb8);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar9 == 0) goto LAB_021e8a04;
    FUN_012d239c(lVar9,uVar11,*(undefined8 *)StringLiteral_10246,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar9;
  }
  uVar8 = FUN_010b5ad8(uVar8,lVar9,*(undefined8 *)StringLiteral_1385);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar8;
  uVar4 = FUN_015ff8a0(unaff_x19[3],0);
  if ((uVar4 & 1) == 0) {
    _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffff00000000;
    FUN_021fe1f0(&stack0x000001b0,unaff_x19[3],0);
    *(undefined4 *)(unaff_x20 + 0x38) = _uStack00000000000001b0;
  }
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__;
  uVar4 = FUN_015ff8a0(unaff_x19[1],0);
  if ((uVar4 & 1) == 0) {
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    FUN_021f605c(&stack0x000000d0,unaff_x19[1],0);
    _uStack00000000000001b0 = in_stack_000000d0;
    uStack00000000000001b8 = in_stack_000000d8;
    FUN_012f3a6c(unaff_x20 + 0x48,&stack0x000001b0,*(undefined8 *)puVar6);
  }
  lVar3 = unaff_x19[2];
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar4) goto LAB_021e8a08;
      in_stack_000000d0 = 0;
      in_stack_000000d8 = 0;
      FUN_021f605c(&stack0x000000d0,*(undefined8 *)(lVar3 + 0x20 + uVar4 * 8),0);
      _uStack00000000000001b0 = in_stack_000000d0;
      uStack00000000000001b8 = in_stack_000000d8;
      FUN_012f3a6c(unaff_x20 + 0x48,&stack0x000001b0,*(undefined8 *)puVar6);
      uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  puVar2 = StringLiteral_9027;
  uVar4 = FUN_015ff8a0(unaff_x19[4],0);
  puVar6 = 
  Method_UnityEngine_UIElements_MeshGenerationContextUtils_RectangleParams_AdjustUVsForScaleMode__;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19[4] == 0) goto LAB_021e8a04;
    uVar8 = FUN_01604018(unaff_x19[4],0);
    uVar4 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar6,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = thunk_FUN_015fe514(uVar8,*(undefined8 *)StringLiteral_13303,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = unaff_x19[4];
        uVar8 = thunk_FUN_00d48444(PTR_DAT_033ee020);
        puVar6 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
        goto LAB_021e8bdc;
      }
      uVar8 = *(undefined8 *)puVar2;
      in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
    }
    else {
      uVar8 = *(undefined8 *)puVar2;
      in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
    }
    _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
    FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar8);
    *(undefined2 *)(unaff_x20 + 0x40) = uStack00000000000001b0;
  }
  uVar4 = FUN_015ff8a0(unaff_x19[5],0);
  puVar6 = OVRPlugin_OVRP_1_105_0_TypeInfo;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19[5] == 0) goto LAB_021e8a04;
    uVar8 = FUN_01604018(unaff_x19[5],0);
    uVar4 = thunk_FUN_015fe514(uVar8,*(undefined8 *)puVar6,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = thunk_FUN_015fe514(uVar8,*(undefined8 *)
                                        Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                 ,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = unaff_x19[4];
        uVar8 = thunk_FUN_00d48444(StringLiteral_13200);
        puVar6 = System_Collections_Generic_List<HandGrabPose>_TypeInfo;
LAB_021e8bdc:
        uVar5 = thunk_FUN_00d48444(puVar6);
        uVar8 = FUN_01600424(uVar8,uVar11,uVar5,0);
LAB_021e8a28:
        thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
        uVar11 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017713a8(uVar11,uVar8,0);
        uVar8 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,uVar8);
      }
      uVar8 = *(undefined8 *)puVar2;
      in_stack_000000d0 = in_stack_000000d0 & 0xffffffffffffff00;
    }
    else {
      uVar8 = *(undefined8 *)puVar2;
      in_stack_000000d0 = CONCAT71(in_stack_000000d0._1_7_,1);
    }
    _uStack00000000000001b0 = _uStack00000000000001b0 & 0xffffffffffff0000;
    FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar8);
    FUN_021e7090();
  }
  if (unaff_x19[0xc] == 0) {
    return;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
    lVar9 = unaff_x19[0xc];
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        lVar13 = 0;
        do {
          if (uVar1 <= uVar10) {
LAB_021e8a08:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar12 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_021e8a04;
          uVar4 = FUN_015ff8a0(*(undefined8 *)(lVar12 + 0x10),0);
          if ((uVar4 & 1) == 0) {
            lVar13 = lVar12;
          }
          if ((uVar4 & 1) != 0) {
            uVar11 = *unaff_x19;
            uVar8 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
            uVar8 = FUN_015f5b28(uVar8,uVar11,0);
            goto LAB_021e8a28;
          }
          if (lVar13 == 0) goto LAB_021e8a04;
          FUN_021ecf78(&stack0x000000e0);
          memcpy(&stack0x00000000,&stack0x000000e0,0xd0);
          FUN_00c66f98(lVar3);
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
          lVar13 = lVar12;
        } while ((int)uVar10 < (int)uVar1);
      }
      uVar8 = FUN_01325140(lVar3,*(undefined8 *)StringLiteral_11254);
      *(undefined8 *)(unaff_x20 + 0x90) = uVar8;
      return;
    }
  }
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


