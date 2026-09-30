/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 034580f4
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


void Unity_Mathematics_math__mul(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  
  if ((DAT_03ff67d0 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d92178);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff67d0 = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
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
  in_stack_00000080 = plVar4[2];
  in_stack_00000078 = plVar4[1];
  in_stack_00000070 = *plVar4;
  in_stack_00000068 = 0;
  in_stack_00000060 = param_2;
  thunk_FUN_01b4f09c(&stack0x00000060,param_2);
  in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,param_3);
  FUN_01e3cf90(&stack0x00000080,in_stack_00000060,in_stack_00000068,*(undefined8 *)puVar2);
  lVar7 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = param_1 + 2;
    param_1[4] = in_stack_00000080;
    param_1[3] = in_stack_00000078;
    param_1[2] = in_stack_00000070;
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
      *(long *)(lVar7 + 0x30) = in_stack_00000080;
      *(long *)(lVar7 + 0x28) = in_stack_00000078;
      *(long *)(lVar7 + 0x20) = in_stack_00000070;
      goto LAB_03458294;
    }
  }
LAB_034582b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


