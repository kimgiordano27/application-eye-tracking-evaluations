/*
FUNCTION_NAME: FUN_01c011d4
ENTRY_POINT: 01c011d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c011d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
                    /* try { // try from 01c011e8 to 01d011ef has its CatchHandler @ 01c01214 */
  if ((DAT_03fed37e & 1) == 0) {
                    /* try { // try from 01c011f0 to 01d01227 has its CatchHandler @ 01c011c4 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed37e = 1;
  }
                    /* catch() { ... } // from try @ 01c011e8 with catch @ 01c01214 */
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_01c012b8;
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(uVar1,0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar2 + 0x20);
      uVar1 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar3,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_01c012b8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return 0;
}


