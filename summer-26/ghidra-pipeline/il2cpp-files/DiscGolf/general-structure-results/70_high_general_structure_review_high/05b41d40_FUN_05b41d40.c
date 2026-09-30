/*
FUNCTION_NAME: FUN_05b41d40
ENTRY_POINT: 05b41d40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * FUN_05b41d40(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_06dc2139 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Dictionary<MetricId,_IMetric<long>>_TypeInfo);
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<TryTask>d__9>__
                );
    DAT_06dc2139 = 1;
  }
  puVar7 = PTR_DAT_069fb9c0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    puVar7 = PTR_DAT_06a0e068;
  }
  else {
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_055006dc(param_3,0,0);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
    ;
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_02da6564(param_2,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar8);
        lVar8 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_055006dc(uVar5,uVar9,0);
      if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x30) != '\0')) {
        lVar8 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
        ;
        if (*param_2 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x05b41e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar6 = (long *)(**(code **)(lVar8 + 0x218))
                                     (param_2,param_3,param_4,*(undefined8 *)(lVar8 + 0x220));
          return plVar6;
        }
        goto LAB_05b4210c;
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar7 + 0xe0));
      }
      uVar4 = FUN_055006dc(uVar5,uVar9,0);
      puVar3 = Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__;
      if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
        lVar8 = *(long *)
                 Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)puVar3;
        }
        plVar6 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar6 != (long *)0x0) {
          uVar5 = *(undefined8 *)(*plVar6 + 0x510);
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x508);
LAB_05b4207c:
                    /* WARNING: Could not recover jumptable at 0x05b4209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar6 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3,param_4,uVar5);
          return plVar6;
        }
LAB_05b420a0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar7 + 0xe0));
      }
      uVar4 = FUN_055006dc(uVar5,uVar9,0);
      if ((uVar4 & 1) != 0) {
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)puVar2;
        }
        uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
        if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar7 + 0xe0));
        }
        uVar4 = FUN_055006dc(param_3,uVar5,0);
        if ((uVar4 & 1) != 0) {
          return param_2;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
          uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<MetricId,_IMetric<long>>_TypeInfo
                                    );
          FUN_05bb1c74(uVar5,0);
          if (plVar6 != (long *)0x0) {
            if (*param_2 != *(long *)(puVar7 + 0x90)) {
LAB_05b4210c:
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(param_2);
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x228))
                                       (plVar6,param_2,uVar5,param_4,1,
                                        *(undefined8 *)(*plVar6 + 0x230));
            if (plVar6 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<TryTask>d__9>__
                               + 0x130);
              if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<TryTask>d__9>__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0();
              }
              if ((plVar6[2] != 0) &&
                 (plVar6 = (long *)FUN_05b1b128(plVar6[2],0), plVar6 != (long *)0x0)) {
                if (*param_2 == *(long *)(puVar7 + 0x90)) {
                  uVar5 = *(undefined8 *)(*plVar6 + 0x4f0);
                  UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x4e8);
                  goto LAB_05b4207c;
                }
                goto LAB_05b4210c;
              }
            }
          }
        }
        goto LAB_05b420a0;
      }
      uVar5 = FUN_05b29158(param_1,uVar5,param_3,0);
      goto LAB_05b420f4;
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    puVar7 = System_Threading_CancellationToken_<>c_TypeInfo;
  }
  uVar9 = thunk_FUN_02dfd288(puVar7);
  FUN_0544bf54(uVar5,uVar9,0);
LAB_05b420f4:
  uVar9 = thunk_FUN_02dfd288(Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar9);
}


