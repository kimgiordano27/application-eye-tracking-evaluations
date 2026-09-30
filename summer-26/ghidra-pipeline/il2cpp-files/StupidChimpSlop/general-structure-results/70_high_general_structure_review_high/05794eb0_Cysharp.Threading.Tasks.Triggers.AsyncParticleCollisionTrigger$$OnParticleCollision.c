/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncParticleCollisionTrigger$$OnParticleCollision
ENTRY_POINT: 05794eb0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


long Cysharp_Threading_Tasks_Triggers_AsyncParticleCollisionTrigger__OnParticleCollision
               (long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_06a552e3 & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
    DAT_06a552e3 = 1;
  }
  puVar8 = 
  Method_Unity_Burst_FunctionPointer<XRGrabInteractable_StepSmoothingBurst_00000F9B_PostfixBurstDelegate>_get_Value__
  ;
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x10);
  lVar10 = param_1;
  while( true ) {
    if ((DAT_06a552ea & 1) == 0) {
      FUN_02d4dc40(puVar8);
      DAT_06a552ea = 1;
    }
    if ((*(long *)(lVar10 + 0x18) == 0) || (*(int *)(*(long *)(lVar10 + 0x18) + 0x18) == 0)) break;
    lVar9 = FUN_05791420(lVar10,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if ((((iVar3 != iVar2) && ((iVar2 != 0x1a || (2 < iVar3 - 3U)))) &&
        ((iVar2 != 0x1b || (2 < iVar3 - 6U)))) ||
       (((uVar4 = *(uint *)(lVar9 + 0x2c), *(int *)(lVar10 + 0x2c) == 0 && (1 < (int)uVar4)) ||
        (uVar5 = *(uint *)(lVar9 + 0x30), (int)uVar5 < (int)(uVar4 * 2))))) break;
    if (0 < (int)uVar4) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = 0x7ffffffe / uVar4;
      }
      iVar3 = uVar4 * iVar11;
      bVar1 = iVar11 <= (int)uVar7;
      iVar11 = 0x7fffffff;
      if (bVar1) {
        iVar11 = iVar3;
      }
      *(int *)(lVar9 + 0x2c) = iVar11;
    }
    lVar10 = lVar9;
    if (0 < (int)uVar5) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = 0x7ffffffe / uVar5;
      }
      iVar3 = uVar5 * iVar12;
      bVar1 = iVar12 <= (int)uVar4;
      iVar12 = 0x7fffffff;
      if (bVar1) {
        iVar12 = iVar3;
      }
      *(int *)(lVar9 + 0x30) = iVar12;
    }
  }
  if (iVar11 == 0x7fffffff) {
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
    FUN_05044d4c(lVar10,0);
    *(undefined4 *)(lVar10 + 0x34) = uVar6;
    *(undefined4 *)(lVar10 + 0x10) = 0x16;
  }
  return lVar10;
}


