/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 02909204
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar6 = PTR_DAT_06e5fef8;
  puVar5 = PTR_DAT_06e3a6c8;
  puVar4 = PTR_DAT_06ddaad8;
  puVar3 = PTR_DAT_06dc26f0;
  puVar2 = PTR_DAT_06dba180;
  puVar1 = PTR_DAT_06da7728;
  if ((bRam0000000007233cc4 & 1) == 0) {
                    /* try { // try from 02909254 to 02a09263 has its CatchHandler @ 02909264 */
    thunk_FUN_0159f088(PTR_DAT_06e4f958);
                    /* catch() { ... } // from try @ 029091e0 with catch @ 02909264
                       catch() { ... } // from try @ 02909254 with catch @ 02909264 */
    thunk_FUN_0159f088(PTR_DAT_06e34f98);
                    /* try { // try from 02909268 to 02a0926b has its CatchHandler @ 02909274 */
                    /* try { // try from 0290926c to 02a09277 has its CatchHandler @ 029090f0 */
    thunk_FUN_0159f088(PTR_DAT_06e434f0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02909268 with catch @ 02909274
                        */
                    /* try { // try from 02909278 to 02a09587 has its CatchHandler @ 02909278
                       catch() { ... } // from try @ 02909278 with catch @ 02909278
                       catch() { ... } // from try @ 02909678 with catch @ 02909278
                       catch() { ... } // from try @ 0290973c with catch @ 02909278
                       catch() { ... } // from try @ 029097d8 with catch @ 02909278 */
    thunk_FUN_0159f088(PTR_DAT_06e3b4f0);
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
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
    bRam0000000007233cc4 = 1;
  }
  uVar7 = FUN_0160edfc(*(undefined8 *)puVar6,0x100);
  FUN_02df8d44(uVar7,*(undefined8 *)puVar1,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar7;
  thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar7);
  plVar8 = (long *)FUN_0160edfc(*(undefined8 *)puVar2,0x13);
  uVar7 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar3);
  }
  lVar9 = FUN_031c8668(uVar7,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_02909a58:
    uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar7,0);
  }
  puVar1 = PTR_DAT_06e43f68;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_01656ef8(plVar8 + 4,lVar9);
    lVar9 = FUN_031c8668(*(undefined8 *)puVar1,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_02909a58;
    puVar2 = PTR_DAT_06e3cc08;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      thunk_FUN_01656ef8(plVar8 + 5,lVar9);
      lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_02909a58;
      puVar2 = PTR_DAT_06e4f958;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        thunk_FUN_01656ef8(plVar8 + 6,lVar9);
        lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_02909a58;
        puVar2 = PTR_DAT_06e3b4f0;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          thunk_FUN_01656ef8(plVar8 + 7,lVar9);
          lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02909a58;
          puVar2 = PTR_DAT_06e19308;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            thunk_FUN_01656ef8(plVar8 + 8,lVar9);
            lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_02909a58;
            puVar2 = PTR_DAT_06e34f98;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              thunk_FUN_01656ef8(plVar8 + 9,lVar9);
              lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_02909a58;
              puVar2 = PTR_DAT_06deaae8;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                thunk_FUN_01656ef8(plVar8 + 10,lVar9);
                lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_02909a58;
                puVar2 = PTR_DAT_06dda5f0;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar9;
                  thunk_FUN_01656ef8(plVar8 + 0xb,lVar9);
                  lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_02909a58;
                  puVar2 = PTR_DAT_06e4d758;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar9;
                    thunk_FUN_01656ef8(plVar8 + 0xc,lVar9);
                    lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_02909a58;
                    puVar2 = PTR_DAT_06e5d6e0;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar9;
                      thunk_FUN_01656ef8(plVar8 + 0xd,lVar9);
                      lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_02909a58;
                      puVar2 = PTR_DAT_06dc8bd0;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar9;
                        thunk_FUN_01656ef8(plVar8 + 0xe,lVar9);
                        lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_02909a58;
                        puVar2 = PTR_DAT_06ddf4d8;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar9;
                          thunk_FUN_01656ef8(plVar8 + 0xf,lVar9);
                          lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_02909a58;
                          puVar2 = PTR_DAT_06d96f00;
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar9;
                            thunk_FUN_01656ef8(plVar8 + 0x10,lVar9);
                            lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_02909a58;
                            puVar2 = PTR_DAT_06dde460;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar9;
                              thunk_FUN_01656ef8(plVar8 + 0x11,lVar9);
                              lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_02909a58;
                              puVar2 = PTR_DAT_06e322d8;
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar9;
                                thunk_FUN_01656ef8(plVar8 + 0x12,lVar9);
                                lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar10 == 0)) goto LAB_02909a58;
                                puVar2 = PTR_DAT_06dba4a8;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar9;
                                  thunk_FUN_01656ef8(plVar8 + 0x13,lVar9);
                                  lVar9 = FUN_031c8668(*(undefined8 *)puVar2,0);
                                  if ((lVar9 != 0) &&
                                     (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_02909a58;
                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x14] = lVar9;
                                    thunk_FUN_01656ef8(plVar8 + 0x14,lVar9);
                                    lVar9 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                    if ((lVar9 != 0) &&
                                       (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                       lVar10 == 0)) goto LAB_02909a58;
                                    puVar1 = PTR_DAT_06db4eb8;
                                    if (0x11 < *(uint *)(plVar8 + 3)) {
                                      plVar8[0x15] = lVar9;
                                      thunk_FUN_01656ef8(plVar8 + 0x15,lVar9);
                                      lVar9 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                      if ((lVar9 != 0) &&
                                         (lVar10 = thunk_FUN_015d0480(lVar9,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar10 == 0)) goto LAB_02909a58;
                                      puVar5 = PTR_DAT_06e434f0;
                                      puVar3 = PTR_DAT_06ddfa10;
                                      puVar2 = PTR_DAT_06daad00;
                                      puVar1 = PTR_DAT_06d8b368;
                                      if (0x12 < *(uint *)(plVar8 + 3)) {
                                        plVar8[0x16] = lVar9;
                                        thunk_FUN_01656ef8(plVar8 + 0x16,lVar9);
                                        plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                                        *plVar11 = (long)plVar8;
                                        thunk_FUN_01656ef8(plVar11,plVar8);
                                        uVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                        *puVar12 = uVar7;
                                        thunk_FUN_01656ef8(puVar12,uVar7);
                                        uVar7 = FUN_0160edfc(*(undefined8 *)puVar5,0x41);
                                        FUN_02df8d44(uVar7,*(undefined8 *)puVar2,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                                        *puVar12 = uVar7;
                                        thunk_FUN_01656ef8(puVar12,uVar7);
                                        lVar9 = *(long *)puVar3;
                                        if (*(int *)(lVar9 + 0xe0) == 0) {
                                          thunk_FUN_016466fc();
                                          lVar9 = *(long *)puVar3;
                                        }
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar9 + 0xb8);
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


