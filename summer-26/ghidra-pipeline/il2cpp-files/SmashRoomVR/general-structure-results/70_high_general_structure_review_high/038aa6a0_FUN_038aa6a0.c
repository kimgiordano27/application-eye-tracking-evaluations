/*
FUNCTION_NAME: FUN_038aa6a0
ENTRY_POINT: 038aa6a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_038aa6a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03ff8b6c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da9100);
    thunk_FUN_01ad9084(StringLiteral_4834);
    thunk_FUN_01ad9084(PTR_DAT_03da93c8);
    thunk_FUN_01ad9084(PTR_DAT_03da93d0);
    DAT_03ff8b6c = 1;
  }
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(char *)(param_1 + 0x20) != '\0') {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03da93d0,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar1 = StringLiteral_4834;
    if (*(int *)(*(long *)StringLiteral_4834 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff027b == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4834);
      DAT_03ff027b = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0389aee4(lVar6,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    uVar4 = 2;
    goto LAB_038aaa40;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(lVar6 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar1 = StringLiteral_4834;
    if (*(int *)(*(long *)StringLiteral_4834 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff027b == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4834);
      DAT_03ff027b = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0389ac80(lVar2,0);
    if (DAT_03ff027b == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4834);
      DAT_03ff027b = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar5,0,0);
    puVar1 = PTR_DAT_03da9100;
    if ((uVar3 & 1) == 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      lVar2 = *(long *)PTR_DAT_03da9100;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar2 = *(long *)puVar1;
      }
      *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 8) = 0;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar2 = *(long *)(lVar6 + 0x40);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    }
    goto LAB_038aaab0;
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && (uVar3 = FUN_038aabb0(), (uVar3 & 1) != 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)PTR_DAT_03da93c8,0);
    puVar1 = StringLiteral_4834;
    if (*(int *)(*(long *)StringLiteral_4834 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff027b == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4834);
      DAT_03ff027b = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = FUN_0389b3c8(lVar6,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_01b4f09c();
    uVar4 = 3;
LAB_038aaa40:
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    return 1;
  }
  uVar3 = FUN_038aabf8();
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    }
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038ee994(0);
  }
LAB_038aaab0:
  FUN_038aac40(param_1);
  return 0;
}


