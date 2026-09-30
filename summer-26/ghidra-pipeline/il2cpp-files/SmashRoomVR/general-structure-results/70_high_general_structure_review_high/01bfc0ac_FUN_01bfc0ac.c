/*
FUNCTION_NAME: FUN_01bfc0ac
ENTRY_POINT: 01bfc0ac
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


undefined8 FUN_01bfc0ac(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_03fed345 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed345 = 1;
  }
  if (1 < *(uint *)(param_1 + 0x10)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc0e8 with catch @ 01bfc1c8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc144 with catch @ 01bfc1cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc108 with catch @ 01bfc1d0
                        */
    return 0;
  }
                    /* try { // try from 01bfc0e8 to 01cfc0ef has its CatchHandler @ 01bfc1c8 */
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0xb0);
                    /* try { // try from 01bfc108 to 01cfc12f has its CatchHandler @ 01bfc1d0 */
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar4 + 0xb0) == 0) goto LAB_01bfc1f0;
      uVar2 = FUN_03285ad4(*(long *)(lVar4 + 0xb0),0);
      if ((uVar2 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc19c with catch @ 01bfc1d4
                        */
        *(undefined8 *)(param_1 + 0x18) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc170 with catch @ 01bfc1d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc1a0 with catch @ 01bfc1dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc078 with catch @ 01bfc1e0
                        */
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bfc048 with catch @ 01bfc1e4
                        */
                    /* try { // try from 01bfc1e8 to 01cfc1ef has its CatchHandler @ 01bfc1f8 */
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    uVar6 = *(undefined8 *)(lVar4 + 0xb0);
                    /* try { // try from 01bfc144 to 01cfc14f has its CatchHandler @ 01bfc1cc */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) == 0) {
      uVar6 = FUN_0391c2b8(lVar4,0);
                    /* try { // try from 01bfc19c to 01cfc19f has its CatchHandler @ 01bfc1d4 */
      lVar4 = *(long *)puVar1;
                    /* try { // try from 01bfc1a0 to 01cfc1a7 has its CatchHandler @ 01bfc1dc */
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar4);
      }
      FUN_03923a90(uVar6,0);
      return 0;
    }
    lVar3 = *(long *)(lVar4 + 0xb0);
    if (lVar3 != 0) {
      plVar5 = *(long **)(lVar4 + 0x40);
      uVar6 = FUN_01bfb4a4(*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50));
                    /* try { // try from 01bfc170 to 01cfc18b has its CatchHandler @ 01bfc1d8 */
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
        return 0;
      }
    }
  }
LAB_01bfc1f0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01bfc1f0 to 01cfc1fb has its CatchHandler @ 01bfc00c */
  FUN_01b48178();
}


