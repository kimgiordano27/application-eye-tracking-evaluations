/*
FUNCTION_NAME: FUN_01c922e8
ENTRY_POINT: 01c922e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_01c922e8(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 01c922f0 to 01d9240f has its CatchHandler @ 01c922f0
                       catch() { ... } // from try @ 01c922f0 with catch @ 01c922f0
                       catch() { ... } // from try @ 01c92498 with catch @ 01c922f0 */
  if ((DAT_03fed861 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed861 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((char)param_1[0xc] == '\0') {
    return;
  }
  if ((((*(char *)((long)param_1 + 0xb4) == '\0') && (*(char *)((long)param_1 + 0xb5) == '\0')) &&
      (*(char *)((long)param_1 + 0xb6) == '\0')) &&
     ((*(char *)((long)param_1 + 0xb7) == '\0' && ((char)param_1[0x17] == '\0')))) {
    lVar4 = param_1[0xd];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1[0x12];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = FUN_01c9240c(param_1);
        param_1[0x15] = lVar4;
        thunk_FUN_01b4f09c(param_1 + 0x15,lVar4);
        if ((param_1[0xd] != 0) && (plVar3 = (long *)param_1[0x12], plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01c923dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1a8))
                    (plVar3,*(undefined8 *)(param_1[0xd] + 0x20),1,*(undefined8 *)(*plVar3 + 0x1b0))
          ;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01c923f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
  return;
}


