/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 02c07da0
PROGRAM: sharks-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  
  do {
                    /* try { // try from 02c07da4 to 02d07dc7 has its CatchHandler @ 02c07bf4 */
    unaff_x24 = unaff_x24 + 8;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c07c7c with catch @ 02c07da8
                        */
    if (unaff_x23 == unaff_x20) {
      FUN_02a30410(&stack0x00000008,0);
                    /* try { // try from 02c07dc8 to 02d07dcb has its CatchHandler @ 02c07df8 */
      return;
    }
    uVar2 = thunk_FUN_02a300f4(&stack0x00000008,unaff_x20 & 0xffffffff,0);
    plVar3 = (long *)FUN_02b1c1b0(uVar2,in_stack_00000018,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02c07dd8 to 02d07df7 has its CatchHandler @ 02c07e74 */
        FUN_017fc944(plVar3);
      }
      lVar4 = thunk_FUN_01861ac0(plVar3,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar4 == 0) {
        uVar2 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar2,0);
      }
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar3);
      }
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x19[unaff_x20 + 4] = (long)plVar3;
    thunk_FUN_0188fd20((long)unaff_x19 + unaff_x24,plVar3);
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}


