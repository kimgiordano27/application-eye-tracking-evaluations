/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 0560f9f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(long param_1)

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
  long *unaff_x22;
  
  **(undefined8 **)(param_1 + 0xb8) = unaff_x19;
  thunk_FUN_02f411dc(*(undefined8 *)(*unaff_x22 + 0xb8));
  lVar10 = FUN_02f07f14(*unaff_x21,0x10);
  if (lVar10 == 0) goto LAB_056101a8;
  if (*(int *)(lVar10 + 0x18) != 0) {
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06d52178;
    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
    if (1 < *(uint *)(lVar10 + 0x18)) {
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_06d520a8;
      thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
      if (2 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_06d52198;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x30));
        if (3 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_06d52108;
          thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x38));
          if (4 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_06d520b0;
            thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x40));
            if (5 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)PTR_DAT_06d52150;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x48));
              if (6 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_06d520e0;
                thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x50));
                if (7 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)PTR_DAT_06d520f8;
                  thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x58));
                  if (8 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_06d52170;
                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x60));
                    if (9 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)PTR_DAT_06d52180;
                      thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x68));
                      if (10 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)PTR_DAT_06d521a0;
                        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x70));
                        if (0xb < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)PTR_DAT_06d520d0;
                          thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x78));
                          if (0xc < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)PTR_DAT_06d52118;
                            thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x80));
                            if (0xd < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)PTR_DAT_06d52090;
                              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x88));
                              if (0xe < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)PTR_DAT_06d52100;
                                thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x90));
                                if (0xf < *(uint *)(lVar10 + 0x18)) {
                                  *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)PTR_DAT_06d52188;
                                  thunk_FUN_02f411dc();
                                  plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
                                  *plVar11 = lVar10;
                                  thunk_FUN_02f411dc(plVar11,lVar10);
                                  lVar10 = FUN_02f07f14(*unaff_x21,4);
                                  if (lVar10 == 0) {
LAB_056101a8:
                    /* WARNING: Subroutine does not return */
                                    FUN_02f080c0();
                                  }
                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06d52168
                                    ;
                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                      *(undefined8 *)(lVar10 + 0x28) =
                                           *(undefined8 *)PTR_DAT_06d520c0;
                                      thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                        *(undefined8 *)(lVar10 + 0x30) =
                                             *(undefined8 *)PTR_DAT_06d520a0;
                                        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x30));
                                        if (3 < *(uint *)(lVar10 + 0x18)) {
                                          *(undefined8 *)(lVar10 + 0x38) =
                                               *(undefined8 *)PTR_DAT_06d52120;
                                          thunk_FUN_02f411dc();
                                          plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                          *plVar11 = lVar10;
                                          thunk_FUN_02f411dc(plVar11,lVar10);
                                          lVar10 = FUN_02f07f14(*unaff_x21,0xc);
                                          if (lVar10 == 0) goto LAB_056101a8;
                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                            *(undefined8 *)(lVar10 + 0x20) =
                                                 *(undefined8 *)PTR_DAT_06d52160;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
                                            if (1 < *(uint *)(lVar10 + 0x18)) {
                                              *(undefined8 *)(lVar10 + 0x28) =
                                                   *(undefined8 *)PTR_DAT_06d521a8;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
                                              if (2 < *(uint *)(lVar10 + 0x18)) {
                                                *(undefined8 *)(lVar10 + 0x30) =
                                                     *(undefined8 *)PTR_DAT_06d520c8;
                                                thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x30));
                                                if (3 < *(uint *)(lVar10 + 0x18)) {
                                                  *(undefined8 *)(lVar10 + 0x38) =
                                                       *(undefined8 *)PTR_DAT_06d52078;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x38));
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_06d52080;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x40)
                                                                      );
                                                    if (5 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x48) =
                                                           *(undefined8 *)PTR_DAT_06d52158;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar10 + 0x48));
                                                      if (6 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x50) =
                                                             *(undefined8 *)PTR_DAT_06d52128;
                                                        thunk_FUN_02f411dc((undefined8 *)
                                                                           (lVar10 + 0x50));
                                                        if (7 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x58) =
                                                               *(undefined8 *)PTR_DAT_06d52148;
                                                          thunk_FUN_02f411dc((undefined8 *)
                                                                             (lVar10 + 0x58));
                                                          if (8 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x60) =
                                                                 *(undefined8 *)PTR_DAT_06d52138;
                                                            thunk_FUN_02f411dc((undefined8 *)
                                                                               (lVar10 + 0x60));
                                                            if (9 < *(uint *)(lVar10 + 0x18)) {
                                                              *(undefined8 *)(lVar10 + 0x68) =
                                                                   *(undefined8 *)PTR_DAT_06d52088;
                                                              thunk_FUN_02f411dc((undefined8 *)
                                                                                 (lVar10 + 0x68));
                                                              if (10 < *(uint *)(lVar10 + 0x18)) {
                                                                *(undefined8 *)(lVar10 + 0x70) =
                                                                     *(undefined8 *)PTR_DAT_06d520f0
                                                                ;
                                                                thunk_FUN_02f411dc((undefined8 *)
                                                                                   (lVar10 + 0x70));
                                                                if (0xb < *(uint *)(lVar10 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar10 + 0x78) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_06d520d8;
                                                                  thunk_FUN_02f411dc();
                                                                  plVar11 = (long *)(*(long *)(*
                                                  unaff_x22 + 0xb8) + 0x18);
                                                  *plVar11 = lVar10;
                                                  thunk_FUN_02f411dc(plVar11,lVar10);
                                                  lVar10 = FUN_02f07f14(*unaff_x21,5);
                                                  if (lVar10 == 0) goto LAB_056101a8;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_06d521b8;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_06d52098;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar10 + 0x28));
                                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_06d52130;
                                                        thunk_FUN_02f411dc((undefined8 *)
                                                                           (lVar10 + 0x30));
                                                        if (3 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_06d520e8;
                                                          thunk_FUN_02f411dc((undefined8 *)
                                                                             (lVar10 + 0x38));
                                                          puVar9 = PTR_DAT_06d52070;
                                                          puVar8 = PTR_DAT_06d52068;
                                                          puVar7 = PTR_DAT_06d52060;
                                                          puVar6 = PTR_DAT_06d52058;
                                                          puVar5 = PTR_DAT_06d52050;
                                                          puVar4 = PTR_DAT_06d3eed0;
                                                          puVar3 = PTR_DAT_06d36f50;
                                                          puVar2 = PTR_DAT_06d15378;
                                                          puVar1 = PTR_DAT_06d03ce0;
                                                          if (4 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_06d52140;
                                                            thunk_FUN_02f411dc();
                                                            plVar11 = (long *)(*(long *)(*unaff_x22
                                                                                        + 0xb8) +
                                                                              0x20);
                                                            *plVar11 = lVar10;
                                                            thunk_FUN_02f411dc(plVar11,lVar10);
                                                            uVar12 = FUN_02f07f14(*(undefined8 *)
                                                                                   puVar1,0x100);
                                                            FUN_0552106c(uVar12,*(undefined8 *)
                                                                                 puVar8,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x28);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_02f411dc(puVar13,uVar12);
                                                            uVar12 = FUN_02f07f14(*(undefined8 *)
                                                                                   puVar2,0x1e);
                                                            FUN_0552106c(uVar12,*(undefined8 *)
                                                                                 puVar9,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x30);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_02f411dc(puVar13,uVar12);
                                                            uVar12 = FUN_02f07f14(*(undefined8 *)
                                                                                   puVar4,0xf);
                                                            FUN_0552106c(uVar12,*(undefined8 *)
                                                                                 puVar7,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x38);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_02f411dc(puVar13,uVar12);
                                                            uVar12 = FUN_02f07f14(*(undefined8 *)
                                                                                   puVar2,0x2a);
                                                            FUN_0552106c(uVar12,*(undefined8 *)
                                                                                 puVar6,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x40);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_02f411dc(puVar13,uVar12);
                                                            uVar12 = FUN_02f07f14(*(undefined8 *)
                                                                                   puVar3,0x15);
                                                            FUN_0552106c(uVar12,*(undefined8 *)
                                                                                 puVar5,0);
                                                            puVar13 = (undefined8 *)
                                                                      (*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x48);
                                                            *puVar13 = uVar12;
                                                            thunk_FUN_02f411dc(puVar13,uVar12);
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
  FUN_02f080c8();
}


