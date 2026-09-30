/*
FUNCTION_NAME: FUN_05fe967c
ENTRY_POINT: 05fe967c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05fe967c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_06dc48fb & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d728);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<CopyToAsyncCore>d__71>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushWriteAsync>d__42>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ChannelSession_<ConnectAsync>d__45>__
                );
    DAT_06dc48fb = 1;
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<CopyToAsyncCore>d__71>__
  ;
  puVar2 = PTR_DAT_06a0d728;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_04010c90(&local_48,*(long *)(param_1 + 0x30),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ChannelSession_<ConnectAsync>d__45>__
                );
    while (uVar5 = FUN_05156804(&local_48,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar6 = FUN_0634bbcc(local_38,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05f8a28c(uVar6,0);
    }
    FUN_05156800(&local_48,*(undefined8 *)puVar3);
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


