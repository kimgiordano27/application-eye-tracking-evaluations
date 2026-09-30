/*
FUNCTION_NAME: FUN_03486ffc
ENTRY_POINT: 03486ffc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03486ffc(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 local_68;
  
  if ((DAT_04832ab9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Stack_Pop__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<SplineContainer>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ElementAt<KeyValuePair<string,_JSONNode>>__);
    thunk_FUN_01efb3a4(Method_System_Net_Sockets_Socket_GetSocketOption__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_1__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Splines_SplineUtility_GetPointAtLinearDistance<NativeSpline>__
                      );
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_Spawner_<Start>b__24_0__);
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_Spawner_<WaveRoutine>b__28_0__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832ab9 = 1;
  }
  local_68 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar15 = thunk_FUN_01efb3a4(
                               Method_Sirenix_Serialization_SerializationNodeDataReader_ReadUInt32__
                               );
    FUN_034efd20(uVar5,uVar15,0);
    uVar15 = thunk_FUN_01efb3a4(
                               Method_System_Runtime_Remoting_Messaging_StackBuilderSink_<AsyncProcessMessage>b__4_0__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar15);
  }
  if (param_3 < 1) {
    uVar5 = thunk_FUN_01efb3a4(Method_System_Net_Security_SslStream_set_Position__);
    uVar5 = FUN_035ac8e0(uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar15 = thunk_FUN_01efb3a4(Method_System_Collections_Stack__ctor__);
    FUN_034f3578(uVar8,uVar15,uVar5,0);
    goto LAB_03487598;
  }
  uVar4 = FUN_034a20d0(param_6,0,0);
  if ((uVar4 & 1) == 0) {
LAB_03487130:
    if (param_1[8] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = thunk_FUN_01ecaf38(param_2,0);
      plVar14 = (long *)param_1[8];
      if (plVar14 == (long *)0x0) goto LAB_034874a8;
      lVar10 = *plVar14;
      lVar9 = param_1[9];
      lVar11 = param_1[10];
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Method_System_Net_Sockets_Socket_GetSocketOption__
             ) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_034871b0;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar14,*(long *)Method_System_Net_Sockets_Socket_GetSocketOption__,0);
LAB_034871b0:
      uVar5 = (*(code *)*puVar6)(plVar14,uVar5,lVar9,lVar11,&local_68,puVar6[1]);
    }
    puVar7 = Method_System_Linq_Enumerable_ElementAt<KeyValuePair<string,_JSONNode>>__;
    lVar9 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                        Method_System_Linq_Enumerable_ElementAt<KeyValuePair<string,_JSONNode>>__
                              );
    if (lVar9 != 0) {
      uVar15 = *(undefined8 *)puVar7;
      plVar14 = (long *)thunk_FUN_01f116d0(param_2,uVar15);
      lVar9 = param_2;
      if (plVar14 == (long *)0x0) goto LAB_0348755c;
      uVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Collections_Stack_Pop__);
      lVar11 = *plVar14;
      lVar9 = *(long *)puVar7;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            lVar9 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
            goto LAB_03487260;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      lVar9 = FUN_01ecb238(plVar14,lVar9,0);
LAB_03487260:
      FUN_034805dc(uVar15,plVar14,*(undefined8 *)(lVar9 + 8));
      (**(code **)(*param_1 + 0x1d8))(param_1,uVar15,*(undefined8 *)(*param_1 + 0x1e0));
    }
    if ((param_7 == 0) || (lVar9 = FUN_0358d9a0(param_7,0), lVar9 == 0)) {
      lVar11 = 0;
    }
    else {
      uVar15 = *(undefined8 *)Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
      lVar11 = thunk_FUN_01f116d0(lVar9,uVar15);
      if (lVar11 == 0) {
LAB_0348755c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar9,uVar15);
      }
    }
    puVar3 = Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
    lVar9 = FUN_03484ea0(param_1,param_3);
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_Splines_SplineUtility_GetPointAtLinearDistance<NativeSpline>__
                                );
      if (param_6 != (long *)0x0) {
        lVar10 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*param_6 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)) {
LAB_034874ac:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(param_6);
        }
      }
      FUN_034875b0(lVar9,param_2,param_3,param_4,uVar5,param_5,param_6,lVar11);
      FUN_03484fc4(param_1,lVar9);
      if (lVar9 == 0) {
LAB_034874a8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(byte *)(lVar9 + 0x50) & 7) != 0) {
        plVar14 = (long *)FUN_03484e28(param_1);
        if (plVar14 == (long *)0x0) goto LAB_034874a8;
        (**(code **)(*plVar14 + 0x178))(plVar14,lVar9,*(undefined8 *)(*plVar14 + 0x180));
      }
      lVar11 = *param_1;
    }
    else {
      puVar7 = Method_System_Runtime_Remoting_Messaging_StackBuilderSink_CheckParameters__;
      if (*(long *)(lVar9 + 0x10) != 0) goto LAB_0348756c;
      if (param_6 != (long *)0x0) {
        lVar10 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*param_6 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar10))
        goto LAB_034874ac;
      }
      FUN_034877f8(lVar9,param_2,param_4,uVar5,param_5,param_6,lVar11,param_1);
      if (0 < *(int *)(lVar9 + 0x20)) {
        FUN_0348648c(param_1,lVar9,0);
      }
      uVar1 = *(uint *)(lVar9 + 0x50);
      if ((uVar1 & 7) != 0) {
        plVar14 = (long *)FUN_03484e28(param_1);
        if (plVar14 == (long *)0x0) goto LAB_034874a8;
        (**(code **)(*plVar14 + 0x178))(plVar14,lVar9,*(undefined8 *)(*plVar14 + 0x180));
        uVar1 = *(uint *)(lVar9 + 0x50);
      }
      if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
        FUN_03486128(param_1,lVar9);
        *(undefined8 *)(lVar9 + 0x40) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x40),0);
      }
      lVar11 = *param_1;
      if (*(int *)(lVar9 + 0x24) + *(int *)(lVar9 + 0x20) < 1) {
        pcVar12 = *(code **)(lVar11 + 0x1f8);
        uVar5 = *(undefined8 *)(lVar11 + 0x200);
        goto LAB_0348747c;
      }
    }
    pcVar12 = *(code **)(lVar11 + 0x1e8);
    uVar5 = *(undefined8 *)(lVar11 + 0x1f0);
LAB_0348747c:
    (*pcVar12)(param_1,param_2,uVar5);
    return;
  }
  puVar7 = Method_UnityEngine_Splines_SplineContainer_EvaluatePosition<SplinePath<Spline>>__;
  if (param_6 != (long *)0x0) {
    lVar9 = *param_6;
    bVar2 = *(byte *)(*(long *)Method_Gameplay_Creeps_Spawner_<Start>b__24_0__ + 0x130);
    if (((bVar2 <= *(byte *)(lVar9 + 0x130)) &&
        (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
         *(long *)Method_Gameplay_Creeps_Spawner_<Start>b__24_0__)) ||
       (lVar9 == *(long *)Method_Gameplay_Creeps_Spawner_<WaveRoutine>b__28_0__)) goto LAB_03487130;
  }
LAB_0348756c:
  uVar5 = thunk_FUN_01efb3a4(puVar7);
  uVar5 = FUN_035ac8e0(uVar5,0);
  thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
  uVar8 = thunk_FUN_01f117cc();
  FUN_03480238(uVar8,uVar5);
LAB_03487598:
  uVar5 = thunk_FUN_01efb3a4(
                            Method_System_Runtime_Remoting_Messaging_StackBuilderSink_<AsyncProcessMessage>b__4_0__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar5);
}


