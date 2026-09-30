/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat4
ENTRY_POINT: 05b247d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Mathematics_Random__NextFloat4(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong extraout_x1;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint uVar12;
  long unaff_x20;
  int iVar13;
  uint uVar14;
  
  (*(code *)*param_1)();
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  lVar4 = *(long *)
           Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  iVar13 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x2c);
  if (iVar13 < 0) {
    iVar13 = *(int *)(unaff_x19 + 0x98);
  }
  else if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
    iVar13 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x2c);
  }
  iVar9 = *(int *)(lVar4 + 0xe4);
  *(int *)(unaff_x19 + 0x78) = iVar13;
  if (iVar9 == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  FUN_032eac64(*(long *)(lVar4 + 0xb8) + 8);
  iVar13 = 1;
  uVar14 = 2;
  while( true ) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar2;
    }
    piVar7 = *(int **)(lVar4 + 0xb8);
    iVar9 = *piVar7;
    uVar12 = uVar14;
    if (iVar9 <= iVar13) break;
    do {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_05b24aec;
      uVar1 = uVar12 - 2;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_05b24af0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar10 = *(long *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_05b24aec;
      uVar12 = uVar12 - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_05b24af0;
      lVar11 = *(long *)(lVar8 + (ulong)uVar12 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_05b24aec;
      if (*(int *)(lVar10 + 0x98) <= *(int *)(lVar11 + 0x98)) break;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
      FUN_032f285c(lVar8,uVar12,uVar1,*(undefined8 *)puVar3);
    } while (1 < (int)uVar12);
    iVar13 = iVar13 + 1;
    uVar14 = uVar14 + 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
    piVar7 = *(int **)(lVar4 + 0xb8);
    iVar9 = *piVar7;
  }
  if (iVar9 == 1) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar2;
      piVar7 = *(int **)(lVar4 + 0xb8);
    }
    if (*(long *)(piVar7 + 4) == 0) {
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
                                );
      FUN_048343e0(uVar5,0,*(undefined8 *)Method_Unity_Burst_BurstString_OptsSplit__,0);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10) = uVar5;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067c99a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c99a8);
    }
    FUN_05b24b3c(uVar5);
    lVar4 = *(long *)puVar2;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_05b21360();
  if ((uVar6 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_060f078c(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_05b24aec:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05a7a11c(*(long *)(unaff_x19 + 0x28),0);
      if (extraout_x1 >> 0x20 == 0) {
        FUN_05b24c00();
        goto LAB_05b24a8c;
      }
    }
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      FUN_05b204fc();
    }
  }
LAB_05b24a8c:
  FUN_05b24cbc();
  if (DAT_06bc29c7 == '\0') {
    FUN_02f08768(Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__);
    DAT_06bc29c7 = '\x01';
  }
  if (**(long **)(*(long *)Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__ + 0xb8)
      != 0) {
    FUN_05b24de4();
  }
  return;
}


