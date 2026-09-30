/*
FUNCTION_NAME: FUN_01c6834c
ENTRY_POINT: 01c6834c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_01c6834c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 01c68350 to 01d68363 has its CatchHandler @ 01c683e8 */
  if ((DAT_03fed6ed & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6ed = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 200) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 01c683c8 to 01d683d3 has its CatchHandler @ 01c683d8 */
      uVar2 = FUN_03923030(uVar3,0);
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 01c683d4 to 01d68433 has its CatchHandler @ 01c68254 */
        if (*(long *)(param_1 + 0xa8) == 0) {
LAB_01c6843c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01c6843c to 01d6843f has its CatchHandler @ 01c68448 */
          FUN_01b48178();
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c683c8 with catch @ 01c683d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c682ac with catch @ 01c683dc
                        */
        FUN_038ea808(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x70),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c68314 with catch @ 01c683e4
                        */
        lVar4 = *(long *)(param_1 + 0xa8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c68350 with catch @ 01c683e8
                        */
        FUN_03925e44(0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c682d0 with catch @ 01c683f0
                        */
        if (lVar4 == 0) goto LAB_01c6843c;
        FUN_038ea678(lVar4,0);
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_01c6843c;
        FUN_01bffa4c(DAT_00b555e0,*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xa8),
                     *(undefined8 *)(param_1 + 0x70),0);
      }
    }
    *(undefined2 *)(param_1 + 0x78) = 0x101;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
                    /* try { // try from 01c68434 to 01d68437 has its CatchHandler @ 01c68438 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c68434 with catch @ 01c68438
                        */
  return;
}


