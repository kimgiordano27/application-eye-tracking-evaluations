/*
FUNCTION_NAME: FUN_01cb17ec
ENTRY_POINT: 01cb17ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01cb17ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03feda03 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_993);
    thunk_FUN_01ad9084(StringLiteral_994);
    thunk_FUN_01ad9084(StringLiteral_995);
    DAT_03feda03 = 1;
  }
  FUN_01cb25d0(param_1);
  puVar2 = StringLiteral_995;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_02201a18(*(long *)(param_1 + 0x50),0 < *(int *)(param_1 + 0x88),
                 *(undefined8 *)StringLiteral_995);
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
      FUN_02201a18(*(long *)(param_1 + 0x58),
                   *(int *)(param_1 + 0x88) < *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1,
                   *(undefined8 *)puVar2);
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88)) {
LAB_01cb1a84:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 + 0x20);
        if ((lVar6 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
          FUN_02201a18(*(long *)(param_1 + 0x60),*(undefined1 *)(lVar6 + 0x10),*(undefined8 *)puVar2
                      );
          puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88)) goto LAB_01cb1a84;
            lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 + 0x20);
            if (lVar6 != 0) {
              lVar7 = *(long *)(param_1 + 0x68);
              uVar8 = *(undefined8 *)(lVar6 + 0x18);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar4 = FUN_0391f968(uVar8,0,0);
              if (lVar7 != 0) {
                FUN_02201a18(lVar7,uVar4 & 1,*(undefined8 *)puVar2);
                lVar6 = *(long *)(param_1 + 0x28);
                if (lVar6 != 0) {
                  if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88)) goto LAB_01cb1a84;
                  lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 + 0x20);
                  if (lVar6 != 0) {
                    lVar6 = *(long *)(lVar6 + 0x20);
                    if (lVar6 == 0) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = *(int *)(lVar6 + 0x18) != 0;
                    }
                    if (*(long *)(param_1 + 0x78) != 0) {
                      FUN_02201a18(*(long *)(param_1 + 0x78),bVar3,*(undefined8 *)puVar2);
                      lVar6 = *(long *)(param_1 + 0x28);
                      if (lVar6 != 0) {
                        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88)) goto LAB_01cb1a84;
                        lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 + 0x20);
                        if (lVar6 != 0) {
                          uVar8 = *(undefined8 *)(lVar6 + 0x18);
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar5 = FUN_0391f968(uVar8,0,0);
                          if ((uVar5 & 1) != 0) {
                            lVar6 = *(long *)(param_1 + 0x28);
                            if (lVar6 == 0) goto LAB_01cb1a80;
                            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88))
                            goto LAB_01cb1a84;
                            lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 +
                                             0x20);
                            if ((lVar6 == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_01cb1a80;
                            FUN_02203ccc(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar6 + 0x18),
                                         *(undefined8 *)StringLiteral_993);
                          }
                          lVar6 = *(long *)(param_1 + 0x28);
                          if (lVar6 != 0) {
                            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x88))
                            goto LAB_01cb1a84;
                            lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x88) * 8 +
                                             0x20);
                            if (lVar6 != 0) {
                              lVar6 = *(long *)(lVar6 + 0x20);
                              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
                                return;
                              }
                              if (*(long *)(param_1 + 0x80) != 0) {
                                FUN_02203ccc(*(long *)(param_1 + 0x80),lVar6,
                                             *(undefined8 *)StringLiteral_994);
                                return;
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
          }
        }
      }
    }
  }
LAB_01cb1a80:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


