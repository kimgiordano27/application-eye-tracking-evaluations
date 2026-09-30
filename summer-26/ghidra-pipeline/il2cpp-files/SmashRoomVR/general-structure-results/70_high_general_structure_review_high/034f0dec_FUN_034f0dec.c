/*
FUNCTION_NAME: FUN_034f0dec
ENTRY_POINT: 034f0dec
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


void FUN_034f0dec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_03ff6ced & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d95378);
    thunk_FUN_01ad9084(PTR_DAT_03d95380);
    thunk_FUN_01ad9084(PTR_DAT_03d95388);
                    /* try { // try from 034f0e48 to 035f0e53 has its CatchHandler @ 034f11ec */
    DAT_03ff6ced = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    lVar2 = FUN_034523e4(param_1 + 0x48,0);
    puVar1 = StringLiteral_140;
                    /* try { // try from 034f0e74 to 035f0e7f has its CatchHandler @ 034f11fc */
    if (lVar2 != 0) {
                    /* try { // try from 034f0e84 to 035f0e93 has its CatchHandler @ 034f11f0 */
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95380,0);
      FUN_03440dd8(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95378,0);
      FUN_03440d28(lVar2,uVar3,0);
      *(undefined1 *)(param_1 + 0x98) = 1;
      uVar3 = FUN_03452538(param_1 + 0x48,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_0391c2b8(param_1,0);
        if (lVar5 != 0) {
          uVar3 = FUN_039230bc(lVar5,0);
          uVar3 = FUN_02edd6e8(uVar3,*(undefined8 *)PTR_DAT_03d95388,0);
          Unity_Mathematics_math__mul(lVar2,uVar3,0);
          FUN_03441550(lVar2,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}


