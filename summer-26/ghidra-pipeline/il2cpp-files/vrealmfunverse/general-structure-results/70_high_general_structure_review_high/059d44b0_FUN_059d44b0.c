/*
FUNCTION_NAME: FUN_059d44b0
ENTRY_POINT: 059d44b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x059d46fc) */

void FUN_059d44b0(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_066d3b72 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312bc0);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_CalculateScaleToFit_00000931_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_IsWithinRadius_00000930_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_CalculateRotationParams_000011DE_PostfixBurstDelegate>__
                );
    DAT_066d3b72 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F_PostfixBurstDelegate>__
                   + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F_PostfixBurstDelegate>__
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_2);
  }
  plVar3 = (long *)param_2[4];
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar2 = FUN_05fadc2c(plVar3,0);
  if (iVar2 == 1) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *(long *)(param_1 + 0x10);
    lVar4 = FUN_05fad570(plVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = FUN_05fac358(lVar4,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar5,uVar5);
    }
    FUN_03f21a18(lVar10,uVar5,
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E_PostfixBurstDelegate>__
                );
  }
  else {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = thunk_FUN_05fadcd0(plVar3,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar6 = FUN_05fadb6c(plVar3,0);
    uVar5 = FUN_04c0ab28(*(undefined8 *)
                          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_IsWithinRadius_00000930_PostfixBurstDelegate>__
                         ,uVar5,*(undefined8 *)
                                 Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_CalculateRotationParams_000011DE_PostfixBurstDelegate>__
                         ,uVar6,0);
    lVar4 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312bc0);
    FUN_04db2a6c(uVar6,uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_03f21954(lVar4,uVar6,
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_CalculateScaleToFit_00000931_PostfixBurstDelegate>__
                );
  }
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_059d46c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_059d46c8:
    (*(code *)*puVar7)(plVar3,puVar7[1]);
  }
  return;
}


