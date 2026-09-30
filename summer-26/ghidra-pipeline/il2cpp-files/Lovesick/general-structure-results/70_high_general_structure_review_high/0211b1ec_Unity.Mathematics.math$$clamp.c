/*
FUNCTION_NAME: Unity.Mathematics.math$$clamp
ENTRY_POINT: 0211b1ec
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
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long in_x9;
  long lVar12;
  long lVar13;
  ulong unaff_x19;
  undefined8 *puVar14;
  uint uVar15;
  long unaff_x20;
  undefined8 *unaff_x22;
  ulong uVar16;
  int unaff_w24;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong uStack0000000000000018;
  long in_stack_00000028;
  long lStack0000000000000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
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
  
code_r0x0211b1ec:
  do {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0211b18c with catch @ 0211b1ec
                        */
    uStack0000000000000018 = unaff_x19;
    lStack0000000000000030 = unaff_x20;
    if (in_x9 != 0) {
                    /* try { // try from 0211b204 to 0221b207 has its CatchHandler @ 0211b214 */
      lStack0000000000000030 = in_x9;
      if (in_x9 == 0) goto LAB_0211b5a0;
      uVar9 = *(ulong *)(in_x9 + 0x18);
      if (0 < (int)uVar9) {
                    /* catch() { ... } // from try @ 0211b204 with catch @ 0211b214 */
        uVar16 = 0;
        do {
                    /* try { // try from 0211b220 to 0221b22b has its CatchHandler @ 0211b240 */
          if (*(uint *)(in_x9 + 0x18) <= uVar16) goto LAB_0211b5a4;
                    /* try { // try from 0211b22c to 0221b237 has its CatchHandler @ 0211b16c */
                    /* try { // try from 0211b238 to 0221b23f has its CatchHandler @ 0211b240 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0211b220 with catch @ 0211b240
                       catch(type#2 @ 00000000) { ... } // from try @ 0211b238 with catch @ 0211b240
                        */
          memcpy(&stack0x00000330,(void *)(in_x9 + uVar16 * 0x48 + 0x20),0x48);
          uVar5 = FUN_015ff8a0(in_stack_00000330,0);
          if ((uVar5 & 1) != 0) {
            iStack00000000000001a0 = (int)uStack0000000000000018 + 1;
            uVar11 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       );
            uVar11 = thunk_FUN_00d61fa0(uVar11,&stack0x000001a0);
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GSTU_Cell>_get_Item__
                                      );
            uVar11 = FUN_01600b5c(uVar8,uVar11,in_stack_00000008,0);
            goto LAB_0211b5e8;
          }
          lVar6 = FUN_0211e494(&stack0x00000330,0);
          FUN_0132138c(in_stack_00000058,unaff_w24,&stack0x000001a0,
                       *(undefined8 *)StringLiteral_13262);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
          FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar6,
                       *(undefined8 *)PTR_DAT_033f5968);
          if (in_stack_00000370 != 0) {
            FUN_0132138c(in_stack_00000040,unaff_w24,&stack0x000001a0,
                         *(undefined8 *)PTR_DAT_033f1b50);
            if (0 < (int)*(ulong *)(in_stack_00000370 + 0x18)) {
              lVar7 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
              uVar5 = 0;
              uVar10 = *(ulong *)(in_stack_00000370 + 0x18) & 0xffffffff;
              puVar14 = (undefined8 *)(in_stack_00000370 + 0x20);
              do {
                if (uVar10 <= uVar5) goto LAB_0211b5a4;
                uVar11 = puVar14[4];
                uVar17 = puVar14[7];
                uVar8 = puVar14[6];
                uVar19 = puVar14[1];
                uVar18 = *puVar14;
                uVar21 = puVar14[3];
                uVar20 = puVar14[2];
                *(undefined8 *)(unaff_x27 + 0x1f8) = puVar14[5];
                *(undefined8 *)(unaff_x27 + 0x1f0) = uVar11;
                *(undefined8 *)(unaff_x27 + 0x208) = uVar17;
                *(undefined8 *)(unaff_x27 + 0x200) = uVar8;
                *(undefined8 *)(unaff_x27 + 0x1d8) = uVar19;
                *(undefined8 *)(unaff_x27 + 0x1d0) = uVar18;
                *(undefined8 *)(unaff_x27 + 0x1e8) = uVar21;
                *(undefined8 *)(unaff_x27 + 0x1e0) = uVar20;
                FUN_0211e2ec(&stack0x000001a0,&stack0x000002f0);
                uVar8 = unaff_x28[1];
                uVar11 = *unaff_x28;
                uVar18 = unaff_x28[3];
                uVar17 = unaff_x28[2];
                *(undefined8 *)(unaff_x27 + 0x1a8) = *(undefined8 *)(unaff_x27 + 0x88);
                *(undefined8 *)(unaff_x27 + 0x1a0) = *(undefined8 *)(unaff_x27 + 0x80);
                *(undefined8 *)(unaff_x27 + 0x1b8) = *(undefined8 *)(unaff_x27 + 0x98);
                *(undefined8 *)(unaff_x27 + 0x1b0) = *(undefined8 *)(unaff_x27 + 0x90);
                *(undefined8 *)(unaff_x27 + 0x1c8) = *(undefined8 *)(unaff_x27 + 0xa8);
                *(undefined8 *)(unaff_x27 + 0x1c0) = *(undefined8 *)(unaff_x27 + 0xa0);
                *(undefined8 *)(unaff_x27 + 0x188) = uVar8;
                *(undefined8 *)(unaff_x27 + 0x180) = uVar11;
                *(undefined8 *)(unaff_x27 + 0x198) = uVar18;
                *(undefined8 *)(unaff_x27 + 400) = uVar17;
                if (lVar6 == 0) goto LAB_0211b5a0;
                uVar11 = *(undefined8 *)(lVar6 + 0x10);
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
                if (lVar7 == 0) goto LAB_0211b5a0;
                in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x88);
                in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x80);
                in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x98);
                in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x90);
                in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0xa8);
                in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0xa0);
                uVar17 = *(undefined8 *)(unaff_x27 + 0x60);
                uVar19 = *(undefined8 *)(unaff_x27 + 0x78);
                uVar18 = *(undefined8 *)(unaff_x27 + 0x70);
                uVar8 = *unaff_x29;
                unaff_x22[1] = *(undefined8 *)(unaff_x27 + 0x68);
                *unaff_x22 = uVar17;
                unaff_x22[3] = uVar19;
                unaff_x22[2] = uVar18;
                in_stack_000000f0 = uVar11;
                FUN_00c5d528(lVar7,&stack0x000000c0,uVar8);
                uVar10 = (ulong)*(uint *)(in_stack_00000370 + 0x18);
                uVar5 = uVar5 + 1;
                puVar14 = puVar14 + 8;
              } while ((long)uVar5 < (long)(int)*(uint *)(in_stack_00000370 + 0x18));
            }
          }
          uVar16 = uVar16 + 1;
          in_x9 = in_stack_00000050;
          unaff_x26 = in_stack_00000060;
        } while (uVar16 != (uVar9 & 0xffffffff));
      }
    }
    if (in_stack_00000038 == 0) {
      uVar15 = 0;
    }
    else {
      if (in_stack_00000038 == 0) goto LAB_0211b5a0;
      uVar15 = *(uint *)(in_stack_00000038 + 0x18);
    }
    FUN_0132138c(in_stack_00000040,unaff_w24,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
    if (0 < (int)uVar15) {
      if (in_stack_00000038 == 0) goto LAB_0211b5a0;
      lVar6 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      uVar9 = 0;
      puVar14 = (undefined8 *)(in_stack_00000038 + 0x20);
      do {
        if (*(uint *)(in_stack_00000038 + 0x18) <= uVar9) goto LAB_0211b5a4;
        uVar11 = puVar14[4];
        uVar17 = puVar14[7];
        uVar8 = puVar14[6];
        uVar19 = puVar14[1];
        uVar18 = *puVar14;
        uVar21 = puVar14[3];
        uVar20 = puVar14[2];
        *(undefined8 *)(unaff_x27 + 0x168) = puVar14[5];
        *(undefined8 *)(unaff_x27 + 0x160) = uVar11;
        *(undefined8 *)(unaff_x27 + 0x178) = uVar17;
        *(undefined8 *)(unaff_x27 + 0x170) = uVar8;
        *(undefined8 *)(unaff_x27 + 0x148) = uVar19;
        *(undefined8 *)(unaff_x27 + 0x140) = uVar18;
        *(undefined8 *)(unaff_x27 + 0x158) = uVar21;
        *(undefined8 *)(unaff_x27 + 0x150) = uVar20;
        FUN_0211e2ec(&stack0x00000200,&stack0x00000260);
        memcpy(&stack0x000001a0,&stack0x00000200,0x58);
        if (lVar6 == 0) goto LAB_0211b5a0;
        memcpy(&stack0x00000068,&stack0x000001a0,0x58);
        FUN_00c5d528(lVar6,&stack0x00000068,*unaff_x29);
        uVar9 = uVar9 + 1;
        puVar14 = puVar14 + 8;
      } while (uVar15 != uVar9);
    }
    unaff_x20 = lStack0000000000000030;
    puVar3 = Method_System_UInt16_CompareTo__;
    puVar2 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
    unaff_x19 = uStack0000000000000018 + 1;
    if (unaff_x19 == in_stack_00000010) {
      if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_0211b56c;
      iVar4 = 0;
      break;
    }
    lVar6 = *(long *)(in_stack_00000028 + 8);
    if (lVar6 == 0) goto LAB_0211b5a0;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
LAB_0211b5a4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar6 = lVar6 + unaff_x19 * 0x20;
    in_stack_00000008 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    in_x9 = *(long *)(lVar6 + 0x30);
    in_stack_00000038 = *(long *)(lVar6 + 0x38);
    uVar9 = FUN_015ff8a0(in_stack_00000008,0);
    if ((uVar9 & 1) != 0) {
      iStack00000000000001a0 = (int)unaff_x19 + 1;
      uVar11 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 );
      uVar11 = thunk_FUN_00d61fa0(uVar11,&stack0x000001a0);
      uVar8 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<KerningPair>__ctor__);
      uVar11 = FUN_015f6780(uVar8,uVar11,0);
LAB_0211b5e8:
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017713a8(uVar8,uVar11,0);
      uVar11 = thunk_FUN_00d48444(
                                 Method_DigitalOpus_MB_Core_MB3_MeshBakerGrouperBehaviour_<>c__DisplayClass2_0_<DoClustering>b__0__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar11);
    }
    in_stack_00000050 = in_x9;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      unaff_w24 = 0;
      do {
        FUN_0132138c(unaff_x26,unaff_w24,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
        if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
        iVar4 = FUN_015fd224(*(undefined8 *)
                              (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10),
                             in_stack_00000008,3,0);
        if (iVar4 == 0) {
          FUN_0132138c(unaff_x26,unaff_w24,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto code_r0x0211b1ec;
          break;
        }
        unaff_w24 = unaff_w24 + 1;
      } while (unaff_w24 < *(int *)(unaff_x26 + 0x18));
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                              );
    if (lVar6 == 0) goto LAB_0211b5a0;
    *(undefined4 *)(lVar6 + 0x58) = 0xffffffff;
    FUN_017b46ec(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = in_stack_00000008;
    uVar9 = FUN_015ff8a0(uVar11,0);
    uVar8 = 0;
    if ((uVar9 & 1) == 0) {
      uVar8 = uVar11;
    }
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    unaff_w24 = *(int *)(in_stack_00000060 + 0x18);
    FUN_00c5cd68(in_stack_00000060,lVar6,
                 *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
    if (lVar6 == 0) goto LAB_0211b5a0;
    FUN_01320e50(lVar6,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                );
    FUN_00c5cf58(in_stack_00000058,lVar6,*(undefined8 *)System_Nullable<bool>_var);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__);
    if (lVar6 == 0) goto LAB_0211b5a0;
    FUN_01320e50(lVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__);
    FUN_00c5d148(in_stack_00000040,lVar6,*(undefined8 *)PTR_DAT_033f0e00);
    unaff_x26 = in_stack_00000060;
  } while( true );
LAB_0211b4a8:
  FUN_0132138c(unaff_x26,iVar4,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
  lVar6 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
  FUN_0132138c(in_stack_00000058,iVar4,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
  if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) {
LAB_0211b5a0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),*(undefined8 *)puVar2
                      );
  FUN_0132138c(in_stack_00000040,iVar4,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
  if ((CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) ||
     (uVar11 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                            *(undefined8 *)puVar3), lVar6 == 0)) goto LAB_0211b5a0;
  *(long *)(lVar6 + 0x28) = lVar7;
  *(undefined8 *)(lVar6 + 0x30) = uVar11;
  if (lVar7 == 0) goto LAB_0211b5a0;
  iVar1 = *(int *)(lVar7 + 0x18);
  if (0 < iVar1) {
    lVar12 = 0;
    do {
      lVar13 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
      if (lVar13 == 0) goto LAB_0211b5a0;
      lVar12 = lVar12 + 1;
      *(long *)(lVar13 + 200) = lVar6;
    } while ((int)lVar12 < iVar1);
  }
  iVar4 = iVar4 + 1;
  if (*(int *)(unaff_x26 + 0x18) <= iVar4) {
LAB_0211b56c:
    FUN_01325140(unaff_x26,
                 *(undefined8 *)
                  Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                );
    return;
  }
  goto LAB_0211b4a8;
}


