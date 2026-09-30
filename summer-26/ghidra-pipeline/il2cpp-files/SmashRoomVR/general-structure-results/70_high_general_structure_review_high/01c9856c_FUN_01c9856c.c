/*
FUNCTION_NAME: FUN_01c9856c
ENTRY_POINT: 01c9856c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c9856c(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong extraout_x1;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 local_78 [16];
  undefined4 local_64;
  undefined1 local_60 [16];
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed8b2 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_622);
    thunk_FUN_01ad9084(StringLiteral_623);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_615);
    thunk_FUN_01ad9084(StringLiteral_620);
    thunk_FUN_01ad9084(StringLiteral_624);
    thunk_FUN_01ad9084(StringLiteral_625);
    thunk_FUN_01ad9084(StringLiteral_626);
    thunk_FUN_01ad9084(StringLiteral_627);
    thunk_FUN_01ad9084(StringLiteral_628);
    DAT_03fed8b2 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(0,uVar9,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = FUN_03452478(*(long *)(param_1 + 0x20),0);
    if (lVar4 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = FUN_03452478(*(long *)(param_1 + 0x20),0);
      if (lVar4 != 0) {
        FUN_03440a50(lVar4,0);
        if (extraout_x1 >> 0x20 == 0) {
          return;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03922f24(uVar9,0,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar4 = FUN_03452478(*(long *)(param_1 + 0x20),0);
          if (lVar4 != 0) {
            local_60 = FUN_03440a50(lVar4,0);
            lVar4 = FUN_02d98200(local_60,0,*(undefined8 *)StringLiteral_620);
            auVar1._8_8_ = local_78._8_8_;
            auVar1._0_8_ = local_78._0_8_;
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), local_78 = auVar1, lVar4 != 0)) {
              plVar8 = *(long **)(param_1 + 0x28);
              uVar9 = FUN_03480d20(lVar4,0);
              local_64 = *(undefined4 *)(lVar4 + 0xe0);
              uVar5 = thunk_FUN_01afa70c(*(undefined8 *)
                                          Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                         ,&local_64);
              local_78 = FUN_03480ff0(lVar4,0);
              uVar6 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_624,local_78);
              puVar2 = StringLiteral_626;
              lVar4 = *(long *)StringLiteral_626;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar4);
                lVar4 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
              uVar11 = *(undefined8 *)StringLiteral_627;
              uVar10 = *(undefined8 *)StringLiteral_628;
              if (lVar12 == 0) {
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar4);
                  lVar4 = *(long *)puVar2;
                }
                uVar13 = **(undefined8 **)(lVar4 + 0xb8);
                lVar12 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_623);
                FUN_028b4dcc(lVar12,uVar13,*(undefined8 *)StringLiteral_625,0);
                plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                *plVar7 = lVar12;
                thunk_FUN_01b4f09c(plVar7,lVar12);
              }
              uVar6 = FUN_01ebaa8c(uVar6,lVar12,*(undefined8 *)StringLiteral_622);
              uVar6 = FUN_02ee7624(uVar11,uVar6,0);
              uVar9 = FUN_02ee7164(uVar10,uVar9,uVar5,uVar6,0);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x5e8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x5f0));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


