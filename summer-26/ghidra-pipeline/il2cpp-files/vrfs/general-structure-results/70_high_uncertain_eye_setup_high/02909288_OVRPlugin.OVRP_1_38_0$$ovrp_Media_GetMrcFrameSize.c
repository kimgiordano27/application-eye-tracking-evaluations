/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameSize
ENTRY_POINT: 02909288
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e3cc08);
  thunk_FUN_0159f088(PTR_DAT_06ddfa10);
  thunk_FUN_0159f088(PTR_DAT_06dba4a8);
  thunk_FUN_0159f088(PTR_DAT_06e322d8);
  thunk_FUN_0159f088(PTR_DAT_06dde460);
  thunk_FUN_0159f088(PTR_DAT_06e3a6c8);
  thunk_FUN_0159f088(PTR_DAT_06d8b368);
  thunk_FUN_0159f088(PTR_DAT_06deaae8);
  thunk_FUN_0159f088(PTR_DAT_06e4d758);
  thunk_FUN_0159f088(PTR_DAT_06dc8bd0);
  thunk_FUN_0159f088(PTR_DAT_06e43f68);
  thunk_FUN_0159f088(PTR_DAT_06e5fef8);
  thunk_FUN_0159f088(PTR_DAT_06e19308);
  thunk_FUN_0159f088(PTR_DAT_06d96f00);
  thunk_FUN_0159f088(PTR_DAT_06db4eb8);
  thunk_FUN_0159f088(PTR_DAT_06dba180);
  thunk_FUN_0159f088(PTR_DAT_06dc26f0);
  thunk_FUN_0159f088(PTR_DAT_06daad00);
  thunk_FUN_0159f088(PTR_DAT_06da7728);
  thunk_FUN_0159f088(PTR_DAT_06dda5f0);
  thunk_FUN_0159f088(PTR_DAT_06e5d6e0);
  thunk_FUN_0159f088(PTR_DAT_06ddf4d8);
  *(undefined1 *)(unaff_x24 + 0xcc4) = 1;
  uVar5 = FUN_0160edfc(*unaff_x25,0x100);
  FUN_02df8d44(uVar5,*unaff_x19,0);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar5;
  thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x21 + 0xb8),uVar5);
  plVar6 = (long *)FUN_0160edfc(*unaff_x23,0x13);
  uVar5 = *unaff_x20;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x22);
  }
  lVar7 = FUN_031c8668(uVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_02909a58:
    uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar5,0);
  }
  puVar1 = PTR_DAT_06e43f68;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_01656ef8(plVar6 + 4,lVar7);
    lVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_02909a58;
    puVar2 = PTR_DAT_06e3cc08;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      thunk_FUN_01656ef8(plVar6 + 5,lVar7);
      lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_02909a58;
      puVar2 = PTR_DAT_06e4f958;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_01656ef8(plVar6 + 6,lVar7);
        lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_02909a58;
        puVar2 = PTR_DAT_06e3b4f0;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          thunk_FUN_01656ef8(plVar6 + 7,lVar7);
          lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_02909a58;
          puVar2 = PTR_DAT_06e19308;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            thunk_FUN_01656ef8(plVar6 + 8,lVar7);
            lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_02909a58;
            puVar2 = PTR_DAT_06e34f98;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              thunk_FUN_01656ef8(plVar6 + 9,lVar7);
              lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_02909a58;
              puVar2 = PTR_DAT_06deaae8;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                thunk_FUN_01656ef8(plVar6 + 10,lVar7);
                lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_02909a58;
                puVar2 = PTR_DAT_06dda5f0;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar7;
                  thunk_FUN_01656ef8(plVar6 + 0xb,lVar7);
                  lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_02909a58;
                  puVar2 = PTR_DAT_06e4d758;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    thunk_FUN_01656ef8(plVar6 + 0xc,lVar7);
                    lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_02909a58;
                    puVar2 = PTR_DAT_06e5d6e0;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      thunk_FUN_01656ef8(plVar6 + 0xd,lVar7);
                      lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_02909a58;
                      puVar2 = PTR_DAT_06dc8bd0;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        thunk_FUN_01656ef8(plVar6 + 0xe,lVar7);
                        lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_02909a58;
                        puVar2 = PTR_DAT_06ddf4d8;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          thunk_FUN_01656ef8(plVar6 + 0xf,lVar7);
                          lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_02909a58;
                          puVar2 = PTR_DAT_06d96f00;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            thunk_FUN_01656ef8(plVar6 + 0x10,lVar7);
                            lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_02909a58;
                            puVar2 = PTR_DAT_06dde460;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              thunk_FUN_01656ef8(plVar6 + 0x11,lVar7);
                              lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                              if ((lVar7 != 0) &&
                                 (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_02909a58;
                              puVar2 = PTR_DAT_06e322d8;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                thunk_FUN_01656ef8(plVar6 + 0x12,lVar7);
                                lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_02909a58;
                                puVar2 = PTR_DAT_06dba4a8;
                                if (0xf < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x13] = lVar7;
                                  thunk_FUN_01656ef8(plVar6 + 0x13,lVar7);
                                  lVar7 = FUN_031c8668(*(undefined8 *)puVar2,0);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar8 == 0)) goto LAB_02909a58;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    thunk_FUN_01656ef8(plVar6 + 0x14,lVar7);
                                    lVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_02909a58;
                                    puVar1 = PTR_DAT_06db4eb8;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      thunk_FUN_01656ef8(plVar6 + 0x15,lVar7);
                                      lVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_02909a58;
                                      puVar4 = PTR_DAT_06e434f0;
                                      puVar3 = PTR_DAT_06ddfa10;
                                      puVar2 = PTR_DAT_06daad00;
                                      puVar1 = PTR_DAT_06d8b368;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        thunk_FUN_01656ef8(plVar6 + 0x16,lVar7);
                                        plVar9 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                                        *plVar9 = (long)plVar6;
                                        thunk_FUN_01656ef8(plVar9,plVar6);
                                        uVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x10);
                                        *puVar10 = uVar5;
                                        thunk_FUN_01656ef8(puVar10,uVar5);
                                        uVar5 = FUN_0160edfc(*(undefined8 *)puVar4,0x41);
                                        FUN_02df8d44(uVar5,*(undefined8 *)puVar2,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                        *puVar10 = uVar5;
                                        thunk_FUN_01656ef8(puVar10,uVar5);
                                        lVar7 = *(long *)puVar3;
                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                          thunk_FUN_016466fc();
                                          lVar7 = *(long *)puVar3;
                                        }
                                        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar7 + 0xb8);
                                        thunk_FUN_01656ef8();
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
  FUN_0160eebc();
}


