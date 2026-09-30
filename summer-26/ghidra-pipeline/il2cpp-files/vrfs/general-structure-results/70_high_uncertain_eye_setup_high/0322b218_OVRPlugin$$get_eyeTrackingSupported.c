/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 0322b218
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(long param_1,undefined8 param_2)

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
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
                    /* catch() { ... } // from try @ 0322b15c with catch @ 0322b218 */
                    /* catch() { ... } // from try @ 0322b018 with catch @ 0322b21c */
                    /* catch() { ... } // from try @ 0322b058 with catch @ 0322b220 */
  plVar10 = (long *)thunk_FUN_015d0480(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_DAT_06e36b88;
  if (plVar10 == (long *)0x0) {
LAB_0322bb54:
    uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar12,0);
  }
  lVar14 = *unaff_x22;
                    /* try { // try from 0322b23c to 0332b23f has its CatchHandler @ 0322b2b8 */
  if (0xd < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x11] = lVar14;
    plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0x11,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
                    /* try { // try from 0322b27c to 0332b2a3 has its CatchHandler @ 0322b2c4 */
    }
    puVar1 = PTR_DAT_06dc1b50;
    if (0xe < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x12] = lVar14;
                    /* try { // try from 0322b2a4 to 0332b2af has its CatchHandler @ 0322aee4 */
      plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0x12,lVar14);
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
                    /* try { // try from 0322b2b0 to 0332b2b7 has its CatchHandler @ 0322b2c4 */
                    /* catch() { ... } // from try @ 0322b23c with catch @ 0322b2b8 */
        plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
                    /* catch() { ... } // from try @ 0322b27c with catch @ 0322b2c4
                       catch() { ... } // from try @ 0322b2b0 with catch @ 0322b2c4 */
        if (plVar10 == (long *)0x0) goto LAB_0322bb54;
        lVar14 = *(long *)puVar1;
      }
      if (0xf < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x13] = lVar14;
        thunk_FUN_01656ef8(unaff_x19 + 0x13,lVar14);
        *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
        thunk_FUN_01656ef8();
        plVar11 = (long *)FUN_0160edfc(*unaff_x20,4);
        puVar1 = PTR_DAT_06e19960;
        if (plVar11 == (long *)0x0) {
LAB_0322bb60:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)PTR_DAT_06e19960 == 0) {
          lVar14 = 0;
          plVar10 = plVar11;
        }
        else {
          plVar10 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06e19960,
                                               *(undefined8 *)(*plVar11 + 0x40));
          if (plVar10 == (long *)0x0) goto LAB_0322bb54;
          lVar14 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_06dc18c8;
        if ((int)plVar11[3] != 0) {
          plVar11[4] = lVar14;
          plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar14);
          lVar14 = *(long *)puVar1;
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
            if (plVar10 == (long *)0x0) goto LAB_0322bb54;
            lVar14 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_06e38698;
          if (1 < *(uint *)(plVar11 + 3)) {
            plVar11[5] = lVar14;
            plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar14);
            lVar14 = *(long *)puVar1;
            if (lVar14 == 0) {
              lVar14 = 0;
            }
            else {
              plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
              if (plVar10 == (long *)0x0) goto LAB_0322bb54;
              lVar14 = *(long *)puVar1;
            }
            puVar1 = PTR_DAT_06def158;
            if (2 < *(uint *)(plVar11 + 3)) {
              plVar11[6] = lVar14;
              plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar14);
              lVar14 = *(long *)puVar1;
              if (lVar14 == 0) {
                lVar14 = 0;
              }
              else {
                plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                lVar14 = *(long *)puVar1;
              }
              if (3 < *(uint *)(plVar11 + 3)) {
                plVar11[7] = lVar14;
                thunk_FUN_01656ef8(plVar11 + 7,lVar14);
                plVar10 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                *plVar10 = (long)plVar11;
                thunk_FUN_01656ef8(plVar10,plVar11);
                plVar11 = (long *)FUN_0160edfc(*unaff_x20,0xc);
                puVar1 = PTR_DAT_06d92ce0;
                if (plVar11 == (long *)0x0) goto LAB_0322bb60;
                if (*(long *)PTR_DAT_06d92ce0 == 0) {
                  lVar14 = 0;
                  plVar10 = plVar11;
                }
                else {
                  plVar10 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06d92ce0,
                                                       *(undefined8 *)(*plVar11 + 0x40));
                  if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                  lVar14 = *(long *)puVar1;
                }
                puVar1 = PTR_DAT_06db68c8;
                if ((int)plVar11[3] != 0) {
                  plVar11[4] = lVar14;
                  plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar14);
                  lVar14 = *(long *)puVar1;
                  if (lVar14 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                    if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                    lVar14 = *(long *)puVar1;
                  }
                  puVar1 = PTR_DAT_06e5c1a8;
                  if (1 < *(uint *)(plVar11 + 3)) {
                    plVar11[5] = lVar14;
                    plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar14);
                    lVar14 = *(long *)puVar1;
                    if (lVar14 == 0) {
                      lVar14 = 0;
                    }
                    else {
                      plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                      lVar14 = *(long *)puVar1;
                    }
                    puVar1 = PTR_DAT_06dc51e8;
                    if (2 < *(uint *)(plVar11 + 3)) {
                      plVar11[6] = lVar14;
                      plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar14);
                      lVar14 = *(long *)puVar1;
                      if (lVar14 == 0) {
                        lVar14 = 0;
                      }
                      else {
                        plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40)
                                                            );
                        if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                        lVar14 = *(long *)puVar1;
                      }
                      puVar1 = PTR_DAT_06e2fed0;
                      if (3 < *(uint *)(plVar11 + 3)) {
                        plVar11[7] = lVar14;
                        plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 7,lVar14);
                        lVar14 = *(long *)puVar1;
                        if (lVar14 == 0) {
                          lVar14 = 0;
                        }
                        else {
                          plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                       (*plVar11 + 0x40));
                          if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                          lVar14 = *(long *)puVar1;
                        }
                        puVar1 = PTR_DAT_06e667b0;
                        if (4 < *(uint *)(plVar11 + 3)) {
                          plVar11[8] = lVar14;
                          plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 8,lVar14);
                          lVar14 = *(long *)puVar1;
                          if (lVar14 == 0) {
                            lVar14 = 0;
                          }
                          else {
                            plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                         (*plVar11 + 0x40));
                            if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                            lVar14 = *(long *)puVar1;
                          }
                          puVar1 = PTR_DAT_06db5ca0;
                          if (5 < *(uint *)(plVar11 + 3)) {
                            plVar11[9] = lVar14;
                            plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 9,lVar14);
                            lVar14 = *(long *)puVar1;
                            if (lVar14 == 0) {
                              lVar14 = 0;
                            }
                            else {
                              plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                           (*plVar11 + 0x40));
                              if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                              lVar14 = *(long *)puVar1;
                            }
                            puVar1 = PTR_DAT_06db57d8;
                            if (6 < *(uint *)(plVar11 + 3)) {
                              plVar11[10] = lVar14;
                              plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 10,lVar14);
                              lVar14 = *(long *)puVar1;
                              if (lVar14 == 0) {
                                lVar14 = 0;
                              }
                              else {
                                plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                             (*plVar11 + 0x40));
                                if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                lVar14 = *(long *)puVar1;
                              }
                              puVar1 = PTR_DAT_06e68880;
                              if (7 < *(uint *)(plVar11 + 3)) {
                                plVar11[0xb] = lVar14;
                                plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 0xb,lVar14);
                                lVar14 = *(long *)puVar1;
                                if (lVar14 == 0) {
                                  lVar14 = 0;
                                }
                                else {
                                  plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                               (*plVar11 + 0x40));
                                  if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                  lVar14 = *(long *)puVar1;
                                }
                                puVar1 = PTR_DAT_06daaeb8;
                                if (8 < *(uint *)(plVar11 + 3)) {
                                  plVar11[0xc] = lVar14;
                                  plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 0xc,lVar14);
                                  lVar14 = *(long *)puVar1;
                                  if (lVar14 == 0) {
                                    lVar14 = 0;
                                  }
                                  else {
                                    plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                                 (*plVar11 + 0x40));
                                    if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                    lVar14 = *(long *)puVar1;
                                  }
                                  puVar1 = PTR_DAT_06e31cb8;
                                  if (9 < *(uint *)(plVar11 + 3)) {
                                    plVar11[0xd] = lVar14;
                                    plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 0xd,lVar14);
                                    lVar14 = *(long *)puVar1;
                                    if (lVar14 == 0) {
                                      lVar14 = 0;
                                    }
                                    else {
                                      plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                                   (*plVar11 + 0x40)
                                                                          );
                                      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                      lVar14 = *(long *)puVar1;
                                    }
                                    puVar1 = PTR_DAT_06df64e0;
                                    if (10 < *(uint *)(plVar11 + 3)) {
                                      plVar11[0xe] = lVar14;
                                      plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 0xe,lVar14);
                                      lVar14 = *(long *)puVar1;
                                      if (lVar14 == 0) {
                                        lVar14 = 0;
                                      }
                                      else {
                                        plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)
                                                                                     (*plVar11 +
                                                                                     0x40));
                                        if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                        lVar14 = *(long *)puVar1;
                                      }
                                      if (0xb < *(uint *)(plVar11 + 3)) {
                                        plVar11[0xf] = lVar14;
                                        thunk_FUN_01656ef8(plVar11 + 0xf,lVar14);
                                        plVar10 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                        *plVar10 = (long)plVar11;
                                        thunk_FUN_01656ef8(plVar10,plVar11);
                                        plVar11 = (long *)FUN_0160edfc(*unaff_x20,5);
                                        puVar1 = PTR_DAT_06de85f0;
                                        if (plVar11 == (long *)0x0) goto LAB_0322bb60;
                                        if (*(long *)PTR_DAT_06de85f0 == 0) {
                                          lVar14 = 0;
                                          plVar10 = plVar11;
                                        }
                                        else {
                                          plVar10 = (long *)thunk_FUN_015d0480(*(long *)
                                                  PTR_DAT_06de85f0,*(undefined8 *)(*plVar11 + 0x40))
                                          ;
                                          if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                          lVar14 = *(long *)puVar1;
                                        }
                                        puVar1 = PTR_DAT_06dab100;
                                        if ((int)plVar11[3] != 0) {
                                          plVar11[4] = lVar14;
                                          plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar14);
                                          lVar14 = *(long *)puVar1;
                                          if (lVar14 == 0) {
                                            lVar14 = 0;
                                          }
                                          else {
                                            plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8
                                                                                          *)(*
                                                  plVar11 + 0x40));
                                            if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                            lVar14 = *(long *)puVar1;
                                          }
                                          puVar1 = PTR_DAT_06e22540;
                                          if (1 < *(uint *)(plVar11 + 3)) {
                                            plVar11[5] = lVar14;
                                            plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar14)
                                            ;
                                            lVar14 = *(long *)puVar1;
                                            if (lVar14 == 0) {
                                              lVar14 = 0;
                                            }
                                            else {
                                              plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                              if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                              lVar14 = *(long *)puVar1;
                                            }
                                            puVar1 = PTR_DAT_06dc49d0;
                                            if (2 < *(uint *)(plVar11 + 3)) {
                                              plVar11[6] = lVar14;
                                              plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 6,
                                                                                   lVar14);
                                              lVar14 = *(long *)puVar1;
                                              if (lVar14 == 0) {
                                                lVar14 = 0;
                                              }
                                              else {
                                                plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                                lVar14 = *(long *)puVar1;
                                              }
                                              puVar1 = PTR_DAT_06dd2b20;
                                              if (3 < *(uint *)(plVar11 + 3)) {
                                                plVar11[7] = lVar14;
                                                plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 7,
                                                                                     lVar14);
                                                lVar14 = *(long *)puVar1;
                                                if (lVar14 == 0) {
                                                  lVar14 = 0;
                                                }
                                                else {
                                                  plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                                                  lVar14 = *(long *)puVar1;
                                                }
                                                puVar9 = PTR_DAT_06e5fef8;
                                                puVar8 = PTR_DAT_06e4c488;
                                                puVar7 = PTR_DAT_06e458d0;
                                                puVar6 = PTR_DAT_06e378f8;
                                                puVar5 = PTR_DAT_06e0ddc8;
                                                puVar4 = PTR_DAT_06df8e58;
                                                puVar3 = PTR_DAT_06dd9ff0;
                                                puVar2 = PTR_DAT_06dd6a90;
                                                puVar1 = PTR_DAT_06da8dc0;
                                                if (4 < *(uint *)(plVar11 + 3)) {
                                                  plVar11[8] = lVar14;
                                                  thunk_FUN_01656ef8();
                                                  plVar10 = (long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    0x20);
                                                  *plVar10 = (long)plVar11;
                                                  thunk_FUN_01656ef8(plVar10,plVar11);
                                                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar3,0x100)
                                                  ;
                                                  FUN_02df8d44(uVar12,*(undefined8 *)puVar4,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x28);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_01656ef8(puVar13,uVar12);
                                                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x1e);
                                                  FUN_02df8d44(uVar12,*(undefined8 *)puVar7,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x30);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_01656ef8(puVar13,uVar12);
                                                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar9,0xf);
                                                  FUN_02df8d44(uVar12,*(undefined8 *)puVar2,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x38);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_01656ef8(puVar13,uVar12);
                                                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x2a);
                                                  FUN_02df8d44(uVar12,*(undefined8 *)puVar6,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x40);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_01656ef8(puVar13,uVar12);
                                                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
                                                  FUN_02df8d44(uVar12,*(undefined8 *)puVar8,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x48);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_01656ef8(puVar13,uVar12);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(plVar10,lVar14);
}


