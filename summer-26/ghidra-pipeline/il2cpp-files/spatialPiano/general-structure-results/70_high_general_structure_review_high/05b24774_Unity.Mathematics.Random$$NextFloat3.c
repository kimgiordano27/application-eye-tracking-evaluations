/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat3
ENTRY_POINT: 05b24774
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


/* WARNING: Removing unreachable block (ram,0x05b24af4) */

void Unity_Mathematics_Random__NextFloat3(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong extraout_x1;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long *in_stack_00000018;
  
  FUN_05b1f878();
  FUN_05b201d4();
  if (in_stack_00000018 != (long *)0x0) {
    lVar6 = *in_stack_00000018;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_05b247e8;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
FUN_05b247e8:
    (*(code *)*puVar4)(in_stack_00000018,puVar4[1]);
  }
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  lVar6 = *(long *)
           Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  iVar14 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x2c);
  if (iVar14 < 0) {
    iVar14 = *(int *)(unaff_x19 + 0x98);
  }
  else if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
    iVar14 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x2c);
  }
  iVar9 = *(int *)(lVar6 + 0xe4);
  *(int *)(unaff_x19 + 0x78) = iVar14;
  if (iVar9 == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  puVar3 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  FUN_032eac64(*(long *)(lVar6 + 0xb8) + 8);
  iVar14 = 1;
  uVar15 = 2;
  while( true ) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar2;
    }
    piVar7 = *(int **)(lVar6 + 0xb8);
    iVar9 = *piVar7;
    uVar13 = uVar15;
    if (iVar9 <= iVar14) break;
    do {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_05b24aec;
      uVar1 = uVar13 - 2;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_05b24af0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar11 = *(long *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_05b24aec;
      uVar13 = uVar13 - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_05b24af0;
      lVar12 = *(long *)(lVar8 + (ulong)uVar13 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_05b24aec;
      if (*(int *)(lVar11 + 0x98) <= *(int *)(lVar12 + 0x98)) break;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
      FUN_032f285c(lVar8,uVar13,uVar1,*(undefined8 *)puVar3);
    } while (1 < (int)uVar13);
    iVar14 = iVar14 + 1;
    uVar15 = uVar15 + 1;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
    piVar7 = *(int **)(lVar6 + 0xb8);
    iVar9 = *piVar7;
  }
  if (iVar9 == 1) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar2;
      piVar7 = *(int **)(lVar6 + 0xb8);
    }
    if (*(long *)(piVar7 + 4) == 0) {
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
                                );
      FUN_048343e0(uVar5,0,*(undefined8 *)Method_Unity_Burst_BurstString_OptsSplit__,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10) = uVar5;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar2;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067c99a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c99a8);
    }
    FUN_05b24b3c(uVar5);
    lVar6 = *(long *)puVar2;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_05b21360();
  if ((uVar10 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_060f078c(uVar5,0,0);
    if ((uVar10 & 1) != 0) {
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


