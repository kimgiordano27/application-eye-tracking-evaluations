/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_EraseSpaces
ENTRY_POINT: 0281dbd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_97_0__ovrp_EraseSpaces(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 unaff_x19;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack000000000000000c;
  
  FUN_0277b678(*unaff_x24,0);
  uStack000000000000000c = 10;
  FUN_0219b9a4();
  puVar1 = PTR_DAT_03cc4e90;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe720,0);
  uStack000000000000000c = 0xb;
  FUN_0219b9a4();
  puVar4 = PTR_DAT_03cfe778;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
  uStack000000000000000c = 0xc;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cf7928,0);
  uStack000000000000000c = 0xd;
  FUN_0219b9a4();
  puVar2 = PTR_DAT_03cc5218;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5218,0);
  uStack000000000000000c = 0xe;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe750,0);
  uStack000000000000000c = 0xf;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
  uStack000000000000000c = 0x10;
  FUN_0219b9a4();
  puVar3 = PTR_DAT_03cfdb48;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe738,0);
  uStack000000000000000c = 0x11;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
  uStack000000000000000c = 0x12;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6f0,0);
  uStack000000000000000c = 0x13;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
  uStack000000000000000c = 0x14;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe758,0);
  uStack000000000000000c = 0x15;
  FUN_0219b9a4();
  FUN_0277b678(*unaff_x29,0);
  uStack000000000000000c = 0x16;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6f8,0);
  uStack000000000000000c = 0x17;
  FUN_0219b9a4();
  FUN_0277b678(*unaff_x28,0);
  uStack000000000000000c = 0x18;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe718,0);
  uStack000000000000000c = 0x19;
  FUN_0219b9a4();
  FUN_0277b678(*unaff_x26,0);
  uStack000000000000000c = 0x1a;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4ae0,0);
  uStack000000000000000c = 0x1b;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5220,0);
  uStack000000000000000c = 0x1c;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe708,0);
  uStack000000000000000c = 0x1d;
  FUN_0219b9a4();
  FUN_0277b678(*unaff_x25,0);
  uStack000000000000000c = 0x1e;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4ad8,0);
  uStack000000000000000c = 0x1f;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc50c8,0);
  uStack000000000000000c = 0x20;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6e8,0);
  uStack000000000000000c = 0x21;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5278,0);
  uStack000000000000000c = 0x22;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe748,0);
  uStack000000000000000c = 0x23;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe680,0);
  uStack000000000000000c = 0x24;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe700,0);
  uStack000000000000000c = 0x25;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5298,0);
  uStack000000000000000c = 0x26;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
  uStack000000000000000c = 0x27;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5210,0);
  uStack000000000000000c = 0x28;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4b28,0);
  uStack000000000000000c = 0x29;
  FUN_0219b9a4();
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar3 + 0xb8));
  plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfe770,0x13);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar1,0);
  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_027b3d9c(lVar8,0);
  *(undefined8 *)(lVar8 + 0x10) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar8 + 0x10),uVar7);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
  if (lVar9 != 0) {
    if ((int)plVar6[3] != 0) {
      plVar6[4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar8);
      uVar7 = FUN_0277b678(*(undefined8 *)puVar1,0);
      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_027b3d9c(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar8 + 0x10),uVar7);
      *(undefined4 *)(lVar8 + 0x18) = 1;
      lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar9 == 0) goto LAB_0281eb40;
      if (1 < *(uint *)(plVar6 + 3)) {
        plVar6[5] = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,lVar8);
        uVar7 = FUN_0277b678(*(undefined8 *)puVar1,0);
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
        FUN_027b3d9c(lVar8,0);
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar8 + 0x10),uVar7);
        *(undefined4 *)(lVar8 + 0x18) = 0x29;
        lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar9 == 0) goto LAB_0281eb40;
        if (2 < *(uint *)(plVar6 + 3)) {
          plVar6[6] = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 6,lVar8);
          uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5208,0);
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
          FUN_027b3d9c(lVar8,0);
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar8 + 0x10),uVar7);
          *(undefined4 *)(lVar8 + 0x18) = 4;
          lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar9 == 0) goto LAB_0281eb40;
          if (3 < *(uint *)(plVar6 + 3)) {
            plVar6[7] = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 7,lVar8);
            uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd74d0,0);
            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
            FUN_027b3d9c(lVar8,0);
            *(undefined8 *)(lVar8 + 0x10) = uVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar8 + 0x10),uVar7);
            *(undefined4 *)(lVar8 + 0x18) = 2;
            lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar9 == 0) goto LAB_0281eb40;
            if (4 < *(uint *)(plVar6 + 3)) {
              plVar6[8] = lVar8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 8,lVar8);
              uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5258,0);
              lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
              FUN_027b3d9c(lVar8,0);
              *(undefined8 *)(lVar8 + 0x10) = uVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar8 + 0x10),uVar7);
              *(undefined4 *)(lVar8 + 0x18) = 6;
              lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
              if (lVar9 == 0) goto LAB_0281eb40;
              if (5 < *(uint *)(plVar6 + 3)) {
                plVar6[9] = lVar8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 9,lVar8);
                uVar7 = FUN_0277b678(*(undefined8 *)puVar2,0);
                lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                FUN_027b3d9c(lVar8,0);
                *(undefined8 *)(lVar8 + 0x10) = uVar7;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar8 + 0x10),uVar7);
                *(undefined4 *)(lVar8 + 0x18) = 0xe;
                lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar9 == 0) goto LAB_0281eb40;
                if (6 < *(uint *)(plVar6 + 3)) {
                  plVar6[10] = lVar8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar6 + 10,lVar8);
                  uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5240,0);
                  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                  FUN_027b3d9c(lVar8,0);
                  *(undefined8 *)(lVar8 + 0x10) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar8 + 0x10),uVar7);
                  *(undefined4 *)(lVar8 + 0x18) = 8;
                  lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar9 == 0) goto LAB_0281eb40;
                  if (7 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xb] = lVar8;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar6 + 0xb,lVar8);
                    uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5280,0);
                    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                    FUN_027b3d9c(lVar8,0);
                    *(undefined8 *)(lVar8 + 0x10) = uVar7;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar8 + 0x10),uVar7);
                    *(undefined4 *)(lVar8 + 0x18) = 10;
                    lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                    if (lVar9 == 0) goto LAB_0281eb40;
                    if (8 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xc] = lVar8;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar6 + 0xc,lVar8);
                      uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
                      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                      FUN_027b3d9c(lVar8,0);
                      *(undefined8 *)(lVar8 + 0x10) = uVar7;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar8 + 0x10),uVar7);
                      *(undefined4 *)(lVar8 + 0x18) = 0xc;
                      lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                      if (lVar9 == 0) goto LAB_0281eb40;
                      if (9 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xd] = lVar8;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar6 + 0xd,lVar8);
                        uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
                        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                        FUN_027b3d9c(lVar8,0);
                        *(undefined8 *)(lVar8 + 0x10) = uVar7;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar8 + 0x10),uVar7);
                        *(undefined4 *)(lVar8 + 0x18) = 0x10;
                        lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                        if (lVar9 == 0) goto LAB_0281eb40;
                        if (10 < *(uint *)(plVar6 + 3)) {
                          plVar6[0xe] = lVar8;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar6 + 0xe,lVar8);
                          uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
                          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                          FUN_027b3d9c(lVar8,0);
                          *(undefined8 *)(lVar8 + 0x10) = uVar7;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar8 + 0x10),uVar7);
                          *(undefined4 *)(lVar8 + 0x18) = 0x12;
                          lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                          if (lVar9 == 0) goto LAB_0281eb40;
                          if (0xb < *(uint *)(plVar6 + 3)) {
                            plVar6[0xf] = lVar8;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar6 + 0xf,lVar8);
                            uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
                            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                            FUN_027b3d9c(lVar8,0);
                            *(undefined8 *)(lVar8 + 0x10) = uVar7;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar8 + 0x10),uVar7);
                            *(undefined4 *)(lVar8 + 0x18) = 0x14;
                            lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                            if (lVar9 == 0) goto LAB_0281eb40;
                            if (0xc < *(uint *)(plVar6 + 3)) {
                              plVar6[0x10] = lVar8;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar6 + 0x10,lVar8);
                              uVar7 = FUN_0277b678(*unaff_x29,0);
                              lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                              FUN_027b3d9c(lVar8,0);
                              *(undefined8 *)(lVar8 + 0x10) = uVar7;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar8 + 0x10),uVar7);
                              *(undefined4 *)(lVar8 + 0x18) = 0x16;
                              lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                              if (lVar9 == 0) goto LAB_0281eb40;
                              if (0xd < *(uint *)(plVar6 + 3)) {
                                plVar6[0x11] = lVar8;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (plVar6 + 0x11,lVar8);
                                uVar7 = FUN_0277b678(*unaff_x28,0);
                                lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                FUN_027b3d9c(lVar8,0);
                                *(undefined8 *)(lVar8 + 0x10) = uVar7;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar8 + 0x10),uVar7);
                                *(undefined4 *)(lVar8 + 0x18) = 0x18;
                                lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                                if (lVar9 == 0) goto LAB_0281eb40;
                                if (0xe < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x12] = lVar8;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar6 + 0x12,lVar8);
                                  uVar7 = FUN_0277b678(*unaff_x25,0);
                                  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                  FUN_027b3d9c(lVar8,0);
                                  *(undefined8 *)(lVar8 + 0x10) = uVar7;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar8 + 0x10),uVar7);
                                  *(undefined4 *)(lVar8 + 0x18) = 0x1e;
                                  lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                                  if (lVar9 == 0) goto LAB_0281eb40;
                                  if (0xf < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x13] = lVar8;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar6 + 0x13,lVar8);
                                    uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
                                    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                    FUN_027b3d9c(lVar8,0);
                                    *(undefined8 *)(lVar8 + 0x10) = uVar7;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar8 + 0x10),uVar7);
                                    *(undefined4 *)(lVar8 + 0x18) = 0x1a;
                                    lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40)
                                                              );
                                    if (lVar9 == 0) goto LAB_0281eb40;
                                    if (0x10 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x14] = lVar8;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (plVar6 + 0x14,lVar8);
                                      uVar7 = FUN_0277b678(*(undefined8 *)puVar1,0);
                                      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                      FUN_027b3d9c(lVar8,0);
                                      *(undefined8 *)(lVar8 + 0x10) = uVar7;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar8 + 0x10),uVar7);
                                      *(undefined4 *)(lVar8 + 0x18) = 0;
                                      lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)
                                                                        (*plVar6 + 0x40));
                                      if (lVar9 == 0) goto LAB_0281eb40;
                                      if (0x11 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x15] = lVar8;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (plVar6 + 0x15,lVar8);
                                        uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
                                        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                        FUN_027b3d9c(lVar8,0);
                                        *(undefined8 *)(lVar8 + 0x10) = uVar7;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar8 + 0x10),uVar7);
                                        *(undefined4 *)(lVar8 + 0x18) = 0x27;
                                        lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)
                                                                          (*plVar6 + 0x40));
                                        puVar5 = PTR_DAT_03cfe768;
                                        puVar4 = PTR_DAT_03cfe760;
                                        puVar2 = PTR_DAT_03cfe6e0;
                                        puVar1 = PTR_DAT_03cfe6d0;
                                        if (lVar9 == 0) goto LAB_0281eb40;
                                        if (0x12 < *(uint *)(plVar6 + 3)) {
                                          plVar6[0x16] = lVar8;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar6 + 0x16,lVar8);
                                          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                          *plVar10 = (long)plVar6;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar10,plVar6);
                                          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                          FUN_021de1ac(uVar7,0,*(undefined8 *)puVar1,0);
                                          uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
                                          FUN_020aff34(uVar11,uVar7,*(undefined8 *)puVar4);
                                          puVar12 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                                          *puVar12 = uVar11;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (puVar12,uVar11);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0281eb40:
  uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar7,0);
}


