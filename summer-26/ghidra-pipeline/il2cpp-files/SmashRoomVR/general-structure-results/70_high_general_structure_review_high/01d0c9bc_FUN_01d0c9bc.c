/*
FUNCTION_NAME: FUN_01d0c9bc
ENTRY_POINT: 01d0c9bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01d0c9bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* catch() { ... } // from try @ 01d0c9a0 with catch @ 01d0c9cc */
                    /* try { // try from 01d0c9dc to 01e0c9e3 has its CatchHandler @ 01d0c9f8 */
  if ((DAT_03fedd61 & 1) == 0) {
                    /* try { // try from 01d0c9e4 to 01e0c9ef has its CatchHandler @ 01d0c840 */
    thunk_FUN_01ad9084(StringLiteral_2180);
                    /* try { // try from 01d0c9f0 to 01e0c9f7 has its CatchHandler @ 01d0c9f8 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d0c9dc with catch @ 01d0c9f8
                       catch(type#2 @ 00000000) { ... } // from try @ 01d0c9f0 with catch @ 01d0c9f8
                        */
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    DAT_03fedd61 = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x20);
  uVar8 = *puVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  uVar3 = FUN_03923030(uVar8,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_01f25510(*(undefined8 *)StringLiteral_2180);
    *puVar5 = uVar8;
    thunk_FUN_01b4f09c(puVar5,uVar8);
  }
  uVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02eeeb74(uVar8,0);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x40),uVar8);
  lVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02eeeb74(lVar4,0);
  plVar6 = (long *)(param_1 + 0x58);
  *plVar6 = lVar4;
  thunk_FUN_01b4f09c(plVar6,lVar4);
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = 0;
    do {
      if (*plVar6 == 0) goto LAB_01d0cb28;
      FUN_02ef09cc(*plVar6,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x28));
  }
  uVar3 = FUN_02ee6cf0(*(undefined8 *)(param_1 + 0x30),0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*plVar6 != 0) {
    FUN_02ef0524(*plVar6,*(undefined8 *)(param_1 + 0x30),0);
    return;
  }
LAB_01d0cb28:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


