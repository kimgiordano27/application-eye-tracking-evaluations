/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 07a4bf7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

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
  
  thunk_FUN_044bb4b4();
  if (0xf < *(uint *)(unaff_x20 + -0x78)) {
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)PTR_DAT_09f44e98;
    thunk_FUN_044bb4b4();
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_044bb4b4();
    lVar10 = FUN_04447c90(*unaff_x21,4);
    if (lVar10 == 0) {
LAB_07a4c4b8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar10 + 0x18) != 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f44e78;
      thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20));
      if (1 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_09f44dd0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
        if (2 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09f44db0;
          thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30));
          if (3 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_09f44e30;
            thunk_FUN_044bb4b4();
            plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
            *plVar11 = lVar10;
            thunk_FUN_044bb4b4(plVar11,lVar10);
            lVar10 = FUN_04447c90(*unaff_x21,0xc);
            if (lVar10 == 0) goto LAB_07a4c4b8;
            if (*(int *)(lVar10 + 0x18) != 0) {
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f44e70;
              thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20));
              if (1 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_09f44eb8;
                thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
                if (2 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09f44dd8;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30));
                  if (3 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_09f44d88;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x38));
                    if (4 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_09f44d90;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x40));
                      if (5 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)PTR_DAT_09f44e68;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x48));
                        if (6 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_09f44e38;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x50));
                          if (7 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)PTR_DAT_09f44e58;
                            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x58));
                            if (8 < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_09f44e48;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x60));
                              if (9 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)PTR_DAT_09f44d98;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x68));
                                if (10 < *(uint *)(lVar10 + 0x18)) {
                                  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)PTR_DAT_09f44e00;
                                  thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x70));
                                  if (0xb < *(uint *)(lVar10 + 0x18)) {
                                    *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)PTR_DAT_09f44de8
                                    ;
                                    thunk_FUN_044bb4b4();
                                    plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                    *plVar11 = lVar10;
                                    thunk_FUN_044bb4b4(plVar11,lVar10);
                                    lVar10 = FUN_04447c90(*unaff_x21,5);
                                    if (lVar10 == 0) goto LAB_07a4c4b8;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined8 *)(lVar10 + 0x20) =
                                           *(undefined8 *)PTR_DAT_09f44ec8;
                                      thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20));
                                      if (1 < *(uint *)(lVar10 + 0x18)) {
                                        *(undefined8 *)(lVar10 + 0x28) =
                                             *(undefined8 *)PTR_DAT_09f44da8;
                                        thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
                                        if (2 < *(uint *)(lVar10 + 0x18)) {
                                          *(undefined8 *)(lVar10 + 0x30) =
                                               *(undefined8 *)PTR_DAT_09f44e40;
                                          thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30));
                                          if (3 < *(uint *)(lVar10 + 0x18)) {
                                            *(undefined8 *)(lVar10 + 0x38) =
                                                 *(undefined8 *)PTR_DAT_09f44df8;
                                            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x38));
                                            puVar9 = PTR_DAT_09f44d80;
                                            puVar8 = PTR_DAT_09f44d78;
                                            puVar7 = PTR_DAT_09f44d70;
                                            puVar6 = PTR_DAT_09f44d68;
                                            puVar5 = PTR_DAT_09f44d60;
                                            puVar4 = PTR_DAT_09f3c438;
                                            puVar3 = PTR_DAT_09f3be48;
                                            puVar2 = PTR_DAT_09f30738;
                                            puVar1 = PTR_DAT_09f1e6a8;
                                            if (4 < *(uint *)(lVar10 + 0x18)) {
                                              *(undefined8 *)(lVar10 + 0x40) =
                                                   *(undefined8 *)PTR_DAT_09f44e50;
                                              thunk_FUN_044bb4b4();
                                              plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20
                                                                );
                                              *plVar11 = lVar10;
                                              thunk_FUN_044bb4b4(plVar11,lVar10);
                                              uVar12 = FUN_04447c90(*(undefined8 *)puVar1,0x100);
                                              FUN_0795ce64(uVar12,*(undefined8 *)puVar8,0);
                                              puVar13 = (undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x28);
                                              *puVar13 = uVar12;
                                              thunk_FUN_044bb4b4(puVar13,uVar12);
                                              uVar12 = FUN_04447c90(*(undefined8 *)puVar4,0x1e);
                                              FUN_0795ce64(uVar12,*(undefined8 *)puVar9,0);
                                              puVar13 = (undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x30);
                                              *puVar13 = uVar12;
                                              thunk_FUN_044bb4b4(puVar13,uVar12);
                                              uVar12 = FUN_04447c90(*(undefined8 *)puVar2,0xf);
                                              FUN_0795ce64(uVar12,*(undefined8 *)puVar7,0);
                                              puVar13 = (undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x38);
                                              *puVar13 = uVar12;
                                              thunk_FUN_044bb4b4(puVar13,uVar12);
                                              uVar12 = FUN_04447c90(*(undefined8 *)puVar4,0x2a);
                                              FUN_0795ce64(uVar12,*(undefined8 *)puVar6,0);
                                              puVar13 = (undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x40);
                                              *puVar13 = uVar12;
                                              thunk_FUN_044bb4b4(puVar13,uVar12);
                                              uVar12 = FUN_04447c90(*(undefined8 *)puVar3,0x15);
                                              FUN_0795ce64(uVar12,*(undefined8 *)puVar5,0);
                                              puVar13 = (undefined8 *)
                                                        (*(long *)(*unaff_x22 + 0xb8) + 0x48);
                                              *puVar13 = uVar12;
                                              thunk_FUN_044bb4b4(puVar13,uVar12);
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
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


