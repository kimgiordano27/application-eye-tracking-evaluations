/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 07a5ad98
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (param_1 == 0) goto LAB_07a5b6d4;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0x16;
    if (0xe < uVar1) {
      *(long *)(unaff_x19 + 0x90) = param_1;
      thunk_FUN_040ec700();
      lVar4 = FUN_04077674(*unaff_x22,1);
      if (lVar4 == 0) goto LAB_07a5b6d4;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 0x10;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
          *(long *)(unaff_x19 + 0x98) = lVar4;
          thunk_FUN_040ec700();
          lVar4 = FUN_04077674(*unaff_x22,1);
          if (lVar4 == 0) goto LAB_07a5b6d4;
          if (*(int *)(lVar4 + 0x18) != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            *(undefined4 *)(lVar4 + 0x20) = 0x11;
            if (0x10 < uVar1) {
              *(long *)(unaff_x19 + 0xa0) = lVar4;
              thunk_FUN_040ec700();
              lVar4 = FUN_04077674(*unaff_x22,1);
              if (lVar4 == 0) goto LAB_07a5b6d4;
              if (*(int *)(lVar4 + 0x18) != 0) {
                uVar1 = *(uint *)(unaff_x19 + 0x18);
                *(undefined4 *)(lVar4 + 0x20) = 0x12;
                if (0x11 < uVar1) {
                  *(long *)(unaff_x19 + 0xa8) = lVar4;
                  thunk_FUN_040ec700();
                  lVar4 = FUN_04077674(*unaff_x22,1);
                  if (lVar4 == 0) goto LAB_07a5b6d4;
                  if (*(int *)(lVar4 + 0x18) != 0) {
                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                    *(undefined4 *)(lVar4 + 0x20) = 0x17;
                    if (0x12 < uVar1) {
                      *(long *)(unaff_x19 + 0xb0) = lVar4;
                      thunk_FUN_040ec700((long *)(unaff_x19 + 0xb0));
                      uVar5 = FUN_04077674(*unaff_x22,0);
                      if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
                        thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xb8),uVar5);
                        uVar5 = FUN_04077674(*unaff_x22,0);
                        if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
                          thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xc0),uVar5);
                          uVar5 = FUN_04077674(*unaff_x22,0);
                          if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 200) = uVar5;
                            thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 200),uVar5);
                            uVar5 = FUN_04077674(*unaff_x22,0);
                            if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0xd0) = uVar5;
                              thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xd0),uVar5);
                              uVar5 = FUN_04077674(*unaff_x22,0);
                              puVar3 = PTR_DAT_092ef4d8;
                              puVar2 = PTR_DAT_092ef480;
                              if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
                                thunk_FUN_040ec700();
                                *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
                                thunk_FUN_040ec700();
                                lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                                FUN_05bcc4ec(lVar4,*(undefined8 *)puVar3);
                                puVar2 = PTR_DAT_092f0a58;
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *(long *)PTR_DAT_092f0a58;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,6,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,7,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,8,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,9,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,10,*(undefined8 *)
                                                             (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                       0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0xb,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0xc,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0xd,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0xe,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0xf,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0x10,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0x11,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,0x12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,2,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,4,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                      lVar8 = *(long *)(lVar4 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar8 == 0) goto LAB_07a5b6d4;
                                    }
                                    puVar2 = PTR_DAT_092f0a78;
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                    }
                                    else {
                                      FUN_05bccd7c(lVar4,5,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                                    *plVar6 = lVar4;
                                    thunk_FUN_040ec700(plVar6,lVar4);
                                    uVar5 = FUN_04077674(*unaff_x22,5);
                                    FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
                                    puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                    *puVar7 = uVar5;
                                    thunk_FUN_040ec700(puVar7,uVar5);
                                    return;
                                  }
                                }
LAB_07a5b6d4:
                    /* WARNING: Subroutine does not return */
                                FUN_04077830();
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
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


