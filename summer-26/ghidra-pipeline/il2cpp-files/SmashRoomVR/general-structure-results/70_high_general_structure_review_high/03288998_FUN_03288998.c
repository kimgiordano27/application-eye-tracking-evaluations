/*
FUNCTION_NAME: FUN_03288998
ENTRY_POINT: 03288998
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_03288998(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_28;
  
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03ff5702 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5702 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03255c6c(0);
  uVar3 = FUN_03261458(param_1,uVar2,&local_50,&local_28,0);
  uVar4 = local_28;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0324d7d0(uVar4,0);
    uVar4 = local_28;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference__BoxIfIndexMatches
                        (uVar4,0);
      if ((uVar3 & 1) != 0) {
        uStack_9c = CONCAT44(local_38,uStack_3c);
        uStack_a8 = uStack_48;
        local_b0 = local_50;
        uStack_a4 = uStack_44;
        uStack_a0 = local_40;
        FUN_03206228(&uStack_90,&local_b0,0);
        uStack_5c = uStack_7c;
        uStack_70 = uStack_90;
        param_2[1] = CONCAT44(local_84,uStack_88);
        *param_2 = uStack_90;
        *(undefined8 *)((long)param_2 + 0x14) = uStack_7c;
        *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_80,local_84);
        uVar4 = FUN_038f1768(0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar3 = FUN_03923030(uVar4,0);
        if ((uVar3 & 1) != 0) {
          uStack_bc = *(undefined8 *)((long)param_2 + 0x14);
          uStack_d0 = *param_2;
          uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
          uStack_c8 = (undefined4)param_2[1];
          local_c4 = (undefined4)((ulong)param_2[1] >> 0x20);
          FUN_0320607c(&uStack_90,&uStack_d0,uVar4,0);
          param_2[1] = CONCAT44(local_84,uStack_88);
          *param_2 = uStack_90;
          *(undefined8 *)((long)param_2 + 0x14) = uStack_7c;
          *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_80,local_84);
        }
        return 1;
      }
    }
  }
  FUN_0320c0b4(&uStack_90,0);
  param_2[1] = CONCAT44(local_84,uStack_88);
  *param_2 = uStack_90;
  *(undefined8 *)((long)param_2 + 0x14) = uStack_7c;
  *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_80,local_84);
  return 0;
}


