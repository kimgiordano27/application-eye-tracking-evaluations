/*
FUNCTION_NAME: FUN_034f0ca8
ENTRY_POINT: 034f0ca8
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


void FUN_034f0ca8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_03ff6cf0 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d95378);
    thunk_FUN_01ad9084(PTR_DAT_03d95380);
    DAT_03ff6cf0 = 1;
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    lVar2 = FUN_034523e4(param_1 + 0x48,0);
    if (lVar2 != 0) {
      uVar3 = FUN_03452538(param_1 + 0x48,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        FUN_034415d8(lVar2,0);
      }
      puVar1 = StringLiteral_140;
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95380,0);
      FUN_03440e30(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95378,0);
      FUN_03440d80(lVar2,uVar3,0);
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
  }
  return;
}


