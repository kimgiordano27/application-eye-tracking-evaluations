/*
FUNCTION_NAME: FUN_06b5ba54
ENTRY_POINT: 06b5ba54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b5bd20) */

bool FUN_06b5ba54(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_076e3b5e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRSpatialAnchor>,_AutomaticColocationLauncher_<CreateNewColocatedSpace>d__23>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRTriangleMesh>,_RoomMeshAnchor_<Initialize>d__14>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_AssetSelectionElement_<OnButtonCreated>d__13>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_TemplateSelectionElement_<>c__DisplayClass11_0_<<CreateButtons>b__1>d>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AmplitudeEventLogger_<LogEvent>d__8>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AssetSelectionUI_<GetAssets>d__9>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AvatarManager_<PrecompileAvatar>d__17>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ColorSelectionElement_<LoadAndCreateButtons>d__7>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                      );
    DAT_076e3b5e = 1;
  }
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_TemplateSelectionElement_<>c__DisplayClass11_0_<<CreateButtons>b__1>d>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_AssetSelectionElement_<OnButtonCreated>d__13>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
  ;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_041e3694(&local_b8,param_1,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AvatarManager_<PrecompileAvatar>d__17>__
              );
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  local_70 = local_a8;
  do {
    uVar8 = FUN_052d44b4(&local_80,*(undefined8 *)puVar5);
    lVar7 = local_70;
    if ((uVar8 & 1) == 0) {
      uVar11 = 9;
      break;
    }
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(local_70 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_041e3694(&local_b8,*(long *)(local_70 + 0x20),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ColorSelectionElement_<LoadAndCreateButtons>d__7>__
                );
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    do {
      uVar8 = FUN_052d44b4(&local_a0,*(undefined8 *)puVar6);
      lVar9 = local_90;
      if ((uVar8 & 1) == 0) {
        uVar11 = 2;
        goto LAB_06b5bc3c;
      }
      if (*(long *)(lVar7 + 0x30) == 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar10 = *(undefined8 *)(local_90 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_06b5cd04(uVar10);
      }
      else {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar10 = *(undefined8 *)(lVar7 + 0x18);
      }
      uVar12 = *(undefined8 *)(lVar9 + 0x18);
      uVar3 = *(undefined4 *)(lVar9 + 0x10);
      uVar1 = *(undefined8 *)(lVar7 + 0x30);
      uVar2 = *(undefined8 *)(lVar7 + 0x38);
      uVar13 = *(undefined8 *)(lVar7 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar9 = FUN_06b5cee4(uVar12,uVar1,param_2 & 1,uVar3,uVar10,uVar2,uVar13);
    } while (lVar9 != 0);
    FUN_06b5ae9c();
    uVar11 = 8;
LAB_06b5bc3c:
    FUN_052d44b0(&local_a0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRTriangleMesh>,_RoomMeshAnchor_<Initialize>d__14>__
                );
  } while ((uVar11 | 2) == 2);
  FUN_052d44b0(&local_80,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRSpatialAnchor>,_AutomaticColocationLauncher_<CreateNewColocatedSpace>d__23>__
              );
  return uVar11 != 8;
}


