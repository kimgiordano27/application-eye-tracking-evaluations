/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058ae790
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


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

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
  
  puVar6 = PTR_DAT_07296cb8;
  puVar5 = PTR_DAT_07296cb0;
  puVar4 = PTR_DAT_072911a0;
  puVar3 = PTR_DAT_0727f888;
  puVar2 = PTR_DAT_0727f070;
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076d4f9c & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fd28);
    thunk_FUN_032e1da0(PTR_DAT_072813a0);
    thunk_FUN_032e1da0(PTR_DAT_0727f228);
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
    DAT_076d4f9c = 1;
  }
  uVar7 = FUN_032d5d3c(*(undefined8 *)puVar4,0x100);
  FUN_058505e4(uVar7,*(undefined8 *)puVar5,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  plVar8 = (long *)FUN_032d5d3c(*(undefined8 *)puVar3,0x13);
  uVar7 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  lVar9 = FUN_059324dc(uVar7,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_058aefdc:
    uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,0);
  }
  puVar1 = PTR_DAT_07282378;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_0333a630(plVar8 + 4,lVar9);
    lVar9 = FUN_059324dc(*(undefined8 *)puVar1,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_058aefdc;
    puVar3 = PTR_DAT_07296cc0;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      thunk_FUN_0333a630(plVar8 + 5,lVar9);
      lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_058aefdc;
      puVar3 = PTR_DAT_0727fd28;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        thunk_FUN_0333a630(plVar8 + 6,lVar9);
        lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_058aefdc;
        puVar3 = PTR_DAT_072813a8;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          thunk_FUN_0333a630(plVar8 + 7,lVar9);
          lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_058aefdc;
          puVar3 = PTR_DAT_072813c0;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            thunk_FUN_0333a630(plVar8 + 8,lVar9);
            lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_058aefdc;
            puVar3 = PTR_DAT_072813a0;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              thunk_FUN_0333a630(plVar8 + 9,lVar9);
              lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_058aefdc;
              puVar3 = PTR_DAT_072813b0;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                thunk_FUN_0333a630(plVar8 + 10,lVar9);
                lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_058aefdc;
                puVar3 = PTR_DAT_07281400;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar9;
                  thunk_FUN_0333a630(plVar8 + 0xb,lVar9);
                  lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_058aefdc;
                  puVar3 = PTR_DAT_072804e0;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar9;
                    thunk_FUN_0333a630(plVar8 + 0xc,lVar9);
                    lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_058aefdc;
                    puVar3 = PTR_DAT_07281408;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar9;
                      thunk_FUN_0333a630(plVar8 + 0xd,lVar9);
                      lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_058aefdc;
                      puVar3 = PTR_DAT_072804e8;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar9;
                        thunk_FUN_0333a630(plVar8 + 0xe,lVar9);
                        lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_058aefdc;
                        puVar3 = PTR_DAT_072804f8;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar9;
                          thunk_FUN_0333a630(plVar8 + 0xf,lVar9);
                          lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_058aefdc;
                          puVar3 = PTR_DAT_072804f0;
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar9;
                            thunk_FUN_0333a630(plVar8 + 0x10,lVar9);
                            lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_058aefdc;
                            puVar3 = PTR_DAT_072804d8;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar9;
                              thunk_FUN_0333a630(plVar8 + 0x11,lVar9);
                              lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_058aefdc;
                              puVar3 = PTR_DAT_072898c8;
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar9;
                                thunk_FUN_0333a630(plVar8 + 0x12,lVar9);
                                lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar10 == 0)) goto LAB_058aefdc;
                                puVar3 = PTR_DAT_072898c0;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar9;
                                  thunk_FUN_0333a630(plVar8 + 0x13,lVar9);
                                  lVar9 = FUN_059324dc(*(undefined8 *)puVar3,0);
                                  if ((lVar9 != 0) &&
                                     (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_058aefdc;
                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x14] = lVar9;
                                    thunk_FUN_0333a630(plVar8 + 0x14,lVar9);
                                    lVar9 = FUN_059324dc(*(undefined8 *)puVar1,0);
                                    if ((lVar9 != 0) &&
                                       (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                       lVar10 == 0)) goto LAB_058aefdc;
                                    puVar1 = PTR_DAT_072813d0;
                                    if (0x11 < *(uint *)(plVar8 + 3)) {
                                      plVar8[0x15] = lVar9;
                                      thunk_FUN_0333a630(plVar8 + 0x15,lVar9);
                                      lVar9 = FUN_059324dc(*(undefined8 *)puVar1,0);
                                      if ((lVar9 != 0) &&
                                         (lVar10 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar10 == 0)) goto LAB_058aefdc;
                                      puVar5 = PTR_DAT_07296cc8;
                                      puVar4 = PTR_DAT_07294ff0;
                                      puVar3 = PTR_DAT_0728ab88;
                                      puVar1 = PTR_DAT_0727f228;
                                      if (0x12 < *(uint *)(plVar8 + 3)) {
                                        plVar8[0x16] = lVar9;
                                        thunk_FUN_0333a630(plVar8 + 0x16,lVar9);
                                        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                        *plVar11 = (long)plVar8;
                                        thunk_FUN_0333a630(plVar11,plVar8);
                                        uVar7 = FUN_059324dc(*(undefined8 *)puVar3,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                                        *puVar12 = uVar7;
                                        thunk_FUN_0333a630(puVar12,uVar7);
                                        uVar7 = FUN_032d5d3c(*(undefined8 *)puVar1,0x41);
                                        FUN_058505e4(uVar7,*(undefined8 *)puVar5,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                                        *puVar12 = uVar7;
                                        thunk_FUN_0333a630(puVar12,uVar7);
                                        lVar9 = *(long *)puVar4;
                                        if (*(int *)(lVar9 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          lVar9 = *(long *)puVar4;
                                        }
                                        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar9 + 0xb8);
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


