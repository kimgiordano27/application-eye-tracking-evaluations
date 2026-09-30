/*
FUNCTION_NAME: System.Comparison<Vector2>$$Invoke
ENTRY_POINT: 027100d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 System_Comparison<Vector2>__Invoke(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  int iVar12;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x27;
  long *plVar13;
  long unaff_x29;
  
  puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  plVar13 = *(long **)(unaff_x27 + 0x3a0);
  iVar12 = 0;
  uVar5 = 0;
  while( true ) {
    lVar6 = *unaff_x25;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar9 = *unaff_x25;
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
      lVar6 = *unaff_x25;
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    iVar3 = (*pcVar10)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
    if (iVar3 <= iVar12) {
      if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    lVar6 = *unaff_x25;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar9 = *unaff_x25;
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
      lVar6 = *unaff_x25;
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
    *(int *)(unaff_x29 + -0xc) = iVar12;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
    (**(code **)(lVar6 + 0x10))(uVar11);
    lVar6 = *unaff_x25;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
    if (plVar7 == (long *)0x0) break;
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*plVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    puVar8 = (undefined1 *)thunk_FUN_01c49834();
    *(undefined1 *)(unaff_x29 + -0x24) = *puVar8;
    uVar4 = FUN_0324b7a0(unaff_x29 + -0x24,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar5 = FUN_0322441c(uVar5,uVar4,0);
    iVar12 = iVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


