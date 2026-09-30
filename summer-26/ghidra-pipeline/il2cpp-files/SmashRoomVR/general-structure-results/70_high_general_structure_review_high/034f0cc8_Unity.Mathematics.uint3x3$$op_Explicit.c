/*
FUNCTION_NAME: Unity.Mathematics.uint3x3$$op_Explicit
ENTRY_POINT: 034f0cc8
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


void Unity_Mathematics_uint3x3__op_Explicit(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 034f0ccc to 035f0ccf has its CatchHandler @ 034f11dc */
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xed0));
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03d95378);
  thunk_FUN_01ad9084(PTR_DAT_03d95380);
  *(undefined1 *)(unaff_x20 + 0xcf0) = 1;
  if (*(char *)(unaff_x19 + 0x98) != '\0') {
                    /* try { // try from 034f0d10 to 035f0d3f has its CatchHandler @ 034f11c8 */
    lVar2 = FUN_034523e4(unaff_x19 + 0x48,0);
    if (lVar2 != 0) {
      uVar3 = FUN_03452538(unaff_x19 + 0x48,0);
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
                    /* try { // try from 034f0d78 to 035f0d9f has its CatchHandler @ 034f120c */
      FUN_0251b808();
      FUN_03440e30(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0251b808();
      FUN_03440d80(lVar2,uVar3,0);
      *(undefined1 *)(unaff_x19 + 0x98) = 0;
    }
  }
  return;
}


