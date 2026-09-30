/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_account_handle_set
ENTRY_POINT: 05fde294
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_account_handle_set
               (undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = *param_1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x38));
  if (4 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x40) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
    ;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x40));
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<ValueTuple<WebHeaderCollection,_byte[],_int>>,_WebConnectionTunnel_<Initialize>d__42>__
      ;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x48));
      puVar1 = Method_System_Reflection_Assembly_GetModule__;
      if (6 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x50) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
        ;
        LeanTween__value();
        **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
        LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


