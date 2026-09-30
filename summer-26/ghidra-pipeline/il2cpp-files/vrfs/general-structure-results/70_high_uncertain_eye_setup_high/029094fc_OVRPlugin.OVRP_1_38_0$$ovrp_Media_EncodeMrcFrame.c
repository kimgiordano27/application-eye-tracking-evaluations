/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 029094fc
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  lVar5 = thunk_FUN_015d0480(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_DAT_06e3b4f0;
  if (lVar5 != 0) {
    if (3 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[7] = unaff_x20;
      thunk_FUN_01656ef8();
      lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_02909a58;
      puVar1 = PTR_DAT_06e19308;
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar5;
        thunk_FUN_01656ef8(unaff_x19 + 8,lVar5);
        lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                    /* try { // try from 02909588 to 02a095af has its CatchHandler @ 0290974c */
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_02909a58;
        puVar1 = PTR_DAT_06e34f98;
        if (5 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[9] = lVar5;
          thunk_FUN_01656ef8(unaff_x19 + 9,lVar5);
          lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
          goto LAB_02909a58;
          puVar1 = PTR_DAT_06deaae8;
          if (6 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[10] = lVar5;
            thunk_FUN_01656ef8(unaff_x19 + 10,lVar5);
            lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
            goto LAB_02909a58;
            puVar1 = PTR_DAT_06dda5f0;
            if (7 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xb] = lVar5;
              thunk_FUN_01656ef8(unaff_x19 + 0xb,lVar5);
              lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
              goto LAB_02909a58;
              puVar1 = PTR_DAT_06e4d758;
              if (8 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xc] = lVar5;
                thunk_FUN_01656ef8(unaff_x19 + 0xc,lVar5);
                lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0
                   )) goto LAB_02909a58;
                puVar1 = PTR_DAT_06e5d6e0;
                if (9 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xd] = lVar5;
                  thunk_FUN_01656ef8(unaff_x19 + 0xd,lVar5);
                  lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar6 == 0)) goto LAB_02909a58;
                  puVar1 = PTR_DAT_06dc8bd0;
                  if (10 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xe] = lVar5;
                    thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar5);
                    lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar6 == 0)) goto LAB_02909a58;
                    puVar1 = PTR_DAT_06ddf4d8;
                    if (0xb < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xf] = lVar5;
                      thunk_FUN_01656ef8(unaff_x19 + 0xf,lVar5);
                      lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar6 == 0)) goto LAB_02909a58;
                      puVar1 = PTR_DAT_06d96f00;
                      if (0xc < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x10] = lVar5;
                        thunk_FUN_01656ef8(unaff_x19 + 0x10,lVar5);
                        lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar6 == 0)) goto LAB_02909a58;
                        puVar1 = PTR_DAT_06dde460;
                        if (0xd < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x11] = lVar5;
                          thunk_FUN_01656ef8(unaff_x19 + 0x11,lVar5);
                          lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar6 == 0)) goto LAB_02909a58;
                          puVar1 = PTR_DAT_06e322d8;
                          if (0xe < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x12] = lVar5;
                            thunk_FUN_01656ef8(unaff_x19 + 0x12,lVar5);
                            lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar6 == 0)) goto LAB_02909a58;
                            puVar1 = PTR_DAT_06dba4a8;
                            if (0xf < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x13] = lVar5;
                              thunk_FUN_01656ef8(unaff_x19 + 0x13,lVar5);
                              lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar6 == 0
                                 )) goto LAB_02909a58;
                              if (0x10 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x14] = lVar5;
                                thunk_FUN_01656ef8(unaff_x19 + 0x14,lVar5);
                                lVar5 = FUN_031c8668(*unaff_x22,0);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar6 == 0)) goto LAB_02909a58;
                                puVar1 = PTR_DAT_06db4eb8;
                                if (0x11 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x15] = lVar5;
                                  thunk_FUN_01656ef8(unaff_x19 + 0x15,lVar5);
                                  lVar5 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar6 == 0)) goto LAB_02909a58;
                                  puVar4 = PTR_DAT_06e434f0;
                                  puVar3 = PTR_DAT_06ddfa10;
                                  puVar2 = PTR_DAT_06daad00;
                                  puVar1 = PTR_DAT_06d8b368;
                                  if (0x12 < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x16] = lVar5;
                                    thunk_FUN_01656ef8(unaff_x19 + 0x16,lVar5);
                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                                    thunk_FUN_01656ef8();
                                    uVar7 = FUN_031c8668(*(undefined8 *)puVar1,0);
                                    puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                                    *puVar8 = uVar7;
                                    thunk_FUN_01656ef8(puVar8,uVar7);
                                    uVar7 = FUN_0160edfc(*(undefined8 *)puVar4,0x41);
                                    FUN_02df8d44(uVar7,*(undefined8 *)puVar2,0);
                                    puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                    *puVar8 = uVar7;
                                    thunk_FUN_01656ef8(puVar8,uVar7);
                                    lVar5 = *(long *)puVar3;
                                    if (*(int *)(lVar5 + 0xe0) == 0) {
                                      thunk_FUN_016466fc();
                                      lVar5 = *(long *)puVar3;
                                    }
                                    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                         **(undefined8 **)(lVar5 + 0xb8);
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
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_02909a58:
  uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar7,0);
}


