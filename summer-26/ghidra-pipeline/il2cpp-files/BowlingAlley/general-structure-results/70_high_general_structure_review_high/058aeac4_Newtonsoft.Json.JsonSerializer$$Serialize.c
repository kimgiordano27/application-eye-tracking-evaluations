/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 058aeac4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(void)

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
  
  lVar5 = thunk_FUN_032a55a4();
  puVar1 = PTR_DAT_072813c0;
  if (lVar5 != 0) {
    if (4 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[8] = unaff_x20;
      thunk_FUN_0333a630();
      lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_058aefdc;
      puVar1 = PTR_DAT_072813a0;
      if (5 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[9] = lVar5;
        thunk_FUN_0333a630(unaff_x19 + 9,lVar5);
        lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_058aefdc;
        puVar1 = PTR_DAT_072813b0;
        if (6 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[10] = lVar5;
          thunk_FUN_0333a630(unaff_x19 + 10,lVar5);
          lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
          goto LAB_058aefdc;
          puVar1 = PTR_DAT_07281400;
          if (7 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xb] = lVar5;
            thunk_FUN_0333a630(unaff_x19 + 0xb,lVar5);
            lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
            goto LAB_058aefdc;
            puVar1 = PTR_DAT_072804e0;
            if (8 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xc] = lVar5;
              thunk_FUN_0333a630(unaff_x19 + 0xc,lVar5);
              lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
              goto LAB_058aefdc;
              puVar1 = PTR_DAT_07281408;
              if (9 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xd] = lVar5;
                thunk_FUN_0333a630(unaff_x19 + 0xd,lVar5);
                lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0
                   )) goto LAB_058aefdc;
                puVar1 = PTR_DAT_072804e8;
                if (10 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xe] = lVar5;
                  thunk_FUN_0333a630(unaff_x19 + 0xe,lVar5);
                  lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar6 == 0)) goto LAB_058aefdc;
                  puVar1 = PTR_DAT_072804f8;
                  if (0xb < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xf] = lVar5;
                    thunk_FUN_0333a630(unaff_x19 + 0xf,lVar5);
                    lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar6 == 0)) goto LAB_058aefdc;
                    puVar1 = PTR_DAT_072804f0;
                    if (0xc < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x10] = lVar5;
                      thunk_FUN_0333a630(unaff_x19 + 0x10,lVar5);
                      lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar6 == 0)) goto LAB_058aefdc;
                      puVar1 = PTR_DAT_072804d8;
                      if (0xd < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x11] = lVar5;
                        thunk_FUN_0333a630(unaff_x19 + 0x11,lVar5);
                        lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar6 == 0)) goto LAB_058aefdc;
                        puVar1 = PTR_DAT_072898c8;
                        if (0xe < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x12] = lVar5;
                          thunk_FUN_0333a630(unaff_x19 + 0x12,lVar5);
                          lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar6 == 0)) goto LAB_058aefdc;
                          puVar1 = PTR_DAT_072898c0;
                          if (0xf < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x13] = lVar5;
                            thunk_FUN_0333a630(unaff_x19 + 0x13,lVar5);
                            lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar6 == 0)) goto LAB_058aefdc;
                            if (0x10 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x14] = lVar5;
                              thunk_FUN_0333a630(unaff_x19 + 0x14,lVar5);
                              lVar5 = FUN_059324dc(*unaff_x22,0);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar6 == 0
                                 )) goto LAB_058aefdc;
                              puVar1 = PTR_DAT_072813d0;
                              if (0x11 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x15] = lVar5;
                                thunk_FUN_0333a630(unaff_x19 + 0x15,lVar5);
                                lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar6 == 0)) goto LAB_058aefdc;
                                puVar4 = PTR_DAT_07296cc8;
                                puVar3 = PTR_DAT_07294ff0;
                                puVar2 = PTR_DAT_0728ab88;
                                puVar1 = PTR_DAT_0727f228;
                                if (0x12 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x16] = lVar5;
                                  thunk_FUN_0333a630(unaff_x19 + 0x16,lVar5);
                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                                  thunk_FUN_0333a630();
                                  uVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
                                  puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                                  *puVar8 = uVar7;
                                  thunk_FUN_0333a630(puVar8,uVar7);
                                  uVar7 = FUN_032d5d3c(*(undefined8 *)puVar1,0x41);
                                  FUN_058505e4(uVar7,*(undefined8 *)puVar4,0);
                                  puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                  *puVar8 = uVar7;
                                  thunk_FUN_0333a630(puVar8,uVar7);
                                  lVar5 = *(long *)puVar3;
                                  if (*(int *)(lVar5 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar5 = *(long *)puVar3;
                                  }
                                  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                       **(undefined8 **)(lVar5 + 0xb8);
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
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_058aefdc:
  uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar7,0);
}


