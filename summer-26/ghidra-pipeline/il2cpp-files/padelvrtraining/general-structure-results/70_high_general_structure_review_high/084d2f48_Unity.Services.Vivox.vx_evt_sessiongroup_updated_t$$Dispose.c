/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_updated_t$$Dispose
ENTRY_POINT: 084d2f48
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__Dispose(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x23;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 2000));
  FUN_03d2d2b0(PTR_DAT_092807d8);
  *(undefined1 *)(unaff_x21 + 0x2a3) = 1;
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar1 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar1 = *unaff_x23;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092807b8);
    FUN_054bec28(uVar2,uVar4,*(undefined8 *)PTR_DAT_092807c0,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *puVar3 = uVar2;
    thunk_FUN_03d1023c(puVar3,uVar2);
  }
  if (unaff_x20 != 0) {
    FUN_084d30a4();
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar1 = *unaff_x23;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar1 = *unaff_x23;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092807b8);
      FUN_054bec28(uVar2,uVar4,*(undefined8 *)PTR_DAT_092807c8,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_03d1023c(puVar3,uVar2);
    }
    FUN_084d30a4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


