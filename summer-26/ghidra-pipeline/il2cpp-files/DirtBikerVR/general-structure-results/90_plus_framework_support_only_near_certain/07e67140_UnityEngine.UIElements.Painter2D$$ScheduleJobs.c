/*
FUNCTION_NAME: UnityEngine.UIElements.Painter2D$$ScheduleJobs
ENTRY_POINT: 07e67140
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_Painter2D__ScheduleJobs(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  
  FUN_03a8a718(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Start<PlayerFilesApiClient_<GetDownloadUrlAsync>d__10>__
              );
  *(undefined1 *)(unaff_x22 + 0x8b2) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  if ((unaff_x21 != 0) &&
     (plVar5 = (long *)FUN_07e02864(), puVar1 = PTR_DAT_084961e0, plVar5 != (long *)0x0)) {
    lVar8 = *plVar5;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_084961e0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
          goto LAB_07e671d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_084961e0,0x11);
LAB_07e671d0:
    (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_FilesApiClient_<GetUploadUrlAsync>d__10>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_FilesApiClient_<GetDownloadUrlAsync>d__8>__
    ;
    puVar2 = OVRPlugin_Media_TypeInfo;
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_04d8f4b4(&stack0x00000008,*(long *)(unaff_x19 + 0x50),
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Start<PlayerFilesApiClient_<GetDownloadUrlAsync>d__10>__
                  );
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar7 = FUN_061ae064(&stack0x00000020,*(undefined8 *)puVar4), uVar9 = in_stack_00000030
            , (uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_07de4914();
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)FUN_07e02864();
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
                goto LAB_07e672c8;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar1,0x12);
LAB_07e672c8:
          (*(code *)*puVar6)(plVar5,uVar9 & 0xffffffff,puVar6[1]);
        }
      }
      FUN_061ae060(&stack0x00000020,*(undefined8 *)puVar3);
      lVar8 = *(long *)(unaff_x19 + 0x50);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


