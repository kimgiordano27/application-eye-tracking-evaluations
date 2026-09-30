/*
FUNCTION_NAME: FUN_032a7efc
ENTRY_POINT: 032a7efc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_032a7efc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff5840 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d867d8);
    thunk_FUN_01ad9084(PTR_DAT_03d867e0);
    thunk_FUN_01ad9084(PTR_DAT_03d867e8);
    thunk_FUN_01ad9084(PTR_DAT_03d867f0);
    thunk_FUN_01ad9084(PTR_DAT_03d867f8);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86800);
    thunk_FUN_01ad9084(PTR_DAT_03d86808);
    thunk_FUN_01ad9084(PTR_DAT_03d86440);
    DAT_03ff5840 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_03b1bde8(*(long *)(param_1 + 0x20),0,0);
  }
  FUN_03b4bd64(*(undefined8 *)
                Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
              );
  return;
}


