/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 0505d684
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x23;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  long *plVar4;
  undefined *puVar7;
  
  lStack0000000000000018 = *(long *)(unaff_x23 + 0x28);
  if ((*(byte *)(unaff_x20 + 0x70e) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9980);
    FUN_02f08768(PTR_DAT_067c9990);
    FUN_02f08768(PTR_DAT_067d7928);
    *(undefined1 *)(unaff_x20 + 0x70e) = 1;
  }
  puVar7 = PTR_DAT_067d7928;
  if (param_2 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar9 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067dbe90);
    auVar14 = FUN_0504ee1c(uVar9,uVar6);
Newtonsoft_Json_JsonDictionaryAttribute___ctor:
    if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
      uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067dbe98);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar9,uVar6);
    }
  }
  else {
    if (param_1 == 0) {
      auVar14 = FUN_050ef21c(param_2,0);
      if ((auVar14._0_8_ & 1) != 0) {
        thunk_FUN_02f6ef30(PTR_DAT_067ca178);
        uVar9 = thunk_FUN_02f45270();
        puVar7 = PTR_DAT_067dbe88;
LAB_0505db10:
        uVar6 = thunk_FUN_02f6ef30(puVar7);
        auVar14 = FUN_050d2a74(uVar9,uVar6,0);
        goto Newtonsoft_Json_JsonDictionaryAttribute___ctor;
      }
    }
    else {
      auVar14 = thunk_FUN_02f45174(param_1,*(undefined8 *)PTR_DAT_067d7928);
      puVar1 = PTR_DAT_067c9fd0;
      uVar9 = auVar14._8_8_;
      plVar4 = auVar14._0_8_;
      if (plVar4 != (long *)0x0) {
        lVar5 = *(long *)PTR_DAT_067c9fd0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar5 = *(long *)puVar1;
          uVar9 = extraout_x1;
        }
        auVar14._8_8_ = uVar9;
        auVar14._0_8_ = lVar5;
        lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar10 == 0) {
Newtonsoft_Json_JsonException___ctor:
          if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_0505dfb0;
        }
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
          if (*(long *)(lVar10 + 0x38) == param_2) {
            lVar5 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                  puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_0505dbf8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar7,1);
LAB_0505dbf8:
            uVar2 = (*(code *)*puVar8)(plVar4,param_3,puVar8[1]);
            in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
            uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x28);
            goto LAB_0505dd64;
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar1;
            auVar14._8_8_ = extraout_x1_00;
            auVar14._0_8_ = lVar5;
            lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            uVar9 = extraout_x1_00;
            if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
          }
          auVar14._8_8_ = uVar9;
          auVar14._0_8_ = lVar5;
          if (4 < *(uint *)(lVar10 + 0x18)) {
            if (*(long *)(lVar10 + 0x40) == param_2) {
              lVar5 = *plVar4;
              uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                    puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                    goto LAB_0505dc74;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar7,2);
LAB_0505dc74:
              uVar3 = (*(code *)*puVar8)(plVar4,param_3,puVar8[1]);
              uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x88);
              goto LAB_0505dc90;
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar5 = *(long *)puVar1;
              auVar14._8_8_ = extraout_x1_01;
              auVar14._0_8_ = lVar5;
              lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              uVar9 = extraout_x1_01;
              if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
            }
            auVar14._8_8_ = uVar9;
            auVar14._0_8_ = lVar5;
            if (5 < *(uint *)(lVar10 + 0x18)) {
              if (*(long *)(lVar10 + 0x48) == param_2) {
                lVar5 = *plVar4;
                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                      puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                      goto LAB_0505dce8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar7,3);
LAB_0505dce8:
                uVar2 = (*(code *)*puVar8)(plVar4,param_3,puVar8[1]);
                uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x30);
LAB_0505dd58:
                in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
LAB_0505dd64:
                auVar14 = thunk_FUN_02f44ec4(uVar9,&stack0x00000008);
                param_1 = auVar14._0_8_;
                goto LAB_0505dd6c;
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar5 = *(long *)puVar1;
                auVar14._8_8_ = extraout_x1_02;
                auVar14._0_8_ = lVar5;
                lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                uVar9 = extraout_x1_02;
                if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
              }
              auVar14._8_8_ = uVar9;
              auVar14._0_8_ = lVar5;
              if (6 < *(uint *)(lVar10 + 0x18)) {
                if (*(long *)(lVar10 + 0x50) == param_2) {
                  lVar5 = *plVar4;
                  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                        puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                        goto LAB_0505dd3c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar7,4);
LAB_0505dd3c:
                  uVar2 = (*(code *)*puVar8)(plVar4,param_3,puVar8[1]);
                  uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x18);
                  goto LAB_0505dd58;
                }
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar5 = *(long *)puVar1;
                  auVar14._8_8_ = extraout_x1_03;
                  auVar14._0_8_ = lVar5;
                  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  uVar9 = extraout_x1_03;
                  if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                }
                auVar14._8_8_ = uVar9;
                auVar14._0_8_ = lVar5;
                if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                  if (*(long *)(lVar10 + 0x58) == param_2) {
                    lVar5 = *plVar4;
                    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
                          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                          goto LAB_0505ddcc;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar7,5);
LAB_0505ddcc:
                    uVar3 = (*(code *)*puVar8)(plVar4,param_3,puVar8[1]);
                    uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x38);
LAB_0505dc90:
                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
                    goto LAB_0505dd64;
                  }
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar5 = *(long *)puVar1;
                    auVar14._8_8_ = extraout_x1_04;
                    auVar14._0_8_ = lVar5;
                    lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    uVar9 = extraout_x1_04;
                    if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                  }
                  auVar14._8_8_ = uVar9;
                  auVar14._0_8_ = lVar5;
                  if (8 < *(uint *)(lVar10 + 0x18)) {
                    if (*(long *)(lVar10 + 0x60) == param_2) {
                      uVar3 = FUN_02a830c8(6,*(undefined8 *)puVar7,plVar4,param_3);
                      uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x40);
                      goto LAB_0505dc90;
                    }
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                      lVar5 = *(long *)puVar1;
                      auVar14._8_8_ = extraout_x1_05;
                      auVar14._0_8_ = lVar5;
                      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      uVar9 = extraout_x1_05;
                      if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                    }
                    auVar14._8_8_ = uVar9;
                    auVar14._0_8_ = lVar5;
                    if (9 < *(uint *)(lVar10 + 0x18)) {
                      if (*(long *)(lVar10 + 0x68) == param_2) {
                        uVar13 = FUN_02a830c8(7,*(undefined8 *)puVar7,plVar4,param_3);
                        uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x48);
LAB_0505de0c:
                        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
                        goto LAB_0505dd64;
                      }
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                        lVar5 = *(long *)puVar1;
                        auVar14._8_8_ = extraout_x1_06;
                        auVar14._0_8_ = lVar5;
                        lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        uVar9 = extraout_x1_06;
                        if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                      }
                      auVar14._8_8_ = uVar9;
                      auVar14._0_8_ = lVar5;
                      if (10 < *(uint *)(lVar10 + 0x18)) {
                        if (*(long *)(lVar10 + 0x70) == param_2) {
                          uVar13 = FUN_02a830c8(8,*(undefined8 *)puVar7,plVar4,param_3);
                          uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x50);
                          goto LAB_0505de0c;
                        }
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                          lVar5 = *(long *)puVar1;
                          auVar14._8_8_ = extraout_x1_07;
                          auVar14._0_8_ = lVar5;
                          lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                          uVar9 = extraout_x1_07;
                          if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                        }
                        auVar14._8_8_ = uVar9;
                        auVar14._0_8_ = lVar5;
                        if (0xb < *(uint *)(lVar10 + 0x18)) {
                          if (*(long *)(lVar10 + 0x78) == param_2) {
                            uVar9 = FUN_02a830c8(9,*(undefined8 *)puVar7,plVar4,param_3);
                            in_stack_00000008 = uVar9;
                            uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x68);
                            goto LAB_0505dd64;
                          }
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                            lVar5 = *(long *)puVar1;
                            auVar14._8_8_ = extraout_x1_08;
                            auVar14._0_8_ = lVar5;
                            lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                            uVar9 = extraout_x1_08;
                            if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                          }
                          auVar14._8_8_ = uVar9;
                          auVar14._0_8_ = lVar5;
                          if (0xc < *(uint *)(lVar10 + 0x18)) {
                            if (*(long *)(lVar10 + 0x80) == param_2) {
                              uVar9 = FUN_02a830c8(10,*(undefined8 *)puVar7,plVar4,param_3);
                              in_stack_00000008 = uVar9;
                              uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x70);
                              goto LAB_0505dd64;
                            }
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar5 = *(long *)puVar1;
                              auVar14._8_8_ = extraout_x1_09;
                              auVar14._0_8_ = lVar5;
                              lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                              uVar9 = extraout_x1_09;
                              if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                            }
                            auVar14._8_8_ = uVar9;
                            auVar14._0_8_ = lVar5;
                            if (0xd < *(uint *)(lVar10 + 0x18)) {
                              if (*(long *)(lVar10 + 0x88) == param_2) {
                                uVar13 = FUN_02a830c8(0xb,*(undefined8 *)puVar7,plVar4,param_3);
                                in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
                                uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x78);
                                goto LAB_0505dd64;
                              }
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                                lVar5 = *(long *)puVar1;
                                auVar14._8_8_ = extraout_x1_10;
                                auVar14._0_8_ = lVar5;
                                lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                uVar9 = extraout_x1_10;
                                if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                              }
                              auVar14._8_8_ = uVar9;
                              auVar14._0_8_ = lVar5;
                              if (0xe < *(uint *)(lVar10 + 0x18)) {
                                if (*(long *)(lVar10 + 0x90) == param_2) {
                                  uVar9 = FUN_02a830c8(0xc,*(undefined8 *)puVar7,plVar4,param_3);
                                  in_stack_00000008 = uVar9;
                                  uVar9 = *(undefined8 *)(PTR_DAT_067c9338 + 0x80);
                                  goto LAB_0505dd64;
                                }
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                  lVar5 = *(long *)puVar1;
                                  auVar14._8_8_ = extraout_x1_11;
                                  auVar14._0_8_ = lVar5;
                                  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                  uVar9 = extraout_x1_11;
                                  if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                }
                                auVar14._8_8_ = uVar9;
                                auVar14._0_8_ = lVar5;
                                if ((*(uint *)(lVar10 + 0x18) & 0xfffffff0) != 0) {
                                  if (*(long *)(lVar10 + 0x98) == param_2) {
                                    _in_stack_00000008 =
                                         FUN_02a830c8(0xd,*(undefined8 *)puVar7,plVar4,param_3);
                                    uVar9 = *(undefined8 *)PTR_DAT_067c9990;
                                    goto LAB_0505dd64;
                                  }
                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                    thunk_FUN_02f6670c();
                                    lVar5 = *(long *)puVar1;
                                    auVar14._8_8_ = extraout_x1_12;
                                    auVar14._0_8_ = lVar5;
                                    lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                    uVar9 = extraout_x1_12;
                                    if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                  }
                                  auVar14._8_8_ = uVar9;
                                  auVar14._0_8_ = lVar5;
                                  if (0x10 < *(uint *)(lVar10 + 0x18)) {
                                    if (*(long *)(lVar10 + 0xa0) == param_2) {
                                      uVar9 = FUN_02a830c8(0xe,*(undefined8 *)puVar7,plVar4,param_3)
                                      ;
                                      in_stack_00000008 = uVar9;
                                      uVar9 = *(undefined8 *)PTR_DAT_067c9980;
                                      goto LAB_0505dd64;
                                    }
                                    if (*(int *)(lVar5 + 0xe4) == 0) {
                                      thunk_FUN_02f6670c();
                                      lVar5 = *(long *)puVar1;
                                      auVar14._8_8_ = extraout_x1_13;
                                      auVar14._0_8_ = lVar5;
                                      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                      uVar9 = extraout_x1_13;
                                      if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                    }
                                    auVar14._8_8_ = uVar9;
                                    auVar14._0_8_ = lVar5;
                                    if (0x12 < *(uint *)(lVar10 + 0x18)) {
                                      if (*(long *)(lVar10 + 0xb0) == param_2) {
                                        auVar14._8_8_ = *(undefined8 *)puVar7;
                                        if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
                                          lVar5 = FUN_02a830c8(0xf,*(undefined8 *)puVar7,plVar4,
                                                               param_3);
                                          return lVar5;
                                        }
                                        goto LAB_0505dfb0;
                                      }
                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                        auVar14 = thunk_FUN_02f6670c();
                                        lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                        if (lVar10 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                      }
                                      uVar9 = auVar14._0_8_;
                                      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                                        if (*(long *)(lVar10 + 0x28) != param_2) {
                                          auVar14._8_8_ = *(undefined8 *)puVar7;
                                          auVar14._0_8_ = uVar9;
                                          if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018)
                                          {
                                            lVar5 = FUN_02b01fe0(0x10,*(undefined8 *)puVar7,plVar4,
                                                                 param_2,param_3);
                                            return lVar5;
                                          }
                                          goto LAB_0505dfb0;
                                        }
                                        goto LAB_0505dd6c;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        goto LAB_0505dfb0;
      }
      uVar9 = thunk_FUN_02f1863c(param_1,0);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
      }
      auVar14 = FUN_050ed374(uVar9,param_2,0);
      if ((auVar14._0_8_ & 1) == 0) {
        thunk_FUN_02f6ef30(PTR_DAT_067ca178);
        uVar9 = thunk_FUN_02f45270();
        puVar7 = PTR_DAT_067dbe70;
        goto LAB_0505db10;
      }
    }
LAB_0505dd6c:
    if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
      return param_1;
    }
  }
LAB_0505dfb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar14._0_8_,auVar14._8_8_);
}


