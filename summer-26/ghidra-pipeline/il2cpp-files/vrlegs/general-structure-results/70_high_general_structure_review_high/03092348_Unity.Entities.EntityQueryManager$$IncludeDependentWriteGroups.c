/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$IncludeDependentWriteGroups
ENTRY_POINT: 03092348
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] Unity_Entities_EntityQueryManager__IncludeDependentWriteGroups(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *unaff_x19;
  long lVar19;
  long *unaff_x23;
  undefined4 unaff_w24;
  int iVar20;
  int unaff_w28;
  int unaff_w29;
  ulong uVar21;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
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
  
                    /* try { // try from 03092360 to 03192377 has its CatchHandler @ 03092384 */
  FUN_021de1ac();
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03092318 with catch @ 03092378
                       try { // try from 03092378 to 03192393 has its CatchHandler @ 0309223c */
  uVar8 = FUN_01f6d39c();
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03092344 with catch @ 0309237c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03092294 with catch @ 03092380
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030922a4 with catch @ 03092384
                       catch(type#1 @ 03abd138) { ... } // from try @ 03092334 with catch @ 03092384
                       catch(type#1 @ 03abd138) { ... } // from try @ 03092360 with catch @ 03092384
                        */
  FUN_01f70920(uVar8,*(undefined8 *)
                      Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnCreate_0000001A_PostfixBurstDelegate_var
              );
                    /* try { // try from 03092394 to 03192397 has its CatchHandler @ 030923a4 */
                    /* try { // try from 03092398 to 031923ab has its CatchHandler @ 0309223c */
                    /* catch() { ... } // from try @ 03092394 with catch @ 030923a4 */
  iVar5 = FUN_01f73ff4();
                    /* try { // try from 030923ac to 031923b3 has its CatchHandler @ 030923b4 */
  lVar9 = thunk_FUN_01a89e68(*unaff_x19);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030923ac with catch @ 030923b4
                        */
                    /* catch() { ... } // from try @ 030923c8 with catch @ 030923b8
                       catch() { ... } // from try @ 030923ec with catch @ 030923b8 */
  FUN_0306b454(lVar9,0);
  puVar2 = PTR_DAT_03cc1790;
                    /* try { // try from 030923c4 to 031923c7 has its CatchHandler @ 030923d8 */
  if (lVar9 != 0) {
                    /* try { // try from 030923c8 to 031923e7 has its CatchHandler @ 030923b8 */
    *(undefined4 *)(lVar9 + 0x10) = unaff_w24;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030923c4 with catch @ 030923d8
                        */
    if (iStack0000000000000014 != -1) {
      *(int *)(lVar9 + 0x14) = iStack0000000000000014;
    }
                    /* try { // try from 030923e8 to 031923eb has its CatchHandler @ 030923f8 */
    lVar10 = *(long *)(*(long *)puVar2 + 0x20);
                    /* try { // try from 030923ec to 031923ff has its CatchHandler @ 030923b8 */
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
                    /* catch() { ... } // from try @ 030923e8 with catch @ 030923f8 */
                    /* try { // try from 03092400 to 03192407 has its CatchHandler @ 03092408 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03092400 with catch @ 03092408
                        */
    pcVar11 = (char *)thunk_FUN_01a59484(&stack0x00000048,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
    if (*pcVar11 != '\0') {
      FUN_022412e0(&stack0x00000048,&stack0x00000060,*(undefined8 *)PTR_DAT_03cc1798);
      *(int *)(lVar9 + 0x18) = iStack0000000000000060;
    }
    if (iStack0000000000000010 != -1) {
      *(int *)(lVar9 + 0x1c) = iStack0000000000000010;
    }
    if (in_stack_00000008._4_4_ != -1) {
      *(int *)(lVar9 + 0x20) = in_stack_00000008._4_4_;
    }
    if (unaff_w29 != -1) {
      *(int *)(lVar9 + 0x24) = unaff_w29;
    }
    if (unaff_w28 != -1) {
      *(int *)(lVar9 + 0x2c) = unaff_w28;
    }
    puVar4 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
    ;
    puVar3 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
    ;
    puVar2 = System_Runtime_Remoting_Channels_IChannelReceiver_var;
    if (iVar5 != -1) {
      *(int *)(lVar9 + 0x28) = iVar5;
    }
    uVar8 = FUN_036d3824(in_stack_00000020,0);
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_0306b594(lVar10,uVar8,0);
    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    Animancer_AnimancerState__OnSetIsPlaying(lVar12,*(undefined8 *)puVar3);
    iVar5 = FUN_036a3768(in_stack_00000020,0);
    puVar2 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    if (0 < iVar5) {
      if (lVar12 == 0) goto LAB_03092920;
      uVar21 = 0;
      do {
        lVar18 = *(long *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        uVar13 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)(lVar12 + 0x18) = 0;
        }
        else {
          iVar5 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          if (0 < iVar5) {
            FUN_02793a34(*(undefined8 *)(lVar12 + 0x10),0,iVar5,0);
          }
        }
        lVar18 = FUN_036a8700(in_stack_00000020,uVar21 & 0xffffffff,0);
        if (lVar18 == 0) goto LAB_03092920;
        uVar13 = *(ulong *)(lVar18 + 0x18);
        if (uVar13 != 0) {
          if (0 < (int)uVar13) {
            uVar17 = 0;
            do {
              uVar16 = (uint)uVar13;
              if (((uVar16 <= uVar17) || (uVar16 <= uVar17 + 1)) || (uVar16 <= uVar17 + 2))
              goto LAB_03092994;
              iVar5 = *(int *)(lVar18 + (long)(int)uVar17 * 4 + 0x20);
              iStack0000000000000060 = *(undefined4 *)(lVar18 + 0x20 + (long)(int)(uVar17 + 2) * 4);
              uVar6 = *(undefined4 *)(lVar18 + 0x20 + (long)(int)(uVar17 + 1) * 4);
              FUN_01b5f01c(lVar12,&stack0x00000060,*(undefined8 *)puVar2);
              iStack0000000000000060 = uVar6;
              FUN_01b5f01c(lVar12,&stack0x00000060,*(undefined8 *)puVar2);
              iStack0000000000000060 = iVar5;
              FUN_01b5f01c(lVar12,&stack0x00000060,*(undefined8 *)puVar2);
              uVar13 = (ulong)*(uint *)(lVar18 + 0x18);
              uVar17 = uVar17 + 3;
            } while ((int)uVar17 < (int)*(uint *)(lVar18 + 0x18));
          }
          uVar8 = FUN_022195a8(lVar12,*(undefined8 *)
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
            uVar15 = thunk_FUN_01a6ca08(
                                       System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate2<T>_var
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar8,uVar15);
          }
          if (in_stack_00000028 == 0) goto LAB_03092920;
          if ((long)*(int *)(in_stack_00000028 + 0x18) <= (long)uVar21) {
            plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
            if (((*unaff_x23 == 0) || (lVar9 = *(long *)(*unaff_x23 + 0x10), lVar9 == 0)) ||
               (lVar9 = FUN_036d3824(lVar9,0), plVar14 == (long *)0x0)) goto LAB_03092920;
            if ((lVar9 != 0) &&
               (lVar12 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)) {
              uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar8,0);
            }
            if ((int)plVar14[3] == 0) {
LAB_03092994:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar14[4] = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar9);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367b588(*(undefined8 *)
                          System_Linq_Expressions_Compiler_DelegateHelpers_VBCallSiteDelegate1<T>_var
                         ,plVar14,0);
            break;
          }
          if (lVar10 == 0) goto LAB_03092920;
          lVar19 = *(long *)(lVar10 + 0x18);
          lVar18 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_ICleanupSharedComponentData_var)
          ;
          FUN_0306b47c(lVar18,0);
          if (lVar18 == 0) goto LAB_03092920;
          *(long *)(lVar18 + 0x18) = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar18 + 0x18),lVar9);
          *(undefined4 *)(lVar18 + 0x10) = 4;
          *(int *)(lVar18 + 0x14) = iVar5;
          if (*(uint *)(in_stack_00000028 + 0x18) <= uVar21) goto LAB_03092994;
          if (in_stack_00000018 == 0) goto LAB_03092920;
          uVar6 = FUN_02217a2c(in_stack_00000018,
                               *(undefined8 *)(in_stack_00000028 + uVar21 * 8 + 0x20),
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000979_PostfixBurstDelegate_var
                              );
          *(undefined4 *)(lVar18 + 0x20) = uVar6;
          if (lVar19 == 0) goto LAB_03092920;
          FUN_01b5f01c(lVar19,lVar18,*(undefined8 *)Unity_Entities_ICleanupComponentData_var);
        }
        uVar21 = uVar21 + 1;
        iVar5 = FUN_036a3768(in_stack_00000020,0);
      } while ((long)uVar21 < (long)iVar5);
    }
    puVar4 = PTR_DAT_03cc3560;
    puVar3 = PTR_DAT_03cbfa20;
    puVar2 = PTR_DAT_03cbfa18;
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc3568);
    FUN_0219a4f0(lVar9,*(undefined8 *)puVar4);
    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    Animancer_AnimancerState__OnSetIsPlaying(lVar12,*(undefined8 *)puVar3);
    puVar3 = System_IComparable_var;
    puVar2 = System_Linq_Expressions_Expression<TDelegate>_var;
    lVar18 = *unaff_x23;
    if (lVar18 != 0) {
      iVar5 = 0;
      iVar20 = 0;
      while (*(long *)(lVar18 + 0x10) != 0) {
        iVar7 = FUN_036a2ca8(*(long *)(lVar18 + 0x10),0);
        if (iVar7 <= iVar20) {
          if (*(int *)(*(long *)System_Runtime_CompilerServices_ExtensionAttribute_var + 0xe0) == 0)
          {
            thunk_FUN_01a58e78();
          }
          FUN_03052fb0(lVar10,lVar12,3,0);
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_020f03e8(&stack0x00000050,lVar10,lVar9,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000984_PostfixBurstDelegate_var
                      );
          auVar1._8_8_ = in_stack_00000058;
          auVar1._0_8_ = in_stack_00000050;
          return auVar1;
        }
        if ((*unaff_x23 == 0) ||
           (lVar18 = FUN_03092b68(in_stack_00000040,*(undefined8 *)(*unaff_x23 + 0x10),iVar20,
                                  *(undefined1 *)(in_stack_00000030 + 0x15),
                                  *(undefined1 *)(in_stack_00000030 + 0x16),*in_stack_00000038),
           lVar18 == 0)) break;
        if (-1 < *(int *)(lVar18 + 0x10)) {
          if (((((*unaff_x23 == 0) || (lVar19 = *(long *)(*unaff_x23 + 0x10), lVar19 == 0)) ||
               (uVar8 = FUN_036a2d20(lVar19,iVar20,0), lVar9 == 0)) ||
              ((iStack0000000000000060 = iVar20, in_stack_00000068._4_4_ = iVar5,
               FUN_0219b9a4(lVar9,&stack0x00000060,(long)&stack0x00000068 + 4,
                            *(undefined8 *)PTR_DAT_03ccbbe8), lVar12 == 0 ||
               (FUN_01b5f01c(lVar12,uVar8,*(undefined8 *)PTR_DAT_03cbfa30), lVar10 == 0)))) ||
             (lVar19 = *(long *)(lVar10 + 0x18), lVar19 == 0)) break;
          iVar7 = 0;
          iVar5 = iVar5 + 1;
          while (iVar7 < *(int *)(lVar19 + 0x18)) {
            FUN_02215a88(lVar19,iVar7,&stack0x00000060,*(undefined8 *)puVar2);
            if ((CONCAT44(uStack0000000000000064,iStack0000000000000060) == 0) ||
               (lVar19 = *(long *)(CONCAT44(uStack0000000000000064,iStack0000000000000060) + 0x28),
               lVar19 == 0)) goto LAB_03092920;
            FUN_01b5f01c(lVar19,lVar18,*(undefined8 *)puVar3);
            lVar19 = *(long *)(lVar10 + 0x18);
            iVar7 = iVar7 + 1;
            if (lVar19 == 0) goto LAB_03092920;
          }
        }
        lVar18 = *unaff_x23;
        iVar20 = iVar20 + 1;
        if (lVar18 == 0) break;
      }
    }
  }
LAB_03092920:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


