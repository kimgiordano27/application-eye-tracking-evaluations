/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_SetInsightPassthroughStyle2
ENTRY_POINT: 090d553c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2(long param_1,undefined8 param_2)

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
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_049ee3d8();
  lVar4 = FUN_04947fd0(*unaff_x22,1);
  if (lVar4 == 0) goto LAB_090d615c;
  if (*(int *)(lVar4 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(lVar4 + 0x20) = 3;
    if (2 < uVar1) {
      *(long *)(unaff_x19 + 0x30) = lVar4;
      thunk_FUN_049ee3d8();
      lVar4 = FUN_04947fd0(*unaff_x22,1);
      if (lVar4 == 0) goto LAB_090d615c;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 4;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(long *)(unaff_x19 + 0x38) = lVar4;
          thunk_FUN_049ee3d8();
          lVar4 = FUN_04947fd0(*unaff_x22,1);
          if (lVar4 == 0) goto LAB_090d615c;
          if (*(int *)(lVar4 + 0x18) != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            *(undefined4 *)(lVar4 + 0x20) = 5;
            if (4 < uVar1) {
              *(long *)(unaff_x19 + 0x40) = lVar4;
              thunk_FUN_049ee3d8();
              lVar4 = FUN_04947fd0(*unaff_x22,1);
              if (lVar4 == 0) goto LAB_090d615c;
              if (*(int *)(lVar4 + 0x18) != 0) {
                uVar1 = *(uint *)(unaff_x19 + 0x18);
                *(undefined4 *)(lVar4 + 0x20) = 0x13;
                if (5 < uVar1) {
                  *(long *)(unaff_x19 + 0x48) = lVar4;
                  thunk_FUN_049ee3d8();
                  lVar4 = FUN_04947fd0(*unaff_x22,1);
                  if (lVar4 == 0) goto LAB_090d615c;
                  if (*(int *)(lVar4 + 0x18) != 0) {
                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                    *(undefined4 *)(lVar4 + 0x20) = 7;
                    if (6 < uVar1) {
                      *(long *)(unaff_x19 + 0x50) = lVar4;
                      thunk_FUN_049ee3d8();
                      lVar4 = FUN_04947fd0(*unaff_x22,1);
                      if (lVar4 == 0) goto LAB_090d615c;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined4 *)(lVar4 + 0x20) = 8;
                        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                          *(long *)(unaff_x19 + 0x58) = lVar4;
                          thunk_FUN_049ee3d8();
                          lVar4 = FUN_04947fd0(*unaff_x22,1);
                          if (lVar4 == 0) goto LAB_090d615c;
                          if (*(int *)(lVar4 + 0x18) != 0) {
                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                            *(undefined4 *)(lVar4 + 0x20) = 0x14;
                            if (8 < uVar1) {
                              *(long *)(unaff_x19 + 0x60) = lVar4;
                              thunk_FUN_049ee3d8();
                              lVar4 = FUN_04947fd0(*unaff_x22,1);
                              if (lVar4 == 0) goto LAB_090d615c;
                              if (*(int *)(lVar4 + 0x18) != 0) {
                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                *(undefined4 *)(lVar4 + 0x20) = 10;
                                if (9 < uVar1) {
                                  *(long *)(unaff_x19 + 0x68) = lVar4;
                                  thunk_FUN_049ee3d8();
                                  lVar4 = FUN_04947fd0(*unaff_x22,1);
                                  if (lVar4 == 0) goto LAB_090d615c;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                                    *(undefined4 *)(lVar4 + 0x20) = 0xb;
                                    if (10 < uVar1) {
                                      *(long *)(unaff_x19 + 0x70) = lVar4;
                                      thunk_FUN_049ee3d8();
                                      lVar4 = FUN_04947fd0(*unaff_x22,1);
                                      if (lVar4 == 0) goto LAB_090d615c;
                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                        uVar1 = *(uint *)(unaff_x19 + 0x18);
                                        *(undefined4 *)(lVar4 + 0x20) = 0x15;
                                        if (0xb < uVar1) {
                                          *(long *)(unaff_x19 + 0x78) = lVar4;
                                          thunk_FUN_049ee3d8();
                                          lVar4 = FUN_04947fd0(*unaff_x22,1);
                                          if (lVar4 == 0) goto LAB_090d615c;
                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                                            *(undefined4 *)(lVar4 + 0x20) = 0xd;
                                            if (0xc < uVar1) {
                                              *(long *)(unaff_x19 + 0x80) = lVar4;
                                              thunk_FUN_049ee3d8();
                                              lVar4 = FUN_04947fd0(*unaff_x22,1);
                                              if (lVar4 == 0) goto LAB_090d615c;
                                              if (*(int *)(lVar4 + 0x18) != 0) {
                                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                *(undefined4 *)(lVar4 + 0x20) = 0xe;
                                                if (0xd < uVar1) {
                                                  *(long *)(unaff_x19 + 0x88) = lVar4;
                                                  thunk_FUN_049ee3d8();
                                                  lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                  if (lVar4 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                    *(undefined4 *)(lVar4 + 0x20) = 0x16;
                                                    if (0xe < uVar1) {
                                                      *(long *)(unaff_x19 + 0x90) = lVar4;
                                                      thunk_FUN_049ee3d8();
                                                      lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                      if (lVar4 == 0) goto LAB_090d615c;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar4 + 0x20) = 0x10;
                                                        if ((*(uint *)(unaff_x19 + 0x18) &
                                                            0xfffffff0) != 0) {
                                                          *(long *)(unaff_x19 + 0x98) = lVar4;
                                                          thunk_FUN_049ee3d8();
                                                          lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                          if (lVar4 == 0) goto LAB_090d615c;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                            *(undefined4 *)(lVar4 + 0x20) = 0x11;
                                                            if (0x10 < uVar1) {
                                                              *(long *)(unaff_x19 + 0xa0) = lVar4;
                                                              thunk_FUN_049ee3d8();
                                                              lVar4 = FUN_04947fd0(*unaff_x22,1);
                                                              if (lVar4 == 0) goto LAB_090d615c;
                                                              if (*(int *)(lVar4 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                                *(undefined4 *)(lVar4 + 0x20) = 0x12
                                                                ;
                                                                if (0x11 < uVar1) {
                                                                  *(long *)(unaff_x19 + 0xa8) =
                                                                       lVar4;
                                                                  thunk_FUN_049ee3d8();
                                                                  lVar4 = FUN_04947fd0(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar4 == 0) goto LAB_090d615c;
                                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(unaff_x19 +
                                                                                     0x18);
                                                                    *(undefined4 *)(lVar4 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < uVar1) {
                                                                      *(long *)(unaff_x19 + 0xb0) =
                                                                           lVar4;
                                                                      thunk_FUN_049ee3d8((long *)(
                                                  unaff_x19 + 0xb0));
                                                  uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
                                                    thunk_FUN_049ee3d8((undefined8 *)
                                                                       (unaff_x19 + 0xb8),uVar5);
                                                    uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (unaff_x19 + 0xc0),uVar5);
                                                      uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 200) = uVar5;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (unaff_x19 + 200),uVar5);
                                                        uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xd0) = uVar5;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (unaff_x19 + 0xd0),
                                                                             uVar5);
                                                          uVar5 = FUN_04947fd0(*unaff_x22,0);
                                                          puVar3 = PTR_DAT_0ac798d0;
                                                          puVar2 = PTR_DAT_0ac798c8;
                                                          if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xd8) =
                                                                 uVar5;
                                                            thunk_FUN_049ee3d8();
                                                            *(long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                     0x18) = unaff_x19;
                                                            thunk_FUN_049ee3d8();
                                                            lVar4 = thunk_FUN_04983f60(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_06b13594(lVar4,*(undefined8 *)puVar2
                                                                        );
                                                            puVar2 = PTR_DAT_0ac798b8;
                                                            if (lVar4 != 0) {
                                                              lVar8 = *(long *)(lVar4 + 0x10);
                                                              lVar9 = *(long *)PTR_DAT_0ac798b8;
                                                              *(int *)(lVar4 + 0x1c) =
                                                                   *(int *)(lVar4 + 0x1c) + 1;
                                                              if (lVar8 != 0) {
                                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                                if (uVar1 < *(uint *)(lVar8 + 0x18))
                                                                {
                                                                  *(uint *)(lVar4 + 0x18) =
                                                                       uVar1 + 1;
                                                                  *(undefined4 *)
                                                                   (lVar8 + (long)(int)uVar1 * 4 +
                                                                   0x20) = 6;
                                                                  *(int *)(lVar4 + 0x1c) =
                                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                                }
                                                                else {
                                                                  FUN_06b13e24(lVar4,6,*(undefined8
                                                                                         *)(*(long *
                                                  )(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_090d615c;
                                                  }
                                                  puVar2 = PTR_DAT_0ac79908;
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar4,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar6 = lVar4;
                                                  thunk_FUN_049ee3d8(plVar6,lVar4);
                                                  uVar5 = FUN_04947fd0(*unaff_x22,5);
                                                  FUN_08c82ec4(uVar5,*(undefined8 *)puVar2,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar7 = uVar5;
                                                  thunk_FUN_049ee3d8(puVar7,uVar5);
                                                  return;
                                                  }
                                                  }
LAB_090d615c:
                    /* WARNING: Subroutine does not return */
                                                  FUN_0494818c();
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
  FUN_04948194();
}


