/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_ShowSystemUI
ENTRY_POINT: 051e35e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_ShowSystemUI(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  uint *puVar8;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int *piVar9;
  
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
  uVar4 = FUN_02ce7ad4(*unaff_x21,0x1a);
  FUN_04e5d48c(uVar4,*unaff_x24,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar4;
  lVar5 = FUN_02ce7ad4(*unaff_x23,0x1a);
  uVar4 = FUN_02ce7ad4(*unaff_x21,0);
  if (lVar5 == 0) goto LAB_051e4298;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    puVar2 = PTR_DAT_066093a0;
    uVar4 = FUN_02ce7ad4(*unaff_x21,6);
    FUN_04e5d48c(uVar4,*(undefined8 *)puVar2,0);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = uVar4;
      lVar6 = FUN_02ce7ad4(*unaff_x21,1);
      if (lVar6 == 0) goto LAB_051e4298;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined4 *)(lVar6 + 0x20) = 3;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(long *)(lVar5 + 0x30) = lVar6;
          lVar6 = FUN_02ce7ad4(*unaff_x21,1);
          if (lVar6 == 0) goto LAB_051e4298;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = 4;
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(long *)(lVar5 + 0x38) = lVar6;
              lVar6 = FUN_02ce7ad4(*unaff_x21,1);
              if (lVar6 == 0) goto LAB_051e4298;
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(undefined4 *)(lVar6 + 0x20) = 5;
                if (4 < *(uint *)(lVar5 + 0x18)) {
                  *(long *)(lVar5 + 0x40) = lVar6;
                  uVar4 = FUN_02ce7ad4(*unaff_x21,0);
                  if (5 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x48) = uVar4;
                    lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                    if (lVar6 == 0) goto LAB_051e4298;
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined4 *)(lVar6 + 0x20) = 7;
                      if (6 < *(uint *)(lVar5 + 0x18)) {
                        *(long *)(lVar5 + 0x50) = lVar6;
                        lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                        if (lVar6 == 0) goto LAB_051e4298;
                        if (*(int *)(lVar6 + 0x18) != 0) {
                          *(undefined4 *)(lVar6 + 0x20) = 8;
                          if (7 < *(uint *)(lVar5 + 0x18)) {
                            *(long *)(lVar5 + 0x58) = lVar6;
                            lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                            if (lVar6 == 0) goto LAB_051e4298;
                            if (*(int *)(lVar6 + 0x18) != 0) {
                              *(undefined4 *)(lVar6 + 0x20) = 9;
                              if (8 < *(uint *)(lVar5 + 0x18)) {
                                *(long *)(lVar5 + 0x60) = lVar6;
                                lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                if (lVar6 == 0) goto LAB_051e4298;
                                if (*(int *)(lVar6 + 0x18) != 0) {
                                  *(undefined4 *)(lVar6 + 0x20) = 10;
                                  if (9 < *(uint *)(lVar5 + 0x18)) {
                                    *(long *)(lVar5 + 0x68) = lVar6;
                                    uVar4 = FUN_02ce7ad4(*unaff_x21,0);
                                    if (10 < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x70) = uVar4;
                                      lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                      if (lVar6 == 0) goto LAB_051e4298;
                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                        *(undefined4 *)(lVar6 + 0x20) = 0xc;
                                        if (0xb < *(uint *)(lVar5 + 0x18)) {
                                          *(long *)(lVar5 + 0x78) = lVar6;
                                          lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                          if (lVar6 == 0) goto LAB_051e4298;
                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                            *(undefined4 *)(lVar6 + 0x20) = 0xd;
                                            if (0xc < *(uint *)(lVar5 + 0x18)) {
                                              *(long *)(lVar5 + 0x80) = lVar6;
                                              lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                              if (lVar6 == 0) goto LAB_051e4298;
                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                *(undefined4 *)(lVar6 + 0x20) = 0xe;
                                                if (0xd < *(uint *)(lVar5 + 0x18)) {
                                                  *(long *)(lVar5 + 0x88) = lVar6;
                                                  lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                  if (lVar6 == 0) goto LAB_051e4298;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xf;
                                                    if (0xe < *(uint *)(lVar5 + 0x18)) {
                                                      *(long *)(lVar5 + 0x90) = lVar6;
                                                      uVar4 = FUN_02ce7ad4(*unaff_x21,0);
                                                      if (0xf < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x98) = uVar4;
                                                        lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar6 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar6 + 0x20) = 0x11;
                                                          if (0x10 < *(uint *)(lVar5 + 0x18)) {
                                                            *(long *)(lVar5 + 0xa0) = lVar6;
                                                            lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar6 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar6 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar6 + 0x20) = 0x12;
                                                              if (0x11 < *(uint *)(lVar5 + 0x18)) {
                                                                *(long *)(lVar5 + 0xa8) = lVar6;
                                                                lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                                if (lVar6 == 0) goto LAB_051e4298;
                                                                if (*(int *)(lVar6 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar6 + 0x20) =
                                                                       0x13;
                                                                  if (0x12 < *(uint *)(lVar5 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar5 + 0xb0) = lVar6;
                                                                    lVar6 = FUN_02ce7ad4(*unaff_x21,
                                                                                         1);
                                                                    if (lVar6 == 0)
                                                                    goto LAB_051e4298;
                                                                    if (*(int *)(lVar6 + 0x18) != 0)
                                                                    {
                                                                      *(undefined4 *)(lVar6 + 0x20)
                                                                           = 0x14;
                                                                      if (0x13 < *(uint *)(lVar5 + 
                                                  0x18)) {
                                                    *(long *)(lVar5 + 0xb8) = lVar6;
                                                    uVar4 = FUN_02ce7ad4(*unaff_x21,0);
                                                    if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0xc0) = uVar4;
                                                      lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                      if (lVar6 == 0) goto LAB_051e4298;
                                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar6 + 0x20) = 0x16;
                                                        if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                                          *(long *)(lVar5 + 200) = lVar6;
                                                          lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                          if (lVar6 == 0) goto LAB_051e4298;
                                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar6 + 0x20) = 0x17;
                                                            if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                              *(long *)(lVar5 + 0xd0) = lVar6;
                                                              lVar6 = FUN_02ce7ad4(*unaff_x21,1);
                                                              if (lVar6 == 0) goto LAB_051e4298;
                                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar6 + 0x20) = 0x18
                                                                ;
                                                                if (0x17 < *(uint *)(lVar5 + 0x18))
                                                                {
                                                                  *(long *)(lVar5 + 0xd8) = lVar6;
                                                                  lVar6 = FUN_02ce7ad4(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar6 == 0) goto LAB_051e4298;
                                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar6 + 0x20) =
                                                                         0x19;
                                                                    if (0x18 < *(uint *)(lVar5 + 
                                                  0x18)) {
                                                    *(long *)(lVar5 + 0xe0) = lVar6;
                                                    uVar4 = FUN_02ce7ad4(*unaff_x21,0);
                                                    if (0x19 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0xe8) = uVar4;
                                                      puVar3 = PTR_DAT_06609368;
                                                      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18)
                                                           = lVar5;
                                                      puVar2 = PTR_DAT_06609360;
                                                      lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_03920118(lVar5,*(undefined8 *)puVar2);
                                                      puVar2 = PTR_DAT_06609358;
                                                      if (lVar5 != 0) {
                                                        lVar6 = *(long *)PTR_DAT_06609358;
                                                        piVar9 = (int *)(lVar5 + 0x1c);
                                                        *piVar9 = *piVar9 + 1;
                                                        lVar7 = *(long *)(lVar5 + 0x10);
                                                        puVar8 = (uint *)(lVar5 + 0x18);
                                                        uVar1 = *puVar8;
                                                        if (lVar7 != 0) {
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *puVar8 = uVar1 + 1;
                                                            *(undefined4 *)
                                                             (lVar7 + (long)(int)uVar1 * 4 + 0x20) =
                                                                 6;
                                                            *piVar9 = *piVar9 + 1;
                                                          }
                                                          else {
                                                            FUN_03920910(lVar5,6,*(undefined8 *)
                                                                                  (*(long *)(*(long 
                                                  *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    lVar6 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar9 = *piVar9 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  lVar6 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_051e4298;
                                                  }
                                                  puVar2 = PTR_DAT_06609388;
                                                  uVar1 = *puVar8;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *puVar8 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) =
                                                       lVar5;
                                                  uVar4 = FUN_02ce7ad4(*unaff_x21,5);
                                                  FUN_04e5d48c(uVar4,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar4;
                                                  return;
                                                  }
                                                  }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
                                                  FUN_02ce7c7c();
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
  FUN_02ce7c84();
}


