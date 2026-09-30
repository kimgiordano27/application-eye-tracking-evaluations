/*
FUNCTION_NAME: FUN_01bdb298
ENTRY_POINT: 01bdb298
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


undefined8 FUN_01bdb298(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
                    /* try { // try from 01bdb2ac to 01cdb2bf has its CatchHandler @ 01bdb2d4 */
  if ((DAT_03fed28c & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__);
                    /* try { // try from 01bdb2c0 to 01cdb2e7 has its CatchHandler @ 01bdb238 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed28c = 1;
  }
                    /* catch() { ... } // from try @ 01bdb2ac with catch @ 01bdb2d4 */
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_01bdb3cc;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_01f25510(*(undefined8 *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__
                        );
    if (lVar4 == 0) goto LAB_01bdb3cc;
    *(undefined8 *)(lVar4 + 0x30) = uVar1;
    thunk_FUN_01b4f09c((undefined8 *)(lVar4 + 0x30),uVar1);
    uVar2 = FUN_0391f968(uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  puVar3 = (undefined8 *)(lVar4 + 0x38);
  uVar1 = *puVar3;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar1,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x30) != 0) {
    *puVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x30);
    thunk_FUN_01b4f09c(puVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_01bdb3cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


