/*
FUNCTION_NAME: FUN_05b246ac
ENTRY_POINT: 05b246ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05b24af4) */

void FUN_05b246ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong extraout_x1;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  if ((DAT_06bc291b & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                );
    FUN_02f08768(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c99a8);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_Unity_Burst_BurstString_OptsSplit__);
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
                );
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBack__);
    DAT_06bc291b = 1;
  }
  *(undefined1 *)(param_1 + 0x9d) = 1;
  plVar5 = (long *)FUN_05a8075c(0);
  FUN_05b244b0(param_1);
  FUN_05b1f220(param_1);
  FUN_05b1f878(param_1);
  FUN_05b201d4(param_1);
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_05b247e8;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067c91b0,0);
FUN_05b247e8:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  lVar8 = *(long *)
           Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate>__
  ;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  iVar16 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x2c);
  if (iVar16 < 0) {
    iVar16 = *(int *)(param_1 + 0x98);
  }
  else if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
    iVar16 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x2c);
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  iVar11 = *(int *)(lVar8 + 0xe4);
  *(int *)(param_1 + 0x78) = iVar16;
  if (iVar11 == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  puVar4 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  FUN_032eac64(*(long *)(lVar8 + 0xb8) + 8,*(long *)(lVar8 + 0xb8),param_1,10,*(undefined8 *)puVar3)
  ;
  iVar16 = 1;
  uVar17 = 2;
  while( true ) {
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar2;
    }
    piVar9 = *(int **)(lVar8 + 0xb8);
    iVar11 = *piVar9;
    uVar15 = uVar17;
    if (iVar11 <= iVar16) break;
    do {
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar2;
      }
      lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_05b24aec;
      uVar1 = uVar15 - 2;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_05b24af0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar13 = *(long *)(lVar10 + (ulong)uVar1 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_05b24aec;
      uVar15 = uVar15 - 1;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_05b24af0;
      lVar14 = *(long *)(lVar10 + (ulong)uVar15 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_05b24aec;
      if (*(int *)(lVar13 + 0x98) <= *(int *)(lVar14 + 0x98)) break;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
      FUN_032f285c(lVar10,uVar15,uVar1,*(undefined8 *)puVar4);
    } while (1 < (int)uVar15);
    iVar16 = iVar16 + 1;
    uVar17 = uVar17 + 1;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
    piVar9 = *(int **)(lVar8 + 0xb8);
    iVar11 = *piVar9;
  }
  if (iVar11 == 1) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar2;
      piVar9 = *(int **)(lVar8 + 0xb8);
    }
    if (*(long *)(piVar9 + 4) == 0) {
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
                                );
      FUN_048343e0(uVar7,0,*(undefined8 *)Method_Unity_Burst_BurstString_OptsSplit__,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10) = uVar7;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067c99a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c99a8);
    }
    FUN_05b24b3c(uVar7);
    lVar8 = *(long *)puVar2;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar12 = FUN_05b21360();
  if ((uVar12 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_060f078c(uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_05b24aec:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05a7a11c(*(long *)(param_1 + 0x28),0);
      if (extraout_x1 >> 0x20 == 0) {
        FUN_05b24c00(param_1);
        goto LAB_05b24a8c;
      }
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_05b204fc(param_1);
    }
  }
LAB_05b24a8c:
  FUN_05b24cbc(param_1);
  if (DAT_06bc29c7 == '\0') {
    FUN_02f08768(Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__);
    DAT_06bc29c7 = '\x01';
  }
  if (**(long **)(*(long *)Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__ + 0xb8)
      != 0) {
    FUN_05b24de4(**(long **)(*(long *)
                              Method_Unity_Burst_BurstCompiler_GetILPPMethodFunctionPointer__ + 0xb8
                            ),param_1);
  }
  return;
}


