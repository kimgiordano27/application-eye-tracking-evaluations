/*
FUNCTION_NAME: FUN_01c842ec
ENTRY_POINT: 01c842ec
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


void FUN_01c842ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
                    /* try { // try from 01c842fc to 01d84303 has its CatchHandler @ 01c8435c */
  if ((DAT_03fed7ea & 1) == 0) {
                    /* try { // try from 01c84304 to 01d84373 has its CatchHandler @ 01c84248 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7ea = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x50) + 0x20) != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = FUN_03923030(uVar3,0);
      if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 01c842fc with catch @ 01c8435c */
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar2 == 0) goto LAB_01c843cc;
        uVar4 = *(undefined4 *)(param_1 + 0x80);
        goto LAB_01c843b0;
      }
      if (*(char *)(param_1 + 0x40) == '\0') {
        return;
      }
    }
                    /* try { // try from 01c84374 to 01d84427 has its CatchHandler @ 01c84374
                       catch() { ... } // from try @ 01c84374 with catch @ 01c84374
                       catch() { ... } // from try @ 01c84430 with catch @ 01c84374 */
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_03923030(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x78);
    uVar4 = DAT_00b55080;
    if (lVar2 != 0) {
LAB_01c843b0:
      FUN_0395a20c(uVar4,lVar2,0);
      return;
    }
  }
LAB_01c843cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


