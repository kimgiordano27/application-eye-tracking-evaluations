/*
FUNCTION_NAME: FUN_03823444
ENTRY_POINT: 03823444
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


undefined4 FUN_03823444(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_03ff8447 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da6210);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8447 = 1;
  }
  if (*(char *)(param_1 + 0x140) == '\0') {
                    /* catch() { ... } // from try @ 0382341c with catch @ 038234a8
                       catch() { ... } // from try @ 03823498 with catch @ 038234a8 */
    if (*(char *)(param_1 + 0x141) == '\0') {
                    /* try { // try from 038234ac to 039234af has its CatchHandler @ 038234b8 */
                    /* try { // try from 038234b0 to 039234bb has its CatchHandler @ 03822fa0 */
                    /* catch() { ... } // from try @ 038231fc with catch @ 038234b8
                       catch() { ... } // from try @ 038232c0 with catch @ 038234b8
                       catch() { ... } // from try @ 038233f4 with catch @ 038234b8
                       catch() { ... } // from try @ 038234ac with catch @ 038234b8 */
                    /* try { // try from 038234bc to 039235a3 has its CatchHandler @ 038234bc
                       catch() { ... } // from try @ 038234bc with catch @ 038234bc
                       catch() { ... } // from try @ 03823648 with catch @ 038234bc
                       catch() { ... } // from try @ 03823694 with catch @ 038234bc
                       catch() { ... } // from try @ 038236e8 with catch @ 038234bc */
      lVar2 = FUN_01e8b0b4(param_1,*(undefined8 *)PTR_DAT_03da6210);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_0391f968(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar2 == 0) {
LAB_0382358c:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar2 = *(long *)(lVar2 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar2,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar2 != 0) {
            uVar4 = FUN_0391fab4(lVar2,0);
            *(undefined8 *)(param_1 + 0x138) = uVar4;
            thunk_FUN_01b4f09c(param_1 + 0x138);
            *(undefined1 *)(param_1 + 0x140) = 1;
            *param_2 = *(undefined8 *)(param_1 + 0x138);
            thunk_FUN_01b4f09c(param_2);
            return 1;
          }
          goto LAB_0382358c;
        }
      }
      *(undefined1 *)(param_1 + 0x141) = 1;
    }
    *param_2 = 0;
    thunk_FUN_01b4f09c(param_2,0);
    uVar5 = 0;
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x138);
                    /* try { // try from 03823498 to 039234a7 has its CatchHandler @ 038234a8 */
    thunk_FUN_01b4f09c(param_2);
    uVar5 = 1;
  }
  return uVar5;
}


