/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_DiscoverSpaces
ENTRY_POINT: 0281da38
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


void OVRPlugin_OVRP_1_97_0__ovrp_DiscoverSpaces(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 unaff_x19;
  undefined4 uStack000000000000000c;
  
  puVar9 = PTR_DAT_03cfe740;
  puVar8 = PTR_DAT_03cfe728;
  puVar7 = PTR_DAT_03cc5280;
  puVar6 = PTR_DAT_03cc5260;
  puVar4 = PTR_DAT_03cc5258;
  puVar2 = PTR_DAT_03cc5240;
  puVar5 = PTR_DAT_03cc5238;
  puVar3 = PTR_DAT_03cc5228;
  puVar1 = PTR_DAT_03cc5208;
                    /* try { // try from 0281da48 to 0291da4f has its CatchHandler @ 0281db48 */
                    /* try { // try from 0281da6c to 0291da77 has its CatchHandler @ 0281db4c */
                    /* try { // try from 0281da80 to 0291da9b has its CatchHandler @ 0281db54 */
  uStack000000000000000c = 2;
  FUN_0219b9a4();
                    /* try { // try from 0281daac to 0291dab7 has its CatchHandler @ 0281db50 */
  FUN_0277b678(*(undefined8 *)puVar9,0);
                    /* try { // try from 0281dab8 to 0291db3f has its CatchHandler @ 0281d99c */
  uStack000000000000000c = 3;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar1,0);
  uStack000000000000000c = 4;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar8,0);
  uStack000000000000000c = 5;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar4,0);
  uStack000000000000000c = 6;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe730,0);
  uStack000000000000000c = 7;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar2,0);
  uStack000000000000000c = 8;
  FUN_0219b9a4();
  puVar4 = PTR_DAT_03cc5230;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe710,0);
  uStack000000000000000c = 9;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar7,0);
  uStack000000000000000c = 10;
  FUN_0219b9a4();
  puVar1 = PTR_DAT_03cc4e90;
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe720,0);
  uStack000000000000000c = 0xb;
  FUN_0219b9a4();
  puVar8 = PTR_DAT_03cfe778;
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
  puVar7 = PTR_DAT_03cfdb48;
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
  FUN_0277b678(*(undefined8 *)puVar6,0);
  uStack000000000000000c = 0x16;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6f8,0);
  uStack000000000000000c = 0x17;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar5,0);
  uStack000000000000000c = 0x18;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe718,0);
  uStack000000000000000c = 0x19;
  FUN_0219b9a4();
  FUN_0277b678(*(undefined8 *)puVar3,0);
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
  FUN_0277b678(*(undefined8 *)puVar4,0);
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
  **(undefined8 **)(*(long *)puVar7 + 0xb8) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar7 + 0xb8));
  plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfe770,0x13);
  uVar11 = FUN_0277b678(*(undefined8 *)puVar1,0);
  lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_027b3d9c(lVar12,0);
  *(undefined8 *)(lVar12 + 0x10) = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar12 + 0x10),uVar11);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
  if (lVar13 != 0) {
    if ((int)plVar10[3] != 0) {
      plVar10[4] = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,lVar12);
      uVar11 = FUN_0277b678(*(undefined8 *)puVar1,0);
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
      FUN_027b3d9c(lVar12,0);
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar12 + 0x10),uVar11);
      *(undefined4 *)(lVar12 + 0x18) = 1;
      lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar13 == 0) goto LAB_0281eb40;
      if (1 < *(uint *)(plVar10 + 3)) {
        plVar10[5] = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 5,lVar12);
        uVar11 = FUN_0277b678(*(undefined8 *)puVar1,0);
        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
        FUN_027b3d9c(lVar12,0);
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar12 + 0x10),uVar11);
        *(undefined4 *)(lVar12 + 0x18) = 0x29;
        lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar13 == 0) goto LAB_0281eb40;
        if (2 < *(uint *)(plVar10 + 3)) {
          plVar10[6] = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 6,lVar12);
          uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5208,0);
          lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
          FUN_027b3d9c(lVar12,0);
          *(undefined8 *)(lVar12 + 0x10) = uVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar12 + 0x10),uVar11);
          *(undefined4 *)(lVar12 + 0x18) = 4;
          lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar13 == 0) goto LAB_0281eb40;
          if (3 < *(uint *)(plVar10 + 3)) {
            plVar10[7] = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 7,lVar12);
            uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd74d0,0);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
            FUN_027b3d9c(lVar12,0);
            *(undefined8 *)(lVar12 + 0x10) = uVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar12 + 0x10),uVar11);
            *(undefined4 *)(lVar12 + 0x18) = 2;
            lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar13 == 0) goto LAB_0281eb40;
            if (4 < *(uint *)(plVar10 + 3)) {
              plVar10[8] = lVar12;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 8,lVar12);
              uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5258,0);
              lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
              FUN_027b3d9c(lVar12,0);
              *(undefined8 *)(lVar12 + 0x10) = uVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar12 + 0x10),uVar11);
              *(undefined4 *)(lVar12 + 0x18) = 6;
              lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar13 == 0) goto LAB_0281eb40;
              if (5 < *(uint *)(plVar10 + 3)) {
                plVar10[9] = lVar12;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar10 + 9,lVar12);
                uVar11 = FUN_0277b678(*(undefined8 *)puVar2,0);
                lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                FUN_027b3d9c(lVar12,0);
                *(undefined8 *)(lVar12 + 0x10) = uVar11;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar12 + 0x10),uVar11);
                *(undefined4 *)(lVar12 + 0x18) = 0xe;
                lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar13 == 0) goto LAB_0281eb40;
                if (6 < *(uint *)(plVar10 + 3)) {
                  plVar10[10] = lVar12;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar10 + 10,lVar12);
                  uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5240,0);
                  lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                  FUN_027b3d9c(lVar12,0);
                  *(undefined8 *)(lVar12 + 0x10) = uVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar12 + 0x10),uVar11);
                  *(undefined4 *)(lVar12 + 0x18) = 8;
                  lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                  if (lVar13 == 0) goto LAB_0281eb40;
                  if (7 < *(uint *)(plVar10 + 3)) {
                    plVar10[0xb] = lVar12;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar10 + 0xb,lVar12);
                    uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5280,0);
                    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                    FUN_027b3d9c(lVar12,0);
                    *(undefined8 *)(lVar12 + 0x10) = uVar11;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar12 + 0x10),uVar11);
                    *(undefined4 *)(lVar12 + 0x18) = 10;
                    lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                    if (lVar13 == 0) goto LAB_0281eb40;
                    if (8 < *(uint *)(plVar10 + 3)) {
                      plVar10[0xc] = lVar12;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar10 + 0xc,lVar12);
                      uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
                      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                      FUN_027b3d9c(lVar12,0);
                      *(undefined8 *)(lVar12 + 0x10) = uVar11;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar12 + 0x10),uVar11);
                      *(undefined4 *)(lVar12 + 0x18) = 0xc;
                      lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                      if (lVar13 == 0) goto LAB_0281eb40;
                      if (9 < *(uint *)(plVar10 + 3)) {
                        plVar10[0xd] = lVar12;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar10 + 0xd,lVar12);
                        uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
                        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                        FUN_027b3d9c(lVar12,0);
                        *(undefined8 *)(lVar12 + 0x10) = uVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar12 + 0x10),uVar11);
                        *(undefined4 *)(lVar12 + 0x18) = 0x10;
                        lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                        if (lVar13 == 0) goto LAB_0281eb40;
                        if (10 < *(uint *)(plVar10 + 3)) {
                          plVar10[0xe] = lVar12;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar10 + 0xe,lVar12);
                          uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
                          lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                          FUN_027b3d9c(lVar12,0);
                          *(undefined8 *)(lVar12 + 0x10) = uVar11;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar12 + 0x10),uVar11);
                          *(undefined4 *)(lVar12 + 0x18) = 0x12;
                          lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar13 == 0) goto LAB_0281eb40;
                          if (0xb < *(uint *)(plVar10 + 3)) {
                            plVar10[0xf] = lVar12;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar10 + 0xf,lVar12);
                            uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
                            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                            FUN_027b3d9c(lVar12,0);
                            *(undefined8 *)(lVar12 + 0x10) = uVar11;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar12 + 0x10),uVar11);
                            *(undefined4 *)(lVar12 + 0x18) = 0x14;
                            lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                            if (lVar13 == 0) goto LAB_0281eb40;
                            if (0xc < *(uint *)(plVar10 + 3)) {
                              plVar10[0x10] = lVar12;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar10 + 0x10,lVar12);
                              uVar11 = FUN_0277b678(*(undefined8 *)puVar6,0);
                              lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                              FUN_027b3d9c(lVar12,0);
                              *(undefined8 *)(lVar12 + 0x10) = uVar11;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar12 + 0x10),uVar11);
                              *(undefined4 *)(lVar12 + 0x18) = 0x16;
                              lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40));
                              if (lVar13 == 0) goto LAB_0281eb40;
                              if (0xd < *(uint *)(plVar10 + 3)) {
                                plVar10[0x11] = lVar12;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (plVar10 + 0x11,lVar12);
                                uVar11 = FUN_0277b678(*(undefined8 *)puVar5,0);
                                lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                                FUN_027b3d9c(lVar12,0);
                                *(undefined8 *)(lVar12 + 0x10) = uVar11;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar12 + 0x10),uVar11);
                                *(undefined4 *)(lVar12 + 0x18) = 0x18;
                                lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar10 + 0x40))
                                ;
                                if (lVar13 == 0) goto LAB_0281eb40;
                                if (0xe < *(uint *)(plVar10 + 3)) {
                                  plVar10[0x12] = lVar12;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar10 + 0x12,lVar12);
                                  uVar11 = FUN_0277b678(*(undefined8 *)puVar4,0);
                                  lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                                  FUN_027b3d9c(lVar12,0);
                                  *(undefined8 *)(lVar12 + 0x10) = uVar11;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar12 + 0x10),uVar11);
                                  *(undefined4 *)(lVar12 + 0x18) = 0x1e;
                                  lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)
                                                                      (*plVar10 + 0x40));
                                  if (lVar13 == 0) goto LAB_0281eb40;
                                  if (0xf < *(uint *)(plVar10 + 3)) {
                                    plVar10[0x13] = lVar12;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar10 + 0x13,lVar12);
                                    uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
                                    lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                                    FUN_027b3d9c(lVar12,0);
                                    *(undefined8 *)(lVar12 + 0x10) = uVar11;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar12 + 0x10),uVar11);
                                    *(undefined4 *)(lVar12 + 0x18) = 0x1a;
                                    lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)
                                                                        (*plVar10 + 0x40));
                                    if (lVar13 == 0) goto LAB_0281eb40;
                                    if (0x10 < *(uint *)(plVar10 + 3)) {
                                      plVar10[0x14] = lVar12;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (plVar10 + 0x14,lVar12);
                                      uVar11 = FUN_0277b678(*(undefined8 *)puVar1,0);
                                      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                                      FUN_027b3d9c(lVar12,0);
                                      *(undefined8 *)(lVar12 + 0x10) = uVar11;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar12 + 0x10),uVar11);
                                      *(undefined4 *)(lVar12 + 0x18) = 0;
                                      lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)
                                                                          (*plVar10 + 0x40));
                                      if (lVar13 == 0) goto LAB_0281eb40;
                                      if (0x11 < *(uint *)(plVar10 + 3)) {
                                        plVar10[0x15] = lVar12;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (plVar10 + 0x15,lVar12);
                                        uVar11 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
                                        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                                        FUN_027b3d9c(lVar12,0);
                                        *(undefined8 *)(lVar12 + 0x10) = uVar11;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar12 + 0x10),uVar11);
                                        *(undefined4 *)(lVar12 + 0x18) = 0x27;
                                        lVar13 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)
                                                                            (*plVar10 + 0x40));
                                        puVar4 = PTR_DAT_03cfe768;
                                        puVar3 = PTR_DAT_03cfe760;
                                        puVar2 = PTR_DAT_03cfe6e0;
                                        puVar1 = PTR_DAT_03cfe6d0;
                                        if (lVar13 == 0) goto LAB_0281eb40;
                                        if (0x12 < *(uint *)(plVar10 + 3)) {
                                          plVar10[0x16] = lVar12;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar10 + 0x16,lVar12);
                                          plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                          *plVar14 = (long)plVar10;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar14,plVar10);
                                          uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                          FUN_021de1ac(uVar11,0,*(undefined8 *)puVar1,0);
                                          uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                          FUN_020aff34(uVar15,uVar11,*(undefined8 *)puVar3);
                                          puVar16 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                                          *puVar16 = uVar15;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (puVar16,uVar15);
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
  uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar11,0);
}


