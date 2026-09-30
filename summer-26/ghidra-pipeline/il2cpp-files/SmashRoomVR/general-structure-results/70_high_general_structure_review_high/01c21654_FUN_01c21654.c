/*
FUNCTION_NAME: FUN_01c21654
ENTRY_POINT: 01c21654
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01c21654(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
                    /* catch() { ... } // from try @ 01c21740 with catch @ 01c2165c */
  if ((DAT_03fed487 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed487 = 1;
  }
  puVar2 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  fVar7 = (float)FUN_032a7cf8(param_2,1,0);
  fVar7 = ABS(1.0 - fVar7);
  iVar1 = *(int *)(param_1 + 0x10);
  fVar8 = **(float **)(*(long *)puVar2 + 0xb8);
  if (iVar1 == 1) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = 2;
    if (fVar8 <= fVar7) {
      uVar4 = 3;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar5 = param_3;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
LAB_01c2176c:
    uVar3 = FUN_0391f968(uVar6,uVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iVar1 == 2) {
      if (fVar8 <= fVar7) {
        *(undefined4 *)(param_1 + 0x10) = 3;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x18);
LAB_01c21710:
      uVar6 = param_3;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      goto LAB_01c2176c;
    }
    if (iVar1 != 3) {
      if (fVar8 <= fVar7) {
        return;
      }
      *(undefined8 *)(param_1 + 0x18) = param_3;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_01c217c0;
    }
    if (fVar7 < fVar8) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_01c21710;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  param_3 = 0;
LAB_01c217c0:
  thunk_FUN_01b4f09c(param_1 + 0x18,param_3);
  return;
}


