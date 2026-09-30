/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 058ae7f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(void)

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
  
  thunk_FUN_032e1da0(PTR_DAT_072813a8);
  thunk_FUN_032e1da0(PTR_DAT_0727f070);
  thunk_FUN_032e1da0(PTR_DAT_07296cc0);
  thunk_FUN_032e1da0(PTR_DAT_07294ff0);
  thunk_FUN_032e1da0(PTR_DAT_072898c0);
  thunk_FUN_032e1da0(PTR_DAT_072898c8);
  thunk_FUN_032e1da0(PTR_DAT_072804d8);
  thunk_FUN_032e1da0(PTR_DAT_07296cb8);
  thunk_FUN_032e1da0(PTR_DAT_0728ab88);
  thunk_FUN_032e1da0(PTR_DAT_072813b0);
  thunk_FUN_032e1da0(PTR_DAT_072804e0);
  thunk_FUN_032e1da0(PTR_DAT_072804e8);
  thunk_FUN_032e1da0(PTR_DAT_07282378);
  thunk_FUN_032e1da0(PTR_DAT_072911a0);
  thunk_FUN_032e1da0(PTR_DAT_072813c0);
  thunk_FUN_032e1da0(PTR_DAT_072804f0);
  thunk_FUN_032e1da0(PTR_DAT_072813d0);
  thunk_FUN_032e1da0(PTR_DAT_0727f888);
  thunk_FUN_032e1da0(PTR_DAT_07279510);
  thunk_FUN_032e1da0(PTR_DAT_07296cc8);
  thunk_FUN_032e1da0(PTR_DAT_07296cb0);
  thunk_FUN_032e1da0(PTR_DAT_07281400);
  thunk_FUN_032e1da0(PTR_DAT_07281408);
  thunk_FUN_032e1da0(PTR_DAT_072804f8);
  *(undefined1 *)(unaff_x24 + 0xf9c) = 1;
  uVar5 = FUN_032d5d3c(*unaff_x25,0x100);
  FUN_058505e4(uVar5,*unaff_x19,0);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar5;
  thunk_FUN_0333a630(*(undefined8 *)(*unaff_x21 + 0xb8),uVar5);
  plVar6 = (long *)FUN_032d5d3c(*unaff_x23,0x13);
  uVar5 = *unaff_x20;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x22);
  }
  lVar7 = FUN_059324dc(uVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_058aefdc:
    uVar5 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,0);
  }
  puVar1 = PTR_DAT_07282378;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_0333a630(plVar6 + 4,lVar7);
    lVar7 = FUN_059324dc(*(undefined8 *)puVar1,0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_058aefdc;
    puVar2 = PTR_DAT_07296cc0;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      thunk_FUN_0333a630(plVar6 + 5,lVar7);
      lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_058aefdc;
      puVar2 = PTR_DAT_0727fd28;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_0333a630(plVar6 + 6,lVar7);
        lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_058aefdc;
        puVar2 = PTR_DAT_072813a8;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          thunk_FUN_0333a630(plVar6 + 7,lVar7);
          lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_058aefdc;
          puVar2 = PTR_DAT_072813c0;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            thunk_FUN_0333a630(plVar6 + 8,lVar7);
            lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_058aefdc;
            puVar2 = PTR_DAT_072813a0;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              thunk_FUN_0333a630(plVar6 + 9,lVar7);
              lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_058aefdc;
              puVar2 = PTR_DAT_072813b0;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                thunk_FUN_0333a630(plVar6 + 10,lVar7);
                lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_058aefdc;
                puVar2 = PTR_DAT_07281400;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar7;
                  thunk_FUN_0333a630(plVar6 + 0xb,lVar7);
                  lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_058aefdc;
                  puVar2 = PTR_DAT_072804e0;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    thunk_FUN_0333a630(plVar6 + 0xc,lVar7);
                    lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_058aefdc;
                    puVar2 = PTR_DAT_07281408;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      thunk_FUN_0333a630(plVar6 + 0xd,lVar7);
                      lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_058aefdc;
                      puVar2 = PTR_DAT_072804e8;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        thunk_FUN_0333a630(plVar6 + 0xe,lVar7);
                        lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_058aefdc;
                        puVar2 = PTR_DAT_072804f8;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          thunk_FUN_0333a630(plVar6 + 0xf,lVar7);
                          lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_058aefdc;
                          puVar2 = PTR_DAT_072804f0;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            thunk_FUN_0333a630(plVar6 + 0x10,lVar7);
                            lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_058aefdc;
                            puVar2 = PTR_DAT_072804d8;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              thunk_FUN_0333a630(plVar6 + 0x11,lVar7);
                              lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                              if ((lVar7 != 0) &&
                                 (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_058aefdc;
                              puVar2 = PTR_DAT_072898c8;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                thunk_FUN_0333a630(plVar6 + 0x12,lVar7);
                                lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_058aefdc;
                                puVar2 = PTR_DAT_072898c0;
                                if (0xf < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x13] = lVar7;
                                  thunk_FUN_0333a630(plVar6 + 0x13,lVar7);
                                  lVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar8 == 0)) goto LAB_058aefdc;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    thunk_FUN_0333a630(plVar6 + 0x14,lVar7);
                                    lVar7 = FUN_059324dc(*(undefined8 *)puVar1,0);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_058aefdc;
                                    puVar1 = PTR_DAT_072813d0;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      thunk_FUN_0333a630(plVar6 + 0x15,lVar7);
                                      lVar7 = FUN_059324dc(*(undefined8 *)puVar1,0);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_058aefdc;
                                      puVar4 = PTR_DAT_07296cc8;
                                      puVar3 = PTR_DAT_07294ff0;
                                      puVar2 = PTR_DAT_0728ab88;
                                      puVar1 = PTR_DAT_0727f228;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        thunk_FUN_0333a630(plVar6 + 0x16,lVar7);
                                        plVar9 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                                        *plVar9 = (long)plVar6;
                                        thunk_FUN_0333a630(plVar9,plVar6);
                                        uVar5 = FUN_059324dc(*(undefined8 *)puVar2,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x10);
                                        *puVar10 = uVar5;
                                        thunk_FUN_0333a630(puVar10,uVar5);
                                        uVar5 = FUN_032d5d3c(*(undefined8 *)puVar1,0x41);
                                        FUN_058505e4(uVar5,*(undefined8 *)puVar4,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                        *puVar10 = uVar5;
                                        thunk_FUN_0333a630(puVar10,uVar5);
                                        lVar7 = *(long *)puVar3;
                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          lVar7 = *(long *)puVar3;
                                        }
                                        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar7 + 0xb8);
                                        thunk_FUN_0333a630();
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
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


