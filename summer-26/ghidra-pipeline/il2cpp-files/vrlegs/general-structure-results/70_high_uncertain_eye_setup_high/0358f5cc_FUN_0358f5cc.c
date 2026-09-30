/*
FUNCTION_NAME: FUN_0358f5cc
ENTRY_POINT: 0358f5cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0358f5cc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0358f5c4 with catch @ 0358f5d4
                        */
                    /* try { // try from 0358f5ec to 0368f603 has its CatchHandler @ 0358f65c */
  if ((DAT_0412e077 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
                    /* try { // try from 0358f604 to 0368f64b has its CatchHandler @ 0358f590 */
    DAT_0412e077 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x368);
  if ((lVar9 != 0) && (lVar8 = *(long *)(lVar9 + 0x38), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) {
LAB_0358fce8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar15 = *(long *)(lVar9 + 0x60);
    if (lVar15 != 0) {
      lVar14 = (long)(int)param_2;
      uVar6 = *(uint *)(lVar8 + lVar14 * 0x178 + 0x58);
      lVar8 = (long)(int)uVar6;
      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_0358fce8;
      lVar16 = lVar15 + lVar8 * 0x50;
      if (*(long *)(lVar16 + 0x30) != 0) {
        uVar5 = *(uint *)(lVar16 + 0x28);
        if (*(int *)(*(long *)(lVar16 + 0x30) + 0x18) <= (int)uVar5) {
          iVar4 = uVar5 + 7;
          if (-1 < (int)(uVar5 + 4)) {
            iVar4 = uVar5 + 4;
          }
          uVar7 = FUN_036c1d60(iVar4 >> 2,0);
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Media_TypeInfo);
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_0358fce8;
          FUN_03595b9c(lVar16 + 0x20,uVar7,0);
          lVar9 = *(long *)(param_1 + 0x368);
          if (lVar9 == 0) goto LAB_0358fce4;
        }
        lVar15 = *(long *)(lVar9 + 0x38);
        if (lVar15 != 0) {
          if (param_2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar15 + lVar14 * 0x178 + 0x6c) = uVar5;
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 == 0) goto LAB_0358fce4;
            if (uVar6 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x30);
              if (lVar9 == 0) goto LAB_0358fce4;
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                lVar10 = lVar15 + lVar14 * 0x178;
                uVar7 = *(undefined4 *)(lVar10 + 0x78);
                lVar16 = (long)(int)uVar5;
                lVar9 = lVar9 + lVar16 * 0xc;
                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar10 + 0x70);
                *(undefined4 *)(lVar9 + 0x28) = uVar7;
                if ((*(long *)(param_1 + 0x368) == 0) ||
                   (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar9 == 0))
                goto LAB_0358fce4;
                if ((uVar6 < *(uint *)(lVar9 + 0x18)) && (param_2 < *(uint *)(lVar15 + 0x18))) {
                  lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x30);
                  if (lVar9 == 0) goto LAB_0358fce4;
                  uVar1 = uVar5 + 1;
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    lVar11 = lVar15 + lVar14 * 0x178;
                    uVar7 = *(undefined4 *)(lVar11 + 0xa0);
                    lVar10 = (long)(int)uVar1;
                    lVar9 = lVar9 + lVar10 * 0xc;
                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar11 + 0x98);
                    *(undefined4 *)(lVar9 + 0x28) = uVar7;
                    if ((*(long *)(param_1 + 0x368) == 0) ||
                       (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar9 == 0))
                    goto LAB_0358fce4;
                    if ((uVar6 < *(uint *)(lVar9 + 0x18)) && (param_2 < *(uint *)(lVar15 + 0x18))) {
                      lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x30);
                      if (lVar9 == 0) goto LAB_0358fce4;
                      uVar2 = uVar5 + 2;
                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                        lVar12 = lVar15 + lVar14 * 0x178;
                        uVar7 = *(undefined4 *)(lVar12 + 200);
                        lVar11 = (long)(int)uVar2;
                        lVar9 = lVar9 + lVar11 * 0xc;
                        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar12 + 0xc0);
                        *(undefined4 *)(lVar9 + 0x28) = uVar7;
                        if ((*(long *)(param_1 + 0x368) == 0) ||
                           (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar9 == 0))
                        goto LAB_0358fce4;
                        if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                           (param_2 < *(uint *)(lVar15 + 0x18))) {
                          lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x30);
                          if (lVar9 == 0) goto LAB_0358fce4;
                          uVar3 = uVar5 + 3;
                          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                            lVar13 = lVar15 + lVar14 * 0x178;
                            uVar7 = *(undefined4 *)(lVar13 + 0xf0);
                            lVar12 = (long)(int)uVar3;
                            lVar9 = lVar9 + lVar12 * 0xc;
                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar13 + 0xe8);
                            *(undefined4 *)(lVar9 + 0x28) = uVar7;
                            if ((*(long *)(param_1 + 0x368) == 0) ||
                               (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar9 == 0))
                            goto LAB_0358fce4;
                            if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                               (param_2 < *(uint *)(lVar15 + 0x18))) {
                              lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x48);
                              if (lVar9 == 0) goto LAB_0358fce4;
                              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + lVar16 * 8 + 0x20) =
                                     *(undefined8 *)(lVar15 + lVar14 * 0x178 + 0x7c);
                                if ((*(long *)(param_1 + 0x368) == 0) ||
                                   (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar9 == 0
                                   )) goto LAB_0358fce4;
                                if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                   (param_2 < *(uint *)(lVar15 + 0x18))) {
                                  lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x48);
                                  if (lVar9 == 0) goto LAB_0358fce4;
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + lVar10 * 8 + 0x20) =
                                         *(undefined8 *)(lVar15 + lVar14 * 0x178 + 0xa4);
                                    if ((*(long *)(param_1 + 0x368) == 0) ||
                                       (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60),
                                       lVar9 == 0)) goto LAB_0358fce4;
                                    if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                       (param_2 < *(uint *)(lVar15 + 0x18))) {
                                      lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x48);
                                      if (lVar9 == 0) goto LAB_0358fce4;
                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + lVar11 * 8 + 0x20) =
                                             *(undefined8 *)(lVar15 + lVar14 * 0x178 + 0xcc);
                                        if ((*(long *)(param_1 + 0x368) == 0) ||
                                           (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60),
                                           lVar9 == 0)) goto LAB_0358fce4;
                                        if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                           (param_2 < *(uint *)(lVar15 + 0x18))) {
                                          lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x48);
                                          if (lVar9 == 0) goto LAB_0358fce4;
                                          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                                            *(undefined8 *)(lVar9 + lVar12 * 8 + 0x20) =
                                                 *(undefined8 *)(lVar15 + lVar14 * 0x178 + 0xf4);
                                            if ((*(long *)(param_1 + 0x368) == 0) ||
                                               (lVar9 = *(long *)(*(long *)(param_1 + 0x368) + 0x60)
                                               , lVar9 == 0)) goto LAB_0358fce4;
                                            if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                               (param_2 < *(uint *)(lVar15 + 0x18))) {
                                              lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x50);
                                              if (lVar9 == 0) goto LAB_0358fce4;
                                              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                                                *(undefined8 *)(lVar9 + lVar16 * 8 + 0x20) =
                                                     *(undefined8 *)(lVar15 + lVar14 * 0x178 + 0x84)
                                                ;
                                                if ((*(long *)(param_1 + 0x368) == 0) ||
                                                   (lVar9 = *(long *)(*(long *)(param_1 + 0x368) +
                                                                     0x60), lVar9 == 0))
                                                goto LAB_0358fce4;
                                                if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                   (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                  lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x50);
                                                  if (lVar9 == 0) goto LAB_0358fce4;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + lVar10 * 8 + 0x20) =
                                                         *(undefined8 *)
                                                          (lVar15 + lVar14 * 0x178 + 0xac);
                                                    if ((*(long *)(param_1 + 0x368) == 0) ||
                                                       (lVar9 = *(long *)(*(long *)(param_1 + 0x368)
                                                                         + 0x60), lVar9 == 0))
                                                    goto LAB_0358fce4;
                                                    if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                       (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                      lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x50)
                                                      ;
                                                      if (lVar9 == 0) goto LAB_0358fce4;
                                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + lVar11 * 8 + 0x20) =
                                                             *(undefined8 *)
                                                              (lVar15 + lVar14 * 0x178 + 0xd4);
                                                        if ((*(long *)(param_1 + 0x368) == 0) ||
                                                           (lVar9 = *(long *)(*(long *)(param_1 +
                                                                                       0x368) + 0x60
                                                                             ), lVar9 == 0))
                                                        goto LAB_0358fce4;
                                                        if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                           (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                          lVar9 = *(long *)(lVar9 + lVar8 * 0x50 +
                                                                           0x50);
                                                          if (lVar9 == 0) goto LAB_0358fce4;
                                                          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)
                                                             (lVar9 + lVar12 * 8 + 0x20) =
                                                                 *(undefined8 *)
                                                                  (lVar15 + lVar14 * 0x178 + 0xfc);
                                                            if ((*(long *)(param_1 + 0x368) == 0) ||
                                                               (lVar9 = *(long *)(*(long *)(param_1 
                                                  + 0x368) + 0x60), lVar9 == 0)) goto LAB_0358fce4;
                                                  if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                     (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                    lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x58);
                                                    if (lVar9 == 0) goto LAB_0358fce4;
                                                    if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined4 *)(lVar9 + lVar16 * 4 + 0x20) =
                                                           *(undefined4 *)
                                                            (lVar15 + lVar14 * 0x178 + 0x94);
                                                      if ((*(long *)(param_1 + 0x368) == 0) ||
                                                         (lVar9 = *(long *)(*(long *)(param_1 +
                                                                                     0x368) + 0x60),
                                                         lVar9 == 0)) goto LAB_0358fce4;
                                                      if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                         (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                        lVar9 = *(long *)(lVar9 + lVar8 * 0x50 +
                                                                         0x58);
                                                        if (lVar9 == 0) goto LAB_0358fce4;
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined4 *)(lVar9 + lVar10 * 4 + 0x20)
                                                               = *(undefined4 *)
                                                                  (lVar15 + lVar14 * 0x178 + 0xbc);
                                                          if ((*(long *)(param_1 + 0x368) == 0) ||
                                                             (lVar9 = *(long *)(*(long *)(param_1 +
                                                                                         0x368) +
                                                                               0x60), lVar9 == 0))
                                                          goto LAB_0358fce4;
                                                          if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                             (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                            lVar9 = *(long *)(lVar9 + lVar8 * 0x50 +
                                                                             0x58);
                                                            if (lVar9 == 0) goto LAB_0358fce4;
                                                            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined4 *)
                                                               (lVar9 + lVar11 * 4 + 0x20) =
                                                                   *(undefined4 *)
                                                                    (lVar15 + lVar14 * 0x178 + 0xe4)
                                                              ;
                                                              if ((*(long *)(param_1 + 0x368) == 0)
                                                                 || (lVar9 = *(long *)(*(long *)(
                                                  param_1 + 0x368) + 0x60), lVar9 == 0))
                                                  goto LAB_0358fce4;
                                                  if ((uVar6 < *(uint *)(lVar9 + 0x18)) &&
                                                     (param_2 < *(uint *)(lVar15 + 0x18))) {
                                                    lVar9 = *(long *)(lVar9 + lVar8 * 0x50 + 0x58);
                                                    if (lVar9 == 0) goto LAB_0358fce4;
                                                    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined4 *)(lVar9 + lVar12 * 4 + 0x20) =
                                                           *(undefined4 *)
                                                            (lVar15 + lVar14 * 0x178 + 0x10c);
                                                      if ((*(long *)(param_1 + 0x368) == 0) ||
                                                         (lVar9 = *(long *)(*(long *)(param_1 +
                                                                                     0x368) + 0x60),
                                                         lVar9 == 0)) goto LAB_0358fce4;
                                                      if (uVar6 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar9 + lVar8 * 0x50 + 0x28) =
                                                             uVar5 + 4;
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
          goto LAB_0358fce8;
        }
      }
    }
  }
LAB_0358fce4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


