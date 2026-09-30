/*
FUNCTION_NAME: FUN_038a9ff4
ENTRY_POINT: 038a9ff4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_038a9ff4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((DAT_03ff8b6a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da9100);
    thunk_FUN_01ad9084(PTR_DAT_03da93b0);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_4834);
    DAT_03ff8b6a = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar2 = StringLiteral_4834;
    lVar4 = *(long *)(param_1 + 0x28);
    if (*(int *)(*(long *)StringLiteral_4834 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff027b == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4834);
      DAT_03ff027b = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar3,0,0);
    puVar2 = PTR_DAT_03da9100;
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_03da9100;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar2;
      }
      *(int *)(*(long *)(lVar5 + 0xb8) + 8) = *(int *)(*(long *)(lVar5 + 0xb8) + 8) + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = FUN_038a9dc4(lVar4,1,0);
      uVar3 = FUN_03920cb0(lVar4,uVar3,0);
      *(undefined8 *)(lVar4 + 0x48) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(lVar4 + 0x48));
    }
    FUN_038aa314(param_1);
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      lVar4 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da93b0);
      FUN_0391cc3c(lVar4,0);
      fVar7 = (float)FUN_03924e44(0);
      *(float *)(lVar4 + 0x10) = fVar7 + 5.0;
      *(long *)(param_1 + 0x18) = lVar4;
      thunk_FUN_01b4f09c((long *)(param_1 + 0x18),lVar4);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar8,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}


