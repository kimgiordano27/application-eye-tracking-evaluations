/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$Dispose
ENTRY_POINT: 090a2224
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Vivox_vx_evt_session_archive_query_end_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x7e8));
  *(undefined1 *)(unaff_x21 + 0xa5b) = 1;
  puVar2 = PTR_DAT_09fc3588;
  puVar1 = PTR_DAT_09f21060;
                    /* try { // try from 090a2234 to 091a2257 has its CatchHandler @ 090a25d8 */
  plVar3 = *(long **)(unaff_x19 + 0x10);
  uVar5 = *unaff_x20;
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                    /* try { // try from 090a2264 to 091a2287 has its CatchHandler @ 090a25d4 */
    uVar5 = FUN_078b56f4(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 090a228c to 091a22af has its CatchHandler @ 090a25d0 */
    uVar5 = FUN_078b56f4(uVar5,*(undefined8 *)PTR_DAT_09fc27d8,*(long *)(unaff_x19 + 0x18),
                         *(undefined8 *)puVar1,0);
  }
  puVar1 = PTR_DAT_09fc3ce8;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_078b4f58(uVar5,*(undefined8 *)puVar1,uVar4,0);
    return uVar5;
  }
  return uVar5;
}


