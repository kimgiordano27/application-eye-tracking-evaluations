/*
FUNCTION_NAME: FUN_078a1c8c
ENTRY_POINT: 078a1c8c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


long FUN_078a1c8c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  
  puVar4 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_Clear__;
  if ((DAT_08272bf5 & 1) == 0) {
    FUN_0373b518(Method_Unity_VisualScripting_Average<Vector3>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__);
    FUN_0373b518(Method_Unity_VisualScripting_Average<Vector4>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_GetEnumerator__);
    FUN_0373b518(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
                );
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_Clear__);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_TypeInfo
                );
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_Remove__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet<IXRGroupMember>_UnionWith__);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                );
    FUN_0373b518(System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_Dictionary<int,_int[]>_TypeInfo);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08272bf5 = 1;
  }
  puVar2 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__;
  plVar16 = (long *)
            Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
  ;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar1 = Method_Unity_VisualScripting_Average<Vector3>__ctor__;
  lVar5 = FUN_0544a95c(*(undefined8 *)puVar2);
  lVar10 = *plVar16;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar10);
  }
  lVar10 = FUN_0544a95c(*(undefined8 *)puVar1);
  puVar2 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_UnionWith__;
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<IXRGroupMember>_UnionWith__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_078a1e18;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0377596c(param_1,*(long *)
                                   Method_System_Collections_Generic_HashSet<IXRGroupMember>_UnionWith__
                          ,0);
LAB_078a1e18:
    lVar11 = (*(code *)*puVar6)(param_1,puVar6[1]);
    if ((lVar11 != 0) &&
       (FUN_03fe3368(lVar11,0,lVar5,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<IXRGroupMember>_Remove__),
       puVar3 = 
       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
       , puVar1 = PTR_DAT_07d86398, lVar5 != 0)) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar15 = 0;
        do {
          lVar11 = FUN_049cec24(lVar5,iVar15,*(undefined8 *)puVar3);
          if (lVar11 == 0) goto LAB_078a209c;
          uVar7 = FUN_075a7484(lVar11,0);
          lVar12 = *param_1;
          lVar9 = *(long *)puVar2;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_078a1ed4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(param_1,lVar9,0);
LAB_078a1ed4:
          uVar8 = (*(code *)*puVar6)(param_1,puVar6[1]);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)puVar1);
          }
          uVar13 = FUN_075ac5e0(uVar7,uVar8,0);
          if (((uVar13 & 1) == 0) &&
             (uVar13 = FUN_075a6c34(lVar11,0),
             plVar16 = (long *)
                       Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
             , (uVar13 & 1) != 0)) {
            lVar12 = *param_1;
            lVar9 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_078a1fd8;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_078a1fc0;
          }
          iVar15 = iVar15 + 1;
          plVar16 = (long *)
                    Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Result<ARAnchor>>_AwaitOnCompleted<Awaitable_Awaiter<Result<ARAnchor>>,_ARAnchorManager_<TryAddAnchorAsync>d__9>__
          ;
        } while (iVar15 < *(int *)(lVar5 + 0x18));
      }
      goto LAB_078a1f34;
    }
  }
  goto LAB_078a209c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_078a1fc0:
    if (*(long *)(piVar14 + -2) == lVar9) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_078a1ff4;
    }
  }
LAB_078a1fd8:
  puVar6 = (undefined8 *)FUN_0377596c(param_1,lVar9,0);
LAB_078a1ff4:
  lVar9 = (*(code *)*puVar6)(param_1,puVar6[1]);
  if ((lVar9 != 0) &&
     (FUN_03fe3368(lVar9,0,lVar10,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_TypeInfo
                  ), puVar2 = System_Collections_Generic_Dictionary<int,_int[]>_TypeInfo,
     lVar10 != 0)) {
    iVar15 = *(int *)(lVar10 + 0x18);
    do {
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 0) goto LAB_078a1f38;
        lVar9 = FUN_049cec24(lVar10,iVar15,*(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_078a209c;
        uVar7 = FUN_075a73b4(lVar9,0);
        uVar8 = FUN_075a73b4(lVar11,0);
        uVar13 = FUN_078a24b8(uVar7,uVar8);
      } while ((uVar13 & 1) != 0);
      lVar9 = FUN_049cec24(lVar10,iVar15,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_078a209c;
      uVar13 = FUN_0788d958(lVar9,0);
    } while ((uVar13 & 1) == 0);
LAB_078a1f34:
    lVar11 = 0;
LAB_078a1f38:
    puVar2 = Method_System_Collections_Generic_HashSet<IXRGroupMember>_GetEnumerator__;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar4 = Method_Unity_VisualScripting_Average<Vector4>__ctor__;
    FUN_0544aa9c(lVar5,*(undefined8 *)puVar2);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0544aa9c(lVar10,*(undefined8 *)puVar4);
    return lVar11;
  }
LAB_078a209c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


