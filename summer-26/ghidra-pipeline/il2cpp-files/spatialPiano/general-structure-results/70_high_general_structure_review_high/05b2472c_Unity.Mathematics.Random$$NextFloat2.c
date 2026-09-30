/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat2
ENTRY_POINT: 05b2472c
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

void Unity_Mathematics_Random__NextFloat2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong extraout_x1;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  uint uVar14;
  long unaff_x20;
  int iVar15;
  uint uVar16;
  
  FUN_02f08768();
  FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBack__);
  *(undefined1 *)(unaff_x20 + 0x91b) = 1;
  *(undefined1 *)(unaff_x19 + 0x9d) = 1;
  plVar4 = (long *)FUN_05a8075c(0);
  FUN_05b244b0();
  FUN_05b1f220();
  FUN_05b1f878();
  FUN_05b201d4();
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_05b247e8;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067c91b0,0);
FUN_05b247e8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  lVar7 = *(long *)
           Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  iVar15 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x2c);
  if (iVar15 < 0) {
    iVar15 = *(int *)(unaff_x19 + 0x98);
  }
  else if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
    iVar15 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x2c);
  }
  iVar10 = *(int *)(lVar7 + 0xe4);
  *(int *)(unaff_x19 + 0x78) = iVar15;
  if (iVar10 == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  FUN_032eac64(*(long *)(lVar7 + 0xb8) + 8);
  iVar15 = 1;
  uVar16 = 2;
  while( true ) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar2;
    }
    piVar8 = *(int **)(lVar7 + 0xb8);
    iVar10 = *piVar8;
    uVar14 = uVar16;
    if (iVar10 <= iVar15) break;
    do {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_05b24aec;
      uVar1 = uVar14 - 2;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_05b24af0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar12 = *(long *)(lVar9 + (ulong)uVar1 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_05b24aec;
      uVar14 = uVar14 - 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_05b24af0;
      lVar13 = *(long *)(lVar9 + (ulong)uVar14 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_05b24aec;
      if (*(int *)(lVar12 + 0x98) <= *(int *)(lVar13 + 0x98)) break;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
      FUN_032f285c(lVar9,uVar14,uVar1,*(undefined8 *)puVar3);
    } while (1 < (int)uVar14);
    iVar15 = iVar15 + 1;
    uVar16 = uVar16 + 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
    piVar8 = *(int **)(lVar7 + 0xb8);
    iVar10 = *piVar8;
  }
  if (iVar10 == 1) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar2;
      piVar8 = *(int **)(lVar7 + 0xb8);
    }
    if (*(long *)(piVar8 + 4) == 0) {
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
                                );
      FUN_048343e0(uVar6,0,*(undefined8 *)Method_Unity_Burst_BurstString_OptsSplit__,0);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = uVar6;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar2;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067c99a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c99a8);
    }
    FUN_05b24b3c(uVar6);
    lVar7 = *(long *)puVar2;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar11 = FUN_05b21360();
  if ((uVar11 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_060f078c(uVar6,0,0);
    if ((uVar11 & 1) != 0) {
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


