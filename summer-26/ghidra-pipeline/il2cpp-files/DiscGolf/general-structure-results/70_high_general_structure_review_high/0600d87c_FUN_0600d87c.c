/*
FUNCTION_NAME: FUN_0600d87c
ENTRY_POINT: 0600d87c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_8;telemetry_or_network_hits_21
*/


void FUN_0600d87c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_68;
  
  if ((DAT_06dc4a56 & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000360_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalLookRotation_00000354_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000361_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000365_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000366_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_00000364_PostfixBurstDelegate>__
                );
    FUN_02d965b8(PTR_DAT_069fe8d0);
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ApproximateCubicBezierLength_00000444_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_CalculateProjectileFlightTime_00000446_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastSafeDivide_0000035F_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastVectorEquals_0000035C_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastVectorEquals_0000035D_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043F_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_GenerateCubicBezierCurve_00000440_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_SampleCubicBezierPoint_0000043E_PostfixBurstDelegate>__
                );
    DAT_06dc4a56 = 1;
  }
  puVar6 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_GenerateCubicBezierCurve_00000440_PostfixBurstDelegate>__
  ;
  puVar5 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000366_PostfixBurstDelegate>__
  ;
  puVar4 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
  ;
  puVar3 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastVectorEquals_0000035D_PostfixBurstDelegate>__
  ;
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastVectorEquals_0000035C_PostfixBurstDelegate>__
  ;
  puVar1 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastSafeDivide_0000035F_PostfixBurstDelegate>__
  ;
  lVar16 = *(long *)(param_1 + 8);
  local_68 = 0;
  if (*param_1 == 0) {
    local_68 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_0600dab4;
  }
  uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ApproximateCubicBezierLength_00000444_PostfixBurstDelegate>__
                            );
  FUN_0400f984(uVar7,*(undefined8 *)
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetSphereOverlapParameters_00000364_PostfixBurstDelegate>__
              );
  *(undefined8 *)(param_1 + 10) = uVar7;
  LeanTween__value(param_1 + 10,uVar7);
  piVar12 = param_1 + 0xc;
  piVar12[0] = 0;
  piVar12[1] = 0;
  LeanTween__value(piVar12,0);
  do {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar13 = *(long **)(lVar16 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = *plVar13;
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0600da84;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar4,0);
LAB_0600da84:
    lVar10 = (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_68 = FUN_0481d028(lVar10,*(undefined8 *)puVar3);
    uVar11 = FUN_047e6248(&local_68,*(undefined8 *)puVar2);
    if ((uVar11 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_68;
      LeanTween__value(param_1 + 0xe,0);
      if (*(int *)(*(long *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalLookRotation_00000354_PostfixBurstDelegate>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f5cc8(param_1 + 2,&local_68,param_1,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate>__
                  );
      return;
    }
LAB_0600dab4:
    lVar10 = FUN_047e6288(&local_68,*(undefined8 *)puVar1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *(long *)puVar6;
    lVar14 = *(long *)(*(long *)(lVar10 + 0x20) + 0x10);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar9 = *(long *)puVar6;
    }
    puVar8 = *(undefined8 **)(lVar9 + 0xb8);
    lVar15 = puVar8[1];
    if (lVar15 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar8 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar7 = *puVar8;
      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000361_PostfixBurstDelegate>__
                                 );
      FUN_04ba7c10(lVar15,uVar7,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_ElevateQuadraticToCubicBezier_0000043F_PostfixBurstDelegate>__
                   ,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
      *plVar13 = lVar15;
      LeanTween__value(plVar13,lVar15);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_03363ad4(lVar14,lVar15,*(undefined8 *)puVar5);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < *(int *)(lVar9 + 0x18)) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_040103fc(*(long *)(param_1 + 10),lVar9,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000365_PostfixBurstDelegate>__
                  );
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *(long *)(*(long *)(lVar10 + 0x20) + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      uVar7 = 0;
      if (lVar9 != 0) {
        lVar9 = FUN_05370f84(lVar9,*(undefined8 *)
                                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_SampleCubicBezierPoint_0000043E_PostfixBurstDelegate>__
                             ,0,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar7 = *(undefined8 *)(lVar9 + 0x28);
      }
      *(undefined8 *)(param_1 + 0xc) = uVar7;
      LeanTween__value();
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x20) + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar11 = FUN_0536c9cc(*(undefined8 *)(lVar10 + 0x10),0);
    if ((uVar11 & 1) != 0) {
      *param_1 = -2;
      piVar12 = param_1 + 10;
      uVar7 = *(undefined8 *)piVar12;
      piVar12[0] = 0;
      piVar12[1] = 0;
      LeanTween__value(piVar12,0);
      piVar12 = param_1 + 0xc;
      piVar12[0] = 0;
      piVar12[1] = 0;
      LeanTween__value(piVar12,0);
      if (*(int *)(*(long *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_OrthogonalLookRotation_00000354_PostfixBurstDelegate>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(param_1 + 2,uVar7,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Scale_00000360_PostfixBurstDelegate>__
                  );
      return;
    }
  } while( true );
}


