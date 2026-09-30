/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0675ed04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

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
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084a9cc8);
  FUN_03a8a718(PTR_DAT_084a9cd0);
  FUN_03a8a718(PTR_DAT_084a9cd8);
  FUN_03a8a718(PTR_DAT_084a9ce0);
  FUN_03a8a718(PTR_DAT_084a9ce8);
  FUN_03a8a718(PTR_DAT_084a9cf0);
  FUN_03a8a718(PTR_DAT_084a9cf8);
  FUN_03a8a718(PTR_DAT_084a9d00);
  FUN_03a8a718(PTR_DAT_084a9d08);
  *(undefined1 *)(unaff_x19 + 0xb51) = 1;
  lVar11 = FUN_03a8a804(*unaff_x21,4);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_084a9d00;
      thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20));
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084a9c60;
        thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28));
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_084a9c08;
          thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x30));
          puVar5 = PTR_DAT_084a5b08;
          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_084a9ce0;
            thunk_FUN_03afed3c();
            **(long **)(*(long *)puVar5 + 0xb8) = lVar11;
            thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar11);
            lVar11 = FUN_03a8a804(*unaff_x21,0x10);
            if (lVar11 == 0) goto LAB_0675f5e8;
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_084a9cc8;
              thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20));
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084a9bf8;
                thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28));
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_084a9ce8;
                  thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x30));
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_084a9c58;
                    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x38));
                    if (4 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_084a9c00;
                      thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x40));
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_084a9ca0;
                        thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x48));
                        if (6 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_084a9c30;
                          thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x50));
                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_084a9c48;
                            thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x58));
                            if (8 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_084a9cc0;
                              thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x60));
                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_084a9cd0;
                                thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x68));
                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_084a9cf0;
                                  thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x70));
                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_084a9c20
                                    ;
                                    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x78));
                                    if (0xc < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x80) =
                                           *(undefined8 *)PTR_DAT_084a9c68;
                                      thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x80));
                                      if (0xd < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x88) =
                                             *(undefined8 *)PTR_DAT_084a9be0;
                                        thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x88));
                                        if (0xe < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x90) =
                                               *(undefined8 *)PTR_DAT_084a9c50;
                                          thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x90));
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(lVar11 + 0x98) =
                                                 *(undefined8 *)PTR_DAT_084a9cd8;
                                            thunk_FUN_03afed3c();
                                            plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8
                                                              );
                                            *plVar12 = lVar11;
                                            thunk_FUN_03afed3c(plVar12,lVar11);
                                            lVar11 = FUN_03a8a804(*unaff_x21,4);
                                            if (lVar11 == 0) goto LAB_0675f5e8;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)PTR_DAT_084a9cb8;
                                              thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20));
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)PTR_DAT_084a9c10;
                                                thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28));
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)PTR_DAT_084a9bf0;
                                                  thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x30));
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_084a9c70;
                                                    thunk_FUN_03afed3c();
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x10);
                                                    *plVar12 = lVar11;
                                                    thunk_FUN_03afed3c(plVar12,lVar11);
                                                    lVar11 = FUN_03a8a804(*unaff_x21,0xc);
                                                    if (lVar11 == 0) goto LAB_0675f5e8;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_084a9cb0;
                                                      thunk_FUN_03afed3c((undefined8 *)
                                                                         (lVar11 + 0x20));
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_084a9cf8;
                                                        thunk_FUN_03afed3c((undefined8 *)
                                                                           (lVar11 + 0x28));
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x30) =
                                                               *(undefined8 *)PTR_DAT_084a9c18;
                                                          thunk_FUN_03afed3c((undefined8 *)
                                                                             (lVar11 + 0x30));
                                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc
                                                              ) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x38) =
                                                                 *(undefined8 *)PTR_DAT_084a9bc8;
                                                            thunk_FUN_03afed3c((undefined8 *)
                                                                               (lVar11 + 0x38));
                                                            if (4 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x40) =
                                                                   *(undefined8 *)PTR_DAT_084a9bd0;
                                                              thunk_FUN_03afed3c((undefined8 *)
                                                                                 (lVar11 + 0x40));
                                                              if (5 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x48) =
                                                                     *(undefined8 *)PTR_DAT_084a9ca8
                                                                ;
                                                                thunk_FUN_03afed3c((undefined8 *)
                                                                                   (lVar11 + 0x48));
                                                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x50) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_084a9c78;
                                                                  thunk_FUN_03afed3c((undefined8 *)
                                                                                     (lVar11 + 0x50)
                                                                                    );
                                                                  if ((*(uint *)(lVar11 + 0x18) &
                                                                      0xfffffff8) != 0) {
                                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_084a9c98;
                                                                    thunk_FUN_03afed3c((undefined8 *
                                                                                       )(lVar11 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_084a9c88;
                                                    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x60)
                                                                      );
                                                    if (9 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x68) =
                                                           *(undefined8 *)PTR_DAT_084a9bd8;
                                                      thunk_FUN_03afed3c((undefined8 *)
                                                                         (lVar11 + 0x68));
                                                      if (10 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x70) =
                                                             *(undefined8 *)PTR_DAT_084a9c40;
                                                        thunk_FUN_03afed3c((undefined8 *)
                                                                           (lVar11 + 0x70));
                                                        if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x78) =
                                                               *(undefined8 *)PTR_DAT_084a9c28;
                                                          thunk_FUN_03afed3c();
                                                          plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x18);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03afed3c(plVar12,lVar11);
                                                  lVar11 = FUN_03a8a804(*unaff_x21,5);
                                                  if (lVar11 == 0) goto LAB_0675f5e8;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_084a9d08;
                                                    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_084a9be8;
                                                      thunk_FUN_03afed3c((undefined8 *)
                                                                         (lVar11 + 0x28));
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_084a9c80;
                                                        thunk_FUN_03afed3c((undefined8 *)
                                                                           (lVar11 + 0x30));
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_084a9c38;
                                                          thunk_FUN_03afed3c((undefined8 *)
                                                                             (lVar11 + 0x38));
                                                          puVar10 = PTR_DAT_084a9bc0;
                                                          puVar9 = PTR_DAT_084a9bb8;
                                                          puVar8 = PTR_DAT_084a9bb0;
                                                          puVar7 = PTR_DAT_084a9ba8;
                                                          puVar6 = PTR_DAT_084a9ba0;
                                                          puVar4 = PTR_DAT_084a0898;
                                                          puVar3 = PTR_DAT_084a04c8;
                                                          puVar2 = PTR_DAT_084896e8;
                                                          puVar1 = PTR_DAT_084874c8;
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_084a9c90;
                                                            thunk_FUN_03afed3c();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03afed3c(plVar12,lVar11);
                                                  uVar13 = FUN_03a8a804(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_066709ac(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03afed3c(puVar14,uVar13);
                                                  uVar13 = FUN_03a8a804(*(undefined8 *)puVar4,0x1e);
                                                  FUN_066709ac(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03afed3c(puVar14,uVar13);
                                                  uVar13 = FUN_03a8a804(*(undefined8 *)puVar2,0xf);
                                                  FUN_066709ac(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03afed3c(puVar14,uVar13);
                                                  uVar13 = FUN_03a8a804(*(undefined8 *)puVar4,0x2a);
                                                  FUN_066709ac(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03afed3c(puVar14,uVar13);
                                                  uVar13 = FUN_03a8a804(*(undefined8 *)puVar3,0x15);
                                                  FUN_066709ac(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03afed3c(puVar14,uVar13);
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
    FUN_03a8a9c8();
  }
LAB_0675f5e8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


