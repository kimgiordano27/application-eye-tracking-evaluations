/*
FUNCTION_NAME: FUN_01c2b614
ENTRY_POINT: 01c2b614
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


undefined8 FUN_01c2b614(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_03fed4dd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
                      );
    DAT_03fed4dd = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = FUN_033b8230(0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  lVar2 = FUN_01f255f8(*(undefined8 *)
                        Field_<PrivateImplementationDetails>_407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
                      );
  if (lVar2 != 0) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (lVar4 == 0) goto LAB_01c2b758;
        FUN_01c2b398(lVar4,*(undefined8 *)(lVar2 + 0x20 + uVar5 * 8));
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (lVar1 != 0) {
      FUN_033b85bc(lVar1,0);
      return 0;
    }
  }
LAB_01c2b758:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


