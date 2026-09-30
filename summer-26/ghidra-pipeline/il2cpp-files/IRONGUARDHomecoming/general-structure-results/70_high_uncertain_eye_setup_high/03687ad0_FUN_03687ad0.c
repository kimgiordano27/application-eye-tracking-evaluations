/*
FUNCTION_NAME: FUN_03687ad0
ENTRY_POINT: 03687ad0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03687ad0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_04833e8b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRManager_<>c_<_cctor>b__470_0__);
    thunk_FUN_01efb3a4(Method_OVRManager_<>c_<FindMainCamera>b__434_0__);
    thunk_FUN_01efb3a4(Method_OVRManager_<>c_<InitOVRManager>b__418_0__);
    thunk_FUN_01efb3a4(Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04833e8b = 1;
  }
  puVar3 = Method_OVRManager_<>c_<FindMainCamera>b__434_0__;
  puVar2 = Method_OVRManager_<>c_<_cctor>b__470_0__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_030f35d0(&local_48,*(long *)(param_1 + 0x38),
                 *(undefined8 *)Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__);
    while( true ) {
      do {
        uVar5 = FUN_02c7ab6c(&local_48,*(undefined8 *)puVar3);
        lVar4 = local_38;
        if ((uVar5 & 1) == 0) {
          FUN_02c7ab68(&local_48,*(undefined8 *)puVar2);
          *(undefined4 *)(param_1 + 0x40) = 0;
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_04073094(lVar4,0,0);
      } while ((uVar5 & 1) == 0);
      if (lVar4 == 0) break;
      FUN_0404c858(lVar4,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


