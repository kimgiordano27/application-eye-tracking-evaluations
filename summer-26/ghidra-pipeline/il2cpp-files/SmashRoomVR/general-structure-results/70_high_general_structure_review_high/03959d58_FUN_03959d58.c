/*
FUNCTION_NAME: FUN_03959d58
ENTRY_POINT: 03959d58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 FUN_03959d58(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffbd2a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffbd2a = 1;
  }
  uVar2 = FUN_03959ba8(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar3 = FUN_0391f968(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_03959ba8(param_1);
    if (lVar4 != 0) {
      if (DAT_03ffbec8 == (code *)0x0) {
        DAT_03ffbec8 = (code *)FUN_01b47f04("UnityEngine.Collider::get_attachedRigidbody()");
      }
                    /* WARNING: Could not recover jumptable at 0x03959dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*DAT_03ffbec8)(lVar4);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03959d14 with catch @ 03959e10 */
    FUN_01b48178();
  }
                    /* try { // try from 03959e04 to 03a59e07 has its CatchHandler @ 03959e28 */
                    /* try { // try from 03959e08 to 03a59e0b has its CatchHandler @ 03959e24 */
                    /* try { // try from 03959e0c to 03a59e4f has its CatchHandler @ 03959b14 */
  return 0;
}


