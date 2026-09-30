/*
FUNCTION_NAME: FUN_059d0948
ENTRY_POINT: 059d0948
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_8;telemetry_or_network_hits_18
*/


undefined8 FUN_059d0948(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  long local_70;
  long local_68;
  
  puVar1 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalUpVector_0000034E_PostfixBurstDelegate>__
  ;
  puVar2 = PTR_DAT_06338850;
  if ((DAT_066d3b49 & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Orthogonal_0000035E_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_0631efd0);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000351_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_0631fb68);
    FUN_02b3c81c(PTR_DAT_0631fb70);
    FUN_02b3c81c(PTR_DAT_0631fb78);
    FUN_02b3c81c(PTR_DAT_06338710);
    FUN_02b3c81c(PTR_DAT_06338200);
    FUN_02b3c81c(PTR_DAT_06338850);
    FUN_02b3c81c(PTR_DAT_0631fb80);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000352_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_0000035C_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalUpVector_0000034E_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000360_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_0631f160);
    FUN_02b3c81c(PTR_DAT_06336478);
    FUN_02b3c81c(PTR_DAT_063273d0);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>__
                );
    DAT_066d3b49 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_98 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,param_2);
  uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_b0);
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04e5be04(lVar5,*(undefined8 *)puVar1,uVar4,0);
  puVar1 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_0000035C_PostfixBurstDelegate>__
  ;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_0445a80c(*(long *)(param_1 + 0x10),param_2,&local_68,
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000351_PostfixBurstDelegate>__
                );
    uVar4 = *(undefined8 *)puVar1;
    if (local_68 == 0) {
      uVar7 = *(undefined8 *)PTR_DAT_0631f160;
    }
    else {
      plVar6 = (long *)thunk_FUN_02b4c898(local_68,0);
      if (plVar6 == (long *)0x0) goto LAB_059d0fcc;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    }
    puVar3 = 
    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate>__
    ;
    puVar1 = PTR_DAT_06338710;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04e5be04(lVar8,uVar4,uVar7,0);
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    Oculus_Interaction_Locomotion_TurnLocomotionBroadcaster__SmoothTurn(lVar9,0);
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04e5be04(lVar10,*(undefined8 *)puVar3,lVar9,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar11 = FUN_0445a80c(*(long *)(param_1 + 0x20),param_2,&local_70,
                            *(undefined8 *)
                             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Orthogonal_0000035E_PostfixBurstDelegate>__
                           );
      if ((uVar11 & 1) != 0) {
        if (local_70 == 0) goto LAB_059d0fcc;
        FUN_03753b90(&local_b0,local_70,*(undefined8 *)PTR_DAT_0631fb80);
        local_80 = local_a0;
        puStack_88 = puStack_a8;
        local_90 = local_b0;
        local_b0 = 0;
        puStack_a8 = &local_90;
        while (uVar12 = FUN_0471d8c0(&local_90,*(undefined8 *)PTR_DAT_0631fb70), uVar11 = local_80,
              (uVar12 & 1) != 0) {
          local_b4 = (undefined4)local_80;
          uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_b4);
          lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_04e5be04(lVar13,*(undefined8 *)
                               Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000360_PostfixBurstDelegate>__
                       ,uVar4,0);
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0445a80c(*(long *)(param_1 + 0x28),uVar11 & 0xffffffff,&local_98,
                       *(undefined8 *)PTR_DAT_0631efd0);
          uVar4 = FUN_059d14f0(local_98);
          lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_04e5be04(lVar14,*(undefined8 *)
                               Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000352_PostfixBurstDelegate>__
                       ,uVar4,0);
          uVar12 = FUN_059d1494(param_1,uVar11 & 0xffffffff);
          uVar18 = *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>__
          ;
          uVar4 = *(undefined8 *)PTR_DAT_063273d0;
          uVar7 = *(undefined8 *)PTR_DAT_06336478;
          lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          if ((uVar12 & 1) == 0) {
            uVar4 = uVar7;
          }
          FUN_04e5be04(lVar15,uVar18,uVar4,0);
          uVar11 = FUN_059d1414(param_1,uVar11 & 0xffffffff);
          uVar18 = *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>__
          ;
          uVar4 = *(undefined8 *)PTR_DAT_063273d0;
          uVar7 = *(undefined8 *)PTR_DAT_06336478;
          lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          if ((uVar11 & 1) == 0) {
            uVar4 = uVar7;
          }
          FUN_04e5be04(lVar16,uVar18,uVar4,0);
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar13 != 0) &&
             (lVar17 = thunk_FUN_02b79548(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar17 == 0)) {
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar6[4] = lVar13;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar13);
          if ((lVar14 != 0) &&
             (lVar13 = thunk_FUN_02b79548(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar6[5] = lVar14;
          thunk_FUN_02bb0e9c(plVar6 + 5,lVar14);
          if ((lVar15 != 0) &&
             (lVar13 = thunk_FUN_02b79548(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar6[6] = lVar15;
          thunk_FUN_02bb0e9c(plVar6 + 6,lVar15);
          if ((lVar16 != 0) &&
             (lVar13 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar6[7] = lVar16;
          thunk_FUN_02bb0e9c(plVar6 + 7,lVar16);
          uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06338200);
          thunk_FUN_04e5b2e8(uVar4,plVar6,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_04e57520(lVar9,uVar4,0);
        }
        FUN_0471d8bc(&local_90,*(undefined8 *)PTR_DAT_0631fb68);
      }
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
      if (plVar6 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_059d0fd4:
          uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar4,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar5;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar5);
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_059d0fd4;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            plVar6[5] = lVar8;
            thunk_FUN_02bb0e9c(plVar6 + 5,lVar8);
            if ((lVar10 != 0) &&
               (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
            goto LAB_059d0fd4;
            if (2 < *(uint *)(plVar6 + 3)) {
              plVar6[6] = lVar10;
              thunk_FUN_02bb0e9c(plVar6 + 6,lVar10);
              uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06338200);
              thunk_FUN_04e5b2e8(uVar4,plVar6,0);
              return uVar4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
    }
  }
LAB_059d0fcc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


