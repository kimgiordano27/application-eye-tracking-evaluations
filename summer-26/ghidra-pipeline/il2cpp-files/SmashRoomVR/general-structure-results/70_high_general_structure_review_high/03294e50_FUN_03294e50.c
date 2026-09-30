/*
FUNCTION_NAME: FUN_03294e50
ENTRY_POINT: 03294e50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03294e50(long param_1,undefined4 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 local_150 [2];
  undefined8 uStack_13c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_110;
  ulong local_108;
  undefined8 local_100 [2];
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_5c;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff5771 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5771 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  FUN_03209ce4(&local_e0,param_3,0);
  local_78 = (ulong)param_4 & 1;
  local_70 = local_e0;
  uStack_5c = uStack_cc;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  uVar4 = FUN_0391f968(param_5,0,0);
  if ((uVar4 & 1) != 0) {
    System_Linq_Expressions_Error__CoercionOperatorNotDefined(&local_e0,param_5,0,0);
    param_3 = &local_c0;
    uStack_b8 = uStack_d8;
    local_c0 = local_e0;
    uStack_ac = (undefined4)uStack_cc;
    local_a8 = (undefined4)((ulong)uStack_cc >> 0x20);
    uStack_b4 = uStack_d4;
    local_b0 = uStack_d0;
  }
  FUN_03209ce4(local_100,param_3,0);
  local_108 = local_78;
  local_a0 = local_100[0];
  local_e0 = local_100[0];
  uStack_cc = uStack_ec;
  local_100[0] = local_70;
  uStack_8c = (undefined4)uStack_ec;
  local_88 = (undefined4)((ulong)uStack_ec >> 0x20);
  uStack_ec = uStack_5c;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  local_124 = local_100[0];
  uStack_110 = uStack_ec;
  local_128 = param_2;
  iVar3 = FUN_0325d70c(&local_128,&local_a0,0);
  if (iVar3 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(param_5,0,0);
    if ((uVar4 & 1) != 0) {
      uStack_13c = CONCAT44(local_88,uStack_8c);
      local_100[0] = local_a0;
      uStack_ec = uStack_13c;
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      local_150[0] = local_a0;
      FUN_03296af8(*(long *)(param_1 + 0x110),param_5,local_150);
    }
  }
  return;
}


