/*
FUNCTION_NAME: FUN_01bfb914
ENTRY_POINT: 01bfb914
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01bfb914(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 01bfb924 to 01cfb92f has its CatchHandler @ 01bfbc38 */
  if ((DAT_03fed33d & 1) == 0) {
    thunk_FUN_01ad9084(Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__36_0__)
    ;
    thunk_FUN_01ad9084(
                      Method_TeleportOrientationHandler_<UpdateOrientationCoroutine>d__7_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed33d = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 01bfb978 to 01cfb98b has its CatchHandler @ 01bfbc24 */
  uVar2 = FUN_03923030(uVar3,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0xb0);
                    /* try { // try from 01bfb98c to 01cfb99b has its CatchHandler @ 01bfbc0c */
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__36_0__
                              );
    FUN_0251f010(uVar3,param_1,
                 *(undefined8 *)
                  Method_TeleportOrientationHandler_<UpdateOrientationCoroutine>d__7_System_Collections_IEnumerator_Reset__
                 ,0);
    if (lVar4 != 0) {
                    /* try { // try from 01bfb9b8 to 01cfb9cb has its CatchHandler @ 01bfbbf4 */
      FUN_03285fe4(lVar4,uVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


