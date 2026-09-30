/*
FUNCTION_NAME: FUN_01c99f00
ENTRY_POINT: 01c99f00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c99f00(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined4 local_54;
  
                    /* try { // try from 01c99f08 to 01d99f0f has its CatchHandler @ 01c99f44 */
                    /* try { // try from 01c99f1c to 01d99f1f has its CatchHandler @ 01c99f40 */
                    /* try { // try from 01c99f24 to 01d99f2b has its CatchHandler @ 01c99f3c */
  if ((DAT_03fed8c7 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_644);
    thunk_FUN_01ad9084(StringLiteral_645);
    thunk_FUN_01ad9084(StringLiteral_646);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_647);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_648);
    thunk_FUN_01ad9084(StringLiteral_615);
    thunk_FUN_01ad9084(StringLiteral_620);
    thunk_FUN_01ad9084(StringLiteral_649);
    thunk_FUN_01ad9084(StringLiteral_650);
    thunk_FUN_01ad9084(StringLiteral_651);
    thunk_FUN_01ad9084(StringLiteral_652);
    DAT_03fed8c7 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar9 = param_1 + 0x20;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  lVar7 = FUN_034523e4(lVar9,0);
  if (lVar7 != 0) {
    lVar7 = FUN_034523e4(lVar9,0);
    if (lVar7 == 0) goto LAB_01c9a368;
    local_70 = FUN_03440a50(lVar7,0);
    if (0 < local_70._12_4_) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar11,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_01c9a368;
        FUN_0391fb70(*(long *)(param_1 + 0x38),1,0);
      }
      lVar9 = FUN_034523e4(lVar9,0);
      if (lVar9 != 0) {
        auVar13 = FUN_03440a50(lVar9,0);
        local_70 = auVar13;
        lVar9 = FUN_02d98200(local_70,0,*(undefined8 *)StringLiteral_620);
        if (lVar9 != 0) {
          lVar9 = *(long *)(lVar9 + 0x78);
          uVar11 = *(undefined8 *)(param_1 + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar8 = FUN_0391f968(uVar11,0,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (lVar9 != 0) {
            plVar12 = *(long **)(param_1 + 0x40);
            uVar11 = FUN_03480d20(lVar9,0);
            local_54 = *(undefined4 *)(lVar9 + 0xe0);
            uVar10 = thunk_FUN_01afa70c(*(undefined8 *)
                                         Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                        ,&local_54);
            uVar11 = FUN_02ee7120(*(undefined8 *)StringLiteral_651,uVar11,uVar10,0);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x5e8))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x5f0));
              local_a0 = FUN_03480ff0(lVar9,0);
              FUN_02d9730c(local_b8,local_a0,*(undefined8 *)StringLiteral_648);
              puVar6 = StringLiteral_650;
              puVar5 = StringLiteral_649;
              puVar4 = StringLiteral_647;
              puVar3 = StringLiteral_646;
              puVar2 = StringLiteral_645;
              uStack_88 = local_b8._8_8_;
              local_90 = local_b8._0_8_;
              local_80 = local_a8;
              bVar1 = false;
              do {
                uVar8 = FUN_02735c30(&local_90,*(undefined8 *)puVar2);
                if ((uVar8 & 1) == 0) {
                  FUN_02735c2c(&local_90,*(undefined8 *)StringLiteral_644);
                  return;
                }
                auVar13 = FUN_02735c5c(&local_90,*(undefined8 *)puVar3);
                plVar12 = *(long **)(param_1 + 0x40);
                if (bVar1) {
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  uVar11 = (**(code **)(*plVar12 + 0x5d8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
                  local_b8 = auVar13;
                  uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,local_b8);
                  uVar10 = FUN_02ede300(*(undefined8 *)puVar6,uVar10,0);
                  uVar11 = FUN_02edd6e8(uVar11,uVar10,0);
                  (**(code **)(*plVar12 + 0x5e8))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x5f0));
                }
                else {
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  uVar11 = (**(code **)(*plVar12 + 0x5d8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
                  local_b8 = auVar13;
                  uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,local_b8);
                  uVar10 = FUN_02ede300(*(undefined8 *)puVar5,uVar10,0);
                  uVar11 = FUN_02edd6e8(uVar11,uVar10,0);
                  (**(code **)(*plVar12 + 0x5e8))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x5f0));
                }
                bVar1 = true;
              } while( true );
            }
          }
        }
      }
      goto LAB_01c9a368;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_01c9a368;
    FUN_0391fb70(*(long *)(param_1 + 0x38),0,0);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    plVar12 = *(long **)(param_1 + 0x40);
    if (plVar12 == (long *)0x0) {
LAB_01c9a368:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    (**(code **)(*plVar12 + 0x5e8))
              (plVar12,*(undefined8 *)StringLiteral_652,*(undefined8 *)(*plVar12 + 0x5f0));
  }
  return;
}


