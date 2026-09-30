/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 050148c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(long param_1)

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
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x978));
  FUN_02d6084c(PTR_DAT_0677a980);
  FUN_02d6084c(PTR_DAT_0677a988);
  FUN_02d6084c(PTR_DAT_0677a990);
  FUN_02d6084c(PTR_DAT_0677a998);
  FUN_02d6084c(PTR_DAT_0677a9a0);
  FUN_02d6084c(PTR_DAT_0677a9a8);
  FUN_02d6084c(PTR_DAT_0677a9b0);
  FUN_02d6084c(PTR_DAT_0677a9b8);
  FUN_02d6084c(PTR_DAT_0677a9c0);
  FUN_02d6084c(PTR_DAT_0677a9c8);
  FUN_02d6084c(PTR_DAT_0677a9d0);
  FUN_02d6084c(PTR_DAT_0677a9d8);
  FUN_02d6084c(PTR_DAT_0677a9e0);
  FUN_02d6084c(PTR_DAT_0677a9e8);
  FUN_02d6084c(PTR_DAT_0677a9f0);
  FUN_02d6084c(PTR_DAT_0677a9f8);
  FUN_02d6084c(PTR_DAT_0677aa00);
  FUN_02d6084c(PTR_DAT_0677aa08);
  FUN_02d6084c(PTR_DAT_0677aa10);
  FUN_02d6084c(PTR_DAT_0677aa18);
  FUN_02d6084c(PTR_DAT_0677aa20);
  FUN_02d6084c(PTR_DAT_0677aa28);
  FUN_02d6084c(PTR_DAT_0677aa30);
  FUN_02d6084c(PTR_DAT_0677aa38);
  FUN_02d6084c(PTR_DAT_0677aa40);
  FUN_02d6084c(PTR_DAT_0677aa48);
  FUN_02d6084c(PTR_DAT_0677aa50);
  FUN_02d6084c(PTR_DAT_0677aa58);
  FUN_02d6084c(PTR_DAT_0677aa60);
  FUN_02d6084c(PTR_DAT_0677aa68);
  *(undefined1 *)(unaff_x19 + 0x22f) = 1;
  lVar11 = FUN_02d60934(*unaff_x21,4);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_0677aa60;
      thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
      if (1 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_0677a9c0;
        thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x28));
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_0677a968;
          thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x30));
          puVar5 = PTR_DAT_06777060;
          if (3 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_0677aa40;
            thunk_FUN_02dd37b4();
            **(long **)(*(long *)puVar5 + 0xb8) = lVar11;
            thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar11);
            lVar11 = FUN_02d60934(*unaff_x21,0x10);
            if (lVar11 == 0) goto LAB_050152ac;
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_0677aa28;
              thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
              if (1 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_0677a958;
                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x28));
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_0677aa48;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x30));
                  if (3 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_0677a9b8;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x38));
                    if (4 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_0677a960;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x40));
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_0677aa00;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x48));
                        if (6 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_0677a990;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x50));
                          if (7 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_0677a9a8;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x58));
                            if (8 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_0677aa20;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x60));
                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_0677aa30;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x68));
                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_0677aa50;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x70));
                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_0677a980
                                    ;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x78));
                                    if (0xc < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x80) =
                                           *(undefined8 *)PTR_DAT_0677a9c8;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x80));
                                      if (0xd < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x88) =
                                             *(undefined8 *)PTR_DAT_0677a940;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x88));
                                        if (0xe < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x90) =
                                               *(undefined8 *)PTR_DAT_0677a9b0;
                                          thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x90));
                                          if (0xf < *(uint *)(lVar11 + 0x18)) {
                                            *(undefined8 *)(lVar11 + 0x98) =
                                                 *(undefined8 *)PTR_DAT_0677aa38;
                                            thunk_FUN_02dd37b4();
                                            plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8
                                                              );
                                            *plVar12 = lVar11;
                                            thunk_FUN_02dd37b4(plVar12,lVar11);
                                            lVar11 = FUN_02d60934(*unaff_x21,4);
                                            if (lVar11 == 0) goto LAB_050152ac;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)PTR_DAT_0677aa18;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                                              if (1 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)PTR_DAT_0677a970;
                                                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x28));
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)PTR_DAT_0677a950;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x30));
                                                  if (3 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_0677a9d0;
                                                    thunk_FUN_02dd37b4();
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x10);
                                                    *plVar12 = lVar11;
                                                    thunk_FUN_02dd37b4(plVar12,lVar11);
                                                    lVar11 = FUN_02d60934(*unaff_x21,0xc);
                                                    if (lVar11 == 0) goto LAB_050152ac;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_0677aa10;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar11 + 0x20));
                                                      if (1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_0677aa58;
                                                        thunk_FUN_02dd37b4((undefined8 *)
                                                                           (lVar11 + 0x28));
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x30) =
                                                               *(undefined8 *)PTR_DAT_0677a978;
                                                          thunk_FUN_02dd37b4((undefined8 *)
                                                                             (lVar11 + 0x30));
                                                          if (3 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x38) =
                                                                 *(undefined8 *)PTR_DAT_0677a928;
                                                            thunk_FUN_02dd37b4((undefined8 *)
                                                                               (lVar11 + 0x38));
                                                            if (4 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x40) =
                                                                   *(undefined8 *)PTR_DAT_0677a930;
                                                              thunk_FUN_02dd37b4((undefined8 *)
                                                                                 (lVar11 + 0x40));
                                                              if (5 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x48) =
                                                                     *(undefined8 *)PTR_DAT_0677aa08
                                                                ;
                                                                thunk_FUN_02dd37b4((undefined8 *)
                                                                                   (lVar11 + 0x48));
                                                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x50) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_0677a9d8;
                                                                  thunk_FUN_02dd37b4((undefined8 *)
                                                                                     (lVar11 + 0x50)
                                                                                    );
                                                                  if (7 < *(uint *)(lVar11 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_0677a9f8;
                                                                    thunk_FUN_02dd37b4((undefined8 *
                                                                                       )(lVar11 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_0677a9e8;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x60)
                                                                      );
                                                    if (9 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x68) =
                                                           *(undefined8 *)PTR_DAT_0677a938;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar11 + 0x68));
                                                      if (10 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x70) =
                                                             *(undefined8 *)PTR_DAT_0677a9a0;
                                                        thunk_FUN_02dd37b4((undefined8 *)
                                                                           (lVar11 + 0x70));
                                                        if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x78) =
                                                               *(undefined8 *)PTR_DAT_0677a988;
                                                          thunk_FUN_02dd37b4();
                                                          plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x18);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_02dd37b4(plVar12,lVar11);
                                                  lVar11 = FUN_02d60934(*unaff_x21,5);
                                                  if (lVar11 == 0) goto LAB_050152ac;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_0677aa68;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    if (1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_0677a948;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar11 + 0x28));
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_0677a9e0;
                                                        thunk_FUN_02dd37b4((undefined8 *)
                                                                           (lVar11 + 0x30));
                                                        if (3 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_0677a998;
                                                          thunk_FUN_02dd37b4((undefined8 *)
                                                                             (lVar11 + 0x38));
                                                          puVar10 = PTR_DAT_0677a920;
                                                          puVar9 = PTR_DAT_0677a918;
                                                          puVar8 = PTR_DAT_0677a910;
                                                          puVar7 = PTR_DAT_0677a908;
                                                          puVar6 = PTR_DAT_0677a900;
                                                          puVar4 = PTR_DAT_06772098;
                                                          puVar3 = PTR_DAT_06771cd0;
                                                          puVar2 = PTR_DAT_06771610;
                                                          puVar1 = PTR_DAT_0675ee10;
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_0677a9f0;
                                                            thunk_FUN_02dd37b4();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_02dd37b4(plVar12,lVar11);
                                                  uVar13 = FUN_02d60934(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_04f2efa4(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dd37b4(puVar14,uVar13);
                                                  uVar13 = FUN_02d60934(*(undefined8 *)puVar4,0x1e);
                                                  FUN_04f2efa4(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dd37b4(puVar14,uVar13);
                                                  uVar13 = FUN_02d60934(*(undefined8 *)puVar2,0xf);
                                                  FUN_04f2efa4(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dd37b4(puVar14,uVar13);
                                                  uVar13 = FUN_02d60934(*(undefined8 *)puVar4,0x2a);
                                                  FUN_04f2efa4(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dd37b4(puVar14,uVar13);
                                                  uVar13 = FUN_02d60934(*(undefined8 *)puVar3,0x15);
                                                  FUN_04f2efa4(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dd37b4(puVar14,uVar13);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_050152ac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


