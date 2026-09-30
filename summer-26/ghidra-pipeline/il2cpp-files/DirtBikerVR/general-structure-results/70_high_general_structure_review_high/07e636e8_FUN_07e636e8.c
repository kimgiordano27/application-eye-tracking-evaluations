/*
FUNCTION_NAME: FUN_07e636e8
ENTRY_POINT: 07e636e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_11;telemetry_or_network_hits_5
*/


void FUN_07e636e8(undefined8 param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int local_6c;
  undefined8 local_68;
  
  if ((DAT_0899a874 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultCustomDataAsync>d__27>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<QueryIndexResponse>>,_CustomDataApiClient_<QueryAsync>d__6>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<MemoryStream>>_get_Task__
                );
    DAT_0899a874 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  if (param_2 == 0) {
LAB_07e63a18:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_68 = *(undefined8 *)(param_2 + 0x268);
  iVar6 = FUN_07e13ef4(&local_68,0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
  ;
  if (0 < iVar6) {
    iVar16 = 0;
    do {
      local_68 = *(undefined8 *)(param_2 + 0x268);
      plVar7 = (long *)FUN_07e151c8(&local_68,iVar16,0);
      if (plVar7 == (long *)0x0) goto LAB_07e63a18;
      lVar8 = FUN_07e04e98(plVar7,0);
      if (lVar8 == 0) {
        bVar5 = false;
      }
      else {
        plVar9 = (long *)FUN_07e04e98(plVar7,0);
        if (plVar9 == (long *)0x0) goto LAB_07e63a18;
        plVar9 = (long *)(**(code **)(*plVar9 + 0x988))(plVar9,*(undefined8 *)(*plVar9 + 0x990));
        bVar5 = plVar7 == plVar9;
      }
      uVar10 = FUN_07e0488c(plVar7,0);
      if ((bVar5) || ((uVar10 & 1) != 0)) {
        lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultCustomDataAsync>d__27>__
                                  );
        FUN_0679343c(lVar8,0);
        iVar1 = *param_3;
        *param_3 = iVar1 + 1;
        if (lVar8 == 0) goto LAB_07e63a18;
        *(int *)(lVar8 + 0x10) = iVar1;
        *(long *)(lVar8 + 0x18) = (long)plVar7;
        thunk_FUN_03afed3c((long *)(lVar8 + 0x18),plVar7);
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<MemoryStream>>_get_Task__
        ;
        *(bool *)(lVar8 + 0x20) = bVar5;
        lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
        FUN_04de7d48(lVar11,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<QueryIndexResponse>>,_CustomDataApiClient_<QueryAsync>d__6>__
                    );
        plVar9 = (long *)(lVar8 + 0x28);
        *plVar9 = lVar11;
        thunk_FUN_03afed3c(plVar9,lVar11);
        if (param_4 == 0) goto LAB_07e63a18;
        lVar11 = *(long *)(param_4 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_07e63a18;
        uVar2 = *(uint *)(param_4 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_4 + 0x18) = uVar2 + 1;
          plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *plVar12 = lVar8;
          thunk_FUN_03afed3c(plVar12,lVar8);
        }
        else {
          FUN_04de85b0(param_4,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        local_6c = 0;
        piVar13 = &local_6c;
        lVar8 = *plVar9;
      }
      else {
        uVar10 = (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
        piVar13 = param_3;
        lVar8 = param_4;
        if ((((uVar10 & 1) != 0) && (uVar10 = FUN_07e048b8(plVar7,0), (uVar10 & 1) != 0)) &&
           (-1 < *(int *)((long)plVar7 + 0x24))) {
          lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultCustomDataAsync>d__27>__
                                     );
          FUN_0679343c(lVar11,0);
          iVar1 = *param_3;
          *param_3 = iVar1 + 1;
          if (lVar11 == 0) goto LAB_07e63a18;
          *(int *)(lVar11 + 0x10) = iVar1;
          *(long *)(lVar11 + 0x18) = (long)plVar7;
          thunk_FUN_03afed3c((long *)(lVar11 + 0x18),plVar7);
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined1 *)(lVar11 + 0x20) = 0;
          thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28),0);
          if (param_4 == 0) goto LAB_07e63a18;
          lVar14 = *(long *)(param_4 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_07e63a18;
          uVar2 = *(uint *)(param_4 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(param_4 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar11;
            thunk_FUN_03afed3c(plVar9,lVar11);
          }
          else {
            FUN_04de85b0(param_4,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      FUN_07e636e8(param_1,plVar7,piVar13,lVar8);
      iVar16 = iVar16 + 1;
    } while (iVar6 != iVar16);
  }
  return;
}


