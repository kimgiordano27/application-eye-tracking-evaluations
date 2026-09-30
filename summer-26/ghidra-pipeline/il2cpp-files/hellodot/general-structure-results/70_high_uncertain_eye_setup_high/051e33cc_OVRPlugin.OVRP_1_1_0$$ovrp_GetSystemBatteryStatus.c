/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryStatus
ENTRY_POINT: 051e33cc
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  uint *puVar11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  int *piVar12;
  
  FUN_04e5d48c(param_1,*unaff_x23,0);
  lVar9 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_06609370;
  if (lVar9 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = param_1;
    }
    else {
      FUN_039683cc();
    }
    uVar7 = FUN_02ce7ad4(*unaff_x21,5);
    FUN_04e5d48c(uVar7,*(undefined8 *)puVar2,0);
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_06609378;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_039683cc();
      }
      uVar7 = FUN_02ce7ad4(*unaff_x21,5);
      FUN_04e5d48c(uVar7,*(undefined8 *)puVar2,0);
      lVar9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_066093a8;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        }
        else {
          FUN_039683cc();
        }
        uVar7 = FUN_02ce7ad4(*unaff_x21,5);
        FUN_04e5d48c(uVar7,*(undefined8 *)puVar2,0);
        lVar9 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar6 = PTR_DAT_06609398;
        puVar5 = PTR_DAT_06609380;
        puVar4 = PTR_DAT_06609348;
        puVar3 = PTR_DAT_06609340;
        puVar2 = PTR_DAT_06604b60;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_039683cc();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          uVar7 = FUN_02ce7ad4(*(undefined8 *)puVar3,0x1a);
          FUN_04e5d48c(uVar7,*(undefined8 *)puVar6,0);
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar7;
          uVar7 = FUN_02ce7ad4(*unaff_x21,0x1a);
          FUN_04e5d48c(uVar7,*(undefined8 *)puVar5,0);
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar7;
          lVar9 = FUN_02ce7ad4(*(undefined8 *)puVar4,0x1a);
          uVar7 = FUN_02ce7ad4(*unaff_x21,0);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined8 *)(lVar9 + 0x20) = uVar7;
              puVar3 = PTR_DAT_066093a0;
              uVar7 = FUN_02ce7ad4(*unaff_x21,6);
              FUN_04e5d48c(uVar7,*(undefined8 *)puVar3,0);
              if (1 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x28) = uVar7;
                lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                if (lVar8 == 0) goto LAB_051e4298;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined4 *)(lVar8 + 0x20) = 3;
                  if (2 < *(uint *)(lVar9 + 0x18)) {
                    *(long *)(lVar9 + 0x30) = lVar8;
                    lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                    if (lVar8 == 0) goto LAB_051e4298;
                    if (*(int *)(lVar8 + 0x18) != 0) {
                      *(undefined4 *)(lVar8 + 0x20) = 4;
                      if (3 < *(uint *)(lVar9 + 0x18)) {
                        *(long *)(lVar9 + 0x38) = lVar8;
                        lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                        if (lVar8 == 0) goto LAB_051e4298;
                        if (*(int *)(lVar8 + 0x18) != 0) {
                          *(undefined4 *)(lVar8 + 0x20) = 5;
                          if (4 < *(uint *)(lVar9 + 0x18)) {
                            *(long *)(lVar9 + 0x40) = lVar8;
                            uVar7 = FUN_02ce7ad4(*unaff_x21,0);
                            if (5 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x48) = uVar7;
                              lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                              if (lVar8 == 0) goto LAB_051e4298;
                              if (*(int *)(lVar8 + 0x18) != 0) {
                                *(undefined4 *)(lVar8 + 0x20) = 7;
                                if (6 < *(uint *)(lVar9 + 0x18)) {
                                  *(long *)(lVar9 + 0x50) = lVar8;
                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                  if (lVar8 == 0) goto LAB_051e4298;
                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                    *(undefined4 *)(lVar8 + 0x20) = 8;
                                    if (7 < *(uint *)(lVar9 + 0x18)) {
                                      *(long *)(lVar9 + 0x58) = lVar8;
                                      lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                      if (lVar8 == 0) goto LAB_051e4298;
                                      if (*(int *)(lVar8 + 0x18) != 0) {
                                        *(undefined4 *)(lVar8 + 0x20) = 9;
                                        if (8 < *(uint *)(lVar9 + 0x18)) {
                                          *(long *)(lVar9 + 0x60) = lVar8;
                                          lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                          if (lVar8 == 0) goto LAB_051e4298;
                                          if (*(int *)(lVar8 + 0x18) != 0) {
                                            *(undefined4 *)(lVar8 + 0x20) = 10;
                                            if (9 < *(uint *)(lVar9 + 0x18)) {
                                              *(long *)(lVar9 + 0x68) = lVar8;
                                              uVar7 = FUN_02ce7ad4(*unaff_x21,0);
                                              if (10 < *(uint *)(lVar9 + 0x18)) {
                                                *(undefined8 *)(lVar9 + 0x70) = uVar7;
                                                lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                if (lVar8 == 0) goto LAB_051e4298;
                                                if (*(int *)(lVar8 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar8 + 0x20) = 0xc;
                                                  if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                    *(long *)(lVar9 + 0x78) = lVar8;
                                                    lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar8 == 0) goto LAB_051e4298;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0xd;
                                                      if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                        *(long *)(lVar9 + 0x80) = lVar8;
                                                        lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar8 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar8 + 0x20) = 0xe;
                                                          if (0xd < *(uint *)(lVar9 + 0x18)) {
                                                            *(long *)(lVar9 + 0x88) = lVar8;
                                                            lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar8 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar8 + 0x20) = 0xf;
                                                              if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                                *(long *)(lVar9 + 0x90) = lVar8;
                                                                uVar7 = FUN_02ce7ad4(*unaff_x21,0);
                                                                if (0xf < *(uint *)(lVar9 + 0x18)) {
                                                                  *(undefined8 *)(lVar9 + 0x98) =
                                                                       uVar7;
                                                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar8 == 0) goto LAB_051e4298;
                                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar8 + 0x20) =
                                                                         0x11;
                                                                    if (0x10 < *(uint *)(lVar9 + 
                                                  0x18)) {
                                                    *(long *)(lVar9 + 0xa0) = lVar8;
                                                    lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar8 == 0) goto LAB_051e4298;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0x12;
                                                      if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                        *(long *)(lVar9 + 0xa8) = lVar8;
                                                        lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar8 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar8 + 0x20) = 0x13;
                                                          if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                            *(long *)(lVar9 + 0xb0) = lVar8;
                                                            lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar8 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar8 + 0x20) = 0x14;
                                                              if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                                *(long *)(lVar9 + 0xb8) = lVar8;
                                                                uVar7 = FUN_02ce7ad4(*unaff_x21,0);
                                                                if (0x14 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0xc0) =
                                                                       uVar7;
                                                                  lVar8 = FUN_02ce7ad4(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar8 == 0) goto LAB_051e4298;
                                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar8 + 0x20) =
                                                                         0x16;
                                                                    if (0x15 < *(uint *)(lVar9 + 
                                                  0x18)) {
                                                    *(long *)(lVar9 + 200) = lVar8;
                                                    lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                    if (lVar8 == 0) goto LAB_051e4298;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0x17;
                                                      if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                        *(long *)(lVar9 + 0xd0) = lVar8;
                                                        lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                        if (lVar8 == 0) goto LAB_051e4298;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar8 + 0x20) = 0x18;
                                                          if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                            *(long *)(lVar9 + 0xd8) = lVar8;
                                                            lVar8 = FUN_02ce7ad4(*unaff_x21,1);
                                                            if (lVar8 == 0) goto LAB_051e4298;
                                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar8 + 0x20) = 0x19;
                                                              if (0x18 < *(uint *)(lVar9 + 0x18)) {
                                                                *(long *)(lVar9 + 0xe0) = lVar8;
                                                                uVar7 = FUN_02ce7ad4(*unaff_x21,0);
                                                                if (0x19 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0xe8) =
                                                                       uVar7;
                                                                  puVar4 = PTR_DAT_06609368;
                                                                  *(long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18) = lVar9;
                                                  puVar3 = PTR_DAT_06609360;
                                                  lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
                                                  FUN_03920118(lVar9,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_06609358;
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)PTR_DAT_06609358;
                                                    piVar12 = (int *)(lVar9 + 0x1c);
                                                    *piVar12 = *piVar12 + 1;
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    puVar11 = (uint *)(lVar9 + 0x18);
                                                    uVar1 = *puVar11;
                                                    if (lVar10 != 0) {
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *puVar11 = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *piVar12 = *piVar12 + 1;
                                                      }
                                                      else {
                                                        FUN_03920910(lVar9,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar12 = *piVar12 + 1;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_051e4298;
                                                  }
                                                  puVar3 = PTR_DAT_06609388;
                                                  uVar1 = *puVar11;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar11 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_03920910(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar9;
                                                  uVar7 = FUN_02ce7ad4(*unaff_x21,5);
                                                  FUN_04e5d48c(uVar7,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar7;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_051e4298;
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
        }
      }
    }
  }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


