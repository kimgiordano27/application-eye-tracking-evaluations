/*
FUNCTION_NAME: Unity.Mathematics.math$$clamp
ENTRY_POINT: 0211af7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_math__clamp
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong unaff_x19;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong uVar19;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000150;
  int iStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_00000330;
  long in_stack_00000370;
  long in_stack_00000410;
  long in_stack_00000450;
  
  uVar22 = param_3._8_8_;
  uVar21 = param_3._0_8_;
  uVar20 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  uVar10 = param_1._8_8_;
  uVar11 = param_1._0_8_;
  while( true ) {
    uVar24 = unaff_x28[1];
    uVar23 = *unaff_x28;
    uVar26 = unaff_x28[3];
    uVar25 = unaff_x28[2];
    unaff_x27[0x51] = uVar10;
    unaff_x27[0x50] = uVar11;
    unaff_x27[0x53] = uVar20;
    unaff_x27[0x52] = uVar8;
    unaff_x27[0x55] = uVar22;
    unaff_x27[0x54] = uVar21;
    unaff_x27[0x4d] = uVar24;
    unaff_x27[0x4c] = uVar23;
    unaff_x27[0x4f] = uVar26;
    unaff_x27[0x4e] = uVar25;
    if (unaff_x23 == 0) break;
    uVar11 = *(undefined8 *)(unaff_x23 + 0x10);
    unaff_x27[0x11] = unaff_x27[0x51];
    unaff_x27[0x10] = unaff_x27[0x50];
    unaff_x27[0x13] = unaff_x27[0x53];
    unaff_x27[0x12] = unaff_x27[0x52];
    unaff_x27[0x15] = unaff_x27[0x55];
    unaff_x27[0x14] = unaff_x27[0x54];
    unaff_x27[0xd] = unaff_x27[0x4d];
    unaff_x27[0xc] = unaff_x27[0x4c];
    unaff_x27[0xf] = unaff_x27[0x4f];
    unaff_x27[0xe] = unaff_x27[0x4e];
    if (unaff_x24 == 0) break;
    uVar8 = unaff_x27[0xc];
    uVar21 = unaff_x27[0xf];
    uVar20 = unaff_x27[0xe];
    uVar10 = *unaff_x29;
    unaff_x27[1] = unaff_x27[0x11];
    *unaff_x27 = unaff_x27[0x10];
    unaff_x27[3] = unaff_x27[0x13];
    unaff_x27[2] = unaff_x27[0x12];
    unaff_x27[5] = unaff_x27[0x15];
    unaff_x27[4] = unaff_x27[0x14];
    unaff_x22[1] = unaff_x27[0xd];
    *unaff_x22 = uVar8;
    unaff_x22[3] = uVar21;
    unaff_x22[2] = uVar20;
    in_stack_00000150 = uVar11;
    FUN_00c5d528(unaff_x24,&stack0x00000120,uVar10);
    uVar12 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 8;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x25) {
      do {
        do {
          unaff_x19 = unaff_x19 + 1;
          if (unaff_x19 == unaff_x21) {
            lVar13 = in_stack_00000028[1];
            if ((lVar13 == 0) || (uVar12 = *(ulong *)(lVar13 + 0x18), (int)uVar12 < 1))
            goto LAB_0211b480;
                    /* try { // try from 0211b02c to 0221b05f has its CatchHandler @ 0211b02c
                       catch() { ... } // from try @ 0211b02c with catch @ 0211b02c
                       catch() { ... } // from try @ 0211b0b0 with catch @ 0211b02c
                       catch() { ... } // from try @ 0211b0f0 with catch @ 0211b02c
                       catch() { ... } // from try @ 0211b138 with catch @ 0211b02c */
            uVar16 = 0;
            goto LAB_0211b04c;
          }
          lVar13 = *in_stack_00000028;
          if (lVar13 == 0) goto LAB_0211b5a0;
          if (*(uint *)(lVar13 + 0x18) <= unaff_x19) goto LAB_0211b5a4;
          memcpy(&stack0x00000410,(void *)(lVar13 + unaff_x19 * 0x48 + 0x20),0x48);
          uVar12 = FUN_015ff8a0(in_stack_00000410,0);
          if ((uVar12 & 1) != 0) {
            iStack00000000000001a0 = (int)unaff_x19 + 1;
            uVar11 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       );
            uVar11 = thunk_FUN_00d61fa0(uVar11,&stack0x000001a0);
            puVar9 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_SetResult__
            ;
            goto LAB_0211b680;
          }
          if (in_stack_00000410 == 0) goto LAB_0211b5a0;
          iVar2 = FUN_016047a8(in_stack_00000410,0x2f,0);
          if (iVar2 == -1) {
            uVar11 = 0;
            lVar13 = in_stack_00000410;
          }
          else {
            uVar11 = FUN_01601d40(in_stack_00000410,0,iVar2,0);
            lVar13 = FUN_01603ec8(in_stack_00000410,iVar2 + 1,0);
            uVar12 = FUN_015ff8a0(lVar13,0);
            if ((uVar12 & 1) != 0) {
              uVar11 = thunk_FUN_00d48444(PTR_DAT_033f15c8);
              uVar10 = thunk_FUN_00d48444(SaveServerInterface_<StoreSaveCoroutine>d__15_TypeInfo);
              uVar11 = FUN_01600424(uVar11,in_stack_00000410,uVar10,0);
              goto LAB_0211b5e8;
            }
          }
          if (0 < *(int *)(in_stack_00000060 + 0x18)) {
            iVar2 = 0;
            do {
              FUN_0132138c(in_stack_00000060,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188)
              ;
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
              iVar3 = FUN_015fd224(*(undefined8 *)
                                    (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10)
                                   ,uVar11,3,0);
              if (iVar3 == 0) {
                FUN_0132138c(in_stack_00000060,iVar2,&stack0x000001a0,
                             *(undefined8 *)PTR_DAT_033ec188);
                if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211aec8;
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(in_stack_00000060 + 0x18));
          }
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                                    );
          if (lVar4 == 0) goto LAB_0211b5a0;
          *(undefined4 *)(lVar4 + 0x58) = 0xffffffff;
          FUN_017b46ec(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = uVar11;
          iVar2 = *(int *)(in_stack_00000060 + 0x18);
          FUN_00c5cd68(in_stack_00000060,lVar4,
                       *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
          if (lVar4 == 0) goto LAB_0211b5a0;
          FUN_01320e50(lVar4,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
          FUN_00c5cf58(in_stack_00000058,lVar4,*(undefined8 *)System_Nullable<bool>_var);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__
                                    );
          if (lVar4 == 0) goto LAB_0211b5a0;
          FUN_01320e50(lVar4,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__)
          ;
          FUN_00c5d148(in_stack_00000040,lVar4,*(undefined8 *)PTR_DAT_033f0e00);
LAB_0211aec8:
          unaff_x23 = FUN_0211e494(&stack0x00000410,lVar13);
          FUN_0132138c(in_stack_00000058,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
          FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),unaff_x23,
                       *(undefined8 *)PTR_DAT_033f5968);
        } while (in_stack_00000450 == 0);
        FUN_0132138c(in_stack_00000040,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
      } while ((int)*(ulong *)(in_stack_00000450 + 0x18) < 1);
      unaff_x24 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      unaff_x25 = 0;
      uVar12 = *(ulong *)(in_stack_00000450 + 0x18) & 0xffffffff;
      unaff_x26 = (undefined8 *)(in_stack_00000450 + 0x20);
      unaff_x20 = in_stack_00000450;
    }
    if (uVar12 <= unaff_x25) goto LAB_0211b5a4;
    uVar11 = unaff_x26[4];
    uVar8 = unaff_x26[7];
    uVar10 = unaff_x26[6];
    uVar21 = unaff_x26[1];
    uVar20 = *unaff_x26;
    uVar23 = unaff_x26[3];
    uVar22 = unaff_x26[2];
    unaff_x27[0x5b] = unaff_x26[5];
    unaff_x27[0x5a] = uVar11;
    unaff_x27[0x5d] = uVar8;
    unaff_x27[0x5c] = uVar10;
    unaff_x27[0x57] = uVar21;
    unaff_x27[0x56] = uVar20;
    unaff_x27[0x59] = uVar23;
    unaff_x27[0x58] = uVar22;
    FUN_0211e2ec(&stack0x000001a0,&stack0x000003d0);
    uVar10 = unaff_x27[0x11];
    uVar11 = unaff_x27[0x10];
    uVar20 = unaff_x27[0x13];
    uVar8 = unaff_x27[0x12];
    uVar22 = unaff_x27[0x15];
    uVar21 = unaff_x27[0x14];
  }
  goto LAB_0211b5a0;
LAB_0211b480:
  puVar1 = Method_System_UInt16_CompareTo__;
  puVar9 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
  if (0 < *(int *)(in_stack_00000060 + 0x18)) {
    iVar2 = 0;
    do {
      FUN_0132138c(in_stack_00000060,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
      lVar13 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      FUN_0132138c(in_stack_00000058,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
      if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
      lVar4 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                           *(undefined8 *)puVar9);
      FUN_0132138c(in_stack_00000040,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
      if ((CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) ||
         (uVar11 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                                *(undefined8 *)puVar1), lVar13 == 0)) goto LAB_0211b5a0;
      *(long *)(lVar13 + 0x28) = lVar4;
      *(undefined8 *)(lVar13 + 0x30) = uVar11;
      if (lVar4 == 0) goto LAB_0211b5a0;
      iVar3 = *(int *)(lVar4 + 0x18);
      if (0 < iVar3) {
        lVar6 = 0;
        do {
          lVar15 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
          if (lVar15 == 0) goto LAB_0211b5a0;
          lVar6 = lVar6 + 1;
          *(long *)(lVar15 + 200) = lVar13;
        } while ((int)lVar6 < iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_stack_00000060 + 0x18));
  }
  FUN_01325140(in_stack_00000060,
               *(undefined8 *)
                Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
              );
  return;
LAB_0211b04c:
  do {
    if (*(uint *)(lVar13 + 0x18) <= uVar16) {
LAB_0211b5a4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar13 = lVar13 + uVar16 * 0x20;
    uVar11 = *(undefined8 *)(lVar13 + 0x20);
    uVar10 = *(undefined8 *)(lVar13 + 0x28);
    lVar4 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    uVar5 = FUN_015ff8a0(uVar11,0);
    if ((uVar5 & 1) != 0) {
      iStack00000000000001a0 = (int)uVar16 + 1;
      uVar11 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 );
      uVar11 = thunk_FUN_00d61fa0(uVar11,&stack0x000001a0);
      puVar9 = Method_System_Collections_Generic_List<KerningPair>__ctor__;
LAB_0211b680:
      uVar10 = thunk_FUN_00d48444(puVar9);
      uVar11 = FUN_015f6780(uVar10,uVar11,0);
LAB_0211b5e8:
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017713a8(uVar10,uVar11,0);
      uVar11 = thunk_FUN_00d48444(
                                 Method_DigitalOpus_MB_Core_MB3_MeshBakerGrouperBehaviour_<>c__DisplayClass2_0_<DoClustering>b__0__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,uVar11);
    }
    if (0 < *(int *)(in_stack_00000060 + 0x18)) {
      iVar2 = 0;
      do {
        FUN_0132138c(in_stack_00000060,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
        if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
        iVar3 = FUN_015fd224(*(undefined8 *)
                              (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10),
                             uVar11,3,0);
        if (iVar3 == 0) {
          FUN_0132138c(in_stack_00000060,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211b1e4;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_stack_00000060 + 0x18));
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                              );
    if (lVar6 == 0) break;
    *(undefined4 *)(lVar6 + 0x58) = 0xffffffff;
    FUN_017b46ec(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = uVar11;
    uVar5 = FUN_015ff8a0(uVar10,0);
    uVar8 = 0;
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar10;
    }
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    iVar2 = *(int *)(in_stack_00000060 + 0x18);
    FUN_00c5cd68(in_stack_00000060,lVar6,
                 *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
    if (lVar6 == 0) break;
    FUN_01320e50(lVar6,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                );
    FUN_00c5cf58(in_stack_00000058,lVar6,*(undefined8 *)System_Nullable<bool>_var);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__);
    if (lVar6 == 0) break;
    FUN_01320e50(lVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__);
    FUN_00c5d148(in_stack_00000040,lVar6,*(undefined8 *)PTR_DAT_033f0e00);
LAB_0211b1e4:
    if (lVar4 != 0) {
      if (lVar4 == 0) break;
      uVar5 = *(ulong *)(lVar4 + 0x18);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar19) goto LAB_0211b5a4;
          memcpy(&stack0x00000330,(void *)(lVar4 + uVar19 * 0x48 + 0x20),0x48);
          uVar7 = FUN_015ff8a0(in_stack_00000330,0);
          if ((uVar7 & 1) != 0) {
            iStack00000000000001a0 = (int)uVar16 + 1;
            uVar10 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       );
            uVar10 = thunk_FUN_00d61fa0(uVar10,&stack0x000001a0);
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GSTU_Cell>_get_Item__
                                      );
            uVar11 = FUN_01600b5c(uVar8,uVar10,uVar11,0);
            goto LAB_0211b5e8;
          }
          lVar6 = FUN_0211e494(&stack0x00000330,0);
          FUN_0132138c(in_stack_00000058,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
          FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar6,
                       *(undefined8 *)PTR_DAT_033f5968);
          if (in_stack_00000370 != 0) {
            FUN_0132138c(in_stack_00000040,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
            if (0 < (int)*(ulong *)(in_stack_00000370 + 0x18)) {
              lVar15 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
              uVar7 = 0;
              uVar14 = *(ulong *)(in_stack_00000370 + 0x18) & 0xffffffff;
              puVar17 = (undefined8 *)(in_stack_00000370 + 0x20);
              do {
                if (uVar14 <= uVar7) goto LAB_0211b5a4;
                uVar10 = puVar17[4];
                uVar20 = puVar17[7];
                uVar8 = puVar17[6];
                uVar22 = puVar17[1];
                uVar21 = *puVar17;
                uVar24 = puVar17[3];
                uVar23 = puVar17[2];
                unaff_x27[0x3f] = puVar17[5];
                unaff_x27[0x3e] = uVar10;
                unaff_x27[0x41] = uVar20;
                unaff_x27[0x40] = uVar8;
                unaff_x27[0x3b] = uVar22;
                unaff_x27[0x3a] = uVar21;
                unaff_x27[0x3d] = uVar24;
                unaff_x27[0x3c] = uVar23;
                FUN_0211e2ec(&stack0x000001a0,&stack0x000002f0);
                unaff_x27[0x35] = unaff_x27[0x11];
                unaff_x27[0x34] = unaff_x27[0x10];
                unaff_x27[0x37] = unaff_x27[0x13];
                unaff_x27[0x36] = unaff_x27[0x12];
                unaff_x27[0x39] = unaff_x27[0x15];
                unaff_x27[0x38] = unaff_x27[0x14];
                unaff_x27[0x31] = in_stack_000001e0;
                unaff_x27[0x30] = in_stack_000001d8;
                unaff_x27[0x33] = in_stack_000001f0;
                unaff_x27[0x32] = in_stack_000001e8;
                if (lVar6 == 0) goto LAB_0211b5a0;
                uVar10 = *(undefined8 *)(lVar6 + 0x10);
                unaff_x27[0x11] = unaff_x27[0x35];
                unaff_x27[0x10] = unaff_x27[0x34];
                unaff_x27[0x13] = unaff_x27[0x37];
                unaff_x27[0x12] = unaff_x27[0x36];
                unaff_x27[0x15] = unaff_x27[0x39];
                unaff_x27[0x14] = unaff_x27[0x38];
                unaff_x27[0xd] = unaff_x27[0x31];
                unaff_x27[0xc] = unaff_x27[0x30];
                unaff_x27[0xf] = unaff_x27[0x33];
                unaff_x27[0xe] = unaff_x27[0x32];
                if (lVar15 == 0) goto LAB_0211b5a0;
                in_stack_000000c8 = unaff_x27[0x11];
                in_stack_000000c0 = unaff_x27[0x10];
                in_stack_000000d8 = unaff_x27[0x13];
                in_stack_000000d0 = unaff_x27[0x12];
                in_stack_000000e8 = unaff_x27[0x15];
                in_stack_000000e0 = unaff_x27[0x14];
                in_stack_00000100 = unaff_x27[0xd];
                in_stack_000000f8 = unaff_x27[0xc];
                in_stack_00000110 = unaff_x27[0xf];
                in_stack_00000108 = unaff_x27[0xe];
                in_stack_000000f0 = uVar10;
                FUN_00c5d528(lVar15,&stack0x000000c0,*unaff_x29);
                uVar14 = (ulong)*(uint *)(in_stack_00000370 + 0x18);
                uVar7 = uVar7 + 1;
                puVar17 = puVar17 + 8;
              } while ((long)uVar7 < (long)(int)*(uint *)(in_stack_00000370 + 0x18));
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != (uVar5 & 0xffffffff));
      }
    }
    if (lVar13 == 0) {
      uVar18 = 0;
    }
    else {
      if (lVar13 == 0) break;
      uVar18 = *(uint *)(lVar13 + 0x18);
    }
    FUN_0132138c(in_stack_00000040,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
    if (0 < (int)uVar18) {
      if (lVar13 == 0) break;
      lVar4 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      uVar5 = 0;
      puVar17 = (undefined8 *)(lVar13 + 0x20);
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_0211b5a4;
        uVar11 = puVar17[4];
        uVar8 = puVar17[7];
        uVar10 = puVar17[6];
        uVar21 = puVar17[1];
        uVar20 = *puVar17;
        uVar23 = puVar17[3];
        uVar22 = puVar17[2];
        unaff_x27[0x2d] = puVar17[5];
        unaff_x27[0x2c] = uVar11;
        unaff_x27[0x2f] = uVar8;
        unaff_x27[0x2e] = uVar10;
        unaff_x27[0x29] = uVar21;
        unaff_x27[0x28] = uVar20;
        unaff_x27[0x2b] = uVar23;
        unaff_x27[0x2a] = uVar22;
        FUN_0211e2ec(&stack0x00000200,&stack0x00000260);
        memcpy(&stack0x000001a0,&stack0x00000200,0x58);
        if (lVar4 == 0) goto LAB_0211b5a0;
        memcpy(&stack0x00000068,&stack0x000001a0,0x58);
        FUN_00c5d528(lVar4,&stack0x00000068,*unaff_x29);
        uVar5 = uVar5 + 1;
        puVar17 = puVar17 + 8;
      } while (uVar18 != uVar5);
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (uVar12 & 0xffffffff)) goto LAB_0211b480;
    lVar13 = in_stack_00000028[1];
  } while (lVar13 != 0);
LAB_0211b5a0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


