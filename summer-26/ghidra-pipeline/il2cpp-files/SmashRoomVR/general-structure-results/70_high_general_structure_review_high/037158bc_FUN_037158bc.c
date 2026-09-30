/*
FUNCTION_NAME: FUN_037158bc
ENTRY_POINT: 037158bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


undefined8 FUN_037158bc(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_03ff77b9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3656);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff77b9 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_3656) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0371594c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)StringLiteral_3656,0);
LAB_0371594c:
    lVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 != 0) {
      lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar4 + 0x130)) {
        param_1 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
               lVar4) {
        param_1 = (long *)0x0;
      }
      uVar3 = FUN_0391f968(param_1,0,0);
      return uVar3;
    }
  }
  return 0;
}


