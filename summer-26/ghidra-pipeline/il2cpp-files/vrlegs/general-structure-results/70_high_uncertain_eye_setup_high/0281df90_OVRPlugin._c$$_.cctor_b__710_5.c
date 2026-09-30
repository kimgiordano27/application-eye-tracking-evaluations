/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_5
ENTRY_POINT: 0281df90
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


void OVRPlugin_<>c__<_cctor>b__710_5(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack000000000000000c;
  
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
  **(undefined8 **)(*unaff_x27 + 0xb8) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*unaff_x27 + 0xb8));
  plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfe770,0x13);
  uVar6 = FUN_0277b678(*unaff_x23,0);
  lVar7 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027b3d9c(lVar7,0);
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x10),uVar6);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
  if (lVar8 != 0) {
    if ((int)plVar5[3] != 0) {
      plVar5[4] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar7);
      uVar6 = FUN_0277b678(*unaff_x23,0);
      lVar7 = thunk_FUN_01a89e68(*unaff_x24);
      FUN_027b3d9c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar7 + 0x10),uVar6);
      *(undefined4 *)(lVar7 + 0x18) = 1;
      lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar8 == 0) goto LAB_0281eb40;
      if (1 < *(uint *)(plVar5 + 3)) {
        plVar5[5] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar7);
        uVar6 = FUN_0277b678(*unaff_x23,0);
        lVar7 = thunk_FUN_01a89e68(*unaff_x24);
        FUN_027b3d9c(lVar7,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar7 + 0x10),uVar6);
        *(undefined4 *)(lVar7 + 0x18) = 0x29;
        lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar8 == 0) goto LAB_0281eb40;
        if (2 < *(uint *)(plVar5 + 3)) {
          plVar5[6] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 6,lVar7);
          uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5208,0);
          lVar7 = thunk_FUN_01a89e68(*unaff_x24);
          FUN_027b3d9c(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = uVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar7 + 0x10),uVar6);
          *(undefined4 *)(lVar7 + 0x18) = 4;
          lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar8 == 0) goto LAB_0281eb40;
          if (3 < *(uint *)(plVar5 + 3)) {
            plVar5[7] = lVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 7,lVar7);
            uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd74d0,0);
            lVar7 = thunk_FUN_01a89e68(*unaff_x24);
            FUN_027b3d9c(lVar7,0);
            *(undefined8 *)(lVar7 + 0x10) = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar7 + 0x10),uVar6);
            *(undefined4 *)(lVar7 + 0x18) = 2;
            lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar8 == 0) goto LAB_0281eb40;
            if (4 < *(uint *)(plVar5 + 3)) {
              plVar5[8] = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 8,lVar7);
              uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5258,0);
              lVar7 = thunk_FUN_01a89e68(*unaff_x24);
              FUN_027b3d9c(lVar7,0);
              *(undefined8 *)(lVar7 + 0x10) = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar7 + 0x10),uVar6);
              *(undefined4 *)(lVar7 + 0x18) = 6;
              lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar8 == 0) goto LAB_0281eb40;
              if (5 < *(uint *)(plVar5 + 3)) {
                plVar5[9] = lVar7;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 9,lVar7);
                uVar6 = FUN_0277b678(*unaff_x22,0);
                lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                FUN_027b3d9c(lVar7,0);
                *(undefined8 *)(lVar7 + 0x10) = uVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar7 + 0x10),uVar6);
                *(undefined4 *)(lVar7 + 0x18) = 0xe;
                lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar8 == 0) goto LAB_0281eb40;
                if (6 < *(uint *)(plVar5 + 3)) {
                  plVar5[10] = lVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar5 + 10,lVar7);
                  uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5240,0);
                  lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                  FUN_027b3d9c(lVar7,0);
                  *(undefined8 *)(lVar7 + 0x10) = uVar6;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar7 + 0x10),uVar6);
                  *(undefined4 *)(lVar7 + 0x18) = 8;
                  lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar8 == 0) goto LAB_0281eb40;
                  if (7 < *(uint *)(plVar5 + 3)) {
                    plVar5[0xb] = lVar7;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar5 + 0xb,lVar7);
                    uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5280,0);
                    lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                    FUN_027b3d9c(lVar7,0);
                    *(undefined8 *)(lVar7 + 0x10) = uVar6;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar7 + 0x10),uVar6);
                    *(undefined4 *)(lVar7 + 0x18) = 10;
                    lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                    if (lVar8 == 0) goto LAB_0281eb40;
                    if (8 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xc] = lVar7;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar5 + 0xc,lVar7);
                      uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5248,0);
                      lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                      FUN_027b3d9c(lVar7,0);
                      *(undefined8 *)(lVar7 + 0x10) = uVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar7 + 0x10),uVar6);
                      *(undefined4 *)(lVar7 + 0x18) = 0xc;
                      lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                      if (lVar8 == 0) goto LAB_0281eb40;
                      if (9 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xd] = lVar7;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar5 + 0xd,lVar7);
                        uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
                        lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                        FUN_027b3d9c(lVar7,0);
                        *(undefined8 *)(lVar7 + 0x10) = uVar6;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar7 + 0x10),uVar6);
                        *(undefined4 *)(lVar7 + 0x18) = 0x10;
                        lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                        if (lVar8 == 0) goto LAB_0281eb40;
                        if (10 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xe] = lVar7;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (plVar5 + 0xe,lVar7);
                          uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
                          lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                          FUN_027b3d9c(lVar7,0);
                          *(undefined8 *)(lVar7 + 0x10) = uVar6;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar7 + 0x10),uVar6);
                          *(undefined4 *)(lVar7 + 0x18) = 0x12;
                          lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                          if (lVar8 == 0) goto LAB_0281eb40;
                          if (0xb < *(uint *)(plVar5 + 3)) {
                            plVar5[0xf] = lVar7;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar5 + 0xf,lVar7);
                            uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
                            lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                            FUN_027b3d9c(lVar7,0);
                            *(undefined8 *)(lVar7 + 0x10) = uVar6;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar7 + 0x10),uVar6);
                            *(undefined4 *)(lVar7 + 0x18) = 0x14;
                            lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                            if (lVar8 == 0) goto LAB_0281eb40;
                            if (0xc < *(uint *)(plVar5 + 3)) {
                              plVar5[0x10] = lVar7;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar5 + 0x10,lVar7);
                              uVar6 = FUN_0277b678(*unaff_x29,0);
                              lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                              FUN_027b3d9c(lVar7,0);
                              *(undefined8 *)(lVar7 + 0x10) = uVar6;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar7 + 0x10),uVar6);
                              *(undefined4 *)(lVar7 + 0x18) = 0x16;
                              lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                              if (lVar8 == 0) goto LAB_0281eb40;
                              if (0xd < *(uint *)(plVar5 + 3)) {
                                plVar5[0x11] = lVar7;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (plVar5 + 0x11,lVar7);
                                uVar6 = FUN_0277b678(*unaff_x28,0);
                                lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                                FUN_027b3d9c(lVar7,0);
                                *(undefined8 *)(lVar7 + 0x10) = uVar6;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar7 + 0x10),uVar6);
                                *(undefined4 *)(lVar7 + 0x18) = 0x18;
                                lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                                if (lVar8 == 0) goto LAB_0281eb40;
                                if (0xe < *(uint *)(plVar5 + 3)) {
                                  plVar5[0x12] = lVar7;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar5 + 0x12,lVar7);
                                  uVar6 = FUN_0277b678(*unaff_x25,0);
                                  lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                                  FUN_027b3d9c(lVar7,0);
                                  *(undefined8 *)(lVar7 + 0x10) = uVar6;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar7 + 0x10),uVar6);
                                  *(undefined4 *)(lVar7 + 0x18) = 0x1e;
                                  lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
                                  if (lVar8 == 0) goto LAB_0281eb40;
                                  if (0xf < *(uint *)(plVar5 + 3)) {
                                    plVar5[0x13] = lVar7;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar5 + 0x13,lVar7);
                                    uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
                                    lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                                    FUN_027b3d9c(lVar7,0);
                                    *(undefined8 *)(lVar7 + 0x10) = uVar6;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar7 + 0x10),uVar6);
                                    *(undefined4 *)(lVar7 + 0x18) = 0x1a;
                                    lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar5 + 0x40)
                                                              );
                                    if (lVar8 == 0) goto LAB_0281eb40;
                                    if (0x10 < *(uint *)(plVar5 + 3)) {
                                      plVar5[0x14] = lVar7;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (plVar5 + 0x14,lVar7);
                                      uVar6 = FUN_0277b678(*unaff_x23,0);
                                      lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                                      FUN_027b3d9c(lVar7,0);
                                      *(undefined8 *)(lVar7 + 0x10) = uVar6;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar7 + 0x10),uVar6);
                                      *(undefined4 *)(lVar7 + 0x18) = 0;
                                      lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)
                                                                        (*plVar5 + 0x40));
                                      if (lVar8 == 0) goto LAB_0281eb40;
                                      if (0x11 < *(uint *)(plVar5 + 3)) {
                                        plVar5[0x15] = lVar7;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (plVar5 + 0x15,lVar7);
                                        uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
                                        lVar7 = thunk_FUN_01a89e68(*unaff_x24);
                                        FUN_027b3d9c(lVar7,0);
                                        *(undefined8 *)(lVar7 + 0x10) = uVar6;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar7 + 0x10),uVar6);
                                        *(undefined4 *)(lVar7 + 0x18) = 0x27;
                                        lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)
                                                                          (*plVar5 + 0x40));
                                        puVar4 = PTR_DAT_03cfe768;
                                        puVar3 = PTR_DAT_03cfe760;
                                        puVar2 = PTR_DAT_03cfe6e0;
                                        puVar1 = PTR_DAT_03cfe6d0;
                                        if (lVar8 == 0) goto LAB_0281eb40;
                                        if (0x12 < *(uint *)(plVar5 + 3)) {
                                          plVar5[0x16] = lVar7;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar5 + 0x16,lVar7);
                                          plVar9 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 8);
                                          *plVar9 = (long)plVar5;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (plVar9,plVar5);
                                          uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                          FUN_021de1ac(uVar6,0,*(undefined8 *)puVar1,0);
                                          uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                                          FUN_020aff34(uVar10,uVar6,*(undefined8 *)puVar3);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*unaff_x27 + 0xb8) + 0x10);
                                          *puVar11 = uVar10;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (puVar11,uVar10);
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
  uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,0);
}


