/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 07408344
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar13;
  undefined8 *unaff_x22;
  int *piVar14;
  
  FUN_0701f51c(param_1,*unaff_x20,0);
  if (unaff_x19 != 0) {
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_08eb6438;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = param_1;
        thunk_FUN_03d233cc(puVar7,param_1);
      }
      else {
        FUN_05212cf4();
      }
      uVar8 = FUN_03c8f97c(*unaff_x22,5);
      FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
      lVar11 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_08eb6418;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar8;
          thunk_FUN_03d233cc(puVar7,uVar8);
        }
        else {
          FUN_05212cf4();
        }
        uVar8 = FUN_03c8f97c(*unaff_x22,5);
        FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
        lVar11 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar2 = PTR_DAT_08eb6420;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar8;
            thunk_FUN_03d233cc(puVar7,uVar8);
          }
          else {
            FUN_05212cf4();
          }
          uVar8 = FUN_03c8f97c(*unaff_x22,5);
          FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
          lVar11 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          puVar2 = PTR_DAT_08eb6450;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar8;
              thunk_FUN_03d233cc(puVar7,uVar8);
            }
            else {
              FUN_05212cf4();
            }
            uVar8 = FUN_03c8f97c(*unaff_x22,5);
            FUN_0701f51c(uVar8,*(undefined8 *)puVar2,0);
            lVar11 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            puVar6 = PTR_DAT_08eb6440;
            puVar5 = PTR_DAT_08eb6428;
            puVar4 = PTR_DAT_08eb63f0;
            puVar3 = PTR_DAT_08eb63e8;
            puVar2 = PTR_DAT_08eb1b48;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(unaff_x19 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar7 = uVar8;
                thunk_FUN_03d233cc(puVar7,uVar8);
              }
              else {
                FUN_05212cf4();
              }
              **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
              thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar2 + 0xb8));
              uVar8 = FUN_03c8f97c(*(undefined8 *)puVar3,0x1a);
              FUN_0701f51c(uVar8,*(undefined8 *)puVar6,0);
              puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar7 = uVar8;
              thunk_FUN_03d233cc(puVar7,uVar8);
              uVar8 = FUN_03c8f97c(*unaff_x22,0x1a);
              FUN_0701f51c(uVar8,*(undefined8 *)puVar5,0);
              puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar7 = uVar8;
              thunk_FUN_03d233cc(puVar7,uVar8);
              lVar11 = FUN_03c8f97c(*(undefined8 *)puVar4,0x1a);
              uVar8 = FUN_03c8f97c(*unaff_x22,0);
              puVar3 = PTR_DAT_08eb6448;
              if (lVar11 != 0) {
                if (*(int *)(lVar11 + 0x18) != 0) {
                  *(undefined8 *)(lVar11 + 0x20) = uVar8;
                  thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x20),uVar8);
                  uVar8 = FUN_03c8f97c(*unaff_x22,6);
                  FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                  if (1 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x28) = uVar8;
                    thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x28),uVar8);
                    lVar9 = FUN_03c8f97c(*unaff_x22,1);
                    if (lVar9 == 0) goto LAB_07409440;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined4 *)(lVar9 + 0x20) = 3;
                      if (2 < *(uint *)(lVar11 + 0x18)) {
                        *(long *)(lVar11 + 0x30) = lVar9;
                        thunk_FUN_03d233cc();
                        lVar9 = FUN_03c8f97c(*unaff_x22,1);
                        if (lVar9 == 0) goto LAB_07409440;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined4 *)(lVar9 + 0x20) = 4;
                          if (3 < *(uint *)(lVar11 + 0x18)) {
                            *(long *)(lVar11 + 0x38) = lVar9;
                            thunk_FUN_03d233cc();
                            lVar9 = FUN_03c8f97c(*unaff_x22,1);
                            if (lVar9 == 0) goto LAB_07409440;
                            if (*(int *)(lVar9 + 0x18) != 0) {
                              *(undefined4 *)(lVar9 + 0x20) = 5;
                              if (4 < *(uint *)(lVar11 + 0x18)) {
                                *(long *)(lVar11 + 0x40) = lVar9;
                                thunk_FUN_03d233cc((long *)(lVar11 + 0x40));
                                uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                if (5 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x48) = uVar8;
                                  thunk_FUN_03d233cc();
                                  lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                  if (lVar9 == 0) goto LAB_07409440;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined4 *)(lVar9 + 0x20) = 7;
                                    if (6 < *(uint *)(lVar11 + 0x18)) {
                                      *(long *)(lVar11 + 0x50) = lVar9;
                                      thunk_FUN_03d233cc();
                                      lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                      if (lVar9 == 0) goto LAB_07409440;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        *(undefined4 *)(lVar9 + 0x20) = 8;
                                        if (7 < *(uint *)(lVar11 + 0x18)) {
                                          *(long *)(lVar11 + 0x58) = lVar9;
                                          thunk_FUN_03d233cc();
                                          lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                          if (lVar9 == 0) goto LAB_07409440;
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            *(undefined4 *)(lVar9 + 0x20) = 9;
                                            if (8 < *(uint *)(lVar11 + 0x18)) {
                                              *(long *)(lVar11 + 0x60) = lVar9;
                                              thunk_FUN_03d233cc();
                                              lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                              if (lVar9 == 0) goto LAB_07409440;
                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                *(undefined4 *)(lVar9 + 0x20) = 10;
                                                if (9 < *(uint *)(lVar11 + 0x18)) {
                                                  *(long *)(lVar11 + 0x68) = lVar9;
                                                  thunk_FUN_03d233cc((long *)(lVar11 + 0x68));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x70) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0xc;
                                                      if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                        *(long *)(lVar11 + 0x78) = lVar9;
                                                        thunk_FUN_03d233cc();
                                                        lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar9 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                          if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                            *(long *)(lVar11 + 0x80) = lVar9;
                                                            thunk_FUN_03d233cc();
                                                            lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0xe;
                                                              if (0xd < *(uint *)(lVar11 + 0x18)) {
                                                                *(long *)(lVar11 + 0x88) = lVar9;
                                                                thunk_FUN_03d233cc();
                                                                lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar9 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0xf;
                                                                  if (0xe < *(uint *)(lVar11 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar11 + 0x90) = lVar9
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar11 + 0x90));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (0xf < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x98) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x11;
                                                      if (0x10 < *(uint *)(lVar11 + 0x18)) {
                                                        *(long *)(lVar11 + 0xa0) = lVar9;
                                                        thunk_FUN_03d233cc();
                                                        lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar9 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x12;
                                                          if (0x11 < *(uint *)(lVar11 + 0x18)) {
                                                            *(long *)(lVar11 + 0xa8) = lVar9;
                                                            thunk_FUN_03d233cc();
                                                            lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                                              if (0x12 < *(uint *)(lVar11 + 0x18)) {
                                                                *(long *)(lVar11 + 0xb0) = lVar9;
                                                                thunk_FUN_03d233cc();
                                                                lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar9 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x14;
                                                                  if (0x13 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(long *)(lVar11 + 0xb8) = lVar9
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar11 + 0xb8));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xc0) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_07409440;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x16;
                                                      if (0x15 < *(uint *)(lVar11 + 0x18)) {
                                                        *(long *)(lVar11 + 200) = lVar9;
                                                        thunk_FUN_03d233cc();
                                                        lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                        if (lVar9 == 0) goto LAB_07409440;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x17;
                                                          if (0x16 < *(uint *)(lVar11 + 0x18)) {
                                                            *(long *)(lVar11 + 0xd0) = lVar9;
                                                            thunk_FUN_03d233cc();
                                                            lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_07409440;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x18;
                                                              if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                                *(long *)(lVar11 + 0xd8) = lVar9;
                                                                thunk_FUN_03d233cc();
                                                                lVar9 = FUN_03c8f97c(*unaff_x22,1);
                                                                if (lVar9 == 0) goto LAB_07409440;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(long *)(lVar11 + 0xe0) = lVar9
                                                                    ;
                                                                    thunk_FUN_03d233cc((long *)(
                                                  lVar11 + 0xe0));
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,0);
                                                  puVar4 = PTR_DAT_08eb6410;
                                                  puVar3 = PTR_DAT_08eb6408;
                                                  if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xe8) = uVar8;
                                                    thunk_FUN_03d233cc();
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar10 = lVar11;
                                                    thunk_FUN_03d233cc(plVar10,lVar11);
                                                    lVar11 = thunk_FUN_03cf5234(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_051c29a0(lVar11,*(undefined8 *)puVar3);
                                                    puVar3 = PTR_DAT_08eb6400;
                                                    if (lVar11 != 0) {
                                                      lVar9 = *(long *)PTR_DAT_08eb6400;
                                                      piVar14 = (int *)(lVar11 + 0x1c);
                                                      *piVar14 = *piVar14 + 1;
                                                      lVar12 = *(long *)(lVar11 + 0x10);
                                                      puVar13 = (uint *)(lVar11 + 0x18);
                                                      uVar1 = *puVar13;
                                                      if (lVar12 != 0) {
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *puVar13 = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar12 + (long)(int)uVar1 * 4 + 0x20) =
                                                               6;
                                                          *piVar14 = *piVar14 + 1;
                                                        }
                                                        else {
                                                          FUN_051c31f4(lVar11,6,*(undefined8 *)
                                                                                 (*(long *)(*(long *
                                                  )(lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar12 = *(long *)(lVar11 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar11 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_07409440;
                                                  }
                                                  puVar3 = PTR_DAT_08eb6430;
                                                  uVar1 = *puVar13;
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *puVar13 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_051c31f4(lVar11,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar11;
                                                  thunk_FUN_03d233cc(plVar10,lVar11);
                                                  uVar8 = FUN_03c8f97c(*unaff_x22,5);
                                                  FUN_0701f51c(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar7 = uVar8;
                                                  thunk_FUN_03d233cc(puVar7,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_07409440;
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
                FUN_03c8fb38();
              }
            }
          }
        }
      }
    }
  }
LAB_07409440:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


