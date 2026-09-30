/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 0675ef94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

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
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  thunk_FUN_03afed3c();
  if (8 < *(uint *)(unaff_x20 + -0x40)) {
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_084a9cc0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60));
    if (9 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)PTR_DAT_084a9cd0;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x68));
      if (10 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_084a9cf0;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70));
        if (0xb < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_084a9c20;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x78));
          if (0xc < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)PTR_DAT_084a9c68;
            thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x80));
            if (0xd < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)PTR_DAT_084a9be0;
              thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x88));
              if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)PTR_DAT_084a9c50;
                thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x90));
                if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)PTR_DAT_084a9cd8;
                  thunk_FUN_03afed3c();
                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
                  thunk_FUN_03afed3c();
                  lVar10 = FUN_03a8a804(*unaff_x21,4);
                  if (lVar10 == 0) {
LAB_0675f5e8:
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  if (*(int *)(lVar10 + 0x18) != 0) {
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_084a9cb8;
                    thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x20));
                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_084a9c10;
                      thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x28));
                      if (2 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_084a9bf0;
                        thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x30));
                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_084a9c70;
                          thunk_FUN_03afed3c();
                          plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                          *plVar11 = lVar10;
                          thunk_FUN_03afed3c(plVar11,lVar10);
                          lVar10 = FUN_03a8a804(*unaff_x21,0xc);
                          if (lVar10 == 0) goto LAB_0675f5e8;
                          if (*(int *)(lVar10 + 0x18) != 0) {
                            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_084a9cb0;
                            thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x20));
                            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_084a9cf8;
                              thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x28));
                              if (2 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_084a9c18;
                                thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x30));
                                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                                  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_084a9bc8;
                                  thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x38));
                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_084a9bd0
                                    ;
                                    thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x40));
                                    if (5 < *(uint *)(lVar10 + 0x18)) {
                                      *(undefined8 *)(lVar10 + 0x48) =
                                           *(undefined8 *)PTR_DAT_084a9ca8;
                                      thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x48));
                                      if (6 < *(uint *)(lVar10 + 0x18)) {
                                        *(undefined8 *)(lVar10 + 0x50) =
                                             *(undefined8 *)PTR_DAT_084a9c78;
                                        thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x50));
                                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                                          *(undefined8 *)(lVar10 + 0x58) =
                                               *(undefined8 *)PTR_DAT_084a9c98;
                                          thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x58));
                                          if (8 < *(uint *)(lVar10 + 0x18)) {
                                            *(undefined8 *)(lVar10 + 0x60) =
                                                 *(undefined8 *)PTR_DAT_084a9c88;
                                            thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x60));
                                            if (9 < *(uint *)(lVar10 + 0x18)) {
                                              *(undefined8 *)(lVar10 + 0x68) =
                                                   *(undefined8 *)PTR_DAT_084a9bd8;
                                              thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x68));
                                              if (10 < *(uint *)(lVar10 + 0x18)) {
                                                *(undefined8 *)(lVar10 + 0x70) =
                                                     *(undefined8 *)PTR_DAT_084a9c40;
                                                thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x70));
                                                if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                  *(undefined8 *)(lVar10 + 0x78) =
                                                       *(undefined8 *)PTR_DAT_084a9c28;
                                                  thunk_FUN_03afed3c();
                                                  plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x18);
                                                  *plVar11 = lVar10;
                                                  thunk_FUN_03afed3c(plVar11,lVar10);
                                                  lVar10 = FUN_03a8a804(*unaff_x21,5);
                                                  if (lVar10 == 0) goto LAB_0675f5e8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_084a9d08;
                                                    thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar10 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_084a9be8;
                                                      thunk_FUN_03afed3c((undefined8 *)
                                                                         (lVar10 + 0x28));
                                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_084a9c80;
                                                        thunk_FUN_03afed3c((undefined8 *)
                                                                           (lVar10 + 0x30));
                                                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar10 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_084a9c38;
                                                          thunk_FUN_03afed3c((undefined8 *)
                                                                             (lVar10 + 0x38));
                                                          puVar9 = PTR_DAT_084a9bc0;
                                                          puVar8 = PTR_DAT_084a9bb8;
                                                          puVar7 = PTR_DAT_084a9bb0;
                                                          puVar6 = PTR_DAT_084a9ba8;
                                                          puVar5 = PTR_DAT_084a9ba0;
                                                          puVar4 = PTR_DAT_084a0898;
                                                          puVar3 = PTR_DAT_084a04c8;
                                                          puVar2 = PTR_DAT_084896e8;
                                                          puVar1 = PTR_DAT_084874c8;
                                                          if (4 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_084a9c90;
                                                            thunk_FUN_03afed3c();
                                                            plVar11 = (long *)(*(long *)(*unaff_x22
                                                                                        + 0xb8) +
                                                                              0x20);
                                                            *plVar11 = lVar10;
                                                            thunk_FUN_03afed3c(plVar11,lVar10);
                                                            uVar12 = FUN_03a8a804(*(undefined8 *)
                                                                                   puVar1,0x100);
                                                            FUN_066709ac(uVar12,*(undefined8 *)
                                                                                 puVar8,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x28);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_03afed3c(puVar13,uVar12);
                                                            uVar12 = FUN_03a8a804(*(undefined8 *)
                                                                                   puVar4,0x1e);
                                                            FUN_066709ac(uVar12,*(undefined8 *)
                                                                                 puVar9,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x30);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_03afed3c(puVar13,uVar12);
                                                            uVar12 = FUN_03a8a804(*(undefined8 *)
                                                                                   puVar2,0xf);
                                                            FUN_066709ac(uVar12,*(undefined8 *)
                                                                                 puVar7,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x38);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_03afed3c(puVar13,uVar12);
                                                            uVar12 = FUN_03a8a804(*(undefined8 *)
                                                                                   puVar4,0x2a);
                                                            FUN_066709ac(uVar12,*(undefined8 *)
                                                                                 puVar6,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x40);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_03afed3c(puVar13,uVar12);
                                                            uVar12 = FUN_03a8a804(*(undefined8 *)
                                                                                   puVar3,0x15);
                                                            FUN_066709ac(uVar12,*(undefined8 *)
                                                                                 puVar5,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x48);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_03afed3c(puVar13,uVar12);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


