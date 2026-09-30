/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 05010ff4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x20) = *param_1;
  thunk_FUN_02dc1ef0((undefined8 *)(unaff_x20 + 0x20));
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)PTR_DAT_0665a930;
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x28));
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_0665a8d8;
      thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x30));
      puVar5 = PTR_DAT_06656a10;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)PTR_DAT_0665a9b0;
        thunk_FUN_02dc1ef0();
        **(long **)(*(long *)puVar5 + 0xb8) = unaff_x19;
        thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar5 + 0xb8));
        lVar11 = FUN_02d4dd2c(*unaff_x21,0x10);
        if (lVar11 == 0) goto LAB_05011838;
        if (*(int *)(lVar11 + 0x18) != 0) {
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_0665a998;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_0665a8c8;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x28));
            if (2 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_0665a9b8;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x30));
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_0665a928;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x38));
                if (4 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_0665a8d0;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x40));
                  if (5 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_0665a970;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x48));
                    if (6 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_0665a900;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x50));
                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_0665a918;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x58));
                        if (8 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_0665a990;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x60));
                          if (9 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_0665a9a0;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x68));
                            if (10 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_0665a9c0;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x70));
                              if (0xb < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_0665a8f0;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x78));
                                if (0xc < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)PTR_DAT_0665a938;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x80));
                                  if (0xd < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)PTR_DAT_0665a8b0
                                    ;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x88));
                                    if (0xe < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x90) =
                                           *(undefined8 *)PTR_DAT_0665a920;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x90));
                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0) {
                                        *(undefined8 *)(lVar11 + 0x98) =
                                             *(undefined8 *)PTR_DAT_0665a9a8;
                                        thunk_FUN_02dc1ef0();
                                        plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                                        *plVar12 = lVar11;
                                        thunk_FUN_02dc1ef0(plVar12,lVar11);
                                        lVar11 = FUN_02d4dd2c(*unaff_x21,4);
                                        if (lVar11 == 0) {
LAB_05011838:
                    /* WARNING: Subroutine does not return */
                                          FUN_02d4dee8();
                                        }
                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                          *(undefined8 *)(lVar11 + 0x20) =
                                               *(undefined8 *)PTR_DAT_0665a988;
                                          thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                            *(undefined8 *)(lVar11 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_0665a8e0;
                                            thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x28));
                                            if (2 < *(uint *)(lVar11 + 0x18)) {
                                              *(undefined8 *)(lVar11 + 0x30) =
                                                   *(undefined8 *)PTR_DAT_0665a8c0;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x30));
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                                                *(undefined8 *)(lVar11 + 0x38) =
                                                     *(undefined8 *)PTR_DAT_0665a940;
                                                thunk_FUN_02dc1ef0();
                                                plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x10);
                                                *plVar12 = lVar11;
                                                thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                lVar11 = FUN_02d4dd2c(*unaff_x21,0xc);
                                                if (lVar11 == 0) goto LAB_05011838;
                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)PTR_DAT_0665a980;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_0665a9c8;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x28)
                                                                      );
                                                    if (2 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x30) =
                                                           *(undefined8 *)PTR_DAT_0665a8e8;
                                                      thunk_FUN_02dc1ef0((undefined8 *)
                                                                         (lVar11 + 0x30));
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x38) =
                                                             *(undefined8 *)PTR_DAT_0665a898;
                                                        thunk_FUN_02dc1ef0((undefined8 *)
                                                                           (lVar11 + 0x38));
                                                        if (4 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x40) =
                                                               *(undefined8 *)PTR_DAT_0665a8a0;
                                                          thunk_FUN_02dc1ef0((undefined8 *)
                                                                             (lVar11 + 0x40));
                                                          if (5 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x48) =
                                                                 *(undefined8 *)PTR_DAT_0665a978;
                                                            thunk_FUN_02dc1ef0((undefined8 *)
                                                                               (lVar11 + 0x48));
                                                            if (6 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x50) =
                                                                   *(undefined8 *)PTR_DAT_0665a948;
                                                              thunk_FUN_02dc1ef0((undefined8 *)
                                                                                 (lVar11 + 0x50));
                                                              if ((*(uint *)(lVar11 + 0x18) &
                                                                  0xfffffff8) != 0) {
                                                                *(undefined8 *)(lVar11 + 0x58) =
                                                                     *(undefined8 *)PTR_DAT_0665a968
                                                                ;
                                                                thunk_FUN_02dc1ef0((undefined8 *)
                                                                                   (lVar11 + 0x58));
                                                                if (8 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x60) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_0665a958;
                                                                  thunk_FUN_02dc1ef0((undefined8 *)
                                                                                     (lVar11 + 0x60)
                                                                                    );
                                                                  if (9 < *(uint *)(lVar11 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar11 + 0x68) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_0665a8a8;
                                                                    thunk_FUN_02dc1ef0((undefined8 *
                                                                                       )(lVar11 + 
                                                  0x68));
                                                  if (10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_0665a910;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x70)
                                                                      );
                                                    if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x78) =
                                                           *(undefined8 *)PTR_DAT_0665a8f8;
                                                      thunk_FUN_02dc1ef0();
                                                      plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                  0xb8) + 0x18);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                      lVar11 = FUN_02d4dd2c(*unaff_x21,5);
                                                      if (lVar11 == 0) goto LAB_05011838;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar11 + 0x20) =
                                                             *(undefined8 *)PTR_DAT_0665a9d8;
                                                        thunk_FUN_02dc1ef0((undefined8 *)
                                                                           (lVar11 + 0x20));
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x28) =
                                                               *(undefined8 *)PTR_DAT_0665a8b8;
                                                          thunk_FUN_02dc1ef0((undefined8 *)
                                                                             (lVar11 + 0x28));
                                                          if (2 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x30) =
                                                                 *(undefined8 *)PTR_DAT_0665a950;
                                                            thunk_FUN_02dc1ef0((undefined8 *)
                                                                               (lVar11 + 0x30));
                                                            if ((*(uint *)(lVar11 + 0x18) &
                                                                0xfffffffc) != 0) {
                                                              *(undefined8 *)(lVar11 + 0x38) =
                                                                   *(undefined8 *)PTR_DAT_0665a908;
                                                              thunk_FUN_02dc1ef0((undefined8 *)
                                                                                 (lVar11 + 0x38));
                                                              puVar10 = PTR_DAT_0665a890;
                                                              puVar9 = PTR_DAT_0665a888;
                                                              puVar8 = PTR_DAT_0665a880;
                                                              puVar7 = PTR_DAT_0665a878;
                                                              puVar6 = PTR_DAT_0665a870;
                                                              puVar4 = PTR_DAT_066521d0;
                                                              puVar3 = PTR_DAT_0664a620;
                                                              puVar2 = PTR_DAT_06649ff0;
                                                              puVar1 = PTR_DAT_06646fe8;
                                                              if (4 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x40) =
                                                                     *(undefined8 *)PTR_DAT_0665a960
                                                                ;
                                                                thunk_FUN_02dc1ef0();
                                                                plVar12 = (long *)(*(long *)(*(long 
                                                  *)puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                  uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_04f3287c(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dc1ef0(puVar14,uVar13);
                                                  uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar4,0x1e);
                                                  FUN_04f3287c(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dc1ef0(puVar14,uVar13);
                                                  uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar2,0xf);
                                                  FUN_04f3287c(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dc1ef0(puVar14,uVar13);
                                                  uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar4,0x2a);
                                                  FUN_04f3287c(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dc1ef0(puVar14,uVar13);
                                                  uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar3,0x15);
                                                  FUN_04f3287c(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_02dc1ef0(puVar14,uVar13);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


