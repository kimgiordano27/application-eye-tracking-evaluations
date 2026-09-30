/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$GetWriteGroupReadOnlyComponentType
ENTRY_POINT: 03092484
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] Unity_Entities_EntityQueryManager__GetWriteGroupReadOnlyComponentType(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar18;
  undefined8 unaff_x22;
  long *unaff_x23;
  int iVar19;
  undefined4 unaff_w26;
  long unaff_x27;
  ulong uVar20;
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
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_x27 + 0x28) = unaff_w26;
  }
  uVar8 = FUN_036d3824();
  lVar9 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_0306b594(lVar9,uVar8,0);
  lVar10 = thunk_FUN_01a89e68(*unaff_x21);
  Animancer_AnimancerState__OnSetIsPlaying(lVar10,*unaff_x19);
  iVar5 = FUN_036a3768();
  puVar2 = 
  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var;
  if (0 < iVar5) {
    if (lVar10 == 0) goto LAB_03092920;
    uVar20 = 0;
    do {
      lVar17 = *(long *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar11 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar5) {
          FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar5,0);
        }
      }
      lVar17 = FUN_036a8700(unaff_x22,uVar20 & 0xffffffff,0);
      if (lVar17 == 0) goto LAB_03092920;
      uVar11 = *(ulong *)(lVar17 + 0x18);
      if (uVar11 != 0) {
        if (0 < (int)uVar11) {
          uVar16 = 0;
          do {
            uVar15 = (uint)uVar11;
            if (((uVar15 <= uVar16) || (uVar15 <= uVar16 + 1)) || (uVar15 <= uVar16 + 2))
            goto LAB_03092994;
            iVar5 = *(int *)(lVar17 + (long)(int)uVar16 * 4 + 0x20);
            iStack0000000000000060 = *(undefined4 *)(lVar17 + 0x20 + (long)(int)(uVar16 + 2) * 4);
            uVar6 = *(undefined4 *)(lVar17 + 0x20 + (long)(int)(uVar16 + 1) * 4);
            FUN_01b5f01c(lVar10,&stack0x00000060,*(undefined8 *)puVar2);
            iStack0000000000000060 = uVar6;
            FUN_01b5f01c(lVar10,&stack0x00000060,*(undefined8 *)puVar2);
            iStack0000000000000060 = iVar5;
            FUN_01b5f01c(lVar10,&stack0x00000060,*(undefined8 *)puVar2);
            uVar11 = (ulong)*(uint *)(lVar17 + 0x18);
            uVar16 = uVar16 + 3;
          } while ((int)uVar16 < (int)*(uint *)(lVar17 + 0x18));
        }
        uVar8 = FUN_022195a8(lVar10,*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                            );
        iVar5 = FUN_01f73ff4(in_stack_00000040,uVar8,0x8893,
                             *(undefined8 *)
                              Unity_Entities_ChunkIterationUtility_GetEnabledMask_00000A49_PostfixBurstDelegate_var
                            );
        if (iVar5 < 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
          uVar8 = thunk_FUN_01a89e68();
          FUN_027a7930(uVar8,0);
          uVar14 = thunk_FUN_01a6ca08(
                                     System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate2<T>_var
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,uVar14);
        }
        if (in_stack_00000028 == 0) goto LAB_03092920;
        if ((long)*(int *)(in_stack_00000028 + 0x18) <= (long)uVar20) {
          plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          if (((*unaff_x23 == 0) || (lVar10 = *(long *)(*unaff_x23 + 0x10), lVar10 == 0)) ||
             (lVar10 = FUN_036d3824(lVar10,0), plVar12 == (long *)0x0)) goto LAB_03092920;
          if ((lVar10 != 0) &&
             (lVar17 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
            uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar8,0);
          }
          if ((int)plVar12[3] == 0) {
LAB_03092994:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar12[4] = lVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar10);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367b588(*(undefined8 *)
                        System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate1<T>_var,
                       plVar12,0);
          break;
        }
        if (lVar9 == 0) goto LAB_03092920;
        lVar18 = *(long *)(lVar9 + 0x18);
        lVar17 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_ICleanupSharedComponentData_var);
        FUN_0306b47c(lVar17,0);
        if (lVar17 == 0) goto LAB_03092920;
        *(long *)(lVar17 + 0x18) = unaff_x27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar17 + 0x18));
        *(undefined4 *)(lVar17 + 0x10) = 4;
        *(int *)(lVar17 + 0x14) = iVar5;
        if (*(uint *)(in_stack_00000028 + 0x18) <= uVar20) goto LAB_03092994;
        if (in_stack_00000018 == 0) goto LAB_03092920;
        uVar6 = FUN_02217a2c(in_stack_00000018,
                             *(undefined8 *)(in_stack_00000028 + uVar20 * 8 + 0x20),
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                            );
        *(undefined4 *)(lVar17 + 0x20) = uVar6;
        if (lVar18 == 0) goto LAB_03092920;
        FUN_01b5f01c(lVar18,lVar17,*(undefined8 *)Unity_Entities_ICleanupComponentData_var);
        unaff_x22 = in_stack_00000020;
      }
      uVar20 = uVar20 + 1;
      iVar5 = FUN_036a3768(unaff_x22,0);
    } while ((long)uVar20 < (long)iVar5);
  }
  puVar4 = PTR_DAT_03cc3560;
  puVar3 = PTR_DAT_03cbfa20;
  puVar2 = PTR_DAT_03cbfa18;
  lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc3568);
  FUN_0219a4f0(lVar10,*(undefined8 *)puVar4);
  lVar17 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  Animancer_AnimancerState__OnSetIsPlaying(lVar17,*(undefined8 *)puVar3);
  puVar3 = System_IComparable_var;
  puVar2 = System_Linq_Expressions_Expression<TDelegate>_var;
  lVar18 = *unaff_x23;
  if (lVar18 != 0) {
    iVar5 = 0;
    iVar19 = 0;
    while (*(long *)(lVar18 + 0x10) != 0) {
      iVar7 = FUN_036a2ca8(*(long *)(lVar18 + 0x10),0);
      if (iVar7 <= iVar19) {
        if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03052fb0(lVar9,lVar17,3,0);
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_020f03e8(&stack0x00000050,lVar9,lVar10,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                    );
        auVar1._8_8_ = in_stack_00000058;
        auVar1._0_8_ = in_stack_00000050;
        return auVar1;
      }
      if ((*unaff_x23 == 0) ||
         (lVar18 = FUN_03092b68(in_stack_00000040,*(undefined8 *)(*unaff_x23 + 0x10),iVar19,
                                *(undefined1 *)(in_stack_00000030 + 0x15),
                                *(undefined1 *)(in_stack_00000030 + 0x16),*in_stack_00000038),
         lVar18 == 0)) break;
      if (-1 < *(int *)(lVar18 + 0x10)) {
        if (((((*unaff_x23 == 0) || (lVar13 = *(long *)(*unaff_x23 + 0x10), lVar13 == 0)) ||
             (uVar8 = FUN_036a2d20(lVar13,iVar19,0), lVar10 == 0)) ||
            ((iStack0000000000000060 = iVar19, in_stack_00000068._4_4_ = iVar5,
             FUN_0219b9a4(lVar10,&stack0x00000060,(long)&stack0x00000068 + 4,
                          *(undefined8 *)PTR_DAT_03ccbbe8), lVar17 == 0 ||
             (FUN_01b5f01c(lVar17,uVar8,*(undefined8 *)PTR_DAT_03cbfa30), lVar9 == 0)))) ||
           (lVar13 = *(long *)(lVar9 + 0x18), lVar13 == 0)) break;
        iVar7 = 0;
        iVar5 = iVar5 + 1;
        while (iVar7 < *(int *)(lVar13 + 0x18)) {
          FUN_02215a88(lVar13,iVar7,&stack0x00000060,*(undefined8 *)puVar2);
          if ((CONCAT44(uStack0000000000000064,iStack0000000000000060) == 0) ||
             (lVar13 = *(long *)(CONCAT44(uStack0000000000000064,iStack0000000000000060) + 0x28),
             lVar13 == 0)) goto LAB_03092920;
          FUN_01b5f01c(lVar13,lVar18,*(undefined8 *)puVar3);
          lVar13 = *(long *)(lVar9 + 0x18);
          iVar7 = iVar7 + 1;
          if (lVar13 == 0) goto LAB_03092920;
        }
      }
      lVar18 = *unaff_x23;
      iVar19 = iVar19 + 1;
      if (lVar18 == 0) break;
    }
  }
LAB_03092920:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


