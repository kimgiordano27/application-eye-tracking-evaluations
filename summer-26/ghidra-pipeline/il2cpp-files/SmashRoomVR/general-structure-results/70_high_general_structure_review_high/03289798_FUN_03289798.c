/*
FUNCTION_NAME: FUN_03289798
ENTRY_POINT: 03289798
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_03289798(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  long local_50;
  undefined8 local_48;
  
  puVar1 = Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixName>b__34_1__;
  local_48 = param_1;
  if ((DAT_03ff5707 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d859b8);
    thunk_FUN_01ad9084(Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixName>b__34_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5707 = 1;
  }
  puVar2 = PTR_DAT_03d859b8;
  lVar4 = *(long *)puVar1;
  local_50 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = FUN_01f24450(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),param_1,&local_50,
                       *(undefined8 *)puVar2);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d84140 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar6 = (long *)FUN_0328b760(0);
    uVar3 = FUN_0305d280(&local_48,0);
    if (plVar6 == (long *)0x0) {
LAB_032899a0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar7 = 2;
    if ((param_2 & 1) == 0) {
      uVar7 = 3;
    }
    (**(code **)(*plVar6 + 0x1a8))
              (plVar6,0x9b83ae1,uVar7,uVar3,0xffffffffffffffff,*(undefined8 *)(*plVar6 + 0x1b0));
    lVar4 = local_50;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((param_2 & 1) == 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(lVar4,0);
      lVar4 = local_50;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(lVar4,0);
      }
    }
    else {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(lVar4,0);
      lVar4 = local_50;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03923030(lVar4,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)
                        Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_032615c0(param_3,0);
        }
      }
      else {
        if (local_50 == 0) goto LAB_032899a0;
        FUN_03285eac(local_50,param_3,param_4,param_5);
      }
    }
  }
  return;
}


