/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 051dc820
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


void OVRPlugin_Media__SetPlatformCameraMode(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  uint *puVar12;
  undefined8 *unaff_x21;
  int *piVar13;
  
  lVar10 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_06607ad0;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    }
    else {
      FUN_039683cc();
    }
    uVar8 = FUN_02ce7ad4(*unaff_x21,4);
    FUN_04e5d48c(uVar8,*(undefined8 *)puVar2,0);
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_06607a78;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_039683cc();
      }
      uVar8 = FUN_02ce7ad4(*unaff_x21,4);
      FUN_04e5d48c(uVar8,*(undefined8 *)puVar2,0);
      lVar10 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_06607a88;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_039683cc();
        }
        uVar8 = FUN_02ce7ad4(*unaff_x21,4);
        FUN_04e5d48c(uVar8,*(undefined8 *)puVar2,0);
        lVar10 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar2 = PTR_DAT_06609150;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_039683cc();
          }
          uVar8 = FUN_02ce7ad4(*unaff_x21,5);
          FUN_04e5d48c(uVar8,*(undefined8 *)puVar2,0);
          lVar10 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          puVar7 = PTR_DAT_06609170;
          puVar6 = PTR_DAT_06609160;
          puVar5 = PTR_DAT_06609158;
          puVar4 = PTR_DAT_06609138;
          puVar3 = PTR_DAT_06607a58;
          puVar2 = PTR_DAT_06604b58;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            }
            else {
              FUN_039683cc();
            }
            **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
            uVar8 = FUN_02ce7ad4(*(undefined8 *)puVar4,0x18);
            FUN_04e5d48c(uVar8,*(undefined8 *)puVar7,0);
            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar8;
            uVar8 = FUN_02ce7ad4(*unaff_x21,0x18);
            FUN_04e5d48c(uVar8,*(undefined8 *)puVar6,0);
            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar8;
            lVar10 = FUN_02ce7ad4(*(undefined8 *)puVar3,0x18);
            uVar8 = FUN_02ce7ad4(*unaff_x21,6);
            FUN_04e5d48c(uVar8,*(undefined8 *)puVar5,0);
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x18) != 0) {
                *(undefined8 *)(lVar10 + 0x20) = uVar8;
                uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                if (1 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x28) = uVar8;
                  lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                  if (lVar9 == 0) goto LAB_051dd630;
                  if (*(int *)(lVar9 + 0x18) != 0) {
                    *(undefined4 *)(lVar9 + 0x20) = 3;
                    if (2 < *(uint *)(lVar10 + 0x18)) {
                      *(long *)(lVar10 + 0x30) = lVar9;
                      lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                      if (lVar9 == 0) goto LAB_051dd630;
                      if (*(int *)(lVar9 + 0x18) != 0) {
                        *(undefined4 *)(lVar9 + 0x20) = 4;
                        if (3 < *(uint *)(lVar10 + 0x18)) {
                          *(long *)(lVar10 + 0x38) = lVar9;
                          lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                          if (lVar9 == 0) goto LAB_051dd630;
                          if (*(int *)(lVar9 + 0x18) != 0) {
                            *(undefined4 *)(lVar9 + 0x20) = 5;
                            if (4 < *(uint *)(lVar10 + 0x18)) {
                              *(long *)(lVar10 + 0x40) = lVar9;
                              lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                              if (lVar9 == 0) goto LAB_051dd630;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                if (5 < *(uint *)(lVar10 + 0x18)) {
                                  *(long *)(lVar10 + 0x48) = lVar9;
                                  lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                  if (lVar9 == 0) goto LAB_051dd630;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined4 *)(lVar9 + 0x20) = 7;
                                    if (6 < *(uint *)(lVar10 + 0x18)) {
                                      *(long *)(lVar10 + 0x50) = lVar9;
                                      lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                      if (lVar9 == 0) goto LAB_051dd630;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        *(undefined4 *)(lVar9 + 0x20) = 8;
                                        if (7 < *(uint *)(lVar10 + 0x18)) {
                                          *(long *)(lVar10 + 0x58) = lVar9;
                                          lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                          if (lVar9 == 0) goto LAB_051dd630;
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            *(undefined4 *)(lVar9 + 0x20) = 0x14;
                                            if (8 < *(uint *)(lVar10 + 0x18)) {
                                              *(long *)(lVar10 + 0x60) = lVar9;
                                              lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                              if (lVar9 == 0) goto LAB_051dd630;
                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                *(undefined4 *)(lVar9 + 0x20) = 10;
                                                if (9 < *(uint *)(lVar10 + 0x18)) {
                                                  *(long *)(lVar10 + 0x68) = lVar9;
                                                  lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar9 + 0x20) = 0xb;
                                                    if (10 < *(uint *)(lVar10 + 0x18)) {
                                                      *(long *)(lVar10 + 0x70) = lVar9;
                                                      lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                      if (lVar9 == 0) goto LAB_051dd630;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar9 + 0x20) = 0x15;
                                                        if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                          *(long *)(lVar10 + 0x78) = lVar9;
                                                          lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                          if (lVar9 == 0) goto LAB_051dd630;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                            if (0xc < *(uint *)(lVar10 + 0x18)) {
                                                              *(long *)(lVar10 + 0x80) = lVar9;
                                                              lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                              if (lVar9 == 0) goto LAB_051dd630;
                                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar9 + 0x20) = 0xe;
                                                                if (0xd < *(uint *)(lVar10 + 0x18))
                                                                {
                                                                  *(long *)(lVar10 + 0x88) = lVar9;
                                                                  lVar9 = FUN_02ce7ad4(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar9 == 0) goto LAB_051dd630;
                                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar9 + 0x20) =
                                                                         0x16;
                                                                    if (0xe < *(uint *)(lVar10 + 
                                                  0x18)) {
                                                    *(long *)(lVar10 + 0x90) = lVar9;
                                                    lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar9 == 0) goto LAB_051dd630;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x10;
                                                      if (0xf < *(uint *)(lVar10 + 0x18)) {
                                                        *(long *)(lVar10 + 0x98) = lVar9;
                                                        lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar9 == 0) goto LAB_051dd630;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x11;
                                                          if (0x10 < *(uint *)(lVar10 + 0x18)) {
                                                            *(long *)(lVar10 + 0xa0) = lVar9;
                                                            lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar9 == 0) goto LAB_051dd630;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x12;
                                                              if (0x11 < *(uint *)(lVar10 + 0x18)) {
                                                                *(long *)(lVar10 + 0xa8) = lVar9;
                                                                lVar9 = FUN_02ce7ad4(*unaff_x21,1);
                                                                if (lVar9 == 0) goto LAB_051dd630;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x17;
                                                                  if (0x12 < *(uint *)(lVar10 + 0x18
                                                                                      )) {
                                                                    *(long *)(lVar10 + 0xb0) = lVar9
                                                                    ;
                                                                    uVar8 = FUN_02ce7ad4(*unaff_x21,
                                                                                         0);
                                                                    if (0x13 < *(uint *)(lVar10 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xb8) = uVar8;
                                                    uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                    if (0x14 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0xc0) = uVar8;
                                                      uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                      if (0x15 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 200) = uVar8;
                                                        uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                        if (0x16 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0xd0) = uVar8;
                                                          uVar8 = FUN_02ce7ad4(*unaff_x21,0);
                                                          if (0x17 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0xd8) = uVar8;
                                                            puVar3 = PTR_DAT_06607bb0;
                                                            *(long *)(*(long *)(*(long *)puVar2 +
                                                                               0xb8) + 0x18) =
                                                                 lVar10;
                                                            puVar4 = PTR_DAT_06607c08;
                                                            lVar10 = thunk_FUN_02cea894(*(undefined8
                                                                                          *)puVar3);
                                                            FUN_03920118(lVar10,*(undefined8 *)
                                                                                 puVar4);
                                                            puVar3 = PTR_DAT_06609148;
                                                            if (lVar10 != 0) {
                                                              lVar9 = *(long *)PTR_DAT_06609148;
                                                              piVar13 = (int *)(lVar10 + 0x1c);
                                                              *piVar13 = *piVar13 + 1;
                                                              lVar11 = *(long *)(lVar10 + 0x10);
                                                              puVar12 = (uint *)(lVar10 + 0x18);
                                                              uVar1 = *puVar12;
                                                              if (lVar11 != 0) {
                                                                if (uVar1 < *(uint *)(lVar11 + 0x18)
                                                                   ) {
                                                                  *puVar12 = uVar1 + 1;
                                                                  *(undefined4 *)
                                                                   (lVar11 + (long)(int)uVar1 * 4 +
                                                                   0x20) = 6;
                                                                  *piVar13 = *piVar13 + 1;
                                                                }
                                                                else {
                                                                  FUN_03920910(lVar10,6,*(undefined8
                                                                                          *)(*(long 
                                                  *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_051dd630;
                                                  }
                                                  puVar3 = PTR_DAT_06609168;
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar10,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar10;
                                                  uVar8 = FUN_02ce7ad4(*unaff_x21,5);
                                                  FUN_04e5d48c(uVar8,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar8;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_051dd630;
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
          }
        }
      }
    }
  }
LAB_051dd630:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


