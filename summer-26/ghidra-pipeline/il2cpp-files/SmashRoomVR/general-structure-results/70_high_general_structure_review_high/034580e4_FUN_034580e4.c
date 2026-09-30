/*
FUNCTION_NAME: FUN_034580e4
ENTRY_POINT: 034580e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_034580e4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  long local_50 [2];
  
  if ((DAT_03ff67d0 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d92178);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff67d0 = 1;
  }
  local_60 = 0;
  lStack_58 = 0;
  local_50[0] = 0;
  uVar3 = FUN_02ee6cf0(param_2,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar3 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar5 = thunk_FUN_01afaadc();
    uVar6 = thunk_FUN_01ad9084(PTR_DAT_03d92180);
    FUN_02fd1220(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01ad9084(PTR_DAT_03d92188);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar5,uVar6);
  }
  lVar7 = *param_1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(lVar7,0,0);
  puVar2 = PTR_DAT_03d92178;
  if ((uVar3 & 1) == 0) {
    plVar4 = param_1 + 2;
  }
  else {
    if ((*param_1 == 0) || (lVar7 = *(long *)(*param_1 + 0x20), lVar7 == 0)) goto LAB_034582b4;
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 1)) goto Unity_Mathematics_math__mul;
    plVar4 = (long *)(lVar7 + (long)(int)*(uint *)(param_1 + 1) * 0x18 + 0x20);
  }
  local_50[0] = plVar4[2];
  lStack_58 = plVar4[1];
  local_60 = *plVar4;
  local_68 = 0;
  local_70 = param_2;
  thunk_FUN_01b4f09c(&local_70,param_2);
  local_68 = CONCAT44(local_68._4_4_,param_3);
  FUN_01e3cf90(local_50,local_70,local_68,*(undefined8 *)puVar2);
  lVar7 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = param_1 + 2;
    param_1[4] = local_50[0];
    param_1[3] = lStack_58;
    param_1[2] = local_60;
LAB_03458294:
    thunk_FUN_01b4f09c(plVar4,0);
    return;
  }
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x20);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 1)) {
Unity_Mathematics_math__mul:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar7 = lVar7 + (long)(int)*(uint *)(param_1 + 1) * 0x18;
      plVar4 = (long *)(lVar7 + 0x20);
      *(long *)(lVar7 + 0x30) = local_50[0];
      *(long *)(lVar7 + 0x28) = lStack_58;
      *(long *)(lVar7 + 0x20) = local_60;
      goto LAB_03458294;
    }
  }
LAB_034582b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


