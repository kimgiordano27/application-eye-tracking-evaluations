/*
FUNCTION_NAME: FUN_034f11b0
ENTRY_POINT: 034f11b0
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


void FUN_034f11b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 034f1198 with catch @ 034f11b0 */
                    /* catch() { ... } // from try @ 034f0ca4 with catch @ 034f11b4 */
                    /* catch() { ... } // from try @ 034f0c78 with catch @ 034f11b8 */
                    /* catch() { ... } // from try @ 034f0c5c with catch @ 034f11bc */
                    /* catch() { ... } // from try @ 034f0c2c with catch @ 034f11c0 */
                    /* catch() { ... } // from try @ 034f0bf8 with catch @ 034f11c4 */
                    /* catch() { ... } // from try @ 034f0d10 with catch @ 034f11c8 */
  if ((DAT_03ff6cee & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d95390);
    thunk_FUN_01ad9084(PTR_DAT_03d95398);
    thunk_FUN_01ad9084(PTR_DAT_03d953a0);
    DAT_03ff6cee = 1;
  }
  if (*(char *)(param_1 + 0x9a) == '\0') {
    lVar2 = FUN_034523e4(param_1 + 0x60,0);
    puVar1 = StringLiteral_140;
    if (lVar2 != 0) {
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95398,0);
      FUN_03440dd8(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95390,0);
      FUN_03440d28(lVar2,uVar3,0);
      *(undefined1 *)(param_1 + 0x9a) = 1;
      uVar3 = FUN_03452538(param_1 + 0x60,0);
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
          uVar3 = FUN_02edd6e8(uVar3,*(undefined8 *)PTR_DAT_03d953a0,0);
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


