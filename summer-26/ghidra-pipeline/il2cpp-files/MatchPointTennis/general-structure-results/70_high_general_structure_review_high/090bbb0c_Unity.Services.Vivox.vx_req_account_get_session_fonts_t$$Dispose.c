/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 090bbb0c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Dispose(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  long *unaff_x22;
  
  puVar1 = (undefined8 *)FUN_044822ac();
  uVar2 = (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_058faa08();
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09fbaba0) {
                    /* try { // try from 090bbc28 to 091bbc2b has its CatchHandler @ 090bbc4c */
                    /* try { // try from 090bbc2c to 091bbc53 has its CatchHandler @ 090bb9e4 */
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_090bbc38;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09fbaba0,2);
LAB_090bbc38:
      (*(code *)*puVar1)(plVar5,0,0,puVar1[1]);
                    /* catch() { ... } // from try @ 090bbc28 with catch @ 090bbc4c */
                    /* try { // try from 090bbc54 to 091bbc5b has its CatchHandler @ 090bbc70 */
                    /* try { // try from 090bbc5c to 091bbc67 has its CatchHandler @ 090bb9e4 */
      return;
    }
  }
  else if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_090bbc04;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar5,*unaff_x22,1);
LAB_090bbc04:
                    /* WARNING: Could not recover jumptable at 0x090bbc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


