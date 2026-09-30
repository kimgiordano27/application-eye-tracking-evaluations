/*
FUNCTION_NAME: FUN_01c6c658
ENTRY_POINT: 01c6c658
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c6c658(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  if ((DAT_03fed70b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_234);
                    /* try { // try from 01c6c688 to 01d6c68b has its CatchHandler @ 01c6c800 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed70b = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_01c6c800;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar7 == 0) {
LAB_01c6c800:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(char *)(lVar7 + 0x24) != '\0') {
      plVar5 = (long *)(lVar7 + 0x30);
      lVar6 = *plVar5;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 01c6c70c to 01d6c74b has its CatchHandler @ 01c6c804 */
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar6 = FUN_01f25510(*(undefined8 *)StringLiteral_234);
        *plVar5 = lVar6;
        thunk_FUN_01b4f09c(plVar5,lVar6);
        uVar3 = FUN_0391f968(*plVar5,0,0);
        if ((uVar3 & 1) != 0) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_01c6c800;
          (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        }
      }
    }
    fVar8 = *(float *)(lVar7 + 0x28);
    if (0.0 < fVar8) {
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(fVar8,uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  uVar4 = *(undefined8 *)(lVar7 + 0x38);
  uVar1 = *(undefined4 *)(lVar7 + 0x20);
  if (*(int *)(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__ + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0392fc34(uVar4,uVar1,0);
  return 0;
}


