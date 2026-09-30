/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 090d54a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_08c82ec4(param_1,*unaff_x25,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar4 = param_1;
  thunk_FUN_049ee3d8(puVar4,param_1);
  lVar5 = FUN_04947fd0(*unaff_x24,0x18);
  uVar6 = FUN_04947fd0(*unaff_x22,6);
  FUN_08c82ec4(uVar6,*unaff_x21,0);
  if (lVar5 == 0) goto LAB_090d615c;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_049ee3d8((undefined8 *)(lVar5 + 0x20),uVar6);
    uVar6 = FUN_04947fd0(*unaff_x22,0);
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      thunk_FUN_049ee3d8();
      lVar7 = FUN_04947fd0(*unaff_x22,1);
      if (lVar7 == 0) goto LAB_090d615c;
      if (*(int *)(lVar7 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(lVar5 + 0x30) = lVar7;
          thunk_FUN_049ee3d8();
          lVar7 = FUN_04947fd0(*unaff_x22,1);
          if (lVar7 == 0) goto LAB_090d615c;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(lVar5 + 0x38) = lVar7;
              thunk_FUN_049ee3d8();
              lVar7 = FUN_04947fd0(*unaff_x22,1);
              if (lVar7 == 0) goto LAB_090d615c;
              if (*(int *)(lVar7 + 0x18) != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(lVar5 + 0x40) = lVar7;
                  thunk_FUN_049ee3d8();
                  lVar7 = FUN_04947fd0(*unaff_x22,1);
                  if (lVar7 == 0) goto LAB_090d615c;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < uVar1) {
                      *(long *)(lVar5 + 0x48) = lVar7;
                      thunk_FUN_049ee3d8();
                      lVar7 = FUN_04947fd0(*unaff_x22,1);
                      if (lVar7 == 0) goto LAB_090d615c;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                        if (6 < uVar1) {
                          *(long *)(lVar5 + 0x50) = lVar7;
                          thunk_FUN_049ee3d8();
                          lVar7 = FUN_04947fd0(*unaff_x22,1);
                          if (lVar7 == 0) goto LAB_090d615c;
                          if (*(int *)(lVar7 + 0x18) != 0) {
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) != 0) {
                              *(long *)(lVar5 + 0x58) = lVar7;
                              thunk_FUN_049ee3d8();
                              lVar7 = FUN_04947fd0(*unaff_x22,1);
                              if (lVar7 == 0) goto LAB_090d615c;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                                if (8 < uVar1) {
                                  *(long *)(lVar5 + 0x60) = lVar7;
                                  thunk_FUN_049ee3d8();
                                  lVar7 = FUN_04947fd0(*unaff_x22,1);
                                  if (lVar7 == 0) goto LAB_090d615c;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                                    if (9 < uVar1) {
                                      *(long *)(lVar5 + 0x68) = lVar7;
                                      thunk_FUN_049ee3d8();
                                      lVar7 = FUN_04947fd0(*unaff_x22,1);
                                      if (lVar7 == 0) goto LAB_090d615c;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < uVar1) {
                                          *(long *)(lVar5 + 0x70) = lVar7;
                                          thunk_FUN_049ee3d8();
                                          lVar7 = FUN_04947fd0(*unaff_x22,1);
                                          if (lVar7 == 0) goto LAB_090d615c;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar5 + 0x78) = lVar7;
                                              thunk_FUN_049ee3d8();
                                              lVar7 = FUN_04947fd0(*unaff_x22,1);
                                              if (lVar7 == 0) goto LAB_090d615c;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar5 + 0x80) = lVar7;
                                                  thunk_FUN_049ee3d8();
                                                  lVar7 = FUN_04947fd0(*unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar5 + 0x88) = lVar7;
                                                      thunk_FUN_049ee3d8();
                                                      lVar7 = FUN_04947fd0(*unaff_x22,1);
                                                      if (lVar7 == 0) goto LAB_090d615c;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar5 + 0x90) = lVar7;
                                                          thunk_FUN_049ee3d8();
                                                          lVar7 = FUN_04947fd0(*unaff_x22,1);
                                                          if (lVar7 == 0) goto LAB_090d615c;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                            if ((*(uint *)(lVar5 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(long *)(lVar5 + 0x98) = lVar7;
                                                              thunk_FUN_049ee3d8();
                                                              lVar7 = FUN_04947fd0(*unaff_x22,1);
                                                              if (lVar7 == 0) goto LAB_090d615c;
                                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                                *(undefined4 *)(lVar7 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < uVar1) {
                                                                  *(long *)(lVar5 + 0xa0) = lVar7;
                                                                  thunk_FUN_049ee3d8();
                                                                  lVar7 = FUN_04947fd0(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                                    *(undefined4 *)(lVar7 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < uVar1) {
                                                                      *(long *)(lVar5 + 0xa8) =
                                                                           lVar7;
                                                                      thunk_FUN_049ee3d8();
                                                                      lVar7 = FUN_04947fd0(*
                                                  unaff_x22,1);
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < uVar1) {
                                                      *(long *)(lVar5 + 0xb0) = lVar7;
                                                      thunk_FUN_049ee3d8((long *)(lVar5 + 0xb0));
                                                      uVar6 = FUN_04947fd0(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0xb8) = uVar6;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar5 + 0xb8),uVar6);
                                                        uVar6 = FUN_04947fd0(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0xc0) = uVar6;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar5 + 0xc0),uVar6);
                                                          uVar6 = FUN_04947fd0(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 200) = uVar6;
                                                            thunk_FUN_049ee3d8((undefined8 *)
                                                                               (lVar5 + 200),uVar6);
                                                            uVar6 = FUN_04947fd0(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                              *(undefined8 *)(lVar5 + 0xd0) = uVar6;
                                                              thunk_FUN_049ee3d8((undefined8 *)
                                                                                 (lVar5 + 0xd0),
                                                                                 uVar6);
                                                              uVar6 = FUN_04947fd0(*unaff_x22,0);
                                                              puVar3 = PTR_DAT_0ac798d0;
                                                              puVar2 = PTR_DAT_0ac798c8;
                                                              if (0x17 < *(uint *)(lVar5 + 0x18)) {
                                                                *(undefined8 *)(lVar5 + 0xd8) =
                                                                     uVar6;
                                                                thunk_FUN_049ee3d8();
                                                                plVar8 = (long *)(*(long *)(*
                                                  unaff_x23 + 0xb8) + 0x18);
                                                  *plVar8 = lVar5;
                                                  thunk_FUN_049ee3d8(plVar8,lVar5);
                                                  lVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                                                  FUN_06b13594(lVar5,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_0ac798b8;
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_0ac798b8;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_06b13e24(lVar5,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_090d615c;
                                                  }
                                                  puVar2 = PTR_DAT_0ac79908;
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar5,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar8 = lVar5;
                                                  thunk_FUN_049ee3d8(plVar8,lVar5);
                                                  uVar6 = FUN_04947fd0(*unaff_x22,5);
                                                  FUN_08c82ec4(uVar6,*(undefined8 *)puVar2,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar4 = uVar6;
                                                  thunk_FUN_049ee3d8(puVar4,uVar6);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


