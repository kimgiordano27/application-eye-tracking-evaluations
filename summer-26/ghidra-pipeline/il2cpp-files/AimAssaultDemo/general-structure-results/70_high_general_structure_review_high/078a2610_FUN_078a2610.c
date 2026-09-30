/*
FUNCTION_NAME: FUN_078a2610
ENTRY_POINT: 078a2610
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_078a2610(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_08272bf6 & 1) == 0) {
    FUN_0373b518(Method_Unity_VisualScripting_Average<Vector3>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__);
    FUN_0373b518(Method_Unity_VisualScripting_Average<Vector4>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_GetEnumerator__);
    FUN_0373b518(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
                );
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_Clear__);
    FUN_0373b518(System_EventHandler<EventArgs>_TypeInfo);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRInteractable>_Add__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRInteractable>_Clear__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRInteractable>_Contains__);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                );
    FUN_0373b518(System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_Dictionary<int,_int[]>_TypeInfo);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                );
    DAT_08272bf6 = 1;
  }
  puVar7 = 
  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
  ;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_062658d0(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
    }
    puVar6 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_Clear__;
    puVar4 = Method_Unity_VisualScripting_Average<Vector3>__ctor__;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar5 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__;
    lVar9 = FUN_0544a95c(*(undefined8 *)puVar4);
    lVar15 = *(long *)puVar6;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar15);
    }
    lVar15 = FUN_0544a95c(*(undefined8 *)puVar5);
    if (((param_1 != 0) && (lVar10 = FUN_075a73b4(param_1,0), lVar10 != 0)) &&
       (FUN_03f0e9dc(lVar10,0,lVar15,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<IXRInteractable>_Add__
                    ), lVar15 != 0)) {
      if (0 < *(int *)(lVar15 + 0x18)) {
        lVar10 = FUN_075a73b4(param_1,0);
        if (lVar10 == 0) goto LAB_078a2970;
        FUN_03f0e9dc(lVar10,0,lVar9,*(undefined8 *)System_EventHandler<EventArgs>_TypeInfo);
        puVar8 = Method_System_Collections_Generic_HashSet<IXRInteractable>_Clear__;
        puVar5 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
        ;
        puVar4 = System_Collections_Generic_Dictionary<int,_int[]>_TypeInfo;
        iVar1 = *(int *)(lVar15 + 0x18);
joined_r0x078a27dc:
        iVar1 = iVar1 + -1;
        if (-1 < iVar1) {
          plVar11 = (long *)FUN_049cec24(lVar15,iVar1,*(undefined8 *)puVar5);
          if (plVar11 == (long *)0x0) goto LAB_078a2970;
          uVar12 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          if ((uVar12 & 1) != 0) {
            if (lVar9 == 0) goto LAB_078a2970;
            iVar2 = *(int *)(lVar9 + 0x18);
            do {
              do {
                iVar2 = iVar2 + -1;
                if (iVar2 < 0) {
                  uVar13 = FUN_049cec24(lVar15,iVar1,*(undefined8 *)puVar5);
                  lVar10 = *(long *)(param_2 + 0x10);
                  lVar16 = *(long *)puVar8;
                  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_078a2970;
                  uVar3 = *(uint *)(param_2 + 0x18);
                  if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(param_2 + 0x18) = uVar3 + 1;
                    *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
                    thunk_FUN_037aeb94();
                  }
                  else {
                    FUN_049ceef4(param_2,uVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto joined_r0x078a27dc;
                }
                lVar10 = FUN_049cec24(lVar9,iVar2,*(undefined8 *)puVar4);
                if (lVar10 == 0) goto LAB_078a2970;
                uVar13 = FUN_075a73b4(lVar10,0);
                lVar10 = FUN_049cec24(lVar15,iVar1,*(undefined8 *)puVar5);
                if (lVar10 == 0) goto LAB_078a2970;
                uVar14 = FUN_075a73b4(lVar10,0);
                uVar12 = FUN_078a24b8(uVar13,uVar14);
              } while ((uVar12 & 1) != 0);
              lVar10 = FUN_049cec24(lVar9,iVar2,*(undefined8 *)puVar4);
              if (lVar10 == 0) goto LAB_078a2970;
              uVar12 = FUN_0788d958(lVar10,0);
            } while ((uVar12 & 1) == 0);
          }
          goto joined_r0x078a27dc;
        }
      }
      puVar4 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_GetEnumerator__;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      puVar6 = Method_Unity_VisualScripting_Average<Vector4>__ctor__;
      FUN_0544aa9c(lVar15,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0544aa9c(lVar9,*(undefined8 *)puVar6);
      return;
    }
  }
LAB_078a2970:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


