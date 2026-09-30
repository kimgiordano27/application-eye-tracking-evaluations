/*
FUNCTION_NAME: FUN_03812dbc
ENTRY_POINT: 03812dbc
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


long FUN_03812dbc(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 03812dcc to 03912def has its CatchHandler @ 03812cac */
  puVar1 = (undefined8 *)PTR_DAT_03da5bf0;
  plVar2 = (long *)
           Method_Meta_WitAi_WitService_<DeactivateDueToTimeLimit>d__86_System_Collections_IEnumerator_Reset__
  ;
  plVar3 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff83ab & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5bf0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 03812df0 to 03912df3 has its CatchHandler @ 03812df8 */
                    /* try { // try from 03812df4 to 03912e17 has its CatchHandler @ 03812cac */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03812df0 with catch @ 03812df8
                        */
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_WitService_<DeactivateDueToTimeLimit>d__86_System_Collections_IEnumerator_Reset__
                      );
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03812d58 with catch @ 03812dfc
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03812d9c with catch @ 03812e00
                        */
    DAT_03ff83ab = 1;
    puVar1 = (undefined8 *)PTR_DAT_03da5bf0;
    plVar2 = (long *)
             Method_Meta_WitAi_WitService_<DeactivateDueToTimeLimit>d__86_System_Collections_IEnumerator_Reset__
    ;
    plVar3 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  }
  do {
                    /* try { // try from 03812e1c to 03912e43 has its CatchHandler @ 03812cac */
    lVar4 = *plVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *plVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_03812ea8;
                    /* catch() { ... } // from try @ 03812e18 with catch @ 03812e3c */
    lVar4 = FUN_02aae4f4(lVar4,*puVar1);
                    /* try { // try from 03812e44 to 03912e4b has its CatchHandler @ 03812e60 */
                    /* try { // try from 03812e4c to 03912e57 has its CatchHandler @ 03812cac */
    if (*(int *)(*plVar3 + 0xe0) == 0) {
                    /* try { // try from 03812e58 to 03912e5f has its CatchHandler @ 03812e60 */
      thunk_FUN_01ac7298(*plVar3);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03812e44 with catch @ 03812e60
                       catch(type#2 @ 00000000) { ... } // from try @ 03812e58 with catch @ 03812e60
                        */
                    /* try { // try from 03812e64 to 03912f0f has its CatchHandler @ 03812e64
                       catch() { ... } // from try @ 03812e64 with catch @ 03812e64
                       catch() { ... } // from try @ 03812f84 with catch @ 03812e64
                       catch() { ... } // from try @ 03812fac with catch @ 03812e64
                       catch() { ... } // from try @ 03812fd4 with catch @ 03812e64
                       catch() { ... } // from try @ 03813004 with catch @ 03812e64 */
    uVar5 = FUN_03922f24(lVar4,0,0);
  } while ((uVar5 & 1) != 0);
  uVar6 = FUN_0391c27c(param_1,0);
  if (lVar4 != 0) {
    FUN_03929660(lVar4,uVar6,0,0);
    return lVar4;
  }
LAB_03812ea8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


