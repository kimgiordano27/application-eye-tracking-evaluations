/*
FUNCTION_NAME: Unity.Mathematics.math$$clamp
ENTRY_POINT: 0211b050
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


void Unity_Mathematics_math__clamp(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong in_x9;
  long lVar13;
  ulong unaff_x19;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *unaff_x22;
  ulong uVar16;
  int iVar17;
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
    if (in_x9 <= unaff_x19) {
LAB_0211b5a4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_1 = param_1 + unaff_x19 * 0x20;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0211b060 to 0221b06f has its CatchHandler @ 0211b0f4 */
    lVar1 = *(long *)(param_1 + 0x30);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar5 = FUN_015ff8a0(uVar9,0);
    if ((uVar5 & 1) != 0) {
      iStack00000000000001a0 = (int)unaff_x19 + 1;
      uVar9 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                );
      uVar9 = thunk_FUN_00d61fa0(uVar9,&stack0x000001a0);
      uVar12 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<KerningPair>__ctor__);
      uVar9 = FUN_015f6780(uVar12,uVar9,0);
LAB_0211b5e8:
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017713a8(uVar12,uVar9,0);
      uVar9 = thunk_FUN_00d48444(
                                Method_DigitalOpus_MB_Core_MB3_MeshBakerGrouperBehaviour_<>c__DisplayClass2_0_<DoClustering>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar9);
    }
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      iVar17 = 0;
      do {
                    /* try { // try from 0211b090 to 0221b0af has its CatchHandler @ 0211b0f0 */
        FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
        if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
                    /* try { // try from 0211b0b0 to 0221b0eb has its CatchHandler @ 0211b02c */
        iVar4 = FUN_015fd224(*(undefined8 *)
                              (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10),uVar9
                             ,3,0);
        if (iVar4 == 0) {
                    /* try { // try from 0211b0ec to 0221b0ef has its CatchHandler @ 0211b0f0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0211b090 with catch @ 0211b0f0
                       catch(type#1 @ 03274860) { ... } // from try @ 0211b0ec with catch @ 0211b0f0
                       try { // try from 0211b0f0 to 0221b10b has its CatchHandler @ 0211b02c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0211b060 with catch @ 0211b0f4
                        */
          FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211b1e4;
          break;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(unaff_x26 + 0x18));
    }
                    /* try { // try from 0211b10c to 0221b10f has its CatchHandler @ 0211b120 */
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                              );
    if (lVar6 == 0) goto LAB_0211b5a0;
                    /* catch() { ... } // from try @ 0211b10c with catch @ 0211b120 */
    *(undefined4 *)(lVar6 + 0x58) = 0xffffffff;
    FUN_017b46ec(lVar6,0);
                    /* try { // try from 0211b12c to 0221b137 has its CatchHandler @ 0211b14c */
    *(undefined8 *)(lVar6 + 0x10) = uVar9;
    uVar5 = FUN_015ff8a0(uVar12,0);
                    /* try { // try from 0211b138 to 0221b143 has its CatchHandler @ 0211b02c */
    uVar10 = 0;
    if ((uVar5 & 1) == 0) {
      uVar10 = uVar12;
    }
                    /* try { // try from 0211b144 to 0221b14b has its CatchHandler @ 0211b14c */
    *(undefined8 *)(lVar6 + 0x18) = uVar10;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0211b12c with catch @ 0211b14c
                       catch(type#2 @ 00000000) { ... } // from try @ 0211b144 with catch @ 0211b14c
                        */
    iVar17 = *(int *)(in_stack_00000060 + 0x18);
    FUN_00c5cd68(in_stack_00000060,lVar6,
                 *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
                    /* catch() { ... } // from try @ 0211b1ac with catch @ 0211b16c
                       catch() { ... } // from try @ 0211b22c with catch @ 0211b16c */
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
    if (lVar6 == 0) goto LAB_0211b5a0;
    FUN_01320e50(lVar6,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                );
                    /* try { // try from 0211b18c to 0221b197 has its CatchHandler @ 0211b1ec */
    FUN_00c5cf58(in_stack_00000058,lVar6,*(undefined8 *)System_Nullable<bool>_var);
                    /* try { // try from 0211b1a4 to 0221b1ab has its CatchHandler @ 0211b1e8 */
                    /* try { // try from 0211b1ac to 0221b203 has its CatchHandler @ 0211b16c */
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__);
    if (lVar6 == 0) goto LAB_0211b5a0;
    FUN_01320e50(lVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__);
    FUN_00c5d148(in_stack_00000040,lVar6,*(undefined8 *)PTR_DAT_033f0e00);
    unaff_x26 = in_stack_00000060;
LAB_0211b1e4:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0211b1a4 with catch @ 0211b1e8
                        */
    if (lVar1 != 0) {
      if (lVar1 == 0) goto LAB_0211b5a0;
      uVar5 = *(ulong *)(lVar1 + 0x18);
      if (0 < (int)uVar5) {
        uVar16 = 0;
        do {
          if (*(uint *)(lVar1 + 0x18) <= uVar16) goto LAB_0211b5a4;
          memcpy(&stack0x00000330,(void *)(lVar1 + uVar16 * 0x48 + 0x20),0x48);
          uVar7 = FUN_015ff8a0(in_stack_00000330,0);
          if ((uVar7 & 1) != 0) {
            iStack00000000000001a0 = (int)unaff_x19 + 1;
            uVar12 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       );
            uVar12 = thunk_FUN_00d61fa0(uVar12,&stack0x000001a0);
            uVar10 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_Dictionary<string,_GSTU_Cell>_get_Item__
                                       );
            uVar9 = FUN_01600b5c(uVar10,uVar12,uVar9,0);
            goto LAB_0211b5e8;
          }
          lVar6 = FUN_0211e494(&stack0x00000330,0);
          FUN_0132138c(in_stack_00000058,iVar17,&stack0x000001a0,*(undefined8 *)StringLiteral_13262)
          ;
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
          FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar6,
                       *(undefined8 *)PTR_DAT_033f5968);
          if (in_stack_00000370 != 0) {
            FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
            if (0 < (int)*(ulong *)(in_stack_00000370 + 0x18)) {
              lVar13 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
              uVar7 = 0;
              uVar11 = *(ulong *)(in_stack_00000370 + 0x18) & 0xffffffff;
              puVar14 = (undefined8 *)(in_stack_00000370 + 0x20);
              do {
                if (uVar11 <= uVar7) goto LAB_0211b5a4;
                uVar12 = puVar14[4];
                uVar18 = puVar14[7];
                uVar10 = puVar14[6];
                uVar20 = puVar14[1];
                uVar19 = *puVar14;
                uVar22 = puVar14[3];
                uVar21 = puVar14[2];
                *(undefined8 *)(unaff_x27 + 0x1f8) = puVar14[5];
                *(undefined8 *)(unaff_x27 + 0x1f0) = uVar12;
                *(undefined8 *)(unaff_x27 + 0x208) = uVar18;
                *(undefined8 *)(unaff_x27 + 0x200) = uVar10;
                *(undefined8 *)(unaff_x27 + 0x1d8) = uVar20;
                *(undefined8 *)(unaff_x27 + 0x1d0) = uVar19;
                *(undefined8 *)(unaff_x27 + 0x1e8) = uVar22;
                *(undefined8 *)(unaff_x27 + 0x1e0) = uVar21;
                FUN_0211e2ec(&stack0x000001a0,&stack0x000002f0);
                uVar10 = unaff_x28[1];
                uVar12 = *unaff_x28;
                uVar19 = unaff_x28[3];
                uVar18 = unaff_x28[2];
                *(undefined8 *)(unaff_x27 + 0x1a8) = *(undefined8 *)(unaff_x27 + 0x88);
                *(undefined8 *)(unaff_x27 + 0x1a0) = *(undefined8 *)(unaff_x27 + 0x80);
                *(undefined8 *)(unaff_x27 + 0x1b8) = *(undefined8 *)(unaff_x27 + 0x98);
                *(undefined8 *)(unaff_x27 + 0x1b0) = *(undefined8 *)(unaff_x27 + 0x90);
                *(undefined8 *)(unaff_x27 + 0x1c8) = *(undefined8 *)(unaff_x27 + 0xa8);
                *(undefined8 *)(unaff_x27 + 0x1c0) = *(undefined8 *)(unaff_x27 + 0xa0);
                *(undefined8 *)(unaff_x27 + 0x188) = uVar10;
                *(undefined8 *)(unaff_x27 + 0x180) = uVar12;
                *(undefined8 *)(unaff_x27 + 0x198) = uVar19;
                *(undefined8 *)(unaff_x27 + 400) = uVar18;
                if (lVar6 == 0) goto LAB_0211b5a0;
                uVar12 = *(undefined8 *)(lVar6 + 0x10);
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
                if (lVar13 == 0) goto LAB_0211b5a0;
                in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x88);
                in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x80);
                in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x98);
                in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x90);
                in_stack_000000e8 = *(undefined8 *)(unaff_x27 + 0xa8);
                in_stack_000000e0 = *(undefined8 *)(unaff_x27 + 0xa0);
                uVar18 = *(undefined8 *)(unaff_x27 + 0x60);
                uVar20 = *(undefined8 *)(unaff_x27 + 0x78);
                uVar19 = *(undefined8 *)(unaff_x27 + 0x70);
                uVar10 = *unaff_x29;
                unaff_x22[1] = *(undefined8 *)(unaff_x27 + 0x68);
                *unaff_x22 = uVar18;
                unaff_x22[3] = uVar20;
                unaff_x22[2] = uVar19;
                in_stack_000000f0 = uVar12;
                FUN_00c5d528(lVar13,&stack0x000000c0,uVar10);
                uVar11 = (ulong)*(uint *)(in_stack_00000370 + 0x18);
                uVar7 = uVar7 + 1;
                puVar14 = puVar14 + 8;
              } while ((long)uVar7 < (long)(int)*(uint *)(in_stack_00000370 + 0x18));
            }
          }
          uVar16 = uVar16 + 1;
          unaff_x26 = in_stack_00000060;
        } while (uVar16 != (uVar5 & 0xffffffff));
      }
    }
    if (lVar8 == 0) {
      uVar15 = 0;
    }
    else {
      if (lVar8 == 0) goto LAB_0211b5a0;
      uVar15 = *(uint *)(lVar8 + 0x18);
    }
    FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
    if (0 < (int)uVar15) {
      if (lVar8 == 0) goto LAB_0211b5a0;
      lVar1 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
      uVar5 = 0;
      puVar14 = (undefined8 *)(lVar8 + 0x20);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0211b5a4;
        uVar9 = puVar14[4];
        uVar10 = puVar14[7];
        uVar12 = puVar14[6];
        uVar19 = puVar14[1];
        uVar18 = *puVar14;
        uVar21 = puVar14[3];
        uVar20 = puVar14[2];
        *(undefined8 *)(unaff_x27 + 0x168) = puVar14[5];
        *(undefined8 *)(unaff_x27 + 0x160) = uVar9;
        *(undefined8 *)(unaff_x27 + 0x178) = uVar10;
        *(undefined8 *)(unaff_x27 + 0x170) = uVar12;
        *(undefined8 *)(unaff_x27 + 0x148) = uVar19;
        *(undefined8 *)(unaff_x27 + 0x140) = uVar18;
        *(undefined8 *)(unaff_x27 + 0x158) = uVar21;
        *(undefined8 *)(unaff_x27 + 0x150) = uVar20;
        FUN_0211e2ec(&stack0x00000200,&stack0x00000260);
        memcpy(&stack0x000001a0,&stack0x00000200,0x58);
        if (lVar1 == 0) goto LAB_0211b5a0;
        memcpy(&stack0x00000068,&stack0x000001a0,0x58);
        FUN_00c5d528(lVar1,&stack0x00000068,*unaff_x29);
        uVar5 = uVar5 + 1;
        puVar14 = puVar14 + 8;
      } while (uVar15 != uVar5);
    }
    puVar3 = Method_System_UInt16_CompareTo__;
    puVar2 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
    unaff_x19 = unaff_x19 + 1;
    if (unaff_x19 == in_stack_00000010) {
      if (*(int *)(unaff_x26 + 0x18) < 1) goto LAB_0211b56c;
      iVar17 = 0;
      break;
    }
    param_1 = *(long *)(in_stack_00000028 + 8);
    if (param_1 == 0) goto LAB_0211b5a0;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
LAB_0211b4a8:
  FUN_0132138c(unaff_x26,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
  lVar1 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
  FUN_0132138c(in_stack_00000058,iVar17,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
  if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) {
LAB_0211b5a0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),*(undefined8 *)puVar2
                      );
  FUN_0132138c(in_stack_00000040,iVar17,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
  if ((CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) ||
     (uVar9 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                           *(undefined8 *)puVar3), lVar1 == 0)) goto LAB_0211b5a0;
  *(long *)(lVar1 + 0x28) = lVar8;
  *(undefined8 *)(lVar1 + 0x30) = uVar9;
  if (lVar8 == 0) goto LAB_0211b5a0;
  iVar4 = *(int *)(lVar8 + 0x18);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar13 = *(long *)(lVar8 + 0x20 + lVar6 * 8);
      if (lVar13 == 0) goto LAB_0211b5a0;
      lVar6 = lVar6 + 1;
      *(long *)(lVar13 + 200) = lVar1;
    } while ((int)lVar6 < iVar4);
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


