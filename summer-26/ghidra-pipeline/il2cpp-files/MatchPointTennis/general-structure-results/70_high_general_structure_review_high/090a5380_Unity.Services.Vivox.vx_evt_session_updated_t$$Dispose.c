/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 090a5380
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar2 = FUN_04ff03fc();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000018 = FUN_068a4fb0(lVar2,*(undefined8 *)PTR_DAT_09fc3dc0);
  uVar3 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3da8);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    System_Array__InternalArray__IReadOnlyList_get_Item<Dictionary_Entry<HandExpressionName,_object>>
              (unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar2 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3da0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 090a53d0 to 091a556f has its CatchHandler @ 090a53d0
                       catch() { ... } // from try @ 090a53d0 with catch @ 090a53d0
                       catch() { ... } // from try @ 090a58d0 with catch @ 090a53d0
                       catch() { ... } // from try @ 090a5994 with catch @ 090a53d0
                       catch() { ... } // from try @ 090a5a34 with catch @ 090a53d0
                       catch() { ... } // from try @ 090a5ab8 with catch @ 090a53d0 */
    in_stack_00000008 = FUN_068a4fb0(lVar2,*(undefined8 *)PTR_DAT_09fc3db8);
    uVar3 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d60);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x18,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      System_Array__InternalArray__IReadOnlyList_get_Item<Dictionary_Entry<HandExpressionName,_object>>
                (unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar4 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d58);
      *unaff_x19 = 0xfffffffe;
      puVar1 = PTR_DAT_09fc3d50;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
  }
  return;
}


