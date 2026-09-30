/*
FUNCTION_NAME: Pathfinding.Funnel.FunnelState.PushStart_000009C9$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03602cb8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Pathfinding_Funnel_FunnelState_PushStart_000009C9_PostfixBurstDelegate__Invoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x20 + 0x180) = *(undefined8 *)PTR_DAT_06f8cdb0;
    thunk_FUN_03048534(unaff_x20 + 0x180);
    if (0x2d < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x188) = *(undefined8 *)PTR_DAT_06f8ce40;
      thunk_FUN_03048534(unaff_x20 + 0x188);
      if (0x2e < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 400) = *(undefined8 *)PTR_DAT_06f8cde8;
        thunk_FUN_03048534(unaff_x20 + 400);
        puVar2 = PTR_DAT_06f8cc18;
        if (0x2f < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x198) = *(undefined8 *)PTR_DAT_06f8cdf8;
          thunk_FUN_03048534(unaff_x20 + 0x198);
          *(long *)(unaff_x19 + 0x98) = unaff_x20;
          thunk_FUN_03048534();
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          *(undefined4 *)(unaff_x19 + 0x58) = 0;
          *(undefined8 *)(unaff_x19 + 0x60) = 0;
          *(undefined4 *)(unaff_x19 + 0x68) = 0;
          *(undefined8 *)(unaff_x19 + 0x70) = 0;
          *(undefined4 *)(unaff_x19 + 0x78) = 0;
          *(undefined8 *)(unaff_x19 + 0x80) = 0;
          *(undefined4 *)(unaff_x19 + 0x88) = 0;
          uVar12 = FUN_02fe9340(*unaff_x22,0);
          *(undefined8 *)(unaff_x19 + 0xa0) = uVar12;
          thunk_FUN_03048534();
          plVar13 = (long *)FUN_02fe9340(*unaff_x22,3);
          lVar14 = FUN_05afde1c(*(undefined8 *)puVar2,0);
          if (plVar13 == (long *)0x0) goto LAB_036032ec;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_03010710(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
LAB_036032e0:
            uVar12 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                               ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar12,0);
          }
          puVar2 = PTR_DAT_06f8cc10;
          if ((int)plVar13[3] != 0) {
            plVar13[4] = lVar14;
            thunk_FUN_03048534(plVar13 + 4,lVar14);
            lVar14 = FUN_05afde1c(*(undefined8 *)puVar2,0);
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_03010710(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_036032e0;
            puVar2 = PTR_DAT_06f8cc20;
            if (1 < *(uint *)(plVar13 + 3)) {
              plVar13[5] = lVar14;
              thunk_FUN_03048534(plVar13 + 5,lVar14);
              lVar14 = FUN_05afde1c(*(undefined8 *)puVar2,0);
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_03010710(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)
                 ) goto LAB_036032e0;
              puVar2 = PTR_DAT_06f6d960;
              if (2 < *(uint *)(plVar13 + 3)) {
                plVar13[6] = lVar14;
                thunk_FUN_03048534(plVar13 + 6,lVar14);
                *(long *)(unaff_x19 + 0xa8) = (long)plVar13;
                thunk_FUN_03048534((long *)(unaff_x19 + 0xa8),plVar13);
                lVar14 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                if (lVar14 == 0) {
LAB_036032ec:
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (((uVar1 != 0) && (*(undefined4 *)(lVar14 + 0x20) = 0x700, uVar1 != 1)) &&
                   (*(undefined4 *)(lVar14 + 0x24) = 0x700, 2 < uVar1)) {
                  *(undefined4 *)(lVar14 + 0x28) = 0x700;
                  *(long *)(unaff_x19 + 0xb0) = lVar14;
                  thunk_FUN_03048534();
                  lVar14 = FUN_02fe9340(*unaff_x23,3);
                  if (lVar14 == 0) goto LAB_036032ec;
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_06f8cee8;
                    thunk_FUN_03048534((undefined8 *)(lVar14 + 0x20));
                    if (1 < *(uint *)(lVar14 + 0x18)) {
                      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_06f8cd58;
                      thunk_FUN_03048534((undefined8 *)(lVar14 + 0x28));
                      if (2 < *(uint *)(lVar14 + 0x18)) {
                        *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_06f8cde0;
                        thunk_FUN_03048534();
                        *(long *)(unaff_x19 + 0xb8) = lVar14;
                        thunk_FUN_03048534((long *)(unaff_x19 + 0xb8),lVar14);
                        lVar14 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                        if (lVar14 == 0) goto LAB_036032ec;
                        uVar1 = *(uint *)(lVar14 + 0x18);
                        if (((uVar1 != 0) && (*(undefined4 *)(lVar14 + 0x20) = 0x98, uVar1 != 1)) &&
                           (*(undefined4 *)(lVar14 + 0x24) = 0x1b0, puVar4 = PTR_DAT_06f8cbc8,
                           puVar3 = PTR_DAT_06f6ed00, 2 < uVar1)) {
                          *(undefined4 *)(lVar14 + 0x28) = 8;
                          *(long *)(unaff_x19 + 0xc0) = lVar14;
                          thunk_FUN_03048534();
                          lVar14 = FUN_02fe9340(*(undefined8 *)puVar3,3);
                          lVar16 = *(long *)puVar4;
                          lVar15 = *(long *)(lVar16 + 0x38);
                          if (lVar15 == 0) {
                            FUN_02feb320(lVar16);
                            lVar15 = *(long *)(lVar16 + 0x38);
                          }
                          lVar15 = *(long *)(lVar15 + 8);
                          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                            lVar15 = FUN_02feb2c4();
                          }
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                          }
                          lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                            lVar15 = FUN_02feb2c4();
                          }
                          puVar3 = PTR_DAT_06f8cbc0;
                          if (lVar14 == 0) goto LAB_036032ec;
                          if (*(int *)(lVar14 + 0x18) != 0) {
                            *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(lVar15 + 0xb8);
                            lVar16 = *(long *)puVar3;
                            lVar15 = *(long *)(lVar16 + 0x38);
                            if (lVar15 == 0) {
                              FUN_02feb320(lVar16);
                              lVar15 = *(long *)(lVar16 + 0x38);
                            }
                            lVar15 = *(long *)(lVar15 + 8);
                            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                              lVar15 = FUN_02feb2c4();
                            }
                            if (*(int *)(lVar15 + 0xe0) == 0) {
                              thunk_FUN_02fdcff0();
                            }
                            lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                              lVar15 = FUN_02feb2c4();
                            }
                            puVar3 = PTR_DAT_06f8cbd0;
                            if (1 < *(uint *)(lVar14 + 0x18)) {
                              *(undefined8 *)(lVar14 + 0x28) = **(undefined8 **)(lVar15 + 0xb8);
                              lVar16 = *(long *)puVar3;
                              lVar15 = *(long *)(lVar16 + 0x38);
                              if (lVar15 == 0) {
                                FUN_02feb320(lVar16);
                                lVar15 = *(long *)(lVar16 + 0x38);
                              }
                              lVar15 = *(long *)(lVar15 + 8);
                              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                                lVar15 = FUN_02feb2c4();
                              }
                              if (*(int *)(lVar15 + 0xe0) == 0) {
                                thunk_FUN_02fdcff0();
                              }
                              lVar15 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                                lVar15 = FUN_02feb2c4();
                              }
                              if (2 < *(uint *)(lVar14 + 0x18)) {
                                *(undefined8 *)(lVar14 + 0x30) = **(undefined8 **)(lVar15 + 0xb8);
                                *(long *)(unaff_x19 + 200) = lVar14;
                                thunk_FUN_03048534((long *)(unaff_x19 + 200),lVar14);
                                lVar14 = FUN_02fe9340(*(undefined8 *)puVar2,3);
                                if (lVar14 == 0) goto LAB_036032ec;
                                uVar1 = *(uint *)(lVar14 + 0x18);
                                if (((uVar1 != 0) &&
                                    (*(undefined4 *)(lVar14 + 0x20) = 0, uVar1 != 1)) &&
                                   (*(undefined4 *)(lVar14 + 0x24) = 0, puVar11 = PTR_DAT_06f8cba8,
                                   puVar10 = PTR_DAT_06f8cb90, puVar9 = PTR_DAT_06f8cb88,
                                   puVar8 = PTR_DAT_06f8cb80, puVar7 = PTR_DAT_06f8cb78,
                                   puVar6 = PTR_DAT_06f6ef68, puVar5 = PTR_DAT_06f6ec60,
                                   puVar4 = PTR_DAT_06f6ec58, puVar3 = PTR_DAT_06f6ec50,
                                   puVar2 = PTR_DAT_06f6eac0, 2 < uVar1)) {
                                  *(undefined4 *)(lVar14 + 0x28) = 0x20000000;
                                  *(long *)(unaff_x19 + 0xd0) = lVar14;
                                  thunk_FUN_03048534();
                                  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                                  FUN_064f985c(uVar12,0,*(undefined8 *)puVar9,0);
                                  *(undefined8 *)(unaff_x19 + 0x10) = uVar12;
                                  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x10),uVar12);
                                  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
                                  FUN_064f9968(uVar12,0,*(undefined8 *)puVar8,0);
                                  *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
                                  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),uVar12);
                                  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
                                  FUN_064f9a74(uVar12,0,*(undefined8 *)puVar7,0);
                                  *(undefined8 *)(unaff_x19 + 0x20) = uVar12;
                                  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x20),uVar12);
                                  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
                                  FUN_064ff380(uVar12,0,*(undefined8 *)puVar10,0);
                                  *(undefined8 *)(unaff_x19 + 0x30) = uVar12;
                                  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x30),uVar12);
                                  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
                                  FUN_064ff2b8(uVar12,0,*(undefined8 *)PTR_DAT_06f8cb98,0);
                                  *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
                                  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x28),uVar12);
                                  **(long **)(*(long *)puVar11 + 0xb8) = unaff_x19;
                                  thunk_FUN_03048534(*(undefined8 *)(*(long *)puVar11 + 0xb8));
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


