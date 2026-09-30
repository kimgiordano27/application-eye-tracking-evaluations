/*
FUNCTION_NAME: FUN_03b27d58
ENTRY_POINT: 03b27d58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_8
*/


void FUN_03b27d58(long param_1,byte param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  ulong uStack_48;
  
  puVar2 = StringLiteral_2346;
  if ((DAT_03ffdb83 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2346);
    DAT_03ffdb83 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ffd750 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2346);
    DAT_03ffd750 = '\x01';
  }
  puVar1 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  FUN_03aebbb8(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38),0);
  uStack_48 = 0;
  local_50 = param_1;
  thunk_FUN_01b4f09c(&local_50,param_1);
  lVar3 = local_50;
  uStack_48 = CONCAT71(uStack_48._1_7_,param_2) & 0xffffffffffffff01;
  uStack_48 = CONCAT62(uStack_48._2_6_,CONCAT11(param_3,(undefined1)uStack_48)) & 0xffffffffffff01ff
  ;
  uVar5 = uStack_48;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar4 + 0xb8);
  *(ulong *)(lVar6 + 0x18) = uVar5;
  *(long *)(lVar6 + 0x10) = lVar3;
  thunk_FUN_01b4f09c(*(long *)(lVar4 + 0xb8) + 0x10,0);
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(param_1,0,0);
    lVar3 = param_1;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_03b26f4c();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = FUN_0391b7d0(lVar3,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03aeb99c(param_1,0);
    }
  }
  return;
}


