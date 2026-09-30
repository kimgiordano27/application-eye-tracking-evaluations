/*
FUNCTION_NAME: FUN_01c6399c
ENTRY_POINT: 01c6399c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_01c6399c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 01c639b8 to 01d639ef has its CatchHandler @ 01c63a68 */
  if ((DAT_03fed6c3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_73F5D95C401726B2C92EC96A696BA15F0E5A5C6DD9AC6BEB3736A81772A11531
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6c3 = 1;
  }
  if (param_2 != 0) {
                    /* try { // try from 01c639f0 to 01d63ab7 has its CatchHandler @ 01c63958 */
    uVar2 = FUN_01e8a9f8(param_2,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_73F5D95C401726B2C92EC96A696BA15F0E5A5C6DD9AC6BEB3736A81772A11531
                        );
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar2,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar3 = FUN_03922f24(uVar5,uVar2,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x78) = 0;
              *(undefined1 *)(lVar4 + 0x73) = 0;
              thunk_FUN_01b4f09c((undefined8 *)(lVar4 + 0x78),0);
              return;
            }
          }
          goto LAB_01c63ab8;
        }
      }
      return;
    }
  }
LAB_01c63ab8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


