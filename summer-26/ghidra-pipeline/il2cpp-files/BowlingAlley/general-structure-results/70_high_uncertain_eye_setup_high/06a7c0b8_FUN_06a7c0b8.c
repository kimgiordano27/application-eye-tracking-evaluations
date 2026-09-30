/*
FUNCTION_NAME: FUN_06a7c0b8
ENTRY_POINT: 06a7c0b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06a7c0b8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar3 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  if ((DAT_076e2eec & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_032e1da0(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    thunk_FUN_032e1da0(PTR_DAT_0727ac80);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Stack<ReflectionSnapshot>_Pop__);
    thunk_FUN_032e1da0(PTR_DAT_072a45d8);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_07279f90);
    thunk_FUN_032e1da0(PTR_DAT_07279f98);
    thunk_FUN_032e1da0(PTR_DAT_07279fa0);
    thunk_FUN_032e1da0(PTR_DAT_0728e9a8);
    thunk_FUN_032e1da0(PTR_DAT_0728e9b0);
    thunk_FUN_032e1da0(PTR_DAT_07279fa8);
    thunk_FUN_032e1da0(PTR_DAT_07279fb0);
    thunk_FUN_032e1da0(PTR_DAT_07279fb8);
    thunk_FUN_032e1da0(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                      );
    thunk_FUN_032e1da0(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                      );
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_Task<List<AvatarTemplateData>>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_Task<List<UserAvatarResponse>>_GetAwaiter__);
    DAT_076e2eec = 1;
  }
  puVar1 = PTR_DAT_072798f8;
  lVar5 = FUN_03958adc(param_1,*(undefined8 *)puVar3);
  plVar10 = param_1 + 8;
  *plVar10 = lVar5;
  thunk_FUN_0333a630(plVar10,lVar5);
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
LAB_06a7c33c:
    puVar2 = Method_System_Threading_Tasks_Task<List<UserAvatarResponse>>_GetAwaiter__;
    puVar3 = Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__;
    uVar7 = FUN_06be6b40(param_1,0);
    uVar7 = FUN_057a25c4(*(undefined8 *)puVar3,uVar7,0);
    uVar7 = FUN_057a19ac(uVar7,*(undefined8 *)puVar2,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar5);
    }
    FUN_06bb3070(uVar7,param_1,0);
  }
  else {
    lVar5 = *(long *)PTR_DAT_072794f0;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    goto LAB_06a7c33c;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_06be9890(plVar10,0,0);
    puVar3 = Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__;
    if ((uVar6 & 1) == 0) goto LAB_06a7c33c;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)
                                       Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                              );
    plVar12 = param_1 + 9;
    *plVar12 = lVar5;
    uVar7 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)puVar3);
    thunk_FUN_0333a630(plVar12,uVar7);
    puVar2 = PTR_DAT_0727ac80;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)PTR_DAT_0727ac80);
    plVar10 = param_1 + 10;
    *plVar10 = lVar5;
    uVar7 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)puVar2);
    thunk_FUN_0333a630(plVar10,uVar7);
    plVar13 = (long *)*plVar12;
    if (plVar13 != (long *)0x0) {
      lVar5 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06a7c5a8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,0);
LAB_06a7c5a8:
      lVar5 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f98);
      FUN_04af414c(uVar7,param_1,
                   *(undefined8 *)
                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__,0);
      if (lVar5 == 0) goto LAB_06a7c820;
      FUN_04af773c(lVar5,uVar7,*(undefined8 *)PTR_DAT_07279fa8);
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_06a7c820;
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06a7c65c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,1);
LAB_06a7c65c:
      lVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e9a8);
      FUN_04af414c(uVar7,param_1,
                   *(undefined8 *)
                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__,0);
      if (lVar5 == 0) goto LAB_06a7c820;
      FUN_04af773c(lVar5,uVar7,*(undefined8 *)PTR_DAT_0728e9b0);
    }
    plVar12 = (long *)*plVar10;
    if (plVar12 != (long *)0x0) {
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06a7c70c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar2,0);
LAB_06a7c70c:
      lVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279f90);
      FUN_04af414c(uVar7,param_1,
                   *(undefined8 *)
                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                   ,0);
      if (lVar5 == 0) goto LAB_06a7c820;
      FUN_04af773c(lVar5,uVar7,*(undefined8 *)PTR_DAT_07279fb0);
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_06a7c820;
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06a7c7c0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar10,*(long *)puVar2,1);
LAB_06a7c7c0:
      lVar5 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279fa0);
      FUN_04af414c(uVar7,param_1,
                   *(undefined8 *)
                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                   ,0);
      if (lVar5 == 0) goto LAB_06a7c820;
      FUN_04af773c(lVar5,uVar7,*(undefined8 *)PTR_DAT_07279fb8);
    }
  }
  lVar5 = param_1[7];
  if (lVar5 == 0) {
LAB_06a7c820:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
    FUN_0395944c(param_1,lVar5,
                 *(undefined8 *)Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
    if (param_1[7] == 0) goto LAB_06a7c820;
    if (*(int *)(param_1[7] + 0x18) == 0) {
      uVar7 = FUN_06be6b40(param_1,0);
      uVar7 = FUN_057a25c4(*(undefined8 *)
                            Method_System_Threading_Tasks_Task<List<AvatarTemplateData>>_GetAwaiter__
                           ,uVar7,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar5);
      }
      FUN_06bb3070(uVar7,param_1,0);
    }
  }
  puVar3 = PTR_DAT_072a45d8;
  bVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  *(byte *)(param_1 + 0xc) = bVar4 & 1;
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_06bc0dd0(lVar5,0);
  param_1[0xb] = lVar5;
  thunk_FUN_0333a630(param_1 + 0xb,lVar5);
  if (((char)param_1[6] != '\0') && (plVar10 = (long *)param_1[9], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_06a7c4d4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar10,*(long *)
                                   Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                          ,5);
LAB_06a7c4d4:
    uVar6 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((uVar6 & 1) != 0) goto LAB_06a7c55c;
  }
  if ((*(char *)((long)param_1 + 0x31) != '\0') &&
     (plVar10 = (long *)param_1[10], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0727ac80) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_06a7c54c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_032937ac(plVar10,*(long *)PTR_DAT_0727ac80,6);
LAB_06a7c54c:
    uVar6 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((uVar6 & 1) != 0) {
LAB_06a7c55c:
                    /* WARNING: Could not recover jumptable at 0x06a7c580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
      return;
    }
  }
  return;
}


