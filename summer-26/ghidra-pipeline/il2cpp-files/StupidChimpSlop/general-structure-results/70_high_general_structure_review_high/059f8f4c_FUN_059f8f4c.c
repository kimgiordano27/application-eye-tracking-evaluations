/*
FUNCTION_NAME: FUN_059f8f4c
ENTRY_POINT: 059f8f4c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059f91dc) */

void FUN_059f8f4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizePosition_000011D5_PostfixBurstDelegate>__
  ;
  puVar3 = PTR_DAT_0664aed0;
  puVar1 = PTR_DAT_06648128;
  if ((DAT_06a5697e & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648128);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_Triggers_AsyncTriggerExtensions_GetOrAddComponent<AsyncCollisionStay2DTrigger>__
                );
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizeTransform_000011D4_PostfixBurstDelegate>__
                );
    FUN_02d4dc40(PTR_DAT_0664aed0);
    FUN_02d4dc40(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizePosition_000011D5_PostfixBurstDelegate>__
                );
    DAT_06a5697e = 1;
  }
  puVar5 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizeTransform_000011D4_PostfixBurstDelegate>__
  ;
  uVar6 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_04f6e538(uVar6,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar4 = 
  Method_Cysharp_Threading_Tasks_Triggers_AsyncTriggerExtensions_GetOrAddComponent<AsyncCollisionStay2DTrigger>__
  ;
  puVar2 = PTR_DAT_066479b0;
  puVar1 = PTR_DAT_066479a8;
  FUN_05954d88(uVar6,0);
  uVar6 = *(undefined8 *)puVar5;
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar7 = (long *)FUN_04d06880(param_1 + 0x48,uVar6);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_059f90b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar2,0);
LAB_059f90b4:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_059f91b0;
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_059f9188;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_059f9118;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar4,0);
LAB_059f9118:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_0595317c(uVar6,0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_059f91a4;
    }
  }
LAB_059f9188:
  puVar8 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar1,0);
LAB_059f91a4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_059f91b0:
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}


