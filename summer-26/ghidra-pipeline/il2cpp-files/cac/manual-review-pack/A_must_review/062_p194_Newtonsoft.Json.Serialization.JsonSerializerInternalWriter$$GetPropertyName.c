/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 074c35c0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(void)

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
  
  FUN_03f13384(PTR_DAT_091262c8);
  FUN_03f13384(PTR_DAT_0910cf80);
  FUN_03f13384(PTR_DAT_0912f2c0);
  FUN_03f13384(PTR_DAT_091262d8);
  FUN_03f13384(PTR_DAT_0910b678);
  FUN_03f13384(PTR_DAT_091333b8);
  FUN_03f13384(PTR_DAT_091333c0);
  FUN_03f13384(PTR_DAT_091333c8);
  FUN_03f13384(PTR_DAT_091333d0);
  FUN_03f13384(PTR_DAT_091333d8);
  FUN_03f13384(PTR_DAT_091262e8);
  FUN_03f13384(PTR_DAT_091333e0);
  FUN_03f13384(PTR_DAT_091333e8);
  FUN_03f13384(PTR_DAT_091333f0);
  FUN_03f13384(PTR_DAT_091333f8);
  FUN_03f13384(PTR_DAT_09133400);
  FUN_03f13384(PTR_DAT_09133408);
  FUN_03f13384(PTR_DAT_09133410);
  FUN_03f13384(PTR_DAT_09133418);
  FUN_03f13384(PTR_DAT_09133420);
  FUN_03f13384(PTR_DAT_09133428);
  FUN_03f13384(PTR_DAT_09133430);
  FUN_03f13384(PTR_DAT_09133438);
  FUN_03f13384(PTR_DAT_09133440);
  FUN_03f13384(PTR_DAT_09133448);
  FUN_03f13384(PTR_DAT_09133450);
  FUN_03f13384(PTR_DAT_09133458);
  FUN_03f13384(PTR_DAT_09133460);
  FUN_03f13384(PTR_DAT_09133468);
  FUN_03f13384(PTR_DAT_09133470);
  FUN_03f13384(PTR_DAT_09133478);
  FUN_03f13384(PTR_DAT_09133480);
  FUN_03f13384(PTR_DAT_09133488);
  FUN_03f13384(PTR_DAT_09133490);
  FUN_03f13384(PTR_DAT_09133498);
  FUN_03f13384(PTR_DAT_091334a0);
  FUN_03f13384(PTR_DAT_091334a8);
  FUN_03f13384(PTR_DAT_091334b0);
  FUN_03f13384(PTR_DAT_091334b8);
  FUN_03f13384(PTR_DAT_091334c0);
  FUN_03f13384(PTR_DAT_091334c8);
  FUN_03f13384(PTR_DAT_091334d0);
  FUN_03f13384(PTR_DAT_091334d8);
  FUN_03f13384(PTR_DAT_091334e0);
  FUN_03f13384(PTR_DAT_091334e8);
  FUN_03f13384(PTR_DAT_091334f0);
  FUN_03f13384(PTR_DAT_091334f8);
  FUN_03f13384(PTR_DAT_09133500);
  FUN_03f13384(PTR_DAT_09133508);
  FUN_03f13384(PTR_DAT_09133510);
  FUN_03f13384(PTR_DAT_09133518);
  FUN_03f13384(PTR_DAT_09133520);
  *(undefined1 *)(unaff_x19 + 0x4bc) = 1;
  lVar11 = FUN_03f13470(*unaff_x21,4);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_09133518;
      thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x20));
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_09133478;
        thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x28));
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09133420;
          thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x30));
          puVar5 = PTR_DAT_0912f2c0;
          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_091334f8;
            thunk_FUN_03f86000();
            **(long **)(*(long *)puVar5 + 0xb8) = lVar11;
            thunk_FUN_03f86000(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar11);
            lVar11 = FUN_03f13470(*unaff_x21,0x10);
            if (lVar11 == 0) goto LAB_074c40a4;
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_091334e0;
              thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x20));
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_09133410;
                thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x28));
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09133500;
                  thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x30));
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_09133470;
                    thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x38));
                    if (4 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_09133418;
                      thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x40));
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_091334b8;
                        thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x48));
                        if (6 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_09133448;
                          thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x50));
                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_09133460;
                            thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x58));
                            if (8 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_091334d8;
                              thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x60));
                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_091334e8;
                                thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x68));
                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_09133508;
                                  thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x70));
                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_09133438
                                    ;
                                    thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x78));
                                    if (0xc < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x80) =
                                           *(undefined8 *)PTR_DAT_09133480;
                                      thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x80));
                                      if (0xd < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x88) =
                                             *(undefined8 *)PTR_DAT_091333f8;
                                        thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x88));
                                        if (0xe < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x90) =
                                               *(undefined8 *)PTR_DAT_09133468;
                                          thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x90));
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(lVar11 + 0x98) =
                                                 *(undefined8 *)PTR_DAT_091334f0;
                                            thunk_FUN_03f86000();
                                            plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8
                                                              );
                                            *plVar12 = lVar11;
                                            thunk_FUN_03f86000(plVar12,lVar11);
                                            lVar11 = FUN_03f13470(*unaff_x21,4);
                                            if (lVar11 == 0) goto LAB_074c40a4;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)PTR_DAT_091334d0;
                                              thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x20));
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)PTR_DAT_09133428;
                                                thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x28));
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)PTR_DAT_09133408;
                                                  thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x30));
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_09133488;
                                                    thunk_FUN_03f86000();
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x10);
                                                    *plVar12 = lVar11;
                                                    thunk_FUN_03f86000(plVar12,lVar11);
                                                    lVar11 = FUN_03f13470(*unaff_x21,0xc);
                                                    if (lVar11 == 0) goto LAB_074c40a4;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_091334c8;
                                                      thunk_FUN_03f86000((undefined8 *)
                                                                         (lVar11 + 0x20));
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_09133510;
                                                        thunk_FUN_03f86000((undefined8 *)
                                                                           (lVar11 + 0x28));
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x30) =
                                                               *(undefined8 *)PTR_DAT_09133430;
                                                          thunk_FUN_03f86000((undefined8 *)
                                                                             (lVar11 + 0x30));
                                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc
                                                              ) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x38) =
                                                                 *(undefined8 *)PTR_DAT_091333e0;
                                                            thunk_FUN_03f86000((undefined8 *)
                                                                               (lVar11 + 0x38));
                                                            if (4 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x40) =
                                                                   *(undefined8 *)PTR_DAT_091333e8;
                                                              thunk_FUN_03f86000((undefined8 *)
                                                                                 (lVar11 + 0x40));
                                                              if (5 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x48) =
                                                                     *(undefined8 *)PTR_DAT_091334c0
                                                                ;
                                                                thunk_FUN_03f86000((undefined8 *)
                                                                                   (lVar11 + 0x48));
                                                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x50) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09133490;
                                                                  thunk_FUN_03f86000((undefined8 *)
                                                                                     (lVar11 + 0x50)
                                                                                    );
                                                                  if ((*(uint *)(lVar11 + 0x18) &
                                                                      0xfffffff8) != 0) {
                                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_091334b0;
                                                                    thunk_FUN_03f86000((undefined8 *
                                                                                       )(lVar11 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_091334a0;
                                                    thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x60)
                                                                      );
                                                    if (9 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x68) =
                                                           *(undefined8 *)PTR_DAT_091333f0;
                                                      thunk_FUN_03f86000((undefined8 *)
                                                                         (lVar11 + 0x68));
                                                      if (10 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x70) =
                                                             *(undefined8 *)PTR_DAT_09133458;
                                                        thunk_FUN_03f86000((undefined8 *)
                                                                           (lVar11 + 0x70));
                                                        if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x78) =
                                                               *(undefined8 *)PTR_DAT_09133440;
                                                          thunk_FUN_03f86000();
                                                          plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x18);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03f86000(plVar12,lVar11);
                                                  lVar11 = FUN_03f13470(*unaff_x21,5);
                                                  if (lVar11 == 0) goto LAB_074c40a4;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_09133520;
                                                    thunk_FUN_03f86000((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_09133400;
                                                      thunk_FUN_03f86000((undefined8 *)
                                                                         (lVar11 + 0x28));
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_09133498;
                                                        thunk_FUN_03f86000((undefined8 *)
                                                                           (lVar11 + 0x30));
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_09133450;
                                                          thunk_FUN_03f86000((undefined8 *)
                                                                             (lVar11 + 0x38));
                                                          puVar10 = PTR_DAT_091333d8;
                                                          puVar9 = PTR_DAT_091333d0;
                                                          puVar8 = PTR_DAT_091333c8;
                                                          puVar7 = PTR_DAT_091333c0;
                                                          puVar6 = PTR_DAT_091333b8;
                                                          puVar4 = PTR_DAT_091262e8;
                                                          puVar3 = PTR_DAT_091262d8;
                                                          puVar2 = PTR_DAT_091262c8;
                                                          puVar1 = PTR_DAT_0910cf80;
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_091334a8;
                                                            thunk_FUN_03f86000();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_03f86000(plVar12,lVar11);
                                                  uVar13 = FUN_03f13470(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_073d2898(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03f86000(puVar14,uVar13);
                                                  uVar13 = FUN_03f13470(*(undefined8 *)puVar4,0x1e);
                                                  FUN_073d2898(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03f86000(puVar14,uVar13);
                                                  uVar13 = FUN_03f13470(*(undefined8 *)puVar3,0xf);
                                                  FUN_073d2898(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03f86000(puVar14,uVar13);
                                                  uVar13 = FUN_03f13470(*(undefined8 *)puVar4,0x2a);
                                                  FUN_073d2898(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03f86000(puVar14,uVar13);
                                                  uVar13 = FUN_03f13470(*(undefined8 *)puVar2,0x15);
                                                  FUN_073d2898(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_03f86000(puVar14,uVar13);
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
    FUN_03f13634();
  }
LAB_074c40a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


