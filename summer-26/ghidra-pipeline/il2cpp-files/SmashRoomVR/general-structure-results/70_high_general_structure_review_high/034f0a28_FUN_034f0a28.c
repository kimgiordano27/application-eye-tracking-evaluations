/*
FUNCTION_NAME: FUN_034f0a28
ENTRY_POINT: 034f0a28
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


void FUN_034f0a28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 034f0a30 to 035f0a37 has its CatchHandler @ 034f0aec */
                    /* try { // try from 034f0a3c to 035f0a3f has its CatchHandler @ 034f0ad4 */
  if ((DAT_03ff6cec & 1) == 0) {
                    /* try { // try from 034f0a44 to 035f0a47 has its CatchHandler @ 034f0abc */
                    /* try { // try from 034f0a4c to 035f0a4f has its CatchHandler @ 034f0ab4 */
    thunk_FUN_01ad9084(StringLiteral_140);
                    /* try { // try from 034f0a54 to 035f0a57 has its CatchHandler @ 034f0aac */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 034f0a5c to 035f0a67 has its CatchHandler @ 034f0a8c */
    thunk_FUN_01ad9084(PTR_DAT_03d95360);
                    /* try { // try from 034f0a6c to 035f0a73 has its CatchHandler @ 034f0aa0 */
    thunk_FUN_01ad9084(PTR_DAT_03d95368);
                    /* try { // try from 034f0a74 to 035f0b1b has its CatchHandler @ 034f0348 */
                    /* catch() { ... } // from try @ 034f08d0 with catch @ 034f0a78 */
                    /* catch() { ... } // from try @ 034f08a0 with catch @ 034f0a7c */
    thunk_FUN_01ad9084(PTR_DAT_03d95370);
                    /* catch() { ... } // from try @ 034f08d4 with catch @ 034f0a80 */
                    /* catch() { ... } // from try @ 034f068c with catch @ 034f0a84 */
    DAT_03ff6cec = 1;
  }
                    /* catch() { ... } // from try @ 034f06f4 with catch @ 034f0a88 */
                    /* catch() { ... } // from try @ 034f06b0 with catch @ 034f0a8c
                       catch() { ... } // from try @ 034f0a5c with catch @ 034f0a8c */
  if (*(char *)(param_1 + 0x99) == '\0') {
                    /* catch() { ... } // from try @ 034f0918 with catch @ 034f0aa0
                       catch() { ... } // from try @ 034f0a6c with catch @ 034f0aa0 */
                    /* catch() { ... } // from try @ 034f0a54 with catch @ 034f0aac */
    lVar2 = FUN_034523e4(param_1 + 0x30,0);
    puVar1 = StringLiteral_140;
                    /* catch() { ... } // from try @ 034f0830 with catch @ 034f0ab0 */
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 034f0a4c with catch @ 034f0ab4 */
                    /* catch() { ... } // from try @ 034f0884 with catch @ 034f0ab8 */
                    /* catch() { ... } // from try @ 034f0a44 with catch @ 034f0abc */
                    /* catch() { ... } // from try @ 034f0864 with catch @ 034f0ac0 */
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95368,0);
      FUN_03440dd8(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808(uVar3,param_1,*(undefined8 *)PTR_DAT_03d95360,0);
      FUN_03440d28(lVar2,uVar3,0);
      *(undefined1 *)(param_1 + 0x99) = 1;
      uVar3 = FUN_03452538(param_1 + 0x30,0);
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
          uVar3 = FUN_02edd6e8(uVar3,*(undefined8 *)PTR_DAT_03d95370,0);
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


