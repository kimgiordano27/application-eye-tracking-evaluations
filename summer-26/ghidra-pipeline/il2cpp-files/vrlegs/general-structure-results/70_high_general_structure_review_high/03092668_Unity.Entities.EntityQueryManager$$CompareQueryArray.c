/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$CompareQueryArray
ENTRY_POINT: 03092668
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] Unity_Entities_EntityQueryManager__CompareQueryArray(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x23;
  int iVar18;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  
  do {
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x27;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x25 + 0x18));
    *(undefined4 *)(unaff_x25 + 0x10) = 4;
    *(int *)(unaff_x25 + 0x14) = unaff_w20;
                    /* try { // try from 03092690 to 031926fb has its CatchHandler @ 03092690
                       catch() { ... } // from try @ 03092690 with catch @ 03092690
                       catch() { ... } // from try @ 030927f8 with catch @ 03092690
                       catch() { ... } // from try @ 0309284c with catch @ 03092690
                       catch() { ... } // from try @ 03092894 with catch @ 03092690
                       catch() { ... } // from try @ 030928d4 with catch @ 03092690
                       catch() { ... } // from try @ 030928e4 with catch @ 03092690 */
    if (*(uint *)(in_stack_00000028 + 0x18) <= unaff_x29) {
LAB_03092994:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (in_stack_00000018 == 0) break;
    uVar5 = FUN_02217a2c(in_stack_00000018,*(undefined8 *)(in_stack_00000028 + unaff_x29 * 8 + 0x20)
                         ,*(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                        );
    *(undefined4 *)(unaff_x25 + 0x20) = uVar5;
    if (unaff_x21 == 0) break;
    FUN_01b5f01c(unaff_x21,unaff_x25,*(undefined8 *)Unity_Entities_ICleanupComponentData_var);
    do {
      unaff_x29 = unaff_x29 + 1;
      iVar6 = FUN_036a3768(in_stack_00000020,0);
      if ((long)iVar6 <= (long)unaff_x29) goto LAB_0309278c;
      lVar10 = *(long *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
      uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(unaff_x28 + 0x18) = 0;
      }
      else {
        iVar6 = *(int *)(unaff_x28 + 0x18);
        *(undefined4 *)(unaff_x28 + 0x18) = 0;
        if (0 < iVar6) {
          FUN_02793a34(*(undefined8 *)(unaff_x28 + 0x10),0,iVar6,0);
        }
      }
      lVar10 = FUN_036a8700(in_stack_00000020,unaff_x29 & 0xffffffff,0);
      if (lVar10 == 0) goto LAB_03092920;
      uVar8 = *(ulong *)(lVar10 + 0x18);
    } while (uVar8 == 0);
    if (0 < (int)uVar8) {
      uVar17 = 0;
      do {
        uVar15 = (uint)uVar8;
        if (((uVar15 <= uVar17) || (uVar15 <= uVar17 + 1)) || (uVar15 <= uVar17 + 2))
        goto LAB_03092994;
        iVar6 = *(int *)(lVar10 + (long)(int)uVar17 * 4 + 0x20);
        iStack0000000000000060 = *(undefined4 *)(lVar10 + 0x20 + (long)(int)(uVar17 + 2) * 4);
        uVar5 = *(undefined4 *)(lVar10 + 0x20 + (long)(int)(uVar17 + 1) * 4);
        FUN_01b5f01c();
        iStack0000000000000060 = uVar5;
        FUN_01b5f01c();
        iStack0000000000000060 = iVar6;
        FUN_01b5f01c();
        uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar17 = uVar17 + 3;
      } while ((int)uVar17 < (int)*(uint *)(lVar10 + 0x18));
    }
    uVar13 = FUN_022195a8();
    unaff_w20 = FUN_01f73ff4(in_stack_00000040,uVar13,0x8893,
                             *(undefined8 *)
                              Unity_Entities_ChunkIterationUtility_GetEnabledMask_00000A49_PostfixBurstDelegate_var
                            );
    if (unaff_w20 < 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar13 = thunk_FUN_01a89e68();
      FUN_027a7930(uVar13,0);
      uVar14 = thunk_FUN_01a6ca08(
                                 System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate2<T>_var
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar13,uVar14);
    }
    if (in_stack_00000028 == 0) break;
    if ((long)*(int *)(in_stack_00000028 + 0x18) <= (long)unaff_x29) {
      plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (((*unaff_x23 != 0) && (lVar10 = *(long *)(*unaff_x23 + 0x10), lVar10 != 0)) &&
         (lVar10 = FUN_036d3824(lVar10,0), plVar9 != (long *)0x0)) {
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,0);
        }
        if ((int)plVar9[3] == 0) goto LAB_03092994;
        plVar9[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar10);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367b588(*(undefined8 *)
                      System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate1<T>_var,
                     plVar9,0);
LAB_0309278c:
        puVar4 = PTR_DAT_03cc3560;
        puVar3 = PTR_DAT_03cbfa20;
        puVar2 = PTR_DAT_03cbfa18;
                    /* try { // try from 03092790 to 031927f7 has its CatchHandler @ 03092864 */
        lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc3568);
        FUN_0219a4f0(lVar10,*(undefined8 *)puVar4);
        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)puVar3);
        puVar3 = System_IComparable_var;
        puVar2 = System_Linq_Expressions_Expression<TDelegate>_var;
        lVar16 = *unaff_x23;
        if (lVar16 != 0) {
          iVar6 = 0;
                    /* try { // try from 030927f8 to 0319282f has its CatchHandler @ 03092690 */
          iVar18 = 0;
          goto LAB_030927fc;
        }
      }
      break;
    }
    if (unaff_x26 == 0) break;
    unaff_x21 = *(long *)(unaff_x26 + 0x18);
    unaff_x25 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_ICleanupSharedComponentData_var);
    FUN_0306b47c(unaff_x25,0);
  } while (unaff_x25 != 0);
LAB_03092920:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_030927fc:
  if (*(long *)(lVar16 + 0x10) == 0) goto LAB_03092920;
  iVar7 = FUN_036a2ca8(*(long *)(lVar16 + 0x10),0);
  if (iVar7 <= iVar18) {
    if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03052fb0();
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_020f03e8(&stack0x00000050);
    auVar1._8_8_ = in_stack_00000058;
    auVar1._0_8_ = in_stack_00000050;
    return auVar1;
  }
  if ((*unaff_x23 == 0) ||
     (lVar16 = FUN_03092b68(in_stack_00000040,*(undefined8 *)(*unaff_x23 + 0x10),iVar18,
                            *(undefined1 *)(in_stack_00000030 + 0x15),
                            *(undefined1 *)(in_stack_00000030 + 0x16),*in_stack_00000038),
     lVar16 == 0)) goto LAB_03092920;
  if (-1 < *(int *)(lVar16 + 0x10)) {
    if (((((*unaff_x23 == 0) || (lVar12 = *(long *)(*unaff_x23 + 0x10), lVar12 == 0)) ||
         (uVar13 = FUN_036a2d20(lVar12,iVar18,0), lVar10 == 0)) ||
        ((iStack0000000000000060 = iVar18, in_stack_00000068._4_4_ = iVar6,
         FUN_0219b9a4(lVar10,&stack0x00000060,(long)&stack0x00000068 + 4,
                      *(undefined8 *)PTR_DAT_03ccbbe8), lVar11 == 0 ||
         (FUN_01b5f01c(lVar11,uVar13,*(undefined8 *)PTR_DAT_03cbfa30), unaff_x26 == 0)))) ||
       (lVar12 = *(long *)(unaff_x26 + 0x18), lVar12 == 0)) goto LAB_03092920;
    iVar7 = 0;
    iVar6 = iVar6 + 1;
    while (iVar7 < *(int *)(lVar12 + 0x18)) {
      FUN_02215a88(lVar12,iVar7,&stack0x00000060,*(undefined8 *)puVar2);
      if ((CONCAT44(uStack0000000000000064,iStack0000000000000060) == 0) ||
         (lVar12 = *(long *)(CONCAT44(uStack0000000000000064,iStack0000000000000060) + 0x28),
         lVar12 == 0)) goto LAB_03092920;
      FUN_01b5f01c(lVar12,lVar16,*(undefined8 *)puVar3);
      lVar12 = *(long *)(unaff_x26 + 0x18);
      iVar7 = iVar7 + 1;
      if (lVar12 == 0) goto LAB_03092920;
    }
  }
  lVar16 = *unaff_x23;
  iVar18 = iVar18 + 1;
  if (lVar16 == 0) goto LAB_03092920;
  goto LAB_030927fc;
}


