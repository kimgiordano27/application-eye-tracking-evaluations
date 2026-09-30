/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<XmlTextWriter.Namespace>
ENTRY_POINT: 03017f60
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<XmlTextWriter_Namespace>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *puVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  puVar12 = *(undefined8 **)(unaff_x19 + 0xda0);
  plVar6 = (long *)FUN_02ce7ad4();
  lVar7 = FUN_04f3fb68(*puVar12,0);
  if (plVar6 == (long *)0x0) goto LAB_03019030;
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
  goto LAB_03019034;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    uVar9 = thunk_FUN_02cea894(*unaff_x28);
    FUN_04cf70f0();
    puVar2 = PTR_DAT_065d8d00;
    if (2 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x30) = uVar9;
      puVar3 = PTR_DAT_065d8d08;
      uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)puVar3);
      }
      if (DAT_06a68927 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8d08);
        DAT_06a68927 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar3;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar7 = FUN_02ce7ad4(*unaff_x27,5);
      if (lVar7 == 0) goto LAB_03019030;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((((uVar1 != 0) &&
           (*(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065d8ee0, uVar1 != 1)) &&
          (*(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_065d90a0, 2 < uVar1)) &&
         ((*(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_065d8f38, uVar1 != 3 &&
          (*(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_065d8f78, 4 < uVar1)))) {
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_065d8f80;
        uVar10 = thunk_FUN_02cea894(*unaff_x28);
        FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
        puVar2 = PTR_DAT_065d8d30;
        if (3 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x38) = uVar10;
          puVar3 = PTR_DAT_065d8d38;
          uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar3);
          }
          if (DAT_06a68928 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8d38);
            DAT_06a68928 = '\x01';
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar7 = *(long *)puVar3;
          }
          uVar13 = **(undefined8 **)(lVar7 + 0xb8);
          lVar7 = FUN_02ce7ad4(*unaff_x27,4);
          puVar2 = PTR_DAT_065d9108;
          if (lVar7 == 0) goto LAB_03019030;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 != 0) {
            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065d9108;
            puVar3 = PTR_DAT_065d8f48;
            if (uVar1 != 1) {
              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_065d8f48;
              if ((2 < uVar1) &&
                 (*(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_065d9238, uVar1 != 3)) {
                *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_065d8ef0;
                uVar10 = thunk_FUN_02cea894(*unaff_x28);
                FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
                puVar4 = PTR_DAT_065d8d20;
                if (4 < *(uint *)(unaff_x21 + 0x18)) {
                  *(undefined8 *)(unaff_x21 + 0x40) = uVar10;
                  puVar5 = PTR_DAT_065d8d28;
                  uVar9 = FUN_04f3fb68(*(undefined8 *)puVar4,0);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_02cd038c(*(long *)puVar5);
                  }
                  if (DAT_06a68929 == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8d28);
                    DAT_06a68929 = '\x01';
                  }
                  lVar7 = *(long *)puVar5;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_02cd038c();
                    lVar7 = *(long *)puVar5;
                  }
                  uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                  lVar7 = FUN_02ce7ad4(*unaff_x27,1);
                  if (lVar7 == 0) goto LAB_03019030;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065d90c0;
                    uVar10 = thunk_FUN_02cea894(*unaff_x28);
                    FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
                    puVar4 = PTR_DAT_065d8d10;
                    if (5 < *(uint *)(unaff_x21 + 0x18)) {
                      *(undefined8 *)(unaff_x21 + 0x48) = uVar10;
                      puVar5 = PTR_DAT_065d8d18;
                      uVar9 = FUN_04f3fb68(*(undefined8 *)puVar4,0);
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_02cd038c(*(long *)puVar5);
                      }
                      if (DAT_06a6892a == '\0') {
                        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8d18);
                        DAT_06a6892a = '\x01';
                      }
                      lVar7 = *(long *)puVar5;
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_02cd038c();
                        lVar7 = *(long *)puVar5;
                      }
                      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                      lVar7 = FUN_02ce7ad4(*unaff_x27,7);
                      if (lVar7 == 0) {
LAB_03019030:
                    /* WARNING: Subroutine does not return */
                        FUN_02ce7c7c();
                      }
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if ((((uVar1 != 0) &&
                           (*(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2, uVar1 != 1)) &&
                          (*(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)puVar3, 2 < uVar1)) &&
                         (((*(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_065d8fd0,
                           uVar1 != 3 &&
                           (*(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_065d9230,
                           4 < uVar1)) &&
                          ((*(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_065d91d8,
                           uVar1 != 5 &&
                           (*(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)PTR_DAT_065d8e88,
                           6 < uVar1)))))) {
                        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_065d8f18;
                        lVar8 = FUN_02ce7ad4(*unaff_x27,1);
                        if (lVar8 == 0) goto LAB_03019030;
                        if (*(int *)(lVar8 + 0x18) != 0) {
                          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_065d9180;
                          uVar10 = thunk_FUN_02cea894(*unaff_x28);
                          FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,lVar8,0,0,0);
                          puVar2 = PTR_DAT_065d8cd8;
                          if (6 < *(uint *)(unaff_x21 + 0x18)) {
                            *(undefined8 *)(unaff_x21 + 0x50) = uVar10;
                            puVar3 = PTR_DAT_065d8ce0;
                            uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_02cd038c(*(long *)puVar3);
                            }
                            if (DAT_06a6892b == '\0') {
                              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8ce0);
                              DAT_06a6892b = '\x01';
                            }
                            lVar7 = *(long *)puVar3;
                            if (*(int *)(lVar7 + 0xe0) == 0) {
                              thunk_FUN_02cd038c();
                              lVar7 = *(long *)puVar3;
                            }
                            uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                            lVar7 = FUN_02ce7ad4(*unaff_x27,4);
                            if (lVar7 == 0) goto LAB_03019030;
                            uVar1 = *(uint *)(lVar7 + 0x18);
                            if (((uVar1 != 0) &&
                                (*(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065d8ff8,
                                uVar1 != 1)) &&
                               ((*(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_065d8de0,
                                2 < uVar1 &&
                                (*(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_065d9278,
                                uVar1 != 3)))) {
                              *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_065d9298;
                              uVar10 = thunk_FUN_02cea894(*unaff_x28);
                              FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
                              puVar2 = PTR_DAT_065d8d88;
                              if (7 < *(uint *)(unaff_x21 + 0x18)) {
                                *(undefined8 *)(unaff_x21 + 0x58) = uVar10;
                                puVar3 = PTR_DAT_065d8d90;
                                uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  thunk_FUN_02cd038c(*(long *)puVar3);
                                }
                                if (DAT_06a6892c == '\0') {
                                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8d90);
                                  DAT_06a6892c = '\x01';
                                }
                                lVar7 = *(long *)puVar3;
                                if (*(int *)(lVar7 + 0xe0) == 0) {
                                  thunk_FUN_02cd038c();
                                  lVar7 = *(long *)puVar3;
                                }
                                uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                lVar7 = FUN_02ce7ad4(*unaff_x27,4);
                                puVar2 = PTR_DAT_065d0000;
                                if (lVar7 == 0) goto LAB_03019030;
                                uVar1 = *(uint *)(lVar7 + 0x18);
                                if (uVar1 != 0) {
                                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065d0000;
                                  if (((uVar1 != 1) &&
                                      (*(undefined8 *)(lVar7 + 0x28) =
                                            *(undefined8 *)PTR_DAT_065d8e68, 2 < uVar1)) &&
                                     (*(undefined8 *)(lVar7 + 0x30) =
                                           *(undefined8 *)PTR_DAT_065d9080, uVar1 != 3)) {
                                    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_065d9190;
                                    puVar3 = PTR_DAT_065d8d98;
                                    plVar6 = (long *)FUN_02ce7ad4(*unaff_x29,2);
                                    lVar8 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                    if (plVar6 == (long *)0x0) goto LAB_03019030;
                                    if ((lVar8 != 0) &&
                                       (lVar11 = thunk_FUN_02cea798(lVar8,*(undefined8 *)
                                                                           (*plVar6 + 0x40)),
                                       lVar11 == 0)) {
LAB_03019034:
                                      uVar9 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                                      FUN_02ce7b54(uVar9,0);
                                    }
                                    puVar3 = PTR_DAT_065d8d40;
                                    if ((int)plVar6[3] != 0) {
                                      plVar6[4] = lVar8;
                                      lVar8 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                      if ((lVar8 != 0) &&
                                         (lVar11 = thunk_FUN_02cea798(lVar8,*(undefined8 *)
                                                                             (*plVar6 + 0x40)),
                                         lVar11 == 0)) goto LAB_03019034;
                                      if (1 < *(uint *)(plVar6 + 3)) {
                                        plVar6[5] = lVar8;
                                        uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                        FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,plVar6,0,0);
                                        puVar3 = PTR_DAT_065d8d48;
                                        if (8 < *(uint *)(unaff_x21 + 0x18)) {
                                          *(undefined8 *)(unaff_x21 + 0x60) = uVar10;
                                          puVar4 = PTR_DAT_065d8d50;
                                          uVar9 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                            thunk_FUN_02cd038c(*(long *)puVar4);
                                          }
                                          if (DAT_06a6892d == '\0') {
                                            AkMIDIEventCallbackInfo__get_byProgramNum
                                                      (PTR_DAT_065d8d50);
                                            DAT_06a6892d = '\x01';
                                          }
                                          lVar7 = *(long *)puVar4;
                                          if (*(int *)(lVar7 + 0xe0) == 0) {
                                            thunk_FUN_02cd038c();
                                            lVar7 = *(long *)puVar4;
                                          }
                                          uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                          lVar7 = FUN_02ce7ad4(*unaff_x27,3);
                                          if (lVar7 == 0) goto LAB_03019030;
                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                          if (((uVar1 != 0) &&
                                              (*(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2
                                              , uVar1 != 1)) &&
                                             (*(undefined8 *)(lVar7 + 0x28) =
                                                   *(undefined8 *)PTR_DAT_065d9040, 2 < uVar1)) {
                                            *(undefined8 *)(lVar7 + 0x30) =
                                                 *(undefined8 *)PTR_DAT_065d9088;
                                            puVar3 = PTR_DAT_065d8cd0;
                                            plVar6 = (long *)FUN_02ce7ad4(*unaff_x29,1);
                                            lVar8 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                            if (plVar6 == (long *)0x0) goto LAB_03019030;
                                            if ((lVar8 != 0) &&
                                               (lVar11 = thunk_FUN_02cea798(lVar8,*(undefined8 *)
                                                                                   (*plVar6 + 0x40))
                                               , lVar11 == 0)) goto LAB_03019034;
                                            if ((int)plVar6[3] != 0) {
                                              plVar6[4] = lVar8;
                                              uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                              FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,plVar6,0,0);
                                              puVar3 = PTR_DAT_065d8d68;
                                              if (9 < *(uint *)(unaff_x21 + 0x18)) {
                                                *(undefined8 *)(unaff_x21 + 0x68) = uVar10;
                                                puVar4 = PTR_DAT_065d8d70;
                                                uVar9 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                  thunk_FUN_02cd038c(*(long *)puVar4);
                                                }
                                                if (DAT_06a6892e == '\0') {
                                                  AkMIDIEventCallbackInfo__get_byProgramNum
                                                            (PTR_DAT_065d8d70);
                                                  DAT_06a6892e = '\x01';
                                                }
                                                lVar7 = *(long *)puVar4;
                                                if (*(int *)(lVar7 + 0xe0) == 0) {
                                                  thunk_FUN_02cd038c();
                                                  lVar7 = *(long *)puVar4;
                                                }
                                                uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                lVar7 = FUN_02ce7ad4(*unaff_x27,2);
                                                if (lVar7 == 0) goto LAB_03019030;
                                                if ((*(int *)(lVar7 + 0x18) != 0) &&
                                                   (*(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2,
                                                   *(int *)(lVar7 + 0x18) != 1)) {
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)PTR_DAT_065d8ea0;
                                                  uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                  FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
                                                  puVar3 = PTR_DAT_065d8d58;
                                                  if (10 < *(uint *)(unaff_x21 + 0x18)) {
                                                    *(undefined8 *)(unaff_x21 + 0x70) = uVar10;
                                                    puVar4 = PTR_DAT_065d8d60;
                                                    uVar9 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                      thunk_FUN_02cd038c(*(long *)puVar4);
                                                    }
                                                    if (DAT_06a6892f == '\0') {
                                                      AkMIDIEventCallbackInfo__get_byProgramNum
                                                                (PTR_DAT_065d8d60);
                                                      DAT_06a6892f = '\x01';
                                                    }
                                                    lVar7 = *(long *)puVar4;
                                                    if (*(int *)(lVar7 + 0xe0) == 0) {
                                                      thunk_FUN_02cd038c();
                                                      lVar7 = *(long *)puVar4;
                                                    }
                                                    uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                    lVar7 = FUN_02ce7ad4(*unaff_x27,3);
                                                    if (lVar7 == 0) goto LAB_03019030;
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (((uVar1 != 0) &&
                                                        (*(undefined8 *)(lVar7 + 0x20) =
                                                              *(undefined8 *)puVar2, uVar1 != 1)) &&
                                                       (*(undefined8 *)(lVar7 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_065d8eb0,
                                                       2 < uVar1)) {
                                                      *(undefined8 *)(lVar7 + 0x30) =
                                                           *(undefined8 *)PTR_DAT_065d91a8;
                                                      uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                      FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0
                                                                  );
                                                      puVar3 = PTR_DAT_065d8d78;
                                                      if (0xb < *(uint *)(unaff_x21 + 0x18)) {
                                                        *(undefined8 *)(unaff_x21 + 0x78) = uVar10;
                                                        puVar4 = PTR_DAT_065d8d80;
                                                        uVar9 = FUN_04f3fb68(*(undefined8 *)puVar3,0
                                                                            );
                                                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                          thunk_FUN_02cd038c(*(long *)puVar4);
                                                        }
                                                        if (DAT_06a68930 == '\0') {
                                                          AkMIDIEventCallbackInfo__get_byProgramNum
                                                                    (PTR_DAT_065d8d80);
                                                          DAT_06a68930 = '\x01';
                                                        }
                                                        lVar7 = *(long *)puVar4;
                                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                                          thunk_FUN_02cd038c();
                                                          lVar7 = *(long *)puVar4;
                                                        }
                                                        uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                        lVar7 = FUN_02ce7ad4(*unaff_x27,5);
                                                        if (lVar7 == 0) goto LAB_03019030;
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (((uVar1 != 0) &&
                                                            (*(undefined8 *)(lVar7 + 0x20) =
                                                                  *(undefined8 *)puVar2, uVar1 != 1)
                                                            ) && ((*(undefined8 *)(lVar7 + 0x28) =
                                                                        *(undefined8 *)
                                                                         PTR_DAT_065d9068, 2 < uVar1
                                                                  && ((*(undefined8 *)(lVar7 + 0x30)
                                                                            = *(undefined8 *)
                                                                               PTR_DAT_065d8e08,
                                                                      uVar1 != 3 &&
                                                                      (*(undefined8 *)(lVar7 + 0x38)
                                                                            = *(undefined8 *)
                                                                               PTR_DAT_065d9138,
                                                                      4 < uVar1)))))) {
                                                          *(undefined8 *)(lVar7 + 0x40) =
                                                               *(undefined8 *)PTR_DAT_065d8fd8;
                                                          puVar2 = PTR_DAT_065d8cf8;
                                                          plVar6 = (long *)FUN_02ce7ad4(*unaff_x29,1
                                                                                       );
                                                          lVar8 = FUN_04f3fb68(*(undefined8 *)puVar2
                                                                               ,0);
                                                          if (plVar6 == (long *)0x0)
                                                          goto LAB_03019030;
                                                          if ((lVar8 != 0) &&
                                                             (lVar11 = thunk_FUN_02cea798(lVar8,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
                                                  goto LAB_03019034;
                                                  if ((int)plVar6[3] != 0) {
                                                    plVar6[4] = lVar8;
                                                    uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                    FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,plVar6,
                                                                 0,0);
                                                    puVar2 = PTR_DAT_065d8db8;
                                                    if (0xc < *(uint *)(unaff_x21 + 0x18)) {
                                                      *(undefined8 *)(unaff_x21 + 0x80) = uVar10;
                                                      puVar3 = PTR_DAT_065d8dc0;
                                                      uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
                                                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c(*(long *)puVar3);
                                                      }
                                                      if (DAT_06a68931 == '\0') {
                                                        AkMIDIEventCallbackInfo__get_byProgramNum
                                                                  (PTR_DAT_065d8dc0);
                                                        DAT_06a68931 = '\x01';
                                                      }
                                                      lVar7 = *(long *)puVar3;
                                                      if (*(int *)(lVar7 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c();
                                                        lVar7 = *(long *)puVar3;
                                                      }
                                                      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                      lVar7 = FUN_02ce7ad4(*unaff_x27,2);
                                                      if (lVar7 == 0) goto LAB_03019030;
                                                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                                                         (*(undefined8 *)(lVar7 + 0x20) =
                                                               *(undefined8 *)PTR_DAT_065d8f68,
                                                         *(int *)(lVar7 + 0x18) != 1)) {
                                                        *(undefined8 *)(lVar7 + 0x28) =
                                                             *(undefined8 *)PTR_DAT_065d8e50;
                                                        uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                        FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0
                                                                     ,0);
                                                        puVar2 = PTR_DAT_065d8dc8;
                                                        if (0xd < *(uint *)(unaff_x21 + 0x18)) {
                                                          *(undefined8 *)(unaff_x21 + 0x88) = uVar10
                                                          ;
                                                          puVar3 = PTR_DAT_065d8dd0;
                                                          uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2
                                                                               ,0);
                                                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0)
                                                          {
                                                            thunk_FUN_02cd038c(*(long *)puVar3);
                                                          }
                                                          if (DAT_06a68932 == '\0') {
                                                                                                                        
                                                  AkMIDIEventCallbackInfo__get_byProgramNum
                                                            (PTR_DAT_065d8dd0);
                                                  DAT_06a68932 = '\x01';
                                                  }
                                                  lVar7 = *(long *)puVar3;
                                                  if (*(int *)(lVar7 + 0xe0) == 0) {
                                                    thunk_FUN_02cd038c();
                                                    lVar7 = *(long *)puVar3;
                                                  }
                                                  uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                  lVar7 = FUN_02ce7ad4(*unaff_x27,3);
                                                  if (lVar7 == 0) goto LAB_03019030;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar7 + 0x20) =
                                                            *(undefined8 *)PTR_DAT_065d91f0,
                                                      uVar1 != 1)) &&
                                                     (*(undefined8 *)(lVar7 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_065d9058,
                                                     2 < uVar1)) {
                                                    *(undefined8 *)(lVar7 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_065d91c0;
                                                    uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                    FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0,0);
                                                    puVar2 = PTR_DAT_065d8da8;
                                                    if (0xe < *(uint *)(unaff_x21 + 0x18)) {
                                                      *(undefined8 *)(unaff_x21 + 0x90) = uVar10;
                                                      puVar3 = PTR_DAT_065d8db0;
                                                      uVar9 = FUN_04f3fb68(*(undefined8 *)puVar2,0);
                                                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c(*(long *)puVar3);
                                                      }
                                                      if (DAT_06a68933 == '\0') {
                                                        AkMIDIEventCallbackInfo__get_byProgramNum
                                                                  (PTR_DAT_065d8db0);
                                                        DAT_06a68933 = '\x01';
                                                      }
                                                      lVar7 = *(long *)puVar3;
                                                      if (*(int *)(lVar7 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c();
                                                        lVar7 = *(long *)puVar3;
                                                      }
                                                      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
                                                      lVar7 = FUN_02ce7ad4(*unaff_x27,6);
                                                      if (lVar7 == 0) goto LAB_03019030;
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if ((((uVar1 != 0) &&
                                                           (*(undefined8 *)(lVar7 + 0x20) =
                                                                 *(undefined8 *)PTR_DAT_065d8fc0,
                                                           uVar1 != 1)) &&
                                                          ((*(undefined8 *)(lVar7 + 0x28) =
                                                                 *(undefined8 *)PTR_DAT_065d8f28,
                                                           2 < uVar1 &&
                                                           ((*(undefined8 *)(lVar7 + 0x30) =
                                                                  *(undefined8 *)PTR_DAT_065d8e98,
                                                            uVar1 != 3 &&
                                                            (*(undefined8 *)(lVar7 + 0x38) =
                                                                  *(undefined8 *)PTR_DAT_065d90f8,
                                                            4 < uVar1)))))) &&
                                                         (*(undefined8 *)(lVar7 + 0x40) =
                                                               *(undefined8 *)PTR_DAT_065d91e0,
                                                         uVar1 != 5)) {
                                                        *(undefined8 *)(lVar7 + 0x48) =
                                                             *(undefined8 *)PTR_DAT_065d9070;
                                                        uVar10 = thunk_FUN_02cea894(*unaff_x28);
                                                        FUN_04cf70f0(uVar10,uVar9,uVar13,lVar7,0,0,0
                                                                     ,0);
                                                        if (0xf < *(uint *)(unaff_x21 + 0x18)) {
                                                          *(undefined8 *)(unaff_x21 + 0x98) = uVar10
                                                          ;
                                                          puVar3 = PTR_DAT_065d8ca8;
                                                          puVar2 = PTR_DAT_065cfef8;
                                                          uVar9 = thunk_FUN_02cea894(*unaff_x28);
                                                          FUN_04cf7280(uVar9,0,0);
                                                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0)
                                                          {
                                                            thunk_FUN_02cd038c();
                                                          }
                                                          uVar9 = FUN_04cf4ba0(in_stack_00000008);
                                                          **(undefined8 **)(*(long *)puVar3 + 0xb8)
                                                               = uVar9;
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


