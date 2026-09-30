/*
FUNCTION_NAME: FUN_01c9823c
ENTRY_POINT: 01c9823c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c9823c(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  undefined8 local_28;
  
  if ((DAT_03fed8b1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_619);
    thunk_FUN_01ad9084(StringLiteral_615);
    thunk_FUN_01ad9084(StringLiteral_620);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed8b1 = 1;
  }
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar9 = ZEXT816(0);
  plVar5 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar5 == (long *)0x0) goto LAB_01c9851c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    auVar9 = ZEXT816(0);
    if (plVar5 == (long *)0x0) goto LAB_01c9851c;
    lVar6 = plVar5[5];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(0,lVar6,0);
    auVar9._8_8_ = local_40._8_8_;
    auVar9._0_8_ = local_40._0_8_;
    if ((uVar3 & 1) != 0) {
      if (plVar5[4] == 0) goto LAB_01c9851c;
      plVar7 = (long *)plVar5[5];
      lVar6 = FUN_03452478(plVar5[4],0);
      auVar1._8_8_ = local_40._8_8_;
      auVar1._0_8_ = local_40._0_8_;
      auVar9._8_8_ = local_40._8_8_;
      auVar9._0_8_ = local_40._0_8_;
      if ((lVar6 == 0) || (auVar9 = auVar1, plVar7 == (long *)0x0)) goto LAB_01c9851c;
      (**(code **)(*plVar7 + 0x5e8))
                (plVar7,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(*plVar7 + 0x5f0));
    }
  }
  uVar3 = FUN_0391b7d0(plVar5,0);
  auVar9._8_8_ = local_40._8_8_;
  auVar9._0_8_ = local_40._0_8_;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (plVar5[4] != 0) {
    lVar6 = FUN_03452478(plVar5[4],0);
    if (lVar6 == 0) {
LAB_01c984d0:
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x3f800000,uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    auVar9 = local_40;
    if (plVar5[4] != 0) {
      lVar6 = FUN_03452478(plVar5[4],0);
      auVar9._8_8_ = local_40._8_8_;
      auVar9._0_8_ = local_40._0_8_;
      if (lVar6 != 0) {
        local_40 = FUN_03440a50(lVar6,0);
        if (local_40._12_4_ < 1) goto LAB_01c984d0;
        auVar9 = local_40;
        if (plVar5[4] != 0) {
          lVar6 = FUN_03452478(plVar5[4],0);
          auVar9 = local_40;
          if (lVar6 != 0) {
            auVar9 = FUN_03440a50(lVar6,0);
            puVar2 = StringLiteral_620;
            local_40 = auVar9;
            lVar6 = FUN_02d98200(local_40,0,*(undefined8 *)StringLiteral_620);
            auVar9 = local_40;
            if (lVar6 != 0) {
              if (*(long *)(lVar6 + 0x78) == 0) goto LAB_01c984d0;
              if (plVar5[4] != 0) {
                uVar4 = FUN_03452478(plVar5[4],0);
                auVar9 = local_40;
                if (plVar5[4] != 0) {
                  lVar6 = FUN_03452478(plVar5[4],0);
                  auVar9 = local_40;
                  if (lVar6 != 0) {
                    auVar9 = FUN_03440a50(lVar6,0);
                    local_40 = auVar9;
                    lVar6 = FUN_02d98200(local_40,0,*(undefined8 *)puVar2);
                    auVar9 = local_40;
                    if (lVar6 != 0) {
                      uVar8 = *(undefined8 *)(lVar6 + 0x78);
                      if (*(int *)(*(long *)StringLiteral_619 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)StringLiteral_619);
                      }
                      uVar3 = FUN_038ae688(uVar4,0,&local_28,4,uVar8,0);
                      if ((uVar3 & 1) == 0) goto LAB_01c984d0;
                      lVar6 = plVar5[5];
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar3 = FUN_0391f968(0,lVar6,0);
                      if ((uVar3 & 1) != 0) {
                        uVar3 = FUN_02ee6cf0(local_28,0);
                        if ((uVar3 & 1) == 0) {
                          plVar7 = (long *)plVar5[5];
                          auVar9 = local_40;
                          if (plVar7 == (long *)0x0) goto LAB_01c9851c;
                          (**(code **)(*plVar7 + 0x5e8))
                                    (plVar7,local_28,*(undefined8 *)(*plVar7 + 0x5f0));
                        }
                      }
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c9851c:
  local_40 = auVar9;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


