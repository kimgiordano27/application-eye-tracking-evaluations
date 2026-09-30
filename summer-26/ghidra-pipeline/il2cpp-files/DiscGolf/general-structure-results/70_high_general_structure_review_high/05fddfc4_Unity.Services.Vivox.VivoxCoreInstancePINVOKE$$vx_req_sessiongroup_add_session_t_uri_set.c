/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_uri_set
ENTRY_POINT: 05fddfc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_uri_set
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xc0));
  FUN_02d965b8(PTR_DAT_069fb9d8);
  FUN_02d965b8(Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_OpenFileAsync__);
  FUN_02d965b8(Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__);
  FUN_02d965b8(Method_System_Runtime_Remoting_Messaging_AsyncResult_AsyncProcessMessage__);
  FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<bool>__);
  FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<int>__);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
              );
  *(undefined1 *)(unaff_x19 + 0x88f) = 1;
  lVar2 = FUN_02d966a4(*unaff_x20,6);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) =
         *(undefined8 *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_OpenFileAsync__;
    LeanTween__value((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) =
           *(undefined8 *)Method_System_Runtime_Remoting_Messaging_AsyncResult_AsyncProcessMessage__
      ;
      LeanTween__value((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<bool>__;
        LeanTween__value((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<int>__;
          LeanTween__value((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__;
            LeanTween__value((undefined8 *)(lVar2 + 0x40));
            puVar1 = Method_System_Reflection_Assembly_GetManifestResourceStream__;
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
              ;
              LeanTween__value();
              **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
              LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


