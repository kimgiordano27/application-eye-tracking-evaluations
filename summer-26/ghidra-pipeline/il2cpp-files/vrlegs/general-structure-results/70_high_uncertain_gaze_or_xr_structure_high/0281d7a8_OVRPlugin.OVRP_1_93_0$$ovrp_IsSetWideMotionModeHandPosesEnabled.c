/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_IsSetWideMotionModeHandPosesEnabled
ENTRY_POINT: 0281d7a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_possible_biometrics_hits_2
*/


void OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(void)

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
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar17;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cc5218);
  FUN_01ab69ac(PTR_DAT_03cd74d0);
  FUN_01ab69ac(PTR_DAT_03cfe6d0);
  FUN_01ab69ac(PTR_DAT_03cfdb48);
  FUN_01ab69ac(PTR_DAT_03cf4b28);
  FUN_01ab69ac(PTR_DAT_03cc5220);
  FUN_01ab69ac(PTR_DAT_03cc5228);
  FUN_01ab69ac(PTR_DAT_03cc5230);
  FUN_01ab69ac(PTR_DAT_03cfe6d8);
  FUN_01ab69ac(PTR_DAT_03cfe6c8);
  FUN_01ab69ac(PTR_DAT_03cfe6c0);
  FUN_01ab69ac(PTR_DAT_03cc5238);
  FUN_01ab69ac(PTR_DAT_03cfe6e0);
  FUN_01ab69ac(PTR_DAT_03cc50c8);
  FUN_01ab69ac(PTR_DAT_03cc5240);
  FUN_01ab69ac(PTR_DAT_03cc5248);
  FUN_01ab69ac(PTR_DAT_03cc5250);
  FUN_01ab69ac(PTR_DAT_03cf4ad8);
  FUN_01ab69ac(PTR_DAT_03cfe6e8);
  FUN_01ab69ac(PTR_DAT_03cfe6f0);
  FUN_01ab69ac(PTR_DAT_03cfe6f8);
  FUN_01ab69ac(PTR_DAT_03cfe700);
  FUN_01ab69ac(PTR_DAT_03cfe708);
  FUN_01ab69ac(PTR_DAT_03cfe710);
  FUN_01ab69ac(PTR_DAT_03cfe718);
  FUN_01ab69ac(PTR_DAT_03cfe720);
  FUN_01ab69ac(PTR_DAT_03cfe728);
  FUN_01ab69ac(PTR_DAT_03cfe730);
  FUN_01ab69ac(PTR_DAT_03cf7928);
  FUN_01ab69ac(PTR_DAT_03cfe738);
  FUN_01ab69ac(PTR_DAT_03cfe740);
  FUN_01ab69ac(PTR_DAT_03cfe748);
  FUN_01ab69ac(PTR_DAT_03cf4ae0);
  FUN_01ab69ac(PTR_DAT_03cfe750);
  FUN_01ab69ac(PTR_DAT_03cfe758);
  FUN_01ab69ac(PTR_DAT_03cc4e90);
  FUN_01ab69ac(PTR_DAT_03cc5258);
  FUN_01ab69ac(PTR_DAT_03cc5260);
  FUN_01ab69ac(PTR_DAT_03cc5270);
  FUN_01ab69ac(PTR_DAT_03cfe760);
  FUN_01ab69ac(PTR_DAT_03cfe768);
  FUN_01ab69ac(PTR_DAT_03cc5278);
  FUN_01ab69ac(PTR_DAT_03cfe770);
  FUN_01ab69ac(PTR_DAT_03cfe778);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  FUN_01ab69ac(PTR_DAT_03cc5280);
  FUN_01ab69ac(PTR_DAT_03cc5288);
  FUN_01ab69ac(PTR_DAT_03cd7f80);
  FUN_01ab69ac(PTR_DAT_03cc5298);
  *(undefined1 *)(unaff_x21 + 0x3a6) = 1;
  lVar11 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_0219a4f0(lVar11,*unaff_x19);
  uVar17 = *unaff_x23;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_0277b678(uVar17,0);
  puVar10 = PTR_DAT_03cfe740;
  puVar9 = PTR_DAT_03cfe728;
  puVar8 = PTR_DAT_03cfe6d8;
  puVar7 = PTR_DAT_03cc5280;
  puVar6 = PTR_DAT_03cc5260;
  puVar4 = PTR_DAT_03cc5258;
  puVar2 = PTR_DAT_03cc5240;
  puVar5 = PTR_DAT_03cc5238;
  puVar3 = PTR_DAT_03cc5228;
  puVar1 = PTR_DAT_03cc5208;
  if (lVar11 != 0) {
    in_stack_00000008._4_4_ = 2;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_03cfe6d8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar10,0);
    in_stack_00000008._4_4_ = 3;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar1,0);
    in_stack_00000008._4_4_ = 4;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar9,0);
    in_stack_00000008._4_4_ = 5;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar4,0);
    in_stack_00000008._4_4_ = 6;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe730,0);
    in_stack_00000008._4_4_ = 7;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar2,0);
    in_stack_00000008._4_4_ = 8;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    puVar4 = PTR_DAT_03cc5230;
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe710,0);
    in_stack_00000008._4_4_ = 9;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar7,0);
    in_stack_00000008._4_4_ = 10;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    puVar1 = PTR_DAT_03cc4e90;
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe720,0);
    in_stack_00000008._4_4_ = 0xb;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    puVar9 = PTR_DAT_03cfe778;
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
    in_stack_00000008._4_4_ = 0xc;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf7928,0);
    in_stack_00000008._4_4_ = 0xd;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    puVar2 = PTR_DAT_03cc5218;
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5218,0);
    in_stack_00000008._4_4_ = 0xe;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe750,0);
    in_stack_00000008._4_4_ = 0xf;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
    in_stack_00000008._4_4_ = 0x10;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    puVar7 = PTR_DAT_03cfdb48;
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe738,0);
    in_stack_00000008._4_4_ = 0x11;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
    in_stack_00000008._4_4_ = 0x12;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6f0,0);
    in_stack_00000008._4_4_ = 0x13;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
    in_stack_00000008._4_4_ = 0x14;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe758,0);
    in_stack_00000008._4_4_ = 0x15;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar6,0);
    in_stack_00000008._4_4_ = 0x16;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6f8,0);
    in_stack_00000008._4_4_ = 0x17;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar5,0);
    in_stack_00000008._4_4_ = 0x18;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe718,0);
    in_stack_00000008._4_4_ = 0x19;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar3,0);
    in_stack_00000008._4_4_ = 0x1a;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4ae0,0);
    in_stack_00000008._4_4_ = 0x1b;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5220,0);
    in_stack_00000008._4_4_ = 0x1c;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe708,0);
    in_stack_00000008._4_4_ = 0x1d;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar4,0);
    in_stack_00000008._4_4_ = 0x1e;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4ad8,0);
    in_stack_00000008._4_4_ = 0x1f;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc50c8,0);
    in_stack_00000008._4_4_ = 0x20;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe6e8,0);
    in_stack_00000008._4_4_ = 0x21;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5278,0);
    in_stack_00000008._4_4_ = 0x22;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe748,0);
    in_stack_00000008._4_4_ = 0x23;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe680,0);
    in_stack_00000008._4_4_ = 0x24;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cfe700,0);
    in_stack_00000008._4_4_ = 0x25;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5298,0);
    in_stack_00000008._4_4_ = 0x26;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
    in_stack_00000008._4_4_ = 0x27;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5210,0);
    in_stack_00000008._4_4_ = 0x28;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cf4b28,0);
    in_stack_00000008._4_4_ = 0x29;
    FUN_0219b9a4(lVar11,uVar17,(long)&stack0x00000008 + 4,*(undefined8 *)puVar8);
    **(long **)(*(long *)puVar7 + 0xb8) = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(*(long *)puVar7 + 0xb8),lVar11);
    plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfe770,0x13);
    uVar17 = FUN_0277b678(*(undefined8 *)puVar1,0);
    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
    FUN_027b3d9c(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar17;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x10),uVar17);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (plVar12 != (long *)0x0) {
      lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar13 != 0) {
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar11);
          uVar17 = FUN_0277b678(*(undefined8 *)puVar1,0);
          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
          FUN_027b3d9c(lVar11,0);
          *(undefined8 *)(lVar11 + 0x10) = uVar17;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar11 + 0x10),uVar17);
          *(undefined4 *)(lVar11 + 0x18) = 1;
          lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
          if (lVar13 == 0) goto LAB_0281eb40;
          if (1 < *(uint *)(plVar12 + 3)) {
            plVar12[5] = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 5,lVar11);
            uVar17 = FUN_0277b678(*(undefined8 *)puVar1,0);
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
            FUN_027b3d9c(lVar11,0);
            *(undefined8 *)(lVar11 + 0x10) = uVar17;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar11 + 0x10),uVar17);
            *(undefined4 *)(lVar11 + 0x18) = 0x29;
            lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
            if (lVar13 == 0) goto LAB_0281eb40;
            if (2 < *(uint *)(plVar12 + 3)) {
              plVar12[6] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 6,lVar11);
              uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5208,0);
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
              FUN_027b3d9c(lVar11,0);
              *(undefined8 *)(lVar11 + 0x10) = uVar17;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar11 + 0x10),uVar17);
              *(undefined4 *)(lVar11 + 0x18) = 4;
              lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) goto LAB_0281eb40;
              if (3 < *(uint *)(plVar12 + 3)) {
                plVar12[7] = lVar11;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar12 + 7,lVar11);
                uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd74d0,0);
                lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                FUN_027b3d9c(lVar11,0);
                *(undefined8 *)(lVar11 + 0x10) = uVar17;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar11 + 0x10),uVar17);
                *(undefined4 *)(lVar11 + 0x18) = 2;
                lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar13 == 0) goto LAB_0281eb40;
                if (4 < *(uint *)(plVar12 + 3)) {
                  plVar12[8] = lVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar12 + 8,lVar11);
                  uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5258,0);
                  lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                  FUN_027b3d9c(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x10) = uVar17;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar11 + 0x10),uVar17);
                  *(undefined4 *)(lVar11 + 0x18) = 6;
                  lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                  if (lVar13 == 0) goto LAB_0281eb40;
                  if (5 < *(uint *)(plVar12 + 3)) {
                    plVar12[9] = lVar11;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar12 + 9,lVar11);
                    uVar17 = FUN_0277b678(*(undefined8 *)puVar2,0);
                    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    FUN_027b3d9c(lVar11,0);
                    *(undefined8 *)(lVar11 + 0x10) = uVar17;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar11 + 0x10),uVar17);
                    *(undefined4 *)(lVar11 + 0x18) = 0xe;
                    lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar13 == 0) goto LAB_0281eb40;
                    if (6 < *(uint *)(plVar12 + 3)) {
                      plVar12[10] = lVar11;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar12 + 10,lVar11);
                      uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5240,0);
                      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                      FUN_027b3d9c(lVar11,0);
                      *(undefined8 *)(lVar11 + 0x10) = uVar17;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar11 + 0x10),uVar17);
                      *(undefined4 *)(lVar11 + 0x18) = 8;
                      lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                      if (lVar13 == 0) goto LAB_0281eb40;
                      if (7 < *(uint *)(plVar12 + 3)) {
                        plVar12[0xb] = lVar11;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar12 + 0xb,lVar11);
                        uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5280,0);
                        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                        FUN_027b3d9c(lVar11,0);
                        *(undefined8 *)(lVar11 + 0x10) = uVar17;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar11 + 0x10),uVar17);
                        *(undefined4 *)(lVar11 + 0x18) = 10;
                        lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                        if (lVar13 == 0) goto LAB_0281eb40;
                        if (8 < *(uint *)(plVar12 + 3)) {
                          plVar12[0xc] = lVar11;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar12 + 0xc,lVar11);
                          uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
                          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                          FUN_027b3d9c(lVar11,0);
                          *(undefined8 *)(lVar11 + 0x10) = uVar17;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar11 + 0x10),uVar17);
                          *(undefined4 *)(lVar11 + 0x18) = 0xc;
                          lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                          if (lVar13 == 0) goto LAB_0281eb40;
                          if (9 < *(uint *)(plVar12 + 3)) {
                            plVar12[0xd] = lVar11;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar12 + 0xd,lVar11);
                            uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
                            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                            FUN_027b3d9c(lVar11,0);
                            *(undefined8 *)(lVar11 + 0x10) = uVar17;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar11 + 0x10),uVar17);
                            *(undefined4 *)(lVar11 + 0x18) = 0x10;
                            lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                            if (lVar13 == 0) goto LAB_0281eb40;
                            if (10 < *(uint *)(plVar12 + 3)) {
                              plVar12[0xe] = lVar11;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar12 + 0xe,lVar11);
                              uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
                              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                              FUN_027b3d9c(lVar11,0);
                              *(undefined8 *)(lVar11 + 0x10) = uVar17;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar11 + 0x10),uVar17);
                              *(undefined4 *)(lVar11 + 0x18) = 0x12;
                              lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_0281eb40;
                              if (0xb < *(uint *)(plVar12 + 3)) {
                                plVar12[0xf] = lVar11;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (plVar12 + 0xf,lVar11);
                                uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
                                lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                FUN_027b3d9c(lVar11,0);
                                *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar11 + 0x10),uVar17);
                                *(undefined4 *)(lVar11 + 0x18) = 0x14;
                                lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar12 + 0x40))
                                ;
                                if (lVar13 == 0) goto LAB_0281eb40;
                                if (0xc < *(uint *)(plVar12 + 3)) {
                                  plVar12[0x10] = lVar11;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar12 + 0x10,lVar11);
                                  uVar17 = FUN_0277b678(*(undefined8 *)puVar6,0);
                                  lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                  FUN_027b3d9c(lVar11,0);
                                  *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar11 + 0x10),uVar17);
                                  *(undefined4 *)(lVar11 + 0x18) = 0x16;
                                  lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                      (*plVar12 + 0x40));
                                  if (lVar13 == 0) goto LAB_0281eb40;
                                  if (0xd < *(uint *)(plVar12 + 3)) {
                                    plVar12[0x11] = lVar11;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar12 + 0x11,lVar11);
                                    uVar17 = FUN_0277b678(*(undefined8 *)puVar5,0);
                                    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                    FUN_027b3d9c(lVar11,0);
                                    *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar11 + 0x10),uVar17);
                                    *(undefined4 *)(lVar11 + 0x18) = 0x18;
                                    lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                        (*plVar12 + 0x40));
                                    if (lVar13 == 0) goto LAB_0281eb40;
                                    if (0xe < *(uint *)(plVar12 + 3)) {
                                      plVar12[0x12] = lVar11;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (plVar12 + 0x12,lVar11);
                                      uVar17 = FUN_0277b678(*(undefined8 *)puVar4,0);
                                      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                      FUN_027b3d9c(lVar11,0);
                                      *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar11 + 0x10),uVar17);
                                      *(undefined4 *)(lVar11 + 0x18) = 0x1e;
                                      lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                          (*plVar12 + 0x40));
                                      if (lVar13 == 0) goto LAB_0281eb40;
                                      if (0xf < *(uint *)(plVar12 + 3)) {
                                        plVar12[0x13] = lVar11;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (plVar12 + 0x13,lVar11);
                                        uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
                                        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                        FUN_027b3d9c(lVar11,0);
                                        *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar11 + 0x10),uVar17);
                                        *(undefined4 *)(lVar11 + 0x18) = 0x1a;
                                        lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                            (*plVar12 + 0x40));
                                        if (lVar13 == 0) goto LAB_0281eb40;
                                        if (0x10 < *(uint *)(plVar12 + 3)) {
                                          plVar12[0x14] = lVar11;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar12 + 0x14,lVar11);
                                          uVar17 = FUN_0277b678(*(undefined8 *)puVar1,0);
                                          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                          FUN_027b3d9c(lVar11,0);
                                          *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    ((undefined8 *)(lVar11 + 0x10),uVar17);
                                          *(undefined4 *)(lVar11 + 0x18) = 0;
                                          lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                              (*plVar12 + 0x40));
                                          if (lVar13 == 0) goto LAB_0281eb40;
                                          if (0x11 < *(uint *)(plVar12 + 3)) {
                                            plVar12[0x15] = lVar11;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      (plVar12 + 0x15,lVar11);
                                            uVar17 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0)
                                            ;
                                            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                                            FUN_027b3d9c(lVar11,0);
                                            *(undefined8 *)(lVar11 + 0x10) = uVar17;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ((undefined8 *)(lVar11 + 0x10),uVar17);
                                            *(undefined4 *)(lVar11 + 0x18) = 0x27;
                                            lVar13 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)
                                                                                (*plVar12 + 0x40));
                                            puVar2 = PTR_DAT_03cfe768;
                                            puVar5 = PTR_DAT_03cfe760;
                                            puVar3 = PTR_DAT_03cfe6e0;
                                            puVar1 = PTR_DAT_03cfe6d0;
                                            if (lVar13 == 0) goto LAB_0281eb40;
                                            if (0x12 < *(uint *)(plVar12 + 3)) {
                                              plVar12[0x16] = lVar11;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        (plVar12 + 0x16,lVar11);
                                              plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) +
                                                                8);
                                              *plVar14 = (long)plVar12;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        (plVar14,plVar12);
                                              uVar17 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
                                              FUN_021de1ac(uVar17,0,*(undefined8 *)puVar1,0);
                                              uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                              FUN_020aff34(uVar15,uVar17,*(undefined8 *)puVar5);
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
      uVar17 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar17,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


