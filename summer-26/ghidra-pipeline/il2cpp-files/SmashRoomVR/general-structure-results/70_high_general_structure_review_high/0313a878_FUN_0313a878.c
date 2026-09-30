/*
FUNCTION_NAME: FUN_0313a878
ENTRY_POINT: 0313a878
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_0313a878(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0313a868 with catch @ 0313a888
                        */
  if ((DAT_03ff1eeb & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f8b0);
                    /* try { // try from 0313a8a0 to 0323a8b7 has its CatchHandler @ 0313a998 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1eeb = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 0313a8b8 to 0323a8f7 has its CatchHandler @ 0313a850 */
  if ((char)param_1[9] == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313a99c with catch @ 0313a9a8
                        */
                    /* try { // try from 0313a9ac to 0323aa03 has its CatchHandler @ 0313a9ac
                       catch() { ... } // from try @ 0313a9ac with catch @ 0313a9ac
                       catch() { ... } // from try @ 0313aa20 with catch @ 0313a9ac
                       catch() { ... } // from try @ 0313aab4 with catch @ 0313a9ac
                       catch() { ... } // from try @ 0313ab08 with catch @ 0313a9ac
                       catch() { ... } // from try @ 0313ab98 with catch @ 0313a9ac */
    return;
  }
  plVar5 = param_1 + 8;
  lVar6 = *plVar5;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    lVar6 = *plVar5;
                    /* try { // try from 0313a8f8 to 0323a90f has its CatchHandler @ 0313a998 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(lVar6,0);
                    /* try { // try from 0313a910 to 0323a987 has its CatchHandler @ 0313a850 */
    *plVar5 = 0;
    thunk_FUN_01b4f09c(plVar5,0);
  }
  puVar1 = PTR_DAT_03d7f8b0;
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar5 = (long *)(param_1[4] + 0x48);
  lVar6 = *plVar5;
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f8b0);
  FUN_02518558(uVar3,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
  lVar6 = FUN_03084da8(lVar6,uVar3,0);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_01afa9e0(lVar6,uVar3);
    if (lVar4 != 0) {
      *plVar5 = lVar4;
      uVar3 = *(undefined8 *)puVar1;
                    /* try { // try from 0313a988 to 0323a997 has its CatchHandler @ 0313a998 */
      lVar4 = thunk_FUN_01afa9e0(lVar6,uVar3);
      if (lVar4 != 0) goto LAB_0313a9bc;
    }
                    /* catch() { ... } // from try @ 0313a8a0 with catch @ 0313a998
                       catch() { ... } // from try @ 0313a8f8 with catch @ 0313a998
                       catch() { ... } // from try @ 0313a988 with catch @ 0313a998 */
                    /* try { // try from 0313a99c to 0323a99f has its CatchHandler @ 0313a9a8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0313a9a0 to 0323a9ab has its CatchHandler @ 0313a850 */
    FUN_01b4841c(lVar6,uVar3);
  }
  lVar4 = 0;
  *plVar5 = 0;
LAB_0313a9bc:
  thunk_FUN_01b4f09c(plVar5,lVar4);
  return;
}


