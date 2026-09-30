/*
FUNCTION_NAME: FUN_07e89fc0
ENTRY_POINT: 07e89fc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_13;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void FUN_07e89fc0(long param_1,uint param_2,uint param_3,byte param_4,byte param_5)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CreateTicketResponse>_SetStateMachine__
  ;
  if ((DAT_0899ab00 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CreateTicketResponse>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<FileItem>>,_PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
                );
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<FileItem>,_FilesService_<GetMetadataAsync>d__5>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<FileItem>,_PlayerFilesService_<GetMetadataAsync>d__4>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BackfillTicket>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<FilesService_<GetMetadataAsync>d__5>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<PlayerFilesService_<GetMetadataAsync>d__4>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
                );
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Create__);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetException__
                );
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetResult__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetStateMachine__
                );
    FUN_03a8a718(PTR_DAT_0848e8c8);
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_get_Task__)
    ;
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<Task<HttpClientResponse>>,_HttpClient_<CreateHttpClientResponse>d__4>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<Task<HttpClientResponse>>,_HttpClient_<CreateWebRequestAsync>d__5>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateHttpClientResponse>d__4>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__3>__
                );
    FUN_03a8a718(PTR_DAT_0848e8f8);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__5>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<MakeRequestAsync>d__1>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<MakeRequestAsync>d__2>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
                );
    FUN_03a8a718(PTR_DAT_084944d8);
    FUN_03a8a718(PTR_DAT_08486c60);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<JoinLobbyByCodeAsync>d__15>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<>c__DisplayClass5_0_<<CreateWebRequestAsync>b__0>d>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CreateTicketResponse>_SetStateMachine__
                );
    FUN_03a8a718(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_03a8a718(PTR_DAT_084896d8);
    FUN_03a8a718(PTR_DAT_08493f60);
    DAT_0899ab00 = 1;
  }
  lVar13 = *(long *)puVar3;
  local_68 = 0;
  local_70 = 0;
  iVar21 = *(int *)(lVar13 + 0xe4);
  *(undefined4 *)(param_1 + 0x6c) = 1;
  if (iVar21 == 0) {
    thunk_FUN_03ae8be4();
    lVar13 = *(long *)puVar3;
  }
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
  lVar18 = puVar15[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar19 = *puVar15;
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<FilesService_<GetMetadataAsync>d__5>__
                               );
    FUN_04957830(lVar18,uVar19,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<>c__DisplayClass5_0_<<CreateWebRequestAsync>b__0>d>__
                 ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar14 = lVar18;
    thunk_FUN_03afed3c(plVar14,lVar18);
    lVar13 = *(long *)puVar3;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar13 = *(long *)puVar3;
  }
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Start<PlayerFilesService_<GetMetadataAsync>d__4>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<FileItem>>,_PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
  ;
  puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BackfillTicket>_get_Task__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<JoinLobbyByCodeAsync>d__15>__
  ;
  puVar4 = System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo;
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
  lVar20 = puVar15[2];
  if (lVar20 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar19 = *puVar15;
    lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CreateTicketResponse>_get_Task__
                               );
    FUN_05e38d24(lVar20,uVar19,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                 ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar14 = lVar20;
    thunk_FUN_03afed3c(plVar14,lVar20);
  }
  puVar3 = PTR_DAT_08486be8;
  uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
  FUN_04bf32e0(uVar19,lVar18,lVar20,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0xa0) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xa0),uVar19);
  uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
  FUN_07e9adbc(uVar19,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xa8),uVar19);
  uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_07e92d1c();
  *(undefined8 *)(param_1 + 0xb0) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xb0),uVar19);
  uVar19 = *(undefined8 *)puVar7;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  uVar19 = thunk_FUN_03ac74bc(uVar19);
  FUN_07e6c728(uVar19,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xc0),uVar19);
  FUN_0679343c(param_1,0);
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar13 = *(long *)puVar4;
  }
  cVar1 = *(char *)(*(long *)(lVar13 + 0xb8) + 0xd);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar3);
  }
  puVar5 = PTR_DAT_08493f60;
  puVar3 = PTR_DAT_08486c60;
  FUN_07c502e0(cVar1 == '\0',0);
  FUN_07c502e0(1,0);
  lVar13 = *(long *)puVar4;
  lVar18 = *(long *)(lVar13 + 0xb8);
  iVar21 = *(int *)(lVar18 + 8);
  *(int *)(lVar18 + 8) = iVar21 + 1;
  if (iVar21 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar18 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    if (*(char *)(lVar18 + 0xc) == '\0') {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07e6ada4(1,0);
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar13 = *(long *)puVar4;
      }
      *(undefined1 *)(*(long *)(lVar13 + 0xb8) + 0xc) = 1;
    }
  }
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<MakeRequestAsync>d__2>__
  ;
  puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_get_Task__;
  lVar13 = *(long *)puVar3;
  *(byte *)(param_1 + 0xb9) = param_4 & 1;
  iVar21 = *(int *)(lVar13 + 0xe4);
  *(byte *)(param_1 + 0xba) = param_5 & 1;
  if (iVar21 == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar11 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<MakeRequestAsync>d__1>__
  ;
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__5>__
  ;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<Task<HttpClientResponse>>,_HttpClient_<CreateWebRequestAsync>d__5>__
  ;
  puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetStateMachine__
  ;
  puVar7 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetResult__;
  puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_SetException__;
  uVar12 = FUN_06751ca0(param_2 >> 1,0x800,0);
  *(undefined4 *)(param_1 + 0x28) = uVar12;
  *(undefined4 *)(param_1 + 0x2c) = uVar12;
  uVar19 = *(undefined8 *)puVar6;
  fVar22 = (float)param_3 / (float)param_2;
  if (fVar22 <= 2.0) {
    fVar22 = 2.0;
  }
  *(float *)(param_1 + 0x30) = fVar22;
  lVar13 = thunk_FUN_03ac74bc(uVar19);
  iVar21 = 4;
  FUN_04de7dc0(lVar13,4,*(undefined8 *)puVar4);
  plVar14 = (long *)(param_1 + 0x38);
  *plVar14 = lVar13;
  thunk_FUN_03afed3c(plVar14,lVar13);
  lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_04de7dc0(lVar13,4,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<Task<HttpClientResponse>>,_HttpClient_<CreateHttpClientResponse>d__4>__
              );
  plVar17 = (long *)(param_1 + 0x40);
  *plVar17 = lVar13;
  thunk_FUN_03afed3c(plVar17,lVar13);
  do {
    lVar13 = *plVar14;
    uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar10);
    FUN_050049d4(uVar19,*(undefined8 *)puVar8);
    if (lVar13 == 0) goto LAB_07e8a918;
    lVar18 = *(long *)(lVar13 + 0x10);
    lVar20 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_07e8a918;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      puVar15 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
      *puVar15 = uVar19;
      thunk_FUN_03afed3c(puVar15,uVar19);
    }
    else {
      FUN_04de85b0(lVar13,uVar19,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = *plVar17;
    uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar11);
    FUN_05007728(uVar19,*(undefined8 *)puVar9);
    if (lVar13 == 0) goto LAB_07e8a918;
    lVar18 = *(long *)(lVar13 + 0x10);
    lVar20 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_07e8a918;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      puVar15 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
      *puVar15 = uVar19;
      thunk_FUN_03afed3c(puVar15,uVar19);
    }
    else {
      FUN_04de85b0(lVar13,uVar19,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  FUN_07e96be4(param_1);
  uVar19 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084896d8,4);
  *(undefined8 *)(param_1 + 0x50) = uVar19;
  thunk_FUN_03afed3c();
  puVar3 = PTR_DAT_084944d8;
  uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084944d8);
  FUN_07c60a80(uVar19,0);
  *(undefined8 *)(param_1 + 0x58) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x58),uVar19);
  uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_07c60a80(uVar19,0);
  *(undefined8 *)(param_1 + 0x60) = uVar19;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x60),uVar19);
  local_68 = 0;
  local_70 = 0;
  FUN_07cde0b0(&local_70,param_4 & 1,0);
  FUN_07cde124(&local_70,0xff,0);
  FUN_07cde134(&local_70,0xff,0);
  FUN_07cde148(&local_70,3,0);
  FUN_07cde164(&local_70,0,0);
  FUN_07cde180(&local_70,0,0);
  FUN_07cde19c(&local_70,3,0);
  FUN_07cde150(&local_70,2,0);
  FUN_07cde16c(&local_70,0,0);
  FUN_07cde188(&local_70,0,0);
  FUN_07cde1a4(&local_70,4,0);
  uVar12 = local_68;
  uVar19 = local_70;
  if (*(int *)(*(long *)PTR_DAT_08493f60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar19 = FUN_07e6aaa0(uVar19,uVar12,0);
  puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_Create__;
  *(undefined8 *)(param_1 + 0x10) = uVar19;
  uVar19 = FUN_03a8a804(*(undefined8 *)puVar3,4);
  puVar15 = (undefined8 *)(param_1 + 0x48);
  *puVar15 = uVar19;
  thunk_FUN_03afed3c(puVar15,uVar19);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__3>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateHttpClientResponse>d__4>__
  ;
  uVar16 = 0;
  lVar13 = 0x20;
  while( true ) {
    plVar14 = (long *)*puVar15;
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_04de7d48(lVar18,*(undefined8 *)puVar3);
    if (plVar14 == (long *)0x0) break;
    if ((lVar18 != 0) &&
       (lVar20 = thunk_FUN_03ac73c0(lVar18,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0)) {
      uVar19 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar19,0);
    }
    if (*(uint *)(plVar14 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(long *)((long)plVar14 + lVar13) = lVar18;
    thunk_FUN_03afed3c((long)plVar14 + lVar13,lVar18);
    uVar16 = uVar16 + 1;
    lVar13 = lVar13 + 8;
    if (uVar16 == 4) {
      uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<FileItem>,_PlayerFilesService_<GetMetadataAsync>d__4>__
                                 );
      FUN_05fdb6c4(uVar19,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<FileItem>,_FilesService_<GetMetadataAsync>d__5>__
                  );
      *(undefined8 *)(param_1 + 200) = uVar19;
      thunk_FUN_03afed3c((undefined8 *)(param_1 + 200),uVar19);
      puVar4 = PTR_DAT_0848e8f8;
      uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e8f8);
      puVar3 = PTR_DAT_0848e8c8;
      FUN_04de7d48(uVar19,*(undefined8 *)PTR_DAT_0848e8c8);
      *(undefined8 *)(param_1 + 0xd0) = uVar19;
      thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xd0),uVar19);
      uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
      FUN_04de7d48(uVar19,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0xd8) = uVar19;
      thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xd8),uVar19);
      return;
    }
  }
LAB_07e8a918:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


