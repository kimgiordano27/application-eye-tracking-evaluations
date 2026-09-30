/*
FUNCTION_NAME: FUN_038175bc
ENTRY_POINT: 038175bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_038175bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 038175c0 to 039175c7 has its CatchHandler @ 03817978 */
  if ((DAT_03ff83db & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(PTR_DAT_03da5d98);
    DAT_03ff83db = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 03817610 to 0391762b has its CatchHandler @ 03817964 */
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_0380096c(*(long *)(param_1 + 0x1d0),0);
                    /* try { // try from 0381762c to 03917677 has its CatchHandler @ 03817270 */
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) goto UnityEngine_Vector2Int__op_Equality;
      FUN_038fe3fc(*(long *)(param_1 + 0xd0),0,0);
    }
    plVar5 = (long *)(param_1 + 200);
    lVar6 = *plVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 03817678 to 0391767f has its CatchHandler @ 03817974 */
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (*plVar5 == 0) goto UnityEngine_Vector2Int__op_Equality;
      FUN_0391fb70(*plVar5,0,0);
      *plVar5 = 0;
      thunk_FUN_01b4f09c(plVar5,0);
    }
    puVar2 = PTR_DAT_03da5d98;
    puVar1 = 
    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
                    /* try { // try from 038176c8 to 039176e3 has its CatchHandler @ 03817960 */
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
                    /* try { // try from 038176e4 to 0391772b has its CatchHandler @ 03817270 */
    FUN_0392e4c8(uVar4,param_1,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038ef450(uVar4,0);
    return;
  }
UnityEngine_Vector2Int__op_Equality:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


