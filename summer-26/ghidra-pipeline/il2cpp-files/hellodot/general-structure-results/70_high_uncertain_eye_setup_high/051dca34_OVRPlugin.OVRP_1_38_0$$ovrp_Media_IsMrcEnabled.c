/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 051dca34
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *puVar10;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *piVar11;
  undefined8 *unaff_x26;
  
  puVar5 = PTR_DAT_06609170;
  puVar4 = PTR_DAT_06609160;
  puVar3 = PTR_DAT_06609158;
  puVar2 = PTR_DAT_06607a58;
  if ((uint)in_x10 < in_w11) {
    *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x20;
  }
  else {
    FUN_039683cc();
  }
  **(long **)(*unaff_x22 + 0xb8) = unaff_x19;
  uVar6 = FUN_02ce7ad4(*unaff_x26,0x18);
  FUN_04e5d48c(uVar6,*(undefined8 *)puVar5,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = uVar6;
  uVar6 = FUN_02ce7ad4(*unaff_x21,0x18);
  FUN_04e5d48c(uVar6,*(undefined8 *)puVar4,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar6;
  lVar7 = FUN_02ce7ad4(*(undefined8 *)puVar2,0x18);
  uVar6 = FUN_02ce7ad4(*unaff_x21,6);
  FUN_04e5d48c(uVar6,*(undefined8 *)puVar3,0);
  if (lVar7 == 0) goto LAB_051dd630;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    uVar6 = FUN_02ce7ad4(*unaff_x21,0);
    if (1 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      lVar8 = FUN_02ce7ad4(*unaff_x21,1);
      if (lVar8 == 0) goto LAB_051dd630;
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined4 *)(lVar8 + 0x20) = 3;
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(long *)(lVar7 + 0x30) = lVar8;
          lVar8 = FUN_02ce7ad4(*unaff_x21,1);
          if (lVar8 == 0) goto LAB_051dd630;
          if (*(int *)(lVar8 + 0x18) != 0) {
            *(undefined4 *)(lVar8 + 0x20) = 4;
            if (3 < *(uint *)(lVar7 + 0x18)) {
              *(long *)(lVar7 + 0x38) = lVar8;
              lVar8 = FUN_02ce7ad4(*unaff_x21,1);
              if (lVar8 == 0) goto LAB_051dd630;
              if (*(int *)(lVar8 + 0x18) != 0) {
                *(undefined4 *)(lVar8 + 0x20) = 5;
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  *(long *)(lVar7 + 0x40) = lVar8;
                  lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                  if (lVar8 == 0) goto LAB_051dd630;
                  if (*(int *)(lVar8 + 0x18) != 0) {
                    *(undefined4 *)(lVar8 + 0x20) = 0x13;
                    if (5 < *(uint *)(lVar7 + 0x18)) {
                      *(long *)(lVar7 + 0x48) = lVar8;
                      lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                      if (lVar8 == 0) goto LAB_051dd630;
                      if (*(int *)(lVar8 + 0x18) != 0) {
                        *(undefined4 *)(lVar8 + 0x20) = 7;
                        if (6 < *(uint *)(lVar7 + 0x18)) {
                          *(long *)(lVar7 + 0x50) = lVar8;
                          lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                          if (lVar8 == 0) goto LAB_051dd630;
                          if (*(int *)(lVar8 + 0x18) != 0) {
                            *(undefined4 *)(lVar8 + 0x20) = 8;
                            if (7 < *(uint *)(lVar7 + 0x18)) {
                              *(long *)(lVar7 + 0x58) = lVar8;
                              lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                              if (lVar8 == 0) goto LAB_051dd630;
                              if (*(int *)(lVar8 + 0x18) != 0) {
                                *(undefined4 *)(lVar8 + 0x20) = 0x14;
                                if (8 < *(uint *)(lVar7 + 0x18)) {
                                  *(long *)(lVar7 + 0x60) = lVar8;
                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                  if (lVar8 == 0) goto LAB_051dd630;
                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                    *(undefined4 *)(lVar8 + 0x20) = 10;
                                    if (9 < *(uint *)(lVar7 + 0x18)) {
                                      *(long *)(lVar7 + 0x68) = lVar8;
                                      lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                      if (lVar8 == 0) goto LAB_051dd630;
                                      if (*(int *)(lVar8 + 0x18) != 0) {
                                        *(undefined4 *)(lVar8 + 0x20) = 0xb;
                                        if (10 < *(uint *)(lVar7 + 0x18)) {
                                          *(long *)(lVar7 + 0x70) = lVar8;
                                          lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                          if (lVar8 == 0) goto LAB_051dd630;
                                          if (*(int *)(lVar8 + 0x18) != 0) {
                                            *(undefined4 *)(lVar8 + 0x20) = 0x15;
                                            if (0xb < *(uint *)(lVar7 + 0x18)) {
                                              *(long *)(lVar7 + 0x78) = lVar8;
                                              lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                              if (lVar8 == 0) goto LAB_051dd630;
                                              if (*(int *)(lVar8 + 0x18) != 0) {
                                                *(undefined4 *)(lVar8 + 0x20) = 0xd;
                                                if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                  *(long *)(lVar7 + 0x80) = lVar8;
                                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                  if (lVar8 == 0) goto LAB_051dd630;
                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar8 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                      *(long *)(lVar7 + 0x88) = lVar8;
                                                      lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                      if (lVar8 == 0) goto LAB_051dd630;
                                                      if (*(int *)(lVar8 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar8 + 0x20) = 0x16;
                                                        if (0xe < *(uint *)(lVar7 + 0x18)) {
                                                          *(long *)(lVar7 + 0x90) = lVar8;
                                                          lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                          if (lVar8 == 0) goto LAB_051dd630;
                                                          if (*(int *)(lVar8 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar8 + 0x20) = 0x10;
                                                            if (0xf < *(uint *)(lVar7 + 0x18)) {
                                                              *(long *)(lVar7 + 0x98) = lVar8;
                                                              lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                              if (lVar8 == 0) goto LAB_051dd630;
                                                              if (*(int *)(lVar8 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar8 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < *(uint *)(lVar7 + 0x18))
                                                                {
                                                                  *(long *)(lVar7 + 0xa0) = lVar8;
                                                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar8 == 0) goto LAB_051dd630;
                                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar8 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < *(uint *)(lVar7 + 
                                                  0x18)) {
                                                    *(long *)(lVar7 + 0xa8) = lVar8;
                                                    lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar8 == 0) goto LAB_051dd630;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0x17;
                                                      if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                        *(long *)(lVar7 + 0xb0) = lVar8;
                                                        uVar6 = FUN_02ce7ad4(*unaff_x21,0);
                                                        if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0xb8) = uVar6;
                                                          uVar6 = FUN_02ce7ad4(*unaff_x21,0);
                                                          if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0xc0) = uVar6;
                                                            uVar6 = FUN_02ce7ad4(*unaff_x21,0);
                                                            if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined8 *)(lVar7 + 200) = uVar6;
                                                              uVar6 = FUN_02ce7ad4(*unaff_x21,0);
                                                              if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                                *(undefined8 *)(lVar7 + 0xd0) =
                                                                     uVar6;
                                                                uVar6 = FUN_02ce7ad4(*unaff_x21,0);
                                                                if (0x17 < *(uint *)(lVar7 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar7 + 0xd8) =
                                                                       uVar6;
                                                                  puVar2 = PTR_DAT_06607bb0;
                                                                  *(long *)(*(long *)(*unaff_x22 +
                                                                                     0xb8) + 0x18) =
                                                                       lVar7;
                                                                  puVar3 = PTR_DAT_06607c08;
                                                                  lVar7 = thunk_FUN_02cea894(*(
                                                  undefined8 *)puVar2);
                                                  FUN_03920118(lVar7,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_06609148;
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)PTR_DAT_06609148;
                                                    piVar11 = (int *)(lVar7 + 0x1c);
                                                    *piVar11 = *piVar11 + 1;
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    puVar10 = (uint *)(lVar7 + 0x18);
                                                    uVar1 = *puVar10;
                                                    if (lVar9 != 0) {
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *puVar10 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar11 = *piVar11 + 1;
                                                      }
                                                      else {
                                                        FUN_03920910(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  }
                                                  puVar2 = PTR_DAT_06609168;
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar7,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) =
                                                       lVar7;
                                                  uVar6 = FUN_02ce7ad4(*unaff_x21,5);
                                                  FUN_04e5d48c(uVar6,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar6;
                                                  return;
                                                  }
                                                  }
LAB_051dd630:
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


