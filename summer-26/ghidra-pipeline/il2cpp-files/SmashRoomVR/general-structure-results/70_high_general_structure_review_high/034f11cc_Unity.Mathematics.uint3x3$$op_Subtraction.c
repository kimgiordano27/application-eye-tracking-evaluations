/*
FUNCTION_NAME: Unity.Mathematics.uint3x3$$op_Subtraction
ENTRY_POINT: 034f11cc
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


void Unity_Mathematics_uint3x3__op_Subtraction(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
                    /* catch() { ... } // from try @ 034f0c9c with catch @ 034f11cc
                       catch() { ... } // from try @ 034f1180 with catch @ 034f11cc */
                    /* catch() { ... } // from try @ 034f0c54 with catch @ 034f11d4
                       catch() { ... } // from try @ 034f1178 with catch @ 034f11d4 */
  thunk_FUN_01ad9084(StringLiteral_140);
                    /* catch() { ... } // from try @ 034f0ccc with catch @ 034f11dc
                       catch() { ... } // from try @ 034f1188 with catch @ 034f11dc */
                    /* catch() { ... } // from try @ 034f0ecc with catch @ 034f11e0
                       catch() { ... } // from try @ 034f11a0 with catch @ 034f11e0 */
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* catch() { ... } // from try @ 034f0e48 with catch @ 034f11ec */
  thunk_FUN_01ad9084(PTR_DAT_03d95390);
                    /* catch() { ... } // from try @ 034f0e84 with catch @ 034f11f0 */
                    /* catch() { ... } // from try @ 034f0e98 with catch @ 034f11f4 */
                    /* catch() { ... } // from try @ 034f1170 with catch @ 034f11f8 */
  thunk_FUN_01ad9084(PTR_DAT_03d95398);
                    /* catch() { ... } // from try @ 034f0e74 with catch @ 034f11fc */
                    /* catch() { ... } // from try @ 034f1168 with catch @ 034f1200 */
                    /* catch() { ... } // from try @ 034f1160 with catch @ 034f1204 */
  thunk_FUN_01ad9084(PTR_DAT_03d953a0);
                    /* catch() { ... } // from try @ 034f0dd4 with catch @ 034f1208 */
                    /* catch() { ... } // from try @ 034f0d78 with catch @ 034f120c */
  *(undefined1 *)(unaff_x20 + 0xcee) = 1;
                    /* catch() { ... } // from try @ 034f1154 with catch @ 034f1210 */
  if (*(char *)(unaff_x19 + 0x9a) == '\0') {
                    /* try { // try from 034f1228 to 035f122b has its CatchHandler @ 034f12e0 */
    lVar2 = FUN_034523e4(unaff_x19 + 0x60,0);
    puVar1 = StringLiteral_140;
    if (lVar2 != 0) {
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
      FUN_0251b808();
      FUN_03440dd8(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808();
      FUN_03440d28(lVar2,uVar3,0);
      *(undefined1 *)(unaff_x19 + 0x9a) = 1;
      uVar3 = FUN_03452538(unaff_x19 + 0x60,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_0391c2b8();
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


