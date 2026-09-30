/*
FUNCTION_NAME: FUN_03709a68
ENTRY_POINT: 03709a68
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


void FUN_03709a68(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((DAT_03ff770b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_673);
    thunk_FUN_01ad9084(PTR_DAT_03d9dfb0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff770b = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
      uVar2 = FUN_03922ce0(param_2,0);
      lVar3 = FUN_03709190();
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
        FUN_02b5ae30(*(long *)(lVar3 + 0x20),param_2,*(undefined8 *)PTR_DAT_03d9dfb0);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_028f8108(*(long *)(param_1 + 0x18),uVar2,*(undefined8 *)StringLiteral_673);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


