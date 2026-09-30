/*
FUNCTION_NAME: FUN_05ce35e4
ENTRY_POINT: 05ce35e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_05ce35e4(long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  if ((DAT_06dc2d63 & 1) == 0) {
    FUN_02d965b8(Unity_Collections_UnsafeQueueBlockPool_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(PTR_DAT_06a0fad0);
    FUN_02d965b8(PTR_DAT_06a16eb0);
    FUN_02d965b8(PTR_DAT_06a10338);
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_IsVelocitySufficient_00001049_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Item__)
    ;
    DAT_06dc2d63 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_05cd427c(0);
  puVar5 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Item__;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd42e0(param_1,0,*(undefined8 *)puVar5,0);
  }
  puVar4 = PTR_DAT_06a10338;
  if (param_2 == (long *)0x0) {
    if (*(long *)(param_1 + 0xa8) != 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 200);
LAB_05ce37a0:
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x104) != 0)) {
      FUN_05ce3104(param_1);
      uVar8 = FUN_0534e494(*(undefined8 *)
                            Method_Unity_Burst_FunctionPointer<XRPokeLogic_IsVelocitySufficient_00001049_PostfixBurstDelegate>_get_Value__
                           ,*(undefined8 *)(lVar11 + 0x108),0);
      uVar12 = *(undefined8 *)(param_1 + 0xe8);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a10338);
      FUN_05cecc68(uVar10,uVar8,0,param_2,7,uVar12);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      LeanTween__value((long *)(param_1 + 0xa8),uVar10);
      goto LAB_05ce38f8;
    }
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a10338);
    *(undefined4 *)((long)plVar7 + 0x8c) = 0x10;
    FUN_054e802c(plVar7,uVar8,param_2,0);
    *(long *)(param_1 + 0xa8) = (long)plVar7;
  }
  else {
    lVar9 = *param_2;
    bVar2 = *(byte *)(lVar9 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_06a0fad0 + 0x130);
    if ((bVar3 <= bVar2) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_06a0fad0)) {
      *(long *)(param_1 + 0xa8) = (long)param_2;
      LeanTween__value((long *)(param_1 + 0xa8),param_2);
      uVar8 = thunk_FUN_02dfd288(
                                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(param_2,uVar8);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 200);
    bVar3 = *(byte *)(*(long *)PTR_DAT_06a10338 + 0x130);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06a10338)) {
      bVar3 = *(byte *)(*(long *)Unity_Collections_UnsafeQueueBlockPool_TypeInfo + 0x130);
      if ((bVar2 < bVar3) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)Unity_Collections_UnsafeQueueBlockPool_TypeInfo)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_06a16eb0 + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06a16eb0))
        goto LAB_05ce37a0;
      }
      *(long *)(param_1 + 0xa8) = (long)param_2;
      plVar7 = param_2;
    }
    else {
      FUN_05ce3104(param_1);
      uVar8 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      lVar9 = *(long *)puVar4;
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(param_2);
      }
      uVar1 = *(undefined4 *)((long)param_2 + 0x8c);
      uVar10 = *(undefined8 *)(param_1 + 0xe8);
      plVar7 = (long *)thunk_FUN_02dd3144(lVar9);
      FUN_05cecc68(plVar7,uVar8,0,0,uVar1,uVar10);
      *(long **)(param_1 + 0xa8) = plVar7;
    }
  }
  LeanTween__value(param_1 + 0xa8,plVar7);
  if (lVar11 == 0) {
    return;
  }
LAB_05ce38f8:
  lVar9 = *(long *)(param_1 + 0xe8);
  if (lVar9 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar11 + 0x104);
  uVar10 = *(undefined8 *)(lVar11 + 0x108);
  uVar8 = FUN_05cdf188(lVar11,0);
  *(undefined4 *)(lVar9 + 0x38) = uVar1;
  *(undefined8 *)(lVar9 + 0x40) = uVar10;
  LeanTween__value((undefined8 *)(lVar9 + 0x40),uVar10);
  *(undefined8 *)(lVar9 + 0x68) = uVar8;
  LeanTween__value((undefined8 *)(lVar9 + 0x68),uVar8);
  return;
}


