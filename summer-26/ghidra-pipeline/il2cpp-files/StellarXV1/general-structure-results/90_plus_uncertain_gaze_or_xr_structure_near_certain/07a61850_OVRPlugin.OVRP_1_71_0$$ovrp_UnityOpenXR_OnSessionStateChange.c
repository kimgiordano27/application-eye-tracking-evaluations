/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 07a61850
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  uVar4 = FUN_04077674(*unaff_x22,0);
  puVar2 = PTR_DAT_092f0cc0;
  if (param_1 == 0) goto LAB_07a6261c;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_040ec700((undefined8 *)(param_1 + 0x20),uVar4);
    uVar4 = FUN_04077674(*unaff_x22,6);
    FUN_07593f88(uVar4,*(undefined8 *)puVar2,0);
    if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      thunk_FUN_040ec700((undefined8 *)(param_1 + 0x28),uVar4);
      lVar5 = FUN_04077674(*unaff_x22,1);
      if (lVar5 == 0) goto LAB_07a6261c;
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        *(undefined4 *)(lVar5 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(param_1 + 0x30) = lVar5;
          thunk_FUN_040ec700();
          lVar5 = FUN_04077674(*unaff_x22,1);
          if (lVar5 == 0) goto LAB_07a6261c;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = 4;
            if ((*(uint *)(param_1 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(param_1 + 0x38) = lVar5;
              thunk_FUN_040ec700();
              lVar5 = FUN_04077674(*unaff_x22,1);
              if (lVar5 == 0) goto LAB_07a6261c;
              if (*(int *)(lVar5 + 0x18) != 0) {
                uVar1 = *(uint *)(param_1 + 0x18);
                *(undefined4 *)(lVar5 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(param_1 + 0x40) = lVar5;
                  thunk_FUN_040ec700((long *)(param_1 + 0x40));
                  uVar4 = FUN_04077674(*unaff_x22,0);
                  if (5 < *(uint *)(param_1 + 0x18)) {
                    *(undefined8 *)(param_1 + 0x48) = uVar4;
                    thunk_FUN_040ec700();
                    lVar5 = FUN_04077674(*unaff_x22,1);
                    if (lVar5 == 0) goto LAB_07a6261c;
                    if (*(int *)(lVar5 + 0x18) != 0) {
                      uVar1 = *(uint *)(param_1 + 0x18);
                      *(undefined4 *)(lVar5 + 0x20) = 7;
                      if (6 < uVar1) {
                        *(long *)(param_1 + 0x50) = lVar5;
                        thunk_FUN_040ec700();
                        lVar5 = FUN_04077674(*unaff_x22,1);
                        if (lVar5 == 0) goto LAB_07a6261c;
                        if (*(int *)(lVar5 + 0x18) != 0) {
                          *(undefined4 *)(lVar5 + 0x20) = 8;
                          if ((*(uint *)(param_1 + 0x18) & 0xfffffff8) != 0) {
                            *(long *)(param_1 + 0x58) = lVar5;
                            thunk_FUN_040ec700();
                            lVar5 = FUN_04077674(*unaff_x22,1);
                            if (lVar5 == 0) goto LAB_07a6261c;
                            if (*(int *)(lVar5 + 0x18) != 0) {
                              uVar1 = *(uint *)(param_1 + 0x18);
                              *(undefined4 *)(lVar5 + 0x20) = 9;
                              if (8 < uVar1) {
                                *(long *)(param_1 + 0x60) = lVar5;
                                thunk_FUN_040ec700();
                                lVar5 = FUN_04077674(*unaff_x22,1);
                                if (lVar5 == 0) goto LAB_07a6261c;
                                if (*(int *)(lVar5 + 0x18) != 0) {
                                  uVar1 = *(uint *)(param_1 + 0x18);
                                  *(undefined4 *)(lVar5 + 0x20) = 10;
                                  if (9 < uVar1) {
                                    *(long *)(param_1 + 0x68) = lVar5;
                                    thunk_FUN_040ec700((long *)(param_1 + 0x68));
                                    uVar4 = FUN_04077674(*unaff_x22,0);
                                    if (10 < *(uint *)(param_1 + 0x18)) {
                                      *(undefined8 *)(param_1 + 0x70) = uVar4;
                                      thunk_FUN_040ec700();
                                      lVar5 = FUN_04077674(*unaff_x22,1);
                                      if (lVar5 == 0) goto LAB_07a6261c;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        uVar1 = *(uint *)(param_1 + 0x18);
                                        *(undefined4 *)(lVar5 + 0x20) = 0xc;
                                        if (0xb < uVar1) {
                                          *(long *)(param_1 + 0x78) = lVar5;
                                          thunk_FUN_040ec700();
                                          lVar5 = FUN_04077674(*unaff_x22,1);
                                          if (lVar5 == 0) goto LAB_07a6261c;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            uVar1 = *(uint *)(param_1 + 0x18);
                                            *(undefined4 *)(lVar5 + 0x20) = 0xd;
                                            if (0xc < uVar1) {
                                              *(long *)(param_1 + 0x80) = lVar5;
                                              thunk_FUN_040ec700();
                                              lVar5 = FUN_04077674(*unaff_x22,1);
                                              if (lVar5 == 0) goto LAB_07a6261c;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                uVar1 = *(uint *)(param_1 + 0x18);
                                                *(undefined4 *)(lVar5 + 0x20) = 0xe;
                                                if (0xd < uVar1) {
                                                  *(long *)(param_1 + 0x88) = lVar5;
                                                  thunk_FUN_040ec700();
                                                  lVar5 = FUN_04077674(*unaff_x22,1);
                                                  if (lVar5 == 0) goto LAB_07a6261c;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    *(undefined4 *)(lVar5 + 0x20) = 0xf;
                                                    if (0xe < uVar1) {
                                                      *(long *)(param_1 + 0x90) = lVar5;
                                                      thunk_FUN_040ec700((long *)(param_1 + 0x90));
                                                      uVar4 = FUN_04077674(*unaff_x22,0);
                                                      if ((*(uint *)(param_1 + 0x18) & 0xfffffff0)
                                                          != 0) {
                                                        *(undefined8 *)(param_1 + 0x98) = uVar4;
                                                        thunk_FUN_040ec700();
                                                        lVar5 = FUN_04077674(*unaff_x22,1);
                                                        if (lVar5 == 0) goto LAB_07a6261c;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(param_1 + 0x18);
                                                          *(undefined4 *)(lVar5 + 0x20) = 0x11;
                                                          if (0x10 < uVar1) {
                                                            *(long *)(param_1 + 0xa0) = lVar5;
                                                            thunk_FUN_040ec700();
                                                            lVar5 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar5 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(param_1 + 0x18);
                                                              *(undefined4 *)(lVar5 + 0x20) = 0x12;
                                                              if (0x11 < uVar1) {
                                                                *(long *)(param_1 + 0xa8) = lVar5;
                                                                thunk_FUN_040ec700();
                                                                lVar5 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar5 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar5 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(param_1 + 0x18);
                                                                  *(undefined4 *)(lVar5 + 0x20) =
                                                                       0x13;
                                                                  if (0x12 < uVar1) {
                                                                    *(long *)(param_1 + 0xb0) =
                                                                         lVar5;
                                                                    thunk_FUN_040ec700();
                                                                    lVar5 = FUN_04077674(*unaff_x22,
                                                                                         1);
                                                                    if (lVar5 == 0)
                                                                    goto LAB_07a6261c;
                                                                    if (*(int *)(lVar5 + 0x18) != 0)
                                                                    {
                                                                      uVar1 = *(uint *)(param_1 +
                                                                                       0x18);
                                                                      *(undefined4 *)(lVar5 + 0x20)
                                                                           = 0x14;
                                                                      if (0x13 < uVar1) {
                                                                        *(long *)(param_1 + 0xb8) =
                                                                             lVar5;
                                                                        thunk_FUN_040ec700((long *)(
                                                  param_1 + 0xb8));
                                                  uVar4 = FUN_04077674(*unaff_x22,0);
                                                  if (0x14 < *(uint *)(param_1 + 0x18)) {
                                                    *(undefined8 *)(param_1 + 0xc0) = uVar4;
                                                    thunk_FUN_040ec700();
                                                    lVar5 = FUN_04077674(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_07a6261c;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(param_1 + 0x18);
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x16;
                                                      if (0x15 < uVar1) {
                                                        *(long *)(param_1 + 200) = lVar5;
                                                        thunk_FUN_040ec700();
                                                        lVar5 = FUN_04077674(*unaff_x22,1);
                                                        if (lVar5 == 0) goto LAB_07a6261c;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(param_1 + 0x18);
                                                          *(undefined4 *)(lVar5 + 0x20) = 0x17;
                                                          if (0x16 < uVar1) {
                                                            *(long *)(param_1 + 0xd0) = lVar5;
                                                            thunk_FUN_040ec700();
                                                            lVar5 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar5 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(param_1 + 0x18);
                                                              *(undefined4 *)(lVar5 + 0x20) = 0x18;
                                                              if (0x17 < uVar1) {
                                                                *(long *)(param_1 + 0xd8) = lVar5;
                                                                thunk_FUN_040ec700();
                                                                lVar5 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar5 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar5 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(param_1 + 0x18);
                                                                  *(undefined4 *)(lVar5 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < uVar1) {
                                                                    *(long *)(param_1 + 0xe0) =
                                                                         lVar5;
                                                                    thunk_FUN_040ec700((long *)(
                                                  param_1 + 0xe0));
                                                  uVar4 = FUN_04077674(*unaff_x22,0);
                                                  puVar3 = PTR_DAT_092f0c88;
                                                  puVar2 = PTR_DAT_092f0c80;
                                                  if (0x19 < *(uint *)(param_1 + 0x18)) {
                                                    *(undefined8 *)(param_1 + 0xe8) = uVar4;
                                                    thunk_FUN_040ec700();
                                                    plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                     0x18);
                                                    *plVar6 = param_1;
                                                    thunk_FUN_040ec700(plVar6,param_1);
                                                    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05bcc4ec(lVar5,*(undefined8 *)puVar2);
                                                    puVar2 = PTR_DAT_092f0c78;
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      lVar9 = *(long *)PTR_DAT_092f0c78;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6
                                                          ;
                                                          *(int *)(lVar5 + 0x1c) =
                                                               *(int *)(lVar5 + 0x1c) + 1;
                                                        }
                                                        else {
                                                          FUN_05bccd7c(lVar5,6,*(undefined8 *)
                                                                                (*(long *)(*(long *)
                                                  (lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_07a6261c;
                                                  }
                                                  puVar2 = PTR_DAT_092f0ca8;
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar6 = lVar5;
                                                  thunk_FUN_040ec700(plVar6,lVar5);
                                                  uVar4 = FUN_04077674(*unaff_x22,5);
                                                  FUN_07593f88(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar7 = uVar4;
                                                  thunk_FUN_040ec700(puVar7,uVar4);
                                                  return;
                                                  }
                                                  }
LAB_07a6261c:
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


