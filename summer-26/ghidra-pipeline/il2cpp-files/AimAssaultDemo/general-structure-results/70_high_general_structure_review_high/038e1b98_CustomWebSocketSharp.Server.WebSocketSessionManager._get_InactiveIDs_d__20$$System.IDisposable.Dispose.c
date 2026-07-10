/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager.<get_InactiveIDs>d__20$$System.IDisposable.Dispose
ENTRY_POINT: 038e1b98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
CustomWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20__System_IDisposable_Dispose
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar5;
  
  FUN_044a3874(param_2,param_3,*param_1);
                    /* try { // try from 038e1ba0 to 039e1ba3 has its CatchHandler @ 038e1c20 */
                    /* try { // try from 038e1ba4 to 039e1c33 has its CatchHandler @ 038e1868 */
                    /* catch() { ... } // from try @ 038e1a80 with catch @ 038e1ba8 */
                    /* catch() { ... } // from try @ 038e1958 with catch @ 038e1bac */
  uVar1 = FUN_03f7a380();
                    /* catch() { ... } // from try @ 038e198c with catch @ 038e1bb0 */
  uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88cf0);
  FUN_044a4d98();
  lVar3 = FUN_0406a1e8(uVar1,uVar2,*(undefined8 *)PTR_DAT_07d88d00);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x22);
  }
  uVar4 = FUN_075b0180(lVar3,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar3 != 0) && (lVar3 = FUN_075aa9c8(lVar3,0), lVar3 != 0)) {
      FUN_075ba188(lVar3,0);
      uVar5 = FUN_03963bd8(0);
      *(undefined4 *)(unaff_x19 + 0x34) = uVar5;
      uVar2 = thunk_FUN_037788cc(*unaff_x23);
      FUN_044a3874();
      uVar1 = FUN_03f7a380(uVar1,uVar2,*unaff_x24);
      uVar1 = FUN_03f781bc(uVar1,*(undefined8 *)PTR_DAT_07d88cc0);
      uVar1 = FUN_04069108(uVar1,*(undefined8 *)PTR_DAT_07d88ce0);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  return 0;
}


