/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$Dispose
ENTRY_POINT: 090a2330
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Services_Vivox_vx_evt_session_archive_query_end_t__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f20710);
                    /* try { // try from 090a2348 to 091a234f has its CatchHandler @ 090a25ac */
  FUN_04447ba8(PTR_DAT_09fc3590);
  FUN_04447ba8(PTR_DAT_09fc27e0);
                    /* try { // try from 090a235c to 091a2363 has its CatchHandler @ 090a25a4 */
  FUN_04447ba8(PTR_DAT_09fc3cf0);
  *(undefined1 *)(unaff_x22 + 0xa5c) = 1;
  puVar1 = PTR_DAT_09f20720;
                    /* try { // try from 090a2374 to 091a237f has its CatchHandler @ 090a259c */
  lVar2 = thunk_FUN_0448520c(*unaff_x21);
  FUN_07441bc0(lVar2,*unaff_x20);
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_090a2438;
    FUN_0744298c(lVar2,*(undefined8 *)PTR_DAT_09fc3590,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_090a2438;
                    /* try { // try from 090a23dc to 091a242f has its CatchHandler @ 090a25ec */
    FUN_0744298c(lVar2,*(undefined8 *)PTR_DAT_09fc27e0,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) {
LAB_090a2438:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0744298c(lVar2,*(undefined8 *)PTR_DAT_09fc3cf0,uVar4,*(undefined8 *)puVar1);
  }
  return lVar2;
}


