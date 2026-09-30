/*
FUNCTION_NAME: Unity.Mathematics.math$$clamp
ENTRY_POINT: 0211b450
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_math__clamp(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong unaff_x19;
  uint uVar15;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar16;
  long unaff_x23;
  int iVar17;
  long unaff_x24;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000028;
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
  int iStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined8 in_stack_00000330;
  long in_stack_00000370;
  
  do {
    unaff_x19 = unaff_x19 + 1;
    unaff_x21 = unaff_x21 + 8;
    if (unaff_x20 == unaff_x19) {
      do {
        puVar2 = Method_System_UInt16_CompareTo__;
        puVar1 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
        in_stack_00000018 = in_stack_00000018 + 1;
        if (in_stack_00000018 == in_stack_00000010) {
          if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_0211b56c;
          iVar17 = 0;
          goto LAB_0211b4a8;
        }
        lVar11 = *(long *)(in_stack_00000028 + 8);
        if (lVar11 == 0) goto LAB_0211b5a0;
        if (*(uint *)(lVar11 + 0x18) <= in_stack_00000018) goto LAB_0211b5a4;
        lVar11 = lVar11 + in_stack_00000018 * 0x20;
        uVar7 = *(undefined8 *)(lVar11 + 0x20);
        uVar10 = *(undefined8 *)(lVar11 + 0x28);
        lVar6 = *(long *)(lVar11 + 0x30);
        unaff_x24 = *(long *)(lVar11 + 0x38);
        uVar4 = FUN_015ff8a0(uVar7,0);
        if ((uVar4 & 1) != 0) {
          iStack00000000000001a0 = (int)in_stack_00000018 + 1;
          uVar7 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    );
          uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x000001a0);
          uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<KerningPair>__ctor__);
          uVar7 = FUN_015f6780(uVar10,uVar7,0);
LAB_0211b5e8:
          thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017713a8(uVar10,uVar7,0);
          uVar7 = thunk_FUN_00d48444(
                                    Method_DigitalOpus_MB_Core_MB3_MeshBakerGrouperBehaviour_<>c__DisplayClass2_0_<DoClustering>b__0__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,uVar7);
        }
        if (0 < *(int *)(unaff_x26 + 0x18)) {
          iVar17 = 0;
          do {
            FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
            if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
            iVar3 = FUN_015fd224(*(undefined8 *)
                                  (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10),
                                 uVar7,3,0);
            if (iVar3 == 0) {
              FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211b1e4;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(unaff_x26 + 0x18));
        }
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                                   );
        if (lVar11 == 0) goto LAB_0211b5a0;
        *(undefined4 *)(lVar11 + 0x58) = 0xffffffff;
        FUN_017b46ec(lVar11,0);
        *(undefined8 *)(lVar11 + 0x10) = uVar7;
        uVar4 = FUN_015ff8a0(uVar10,0);
        uVar8 = 0;
        if ((uVar4 & 1) == 0) {
          uVar8 = uVar10;
        }
        *(undefined8 *)(lVar11 + 0x18) = uVar8;
        iVar17 = *(int *)(in_stack_00000060 + 0x18);
        FUN_00c5cd68(in_stack_00000060,lVar11,
                     *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
        if (lVar11 == 0) goto LAB_0211b5a0;
        FUN_01320e50(lVar11,*(undefined8 *)
                             Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    );
        FUN_00c5cf58(in_stack_00000058,lVar11,*(undefined8 *)System_Nullable<bool>_var);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__
                                   );
        if (lVar11 == 0) goto LAB_0211b5a0;
        FUN_01320e50(lVar11,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__);
        FUN_00c5d148(in_stack_00000040,lVar11,*(undefined8 *)PTR_DAT_033f0e00);
        unaff_x26 = in_stack_00000060;
LAB_0211b1e4:
        if (lVar6 != 0) {
          if (lVar6 == 0) goto LAB_0211b5a0;
          uVar4 = *(ulong *)(lVar6 + 0x18);
          if (0 < (int)uVar4) {
            uVar16 = 0;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_0211b5a4;
              memcpy(&stack0x00000330,(void *)(lVar6 + uVar16 * 0x48 + 0x20),0x48);
              uVar5 = FUN_015ff8a0(in_stack_00000330,0);
              if ((uVar5 & 1) != 0) {
                iStack00000000000001a0 = (int)in_stack_00000018 + 1;
                uVar10 = thunk_FUN_00d48444(
                                           Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                           );
                uVar10 = thunk_FUN_00d61fa0(uVar10,&stack0x000001a0);
                uVar8 = thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_Dictionary<string,_GSTU_Cell>_get_Item__
                                          );
                uVar7 = FUN_01600b5c(uVar8,uVar10,uVar7,0);
                goto LAB_0211b5e8;
              }
              lVar11 = FUN_0211e494(&stack0x00000330,0);
              FUN_0132138c(in_stack_00000058,iVar17,&stack0x000001a0,
                           *(undefined8 *)StringLiteral_13262);
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
              FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar11,
                           *(undefined8 *)PTR_DAT_033f5968);
              if (in_stack_00000370 != 0) {
                FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,
                             *(undefined8 *)PTR_DAT_033f1b50);
                if (0 < (int)*(ulong *)(in_stack_00000370 + 0x18)) {
                  lVar12 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
                  uVar5 = 0;
                  uVar9 = *(ulong *)(in_stack_00000370 + 0x18) & 0xffffffff;
                  puVar14 = (undefined8 *)(in_stack_00000370 + 0x20);
                  do {
                    if (uVar9 <= uVar5) goto LAB_0211b5a4;
                    uVar10 = puVar14[4];
                    uVar18 = puVar14[7];
                    uVar8 = puVar14[6];
                    uVar20 = puVar14[1];
                    uVar19 = *puVar14;
                    uVar22 = puVar14[3];
                    uVar21 = puVar14[2];
                    *(undefined8 *)(unaff_x27 + 0x1f8) = puVar14[5];
                    *(undefined8 *)(unaff_x27 + 0x1f0) = uVar10;
                    *(undefined8 *)(unaff_x27 + 0x208) = uVar18;
                    *(undefined8 *)(unaff_x27 + 0x200) = uVar8;
                    *(undefined8 *)(unaff_x27 + 0x1d8) = uVar20;
                    *(undefined8 *)(unaff_x27 + 0x1d0) = uVar19;
                    *(undefined8 *)(unaff_x27 + 0x1e8) = uVar22;
                    *(undefined8 *)(unaff_x27 + 0x1e0) = uVar21;
                    FUN_0211e2ec(&stack0x000001a0,&stack0x000002f0);
                    uVar8 = unaff_x28[1];
                    uVar10 = *unaff_x28;
                    uVar19 = unaff_x28[3];
                    uVar18 = unaff_x28[2];
                    *(undefined8 *)(unaff_x27 + 0x1a8) = *(undefined8 *)(unaff_x27 + 0x88);
                    *(undefined8 *)(unaff_x27 + 0x1a0) = *(undefined8 *)(unaff_x27 + 0x80);
                    *(undefined8 *)(unaff_x27 + 0x1b8) = *(undefined8 *)(unaff_x27 + 0x98);
                    *(undefined8 *)(unaff_x27 + 0x1b0) = *(undefined8 *)(unaff_x27 + 0x90);
                    *(undefined8 *)(unaff_x27 + 0x1c8) = *(undefined8 *)(unaff_x27 + 0xa8);
                    *(undefined8 *)(unaff_x27 + 0x1c0) = *(undefined8 *)(unaff_x27 + 0xa0);
                    *(undefined8 *)(unaff_x27 + 0x188) = uVar8;
                    *(undefined8 *)(unaff_x27 + 0x180) = uVar10;
                    *(undefined8 *)(unaff_x27 + 0x198) = uVar19;
                    *(undefined8 *)(unaff_x27 + 400) = uVar18;
                    if (lVar11 == 0) goto LAB_0211b5a0;
                    uVar10 = *(undefined8 *)(lVar11 + 0x10);
                    *(undefined8 *)(unaff_x27 + 0x88) = *(undefined8 *)(unaff_x27 + 0x1a8);
                    *(undefined8 *)(unaff_x27 + 0x80) = *(undefined8 *)(unaff_x27 + 0x1a0);
                    *(undefined8 *)(unaff_x27 + 0x98) = *(undefined8 *)(unaff_x27 + 0x1b8);
                    *(undefined8 *)(unaff_x27 + 0x90) = *(undefined8 *)(unaff_x27 + 0x1b0);
                    *(undefined8 *)(unaff_x27 + 0xa8) = *(undefined8 *)(unaff_x27 + 0x1c8);
                    *(undefined8 *)(unaff_x27 + 0xa0) = *(undefined8 *)(unaff_x27 + 0x1c0);
                    *(undefined8 *)(unaff_x27 + 0x68) = *(undefined8 *)(unaff_x27 + 0x188);
                    *(undefined8 *)(unaff_x27 + 0x60) = *(undefined8 *)(unaff_x27 + 0x180);
                    *(undefined8 *)(unaff_x27 + 0x78) = *(undefined8 *)(unaff_x27 + 0x198);
                    *(undefined8 *)(unaff_x27 + 0x70) = *(undefined8 *)(unaff_x27 + 400);
                    if (lVar12 == 0) goto LAB_0211b5a0;
                    in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x88);
                    in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x80);
                    in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x98);
                    in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x90);
                    in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0xa8);
                    in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0xa0);
                    uVar18 = *(undefined8 *)(unaff_x27 + 0x60);
                    uVar20 = *(undefined8 *)(unaff_x27 + 0x78);
                    uVar19 = *(undefined8 *)(unaff_x27 + 0x70);
                    uVar8 = *unaff_x29;
                    unaff_x22[1] = *(undefined8 *)(unaff_x27 + 0x68);
                    *unaff_x22 = uVar18;
                    unaff_x22[3] = uVar20;
                    unaff_x22[2] = uVar19;
                    in_stack_000000f0 = uVar10;
                    FUN_00c5d528(lVar12,&stack0x000000c0,uVar8);
                    uVar9 = (ulong)*(uint *)(in_stack_00000370 + 0x18);
                    uVar5 = uVar5 + 1;
                    puVar14 = puVar14 + 8;
                  } while ((long)uVar5 < (long)(int)*(uint *)(in_stack_00000370 + 0x18));
                }
              }
              uVar16 = uVar16 + 1;
              unaff_x26 = in_stack_00000060;
            } while (uVar16 != (uVar4 & 0xffffffff));
          }
        }
        if (unaff_x24 == 0) {
          uVar15 = 0;
        }
        else {
          if (unaff_x24 == 0) goto LAB_0211b5a0;
          uVar15 = *(uint *)(unaff_x24 + 0x18);
        }
        FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
      } while ((int)uVar15 < 1);
      if (unaff_x24 == 0) goto LAB_0211b5a0;
      unaff_x23 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      unaff_x19 = 0;
      unaff_x20 = (ulong)uVar15;
      unaff_x21 = (undefined8 *)(unaff_x24 + 0x20);
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x19) {
LAB_0211b5a4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar7 = unaff_x21[4];
    uVar8 = unaff_x21[7];
    uVar10 = unaff_x21[6];
    uVar19 = unaff_x21[1];
    uVar18 = *unaff_x21;
    uVar21 = unaff_x21[3];
    uVar20 = unaff_x21[2];
    *(undefined8 *)(unaff_x27 + 0x168) = unaff_x21[5];
    *(undefined8 *)(unaff_x27 + 0x160) = uVar7;
    *(undefined8 *)(unaff_x27 + 0x178) = uVar8;
    *(undefined8 *)(unaff_x27 + 0x170) = uVar10;
    *(undefined8 *)(unaff_x27 + 0x148) = uVar19;
    *(undefined8 *)(unaff_x27 + 0x140) = uVar18;
    *(undefined8 *)(unaff_x27 + 0x158) = uVar21;
    *(undefined8 *)(unaff_x27 + 0x150) = uVar20;
    FUN_0211e2ec(&stack0x00000200,&stack0x00000260);
    memcpy(&stack0x000001a0,&stack0x00000200,0x58);
    if (unaff_x23 == 0) goto LAB_0211b5a0;
    memcpy(&stack0x00000068,&stack0x000001a0,0x58);
    FUN_00c5d528(unaff_x23,&stack0x00000068,*unaff_x29);
  } while( true );
LAB_0211b4a8:
  FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
  lVar11 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
  FUN_0132138c(in_stack_00000058,iVar17,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
  if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) {
LAB_0211b5a0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),*(undefined8 *)puVar1
                      );
  FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
  if ((CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) ||
     (uVar7 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                           *(undefined8 *)puVar2), lVar11 == 0)) goto LAB_0211b5a0;
  *(long *)(lVar11 + 0x28) = lVar6;
  *(undefined8 *)(lVar11 + 0x30) = uVar7;
  if (lVar6 == 0) goto LAB_0211b5a0;
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
    lVar12 = 0;
    do {
      lVar13 = *(long *)(lVar6 + 0x20 + lVar12 * 8);
      if (lVar13 == 0) goto LAB_0211b5a0;
      lVar12 = lVar12 + 1;
      *(long *)(lVar13 + 200) = lVar11;
    } while ((int)lVar12 < iVar3);
  }
  iVar17 = iVar17 + 1;
  if (*(int *)(unaff_x26 + 0x18) <= iVar17) {
LAB_0211b56c:
    FUN_01325140(unaff_x26,
                 *(undefined8 *)
                  Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                );
    return;
  }
  goto LAB_0211b4a8;
}


