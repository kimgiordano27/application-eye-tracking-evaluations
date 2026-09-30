/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 07185f00
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

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
  bool in_ZR;
  bool in_CY;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  puVar5 = PTR_DAT_0920eb10;
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)PTR_DAT_09212d00;
    thunk_FUN_03d1023c();
    **(long **)(*(long *)puVar5 + 0xb8) = unaff_x19;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar5 + 0xb8));
    lVar11 = FUN_03d2d394(*unaff_x21,0x10);
    if (lVar11 == 0) goto LAB_071866dc;
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_09212ce8;
      thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
      if (1 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_09212c18;
        thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28));
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09212d08;
          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
          if (3 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_09212c78;
            thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x38));
            if (4 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_09212c20;
              thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x40));
              if (5 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_09212cc0;
                thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x48));
                if (6 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_09212c50;
                  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x50));
                  if (7 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_09212c68;
                    thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x58));
                    if (8 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_09212ce0;
                      thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x60));
                      if (9 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_09212cf0;
                        thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x68));
                        if (10 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_09212d10;
                          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x70));
                          if (0xb < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_09212c40;
                            thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x78));
                            if (0xc < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)PTR_DAT_09212c88;
                              thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x80));
                              if (0xd < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)PTR_DAT_09212c00;
                                thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x88));
                                if (0xe < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x90) = *(undefined8 *)PTR_DAT_09212c70;
                                  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x90));
                                  if (0xf < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)PTR_DAT_09212cf8
                                    ;
                                    thunk_FUN_03d1023c();
                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                                    *plVar12 = lVar11;
                                    thunk_FUN_03d1023c(plVar12,lVar11);
                                    lVar11 = FUN_03d2d394(*unaff_x21,4);
                                    if (lVar11 == 0) {
LAB_071866dc:
                    /* WARNING: Subroutine does not return */
                                      FUN_03d2d548();
                                    }
                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                      *(undefined8 *)(lVar11 + 0x20) =
                                           *(undefined8 *)PTR_DAT_09212cd8;
                                      thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
                                      if (1 < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x28) =
                                             *(undefined8 *)PTR_DAT_09212c30;
                                        thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28));
                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x30) =
                                               *(undefined8 *)PTR_DAT_09212c10;
                                          thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
                                          if (3 < *(uint *)(lVar11 + 0x18)) {
                                            *(undefined8 *)(lVar11 + 0x38) =
                                                 *(undefined8 *)PTR_DAT_09212c90;
                                            thunk_FUN_03d1023c();
                                            plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x10);
                                            *plVar12 = lVar11;
                                            thunk_FUN_03d1023c(plVar12,lVar11);
                                            lVar11 = FUN_03d2d394(*unaff_x21,0xc);
                                            if (lVar11 == 0) goto LAB_071866dc;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)PTR_DAT_09212cd0;
                                              thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20));
                                              if (1 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)PTR_DAT_09212d18;
                                                thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x28));
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)PTR_DAT_09212c38;
                                                  thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x30));
                                                  if (3 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_09212be8;
                                                    thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x38)
                                                                      );
                                                    if (4 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x40) =
                                                           *(undefined8 *)PTR_DAT_09212bf0;
                                                      thunk_FUN_03d1023c((undefined8 *)
                                                                         (lVar11 + 0x40));
                                                      if (5 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x48) =
                                                             *(undefined8 *)PTR_DAT_09212cc8;
                                                        thunk_FUN_03d1023c((undefined8 *)
                                                                           (lVar11 + 0x48));
                                                        if (6 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x50) =
                                                               *(undefined8 *)PTR_DAT_09212c98;
                                                          thunk_FUN_03d1023c((undefined8 *)
                                                                             (lVar11 + 0x50));
                                                          if (7 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x58) =
                                                                 *(undefined8 *)PTR_DAT_09212cb8;
                                                            thunk_FUN_03d1023c((undefined8 *)
                                                                               (lVar11 + 0x58));
                                                            if (8 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x60) =
                                                                   *(undefined8 *)PTR_DAT_09212ca8;
                                                              thunk_FUN_03d1023c((undefined8 *)
                                                                                 (lVar11 + 0x60));
                                                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x68) =
                                                                     *(undefined8 *)PTR_DAT_09212bf8
                                                                ;
                                                                thunk_FUN_03d1023c((undefined8 *)
                                                                                   (lVar11 + 0x68));
                                                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x70) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09212c60;
                                                                  thunk_FUN_03d1023c((undefined8 *)
                                                                                     (lVar11 + 0x70)
                                                                                    );
                                                                  if (0xb < *(uint *)(lVar11 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar11 + 0x78) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_09212c48;
                                                                    thunk_FUN_03d1023c();
                                                                    plVar12 = (long *)(*(long *)(*(
                                                  long *)puVar5 + 0xb8) + 0x18);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03d1023c(plVar12,lVar11);
                                                  lVar11 = FUN_03d2d394(*unaff_x21,5);
                                                  if (lVar11 == 0) goto LAB_071866dc;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_09212d28;
                                                    thunk_FUN_03d1023c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    if (1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_09212c08;
                                                      thunk_FUN_03d1023c((undefined8 *)
                                                                         (lVar11 + 0x28));
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_09212ca0;
                                                        thunk_FUN_03d1023c((undefined8 *)
                                                                           (lVar11 + 0x30));
                                                        if (3 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_09212c58;
                                                          thunk_FUN_03d1023c((undefined8 *)
                                                                             (lVar11 + 0x38));
                                                          puVar10 = PTR_DAT_09212be0;
                                                          puVar9 = PTR_DAT_09212bd8;
                                                          puVar8 = PTR_DAT_09212bd0;
                                                          puVar7 = PTR_DAT_09212bc8;
                                                          puVar6 = PTR_DAT_09212bc0;
                                                          puVar4 = PTR_DAT_091bf788;
                                                          puVar3 = PTR_DAT_091bede0;
                                                          puVar2 = PTR_DAT_091a7688;
                                                          puVar1 = PTR_DAT_091a0fc8;
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_09212cb0;
                                                            thunk_FUN_03d1023c();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03d1023c(plVar12,lVar11);
                                                  uVar13 = FUN_03d2d394(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_0708f30c(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03d1023c(puVar14,uVar13);
                                                  uVar13 = FUN_03d2d394(*(undefined8 *)puVar2,0x1e);
                                                  FUN_0708f30c(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03d1023c(puVar14,uVar13);
                                                  uVar13 = FUN_03d2d394(*(undefined8 *)puVar4,0xf);
                                                  FUN_0708f30c(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03d1023c(puVar14,uVar13);
                                                  uVar13 = FUN_03d2d394(*(undefined8 *)puVar2,0x2a);
                                                  FUN_0708f30c(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03d1023c(puVar14,uVar13);
                                                  uVar13 = FUN_03d2d394(*(undefined8 *)puVar3,0x15);
                                                  FUN_0708f30c(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03d1023c(puVar14,uVar13);
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
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


