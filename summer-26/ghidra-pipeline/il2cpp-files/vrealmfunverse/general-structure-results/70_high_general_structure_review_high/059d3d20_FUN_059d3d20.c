/*
FUNCTION_NAME: FUN_059d3d20
ENTRY_POINT: 059d3d20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_file_logging_hits_3;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_059d3d20(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_066d3b6f & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_06312b70);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C_PostfixBurstDelegate>__
                );
    FUN_02b3c81c(Method_System_IO_BufferedStream_EnsureNotClosed__);
    FUN_02b3c81c(PTR_DAT_06321500);
    FUN_02b3c81c(PTR_DAT_06316c60);
    FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<ActiveRagdollMuscle>_Dispose__);
    FUN_02b3c81c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D_PostfixBurstDelegate>__
                );
    DAT_066d3b6f = 1;
  }
  puVar1 = PTR_DAT_06312b70;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 8);
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D_PostfixBurstDelegate>__
                              );
    FUN_04dbdb8c(lVar4,0);
    plVar9 = (long *)(param_1 + 10);
    *plVar9 = lVar4;
    thunk_FUN_02bb0e9c(plVar9,lVar4);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(*plVar9 + 0x20) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_02bb0e9c();
    puVar2 = Method_System_Collections_Generic_List_Enumerator<ActiveRagdollMuscle>_Dispose__;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar9;
    *(undefined4 *)(lVar12 + 0x10) = 1;
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_05620fd4(uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar10 = (undefined8 *)(lVar4 + 0x28);
    *puVar10 = uVar5;
    thunk_FUN_02bb0e9c(puVar10,uVar5);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *(long *)(*plVar9 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_05621288(lVar4,0);
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar11 = *(long **)(*(long *)(lVar12 + 0x20) + 0x28);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *plVar11;
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_IO_BufferedStream_EnsureNotClosed__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059d3ee4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02b7654c(plVar11,*(long *)Method_System_IO_BufferedStream_EnsureNotClosed__,0);
LAB_059d3ee4:
    uVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = uVar5;
    thunk_FUN_02bb0e9c(puVar10);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06315bd0);
      uVar5 = thunk_FUN_02b79644();
      uVar6 = thunk_FUN_02ba3594(
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E_PostfixBurstDelegate>__
                                );
      FUN_04d7dc70(uVar5,uVar6,0);
      if (*plVar9 != 0) {
        FUN_059d3664(*plVar9,uVar5);
        uVar6 = thunk_FUN_02ba3594(
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001083_PostfixBurstDelegate>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar12 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar3 = FUN_044589c8(lVar12,*(undefined8 *)
                                 Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C_PostfixBurstDelegate>__
                        );
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_037528fc(uVar5,uVar3,*(undefined8 *)PTR_DAT_06321500);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x18),uVar5);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    FUN_059d15a8(&local_58,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    FUN_059d15e8(&local_58);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = FUN_059d358c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    local_38 = FUN_04def52c(lVar4,0);
    uVar7 = FUN_04ca9e1c(&local_38,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_02bb0e9c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0311c7d0(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
                  );
      return;
    }
  }
  FUN_04ca9ee4(&local_38,0);
  if (*(long *)(param_1 + 10) != 0) {
    FUN_059d36e0();
    *param_1 = -2;
    param_1[10] = 0;
    param_1[0xb] = 0;
    thunk_FUN_02bb0e9c(param_1 + 10,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04caac50(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


