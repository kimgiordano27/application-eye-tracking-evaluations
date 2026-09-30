/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 07687508
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference(void)

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
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092da578);
  FUN_04077588(PTR_DAT_092da580);
  FUN_04077588(PTR_DAT_092da588);
  FUN_04077588(PTR_DAT_092d16d8);
  FUN_04077588(PTR_DAT_092da590);
  FUN_04077588(PTR_DAT_092da598);
  FUN_04077588(PTR_DAT_092da5a0);
  FUN_04077588(PTR_DAT_092da5a8);
  FUN_04077588(PTR_DAT_092da5b0);
  FUN_04077588(PTR_DAT_092da5b8);
  FUN_04077588(PTR_DAT_092da5c0);
  FUN_04077588(PTR_DAT_092da5c8);
  FUN_04077588(PTR_DAT_092da5d0);
  FUN_04077588(PTR_DAT_092da5d8);
  FUN_04077588(PTR_DAT_092da5e0);
  FUN_04077588(PTR_DAT_092da5e8);
  FUN_04077588(PTR_DAT_092da5f0);
  FUN_04077588(PTR_DAT_092da5f8);
  FUN_04077588(PTR_DAT_092da600);
  FUN_04077588(PTR_DAT_092da608);
  FUN_04077588(PTR_DAT_092da610);
  FUN_04077588(PTR_DAT_092da618);
  FUN_04077588(PTR_DAT_092da620);
  FUN_04077588(PTR_DAT_092da628);
  FUN_04077588(PTR_DAT_092da630);
  FUN_04077588(PTR_DAT_092da638);
  FUN_04077588(PTR_DAT_092da640);
  FUN_04077588(PTR_DAT_092da648);
  FUN_04077588(PTR_DAT_092da650);
  FUN_04077588(PTR_DAT_092da658);
  FUN_04077588(PTR_DAT_092da660);
  FUN_04077588(PTR_DAT_092da668);
  FUN_04077588(PTR_DAT_092da670);
  FUN_04077588(PTR_DAT_092da678);
  FUN_04077588(PTR_DAT_092da680);
  FUN_04077588(PTR_DAT_092da688);
  FUN_04077588(PTR_DAT_092da690);
  FUN_04077588(PTR_DAT_092da698);
  FUN_04077588(PTR_DAT_092da6a0);
  FUN_04077588(PTR_DAT_092da6a8);
  FUN_04077588(PTR_DAT_092da6b0);
  FUN_04077588(PTR_DAT_092da6b8);
  FUN_04077588(PTR_DAT_092da6c0);
  FUN_04077588(PTR_DAT_092da6c8);
  FUN_04077588(PTR_DAT_092da6d0);
  *(undefined1 *)(unaff_x19 + 0x26b) = 1;
  lVar11 = FUN_04077674(*unaff_x21,4);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_092da6c8;
      thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x20));
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_092da628;
        thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x28));
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_092da5d0;
          thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x30));
          puVar5 = PTR_DAT_092d6630;
          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_092da6a8;
            thunk_FUN_040ec700();
            **(long **)(*(long *)puVar5 + 0xb8) = lVar11;
            thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar11);
            lVar11 = FUN_04077674(*unaff_x21,0x10);
            if (lVar11 == 0) goto LAB_07687f9c;
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_092da690;
              thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x20));
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_092da5c0;
                thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x28));
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_092da6b0;
                  thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x30));
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_092da620;
                    thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x38));
                    if (4 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_092da5c8;
                      thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x40));
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_092da668;
                        thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x48));
                        if (6 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_092da5f8;
                          thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x50));
                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_092da610;
                            thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x58));
                            if (8 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_092da688;
                              thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x60));
                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_092da698;
                                thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x68));
                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_092da6b8;
                                  thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x70));
                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_092da5e8
                                    ;
                                    thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x78));
                                    if (0xc < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x80) =
                                           *(undefined8 *)PTR_DAT_092da630;
                                      thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x80));
                                      if (0xd < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x88) =
                                             *(undefined8 *)PTR_DAT_092da5a8;
                                        thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x88));
                                        if (0xe < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x90) =
                                               *(undefined8 *)PTR_DAT_092da618;
                                          thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x90));
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(lVar11 + 0x98) =
                                                 *(undefined8 *)PTR_DAT_092da6a0;
                                            thunk_FUN_040ec700();
                                            plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8
                                                              );
                                            *plVar12 = lVar11;
                                            thunk_FUN_040ec700(plVar12,lVar11);
                                            lVar11 = FUN_04077674(*unaff_x21,4);
                                            if (lVar11 == 0) goto LAB_07687f9c;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              *(undefined8 *)(lVar11 + 0x20) =
                                                   *(undefined8 *)PTR_DAT_092da680;
                                              thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x20));
                                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)PTR_DAT_092da5d8;
                                                thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x28));
                                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)PTR_DAT_092da5b8;
                                                  thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x30));
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_092da638;
                                                    thunk_FUN_040ec700();
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x10);
                                                    *plVar12 = lVar11;
                                                    thunk_FUN_040ec700(plVar12,lVar11);
                                                    lVar11 = FUN_04077674(*unaff_x21,0xc);
                                                    if (lVar11 == 0) goto LAB_07687f9c;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)PTR_DAT_092da678;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar11 + 0x20));
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_092da6c0;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar11 + 0x28));
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x30) =
                                                               *(undefined8 *)PTR_DAT_092da5e0;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar11 + 0x30));
                                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc
                                                              ) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x38) =
                                                                 *(undefined8 *)PTR_DAT_092da590;
                                                            thunk_FUN_040ec700((undefined8 *)
                                                                               (lVar11 + 0x38));
                                                            if (4 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x40) =
                                                                   *(undefined8 *)PTR_DAT_092da598;
                                                              thunk_FUN_040ec700((undefined8 *)
                                                                                 (lVar11 + 0x40));
                                                              if (5 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x48) =
                                                                     *(undefined8 *)PTR_DAT_092da670
                                                                ;
                                                                thunk_FUN_040ec700((undefined8 *)
                                                                                   (lVar11 + 0x48));
                                                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x50) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092da640;
                                                                  thunk_FUN_040ec700((undefined8 *)
                                                                                     (lVar11 + 0x50)
                                                                                    );
                                                                  if ((*(uint *)(lVar11 + 0x18) &
                                                                      0xfffffff8) != 0) {
                                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_092da660;
                                                                    thunk_FUN_040ec700((undefined8 *
                                                                                       )(lVar11 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_092da650;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x60)
                                                                      );
                                                    if (9 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x68) =
                                                           *(undefined8 *)PTR_DAT_092da5a0;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar11 + 0x68));
                                                      if (10 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x70) =
                                                             *(undefined8 *)PTR_DAT_092da608;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar11 + 0x70));
                                                        if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x78) =
                                                               *(undefined8 *)PTR_DAT_092da5f0;
                                                          thunk_FUN_040ec700();
                                                          plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x18);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_040ec700(plVar12,lVar11);
                                                  lVar11 = FUN_04077674(*unaff_x21,5);
                                                  if (lVar11 == 0) goto LAB_07687f9c;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_092da6d0;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_092da5b0;
                                                      thunk_FUN_040ec700((undefined8 *)
                                                                         (lVar11 + 0x28));
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_092da648;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar11 + 0x30));
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_092da600;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar11 + 0x38));
                                                          puVar10 = PTR_DAT_092da588;
                                                          puVar9 = PTR_DAT_092da580;
                                                          puVar8 = PTR_DAT_092da578;
                                                          puVar7 = PTR_DAT_092da570;
                                                          puVar6 = PTR_DAT_092da568;
                                                          puVar4 = PTR_DAT_092d16d8;
                                                          puVar3 = PTR_DAT_092d0928;
                                                          puVar2 = PTR_DAT_09289910;
                                                          puVar1 = PTR_DAT_092869a0;
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_092da658;
                                                            thunk_FUN_040ec700();
                                                            plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x20);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_040ec700(plVar12,lVar11);
                                                  uVar13 = FUN_04077674(*(undefined8 *)puVar1,0x100)
                                                  ;
                                                  FUN_07593f88(uVar13,*(undefined8 *)puVar9,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x28);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_040ec700(puVar14,uVar13);
                                                  uVar13 = FUN_04077674(*(undefined8 *)puVar4,0x1e);
                                                  FUN_07593f88(uVar13,*(undefined8 *)puVar10,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_040ec700(puVar14,uVar13);
                                                  uVar13 = FUN_04077674(*(undefined8 *)puVar3,0xf);
                                                  FUN_07593f88(uVar13,*(undefined8 *)puVar8,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x38);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_040ec700(puVar14,uVar13);
                                                  uVar13 = FUN_04077674(*(undefined8 *)puVar4,0x2a);
                                                  FUN_07593f88(uVar13,*(undefined8 *)puVar7,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x40);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_040ec700(puVar14,uVar13);
                                                  uVar13 = FUN_04077674(*(undefined8 *)puVar2,0x15);
                                                  FUN_07593f88(uVar13,*(undefined8 *)puVar6,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x48);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_040ec700(puVar14,uVar13);
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
    FUN_04077838();
  }
LAB_07687f9c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


