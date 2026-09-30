/*
FUNCTION_NAME: FUN_07eaebc0
ENTRY_POINT: 07eaebc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_12;functionality_data_collection_or_telemetry_hits_12
*/


long FUN_07eaebc0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long local_38;
  
  if ((DAT_0899ac3f & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_SessionManager_<QuickJoinAsync>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_SessionManager_<ReconnectAsync>d__20>__
                );
    FUN_03a8a718(PTR_DAT_08497180);
    FUN_03a8a718(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_0899ac3f = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  local_38 = 0;
  if (param_1 != 0) {
    uVar3 = FUN_07ca1fcc(param_1,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      uVar7 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
      uVar3 = FUN_0608e31c(lVar6,uVar7,&local_38,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_SessionManager_<ReconnectAsync>d__20>__
                          );
      if ((uVar3 & 1) != 0) {
        return local_38;
      }
      lVar6 = FUN_07e2ddc0(param_1,0);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= param_2) {
LAB_07eaed78:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)param_2 * 8 + 0x20);
        if (((lVar6 != 0) && (lVar4 = FUN_07e2d9a0(lVar6,0), lVar4 != 0)) &&
           (local_38 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08497180,*(undefined4 *)(lVar4 + 0x18)),
           local_38 != 0)) {
          uVar3 = 0;
          do {
            lVar4 = local_38;
            lVar5 = *(long *)puVar1;
            if ((long)*(int *)(local_38 + 0x18) <= (long)uVar3) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar5 = *(long *)puVar1;
              }
              lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar6 != 0) {
                FUN_0608c7d4(lVar6,uVar7,local_38,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_SessionManager_<QuickJoinAsync>d__19>__
                            );
                return local_38;
              }
              break;
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar2 = FUN_07eb49f8(lVar6,uVar3 & 0xffffffff);
            if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_07eaed78;
            lVar5 = uVar3 * 4;
            uVar3 = uVar3 + 1;
            *(undefined4 *)(lVar4 + lVar5 + 0x20) = uVar2;
          } while (local_38 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


