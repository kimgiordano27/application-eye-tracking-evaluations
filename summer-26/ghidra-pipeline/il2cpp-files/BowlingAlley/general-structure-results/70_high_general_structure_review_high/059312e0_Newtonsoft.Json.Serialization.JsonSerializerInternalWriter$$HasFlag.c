/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 059312e0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
               (undefined8 *param_1,long param_2)

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
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *plVar14;
  
  plVar14 = *(long **)(unaff_x22 + 0x9e0);
  *(undefined8 *)(param_2 + 0x38) = *param_1;
  thunk_FUN_0333a630();
  **(undefined8 **)(*plVar14 + 0xb8) = unaff_x19;
  thunk_FUN_0333a630(*(undefined8 *)(*plVar14 + 0xb8));
  lVar10 = FUN_032d5d3c(*unaff_x21,0x10);
  if (lVar10 == 0) goto LAB_05931aa8;
  if (*(int *)(lVar10 + 0x18) != 0) {
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_0729a180;
    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20));
    if (1 < *(uint *)(lVar10 + 0x18)) {
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_0729a0b0;
      thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x28));
      if (2 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_0729a1a0;
        thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x30));
        if (3 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_0729a110;
          thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x38));
          if (4 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_0729a0b8;
            thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x40));
            if (5 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)PTR_DAT_0729a158;
              thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x48));
              if (6 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_0729a0e8;
                thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x50));
                if (7 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)PTR_DAT_0729a100;
                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x58));
                  if (8 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_0729a178;
                    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x60));
                    if (9 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)PTR_DAT_0729a188;
                      thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x68));
                      if (10 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)PTR_DAT_0729a1a8;
                        thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x70));
                        if (0xb < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)PTR_DAT_0729a0d8;
                          thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x78));
                          if (0xc < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)PTR_DAT_0729a120;
                            thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x80));
                            if (0xd < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)PTR_DAT_0729a098;
                              thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x88));
                              if (0xe < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)PTR_DAT_0729a108;
                                thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x90));
                                if (0xf < *(uint *)(lVar10 + 0x18)) {
                                  *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)PTR_DAT_0729a190;
                                  thunk_FUN_0333a630();
                                  plVar11 = (long *)(*(long *)(*plVar14 + 0xb8) + 8);
                                  *plVar11 = lVar10;
                                  thunk_FUN_0333a630(plVar11,lVar10);
                                  lVar10 = FUN_032d5d3c(*unaff_x21,4);
                                  if (lVar10 == 0) {
LAB_05931aa8:
                    /* WARNING: Subroutine does not return */
                                    FUN_032d5ee8();
                                  }
                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_0729a170
                                    ;
                                    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20));
                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                      *(undefined8 *)(lVar10 + 0x28) =
                                           *(undefined8 *)PTR_DAT_0729a0c8;
                                      thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x28));
                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                        *(undefined8 *)(lVar10 + 0x30) =
                                             *(undefined8 *)PTR_DAT_0729a0a8;
                                        thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x30));
                                        if (3 < *(uint *)(lVar10 + 0x18)) {
                                          *(undefined8 *)(lVar10 + 0x38) =
                                               *(undefined8 *)PTR_DAT_0729a128;
                                          thunk_FUN_0333a630();
                                          plVar11 = (long *)(*(long *)(*plVar14 + 0xb8) + 0x10);
                                          *plVar11 = lVar10;
                                          thunk_FUN_0333a630(plVar11,lVar10);
                                          lVar10 = FUN_032d5d3c(*unaff_x21,0xc);
                                          if (lVar10 == 0) goto LAB_05931aa8;
                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                            *(undefined8 *)(lVar10 + 0x20) =
                                                 *(undefined8 *)PTR_DAT_0729a168;
                                            thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20));
                                            if (1 < *(uint *)(lVar10 + 0x18)) {
                                              *(undefined8 *)(lVar10 + 0x28) =
                                                   *(undefined8 *)PTR_DAT_0729a1b0;
                                              thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x28));
                                              if (2 < *(uint *)(lVar10 + 0x18)) {
                                                *(undefined8 *)(lVar10 + 0x30) =
                                                     *(undefined8 *)PTR_DAT_0729a0d0;
                                                thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x30));
                                                if (3 < *(uint *)(lVar10 + 0x18)) {
                                                  *(undefined8 *)(lVar10 + 0x38) =
                                                       *(undefined8 *)PTR_DAT_0729a080;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x38));
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_0729a088;
                                                    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x40)
                                                                      );
                                                    if (5 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x48) =
                                                           *(undefined8 *)PTR_DAT_0729a160;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar10 + 0x48));
                                                      if (6 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x50) =
                                                             *(undefined8 *)PTR_DAT_0729a130;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar10 + 0x50));
                                                        if (7 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x58) =
                                                               *(undefined8 *)PTR_DAT_0729a150;
                                                          thunk_FUN_0333a630((undefined8 *)
                                                                             (lVar10 + 0x58));
                                                          if (8 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x60) =
                                                                 *(undefined8 *)PTR_DAT_0729a140;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar10 + 0x60));
                                                            if (9 < *(uint *)(lVar10 + 0x18)) {
                                                              *(undefined8 *)(lVar10 + 0x68) =
                                                                   *(undefined8 *)PTR_DAT_0729a090;
                                                              thunk_FUN_0333a630((undefined8 *)
                                                                                 (lVar10 + 0x68));
                                                              if (10 < *(uint *)(lVar10 + 0x18)) {
                                                                *(undefined8 *)(lVar10 + 0x70) =
                                                                     *(undefined8 *)PTR_DAT_0729a0f8
                                                                ;
                                                                thunk_FUN_0333a630((undefined8 *)
                                                                                   (lVar10 + 0x70));
                                                                if (0xb < *(uint *)(lVar10 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar10 + 0x78) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_0729a0e0;
                                                                  thunk_FUN_0333a630();
                                                                  plVar11 = (long *)(*(long *)(*
                                                  plVar14 + 0xb8) + 0x18);
                                                  *plVar11 = lVar10;
                                                  thunk_FUN_0333a630(plVar11,lVar10);
                                                  lVar10 = FUN_032d5d3c(*unaff_x21,5);
                                                  if (lVar10 == 0) goto LAB_05931aa8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_0729a1c0;
                                                    thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_0729a0a0;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar10 + 0x28));
                                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_0729a138;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar10 + 0x30));
                                                        if (3 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_0729a0f0;
                                                          thunk_FUN_0333a630((undefined8 *)
                                                                             (lVar10 + 0x38));
                                                          puVar9 = PTR_DAT_0729a078;
                                                          puVar8 = PTR_DAT_0729a070;
                                                          puVar7 = PTR_DAT_0729a068;
                                                          puVar6 = PTR_DAT_0729a060;
                                                          puVar5 = PTR_DAT_0729a058;
                                                          puVar4 = PTR_DAT_07291bd0;
                                                          puVar3 = PTR_DAT_07291828;
                                                          puVar2 = PTR_DAT_072911a0;
                                                          puVar1 = PTR_DAT_0727aa68;
                                                          if (4 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_0729a148;
                                                            thunk_FUN_0333a630();
                                                            plVar11 = (long *)(*(long *)(*plVar14 +
                                                                                        0xb8) + 0x20
                                                                              );
                                                            *plVar11 = lVar10;
                                                            thunk_FUN_0333a630(plVar11,lVar10);
                                                            uVar12 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar1,0x100);
                                                            FUN_058505e4(uVar12,*(undefined8 *)
                                                                                 puVar8,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*plVar14 + 0xb8) +
                                                                      0x28);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_0333a630(puVar13,uVar12);
                                                            uVar12 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar4,0x1e);
                                                            FUN_058505e4(uVar12,*(undefined8 *)
                                                                                 puVar9,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*plVar14 + 0xb8) +
                                                                      0x30);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_0333a630(puVar13,uVar12);
                                                            uVar12 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar2,0xf);
                                                            FUN_058505e4(uVar12,*(undefined8 *)
                                                                                 puVar7,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*plVar14 + 0xb8) +
                                                                      0x38);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_0333a630(puVar13,uVar12);
                                                            uVar12 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar4,0x2a);
                                                            FUN_058505e4(uVar12,*(undefined8 *)
                                                                                 puVar6,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*plVar14 + 0xb8) +
                                                                      0x40);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_0333a630(puVar13,uVar12);
                                                            uVar12 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar3,0x15);
                                                            FUN_058505e4(uVar12,*(undefined8 *)
                                                                                 puVar5,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*plVar14 + 0xb8) +
                                                                      0x48);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_0333a630(puVar13,uVar12);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


