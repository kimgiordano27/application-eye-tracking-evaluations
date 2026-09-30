/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 0505d6f4
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
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
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_067c9fd0;
  if (param_1 == (long *)0x0) {
    uVar5 = thunk_FUN_02f1863c();
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    auVar12 = FUN_050ed374(uVar5);
    if ((auVar12._0_8_ & 1) == 0) {
      thunk_FUN_02f6ef30(PTR_DAT_067ca178);
      uVar5 = thunk_FUN_02f45270();
      uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067dbe70);
      auVar12 = FUN_050d2a74(uVar5,uVar6,0);
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
        uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067dbe98);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar5,uVar6);
      }
      goto LAB_0505dfb0;
    }
LAB_0505dd6c:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
      return unaff_x21;
    }
  }
  else {
    lVar4 = *(long *)PTR_DAT_067c9fd0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar1;
      param_2 = extraout_x1;
    }
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar4;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar8 == 0) {
Newtonsoft_Json_JsonException___ctor:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0505dfb0;
    }
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
      if (*(long *)(lVar8 + 0x38) == unaff_x22) {
        lVar4 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0505dbf8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x24,1);
LAB_0505dbf8:
        uVar2 = (*(code *)*puVar7)(param_1);
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
        uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x28);
        goto LAB_0505dd64;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar1;
        auVar12._8_8_ = extraout_x1_00;
        auVar12._0_8_ = lVar4;
        lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        param_2 = extraout_x1_00;
        if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
      }
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = lVar4;
      if (4 < *(uint *)(lVar8 + 0x18)) {
        if (*(long *)(lVar8 + 0x40) == unaff_x22) {
          lVar4 = *param_1;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x24) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_0505dc74;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x24,2);
LAB_0505dc74:
          uVar3 = (*(code *)*puVar7)(param_1);
          uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x88);
          goto LAB_0505dc90;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar4 = *(long *)puVar1;
          auVar12._8_8_ = extraout_x1_01;
          auVar12._0_8_ = lVar4;
          lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          param_2 = extraout_x1_01;
          if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
        }
        auVar12._8_8_ = param_2;
        auVar12._0_8_ = lVar4;
        if (5 < *(uint *)(lVar8 + 0x18)) {
          if (*(long *)(lVar8 + 0x48) == unaff_x22) {
            lVar4 = *param_1;
            uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x24) {
                  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                  goto LAB_0505dce8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x24,3);
LAB_0505dce8:
            uVar2 = (*(code *)*puVar7)(param_1);
            uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x30);
LAB_0505dd58:
            in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
LAB_0505dd64:
            auVar12 = thunk_FUN_02f44ec4(uVar5,&stack0x00000008);
            unaff_x21 = auVar12._0_8_;
            goto LAB_0505dd6c;
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar4 = *(long *)puVar1;
            auVar12._8_8_ = extraout_x1_02;
            auVar12._0_8_ = lVar4;
            lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            param_2 = extraout_x1_02;
            if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
          }
          auVar12._8_8_ = param_2;
          auVar12._0_8_ = lVar4;
          if (6 < *(uint *)(lVar8 + 0x18)) {
            if (*(long *)(lVar8 + 0x50) == unaff_x22) {
              lVar4 = *param_1;
              uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x24) {
                    puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                    goto LAB_0505dd3c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x24,4);
LAB_0505dd3c:
              uVar2 = (*(code *)*puVar7)(param_1);
              uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x18);
              goto LAB_0505dd58;
            }
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar4 = *(long *)puVar1;
              auVar12._8_8_ = extraout_x1_03;
              auVar12._0_8_ = lVar4;
              lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
              param_2 = extraout_x1_03;
              if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
            }
            auVar12._8_8_ = param_2;
            auVar12._0_8_ = lVar4;
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
              if (*(long *)(lVar8 + 0x58) == unaff_x22) {
                lVar4 = *param_1;
                uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *unaff_x24) {
                      puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                      goto LAB_0505ddcc;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_02f421d0(param_1,*unaff_x24,5);
LAB_0505ddcc:
                uVar3 = (*(code *)*puVar7)(param_1);
                uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x38);
LAB_0505dc90:
                in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
                goto LAB_0505dd64;
              }
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar4 = *(long *)puVar1;
                auVar12._8_8_ = extraout_x1_04;
                auVar12._0_8_ = lVar4;
                lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                param_2 = extraout_x1_04;
                if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
              }
              auVar12._8_8_ = param_2;
              auVar12._0_8_ = lVar4;
              if (8 < *(uint *)(lVar8 + 0x18)) {
                if (*(long *)(lVar8 + 0x60) == unaff_x22) {
                  uVar3 = FUN_02a830c8(6,*unaff_x24,param_1);
                  uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x40);
                  goto LAB_0505dc90;
                }
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar4 = *(long *)puVar1;
                  auVar12._8_8_ = extraout_x1_05;
                  auVar12._0_8_ = lVar4;
                  lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                  param_2 = extraout_x1_05;
                  if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                }
                auVar12._8_8_ = param_2;
                auVar12._0_8_ = lVar4;
                if (9 < *(uint *)(lVar8 + 0x18)) {
                  if (*(long *)(lVar8 + 0x68) == unaff_x22) {
                    uVar11 = FUN_02a830c8(7,*unaff_x24,param_1);
                    uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x48);
LAB_0505de0c:
                    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
                    goto LAB_0505dd64;
                  }
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar4 = *(long *)puVar1;
                    auVar12._8_8_ = extraout_x1_06;
                    auVar12._0_8_ = lVar4;
                    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                    param_2 = extraout_x1_06;
                    if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                  }
                  auVar12._8_8_ = param_2;
                  auVar12._0_8_ = lVar4;
                  if (10 < *(uint *)(lVar8 + 0x18)) {
                    if (*(long *)(lVar8 + 0x70) == unaff_x22) {
                      uVar11 = FUN_02a830c8(8,*unaff_x24,param_1);
                      uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x50);
                      goto LAB_0505de0c;
                    }
                    if (*(int *)(lVar4 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                      lVar4 = *(long *)puVar1;
                      auVar12._8_8_ = extraout_x1_07;
                      auVar12._0_8_ = lVar4;
                      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                      param_2 = extraout_x1_07;
                      if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                    }
                    auVar12._8_8_ = param_2;
                    auVar12._0_8_ = lVar4;
                    if (0xb < *(uint *)(lVar8 + 0x18)) {
                      if (*(long *)(lVar8 + 0x78) == unaff_x22) {
                        uVar5 = FUN_02a830c8(9,*unaff_x24,param_1);
                        in_stack_00000008 = uVar5;
                        uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x68);
                        goto LAB_0505dd64;
                      }
                      if (*(int *)(lVar4 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                        lVar4 = *(long *)puVar1;
                        auVar12._8_8_ = extraout_x1_08;
                        auVar12._0_8_ = lVar4;
                        lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                        param_2 = extraout_x1_08;
                        if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                      }
                      auVar12._8_8_ = param_2;
                      auVar12._0_8_ = lVar4;
                      if (0xc < *(uint *)(lVar8 + 0x18)) {
                        if (*(long *)(lVar8 + 0x80) == unaff_x22) {
                          uVar5 = FUN_02a830c8(10,*unaff_x24,param_1);
                          in_stack_00000008 = uVar5;
                          uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x70);
                          goto LAB_0505dd64;
                        }
                        if (*(int *)(lVar4 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                          lVar4 = *(long *)puVar1;
                          auVar12._8_8_ = extraout_x1_09;
                          auVar12._0_8_ = lVar4;
                          lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                          param_2 = extraout_x1_09;
                          if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                        }
                        auVar12._8_8_ = param_2;
                        auVar12._0_8_ = lVar4;
                        if (0xd < *(uint *)(lVar8 + 0x18)) {
                          if (*(long *)(lVar8 + 0x88) == unaff_x22) {
                            uVar11 = FUN_02a830c8(0xb,*unaff_x24,param_1);
                            in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
                            uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x78);
                            goto LAB_0505dd64;
                          }
                          if (*(int *)(lVar4 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                            lVar4 = *(long *)puVar1;
                            auVar12._8_8_ = extraout_x1_10;
                            auVar12._0_8_ = lVar4;
                            lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                            param_2 = extraout_x1_10;
                            if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                          }
                          auVar12._8_8_ = param_2;
                          auVar12._0_8_ = lVar4;
                          if (0xe < *(uint *)(lVar8 + 0x18)) {
                            if (*(long *)(lVar8 + 0x90) == unaff_x22) {
                              uVar5 = FUN_02a830c8(0xc,*unaff_x24,param_1);
                              in_stack_00000008 = uVar5;
                              uVar5 = *(undefined8 *)(PTR_DAT_067c9338 + 0x80);
                              goto LAB_0505dd64;
                            }
                            if (*(int *)(lVar4 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar4 = *(long *)puVar1;
                              auVar12._8_8_ = extraout_x1_11;
                              auVar12._0_8_ = lVar4;
                              lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                              param_2 = extraout_x1_11;
                              if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                            }
                            auVar12._8_8_ = param_2;
                            auVar12._0_8_ = lVar4;
                            if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0) != 0) {
                              if (*(long *)(lVar8 + 0x98) == unaff_x22) {
                                _in_stack_00000008 = FUN_02a830c8(0xd,*unaff_x24,param_1);
                                uVar5 = *(undefined8 *)PTR_DAT_067c9990;
                                goto LAB_0505dd64;
                              }
                              if (*(int *)(lVar4 + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                                lVar4 = *(long *)puVar1;
                                auVar12._8_8_ = extraout_x1_12;
                                auVar12._0_8_ = lVar4;
                                lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                                param_2 = extraout_x1_12;
                                if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                              }
                              auVar12._8_8_ = param_2;
                              auVar12._0_8_ = lVar4;
                              if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                if (*(long *)(lVar8 + 0xa0) == unaff_x22) {
                                  uVar5 = FUN_02a830c8(0xe,*unaff_x24,param_1);
                                  in_stack_00000008 = uVar5;
                                  uVar5 = *(undefined8 *)PTR_DAT_067c9980;
                                  goto LAB_0505dd64;
                                }
                                if (*(int *)(lVar4 + 0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                  lVar4 = *(long *)puVar1;
                                  auVar12._8_8_ = extraout_x1_13;
                                  auVar12._0_8_ = lVar4;
                                  lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                                  param_2 = extraout_x1_13;
                                  if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                }
                                auVar12._8_8_ = param_2;
                                auVar12._0_8_ = lVar4;
                                if (0x12 < *(uint *)(lVar8 + 0x18)) {
                                  if (*(long *)(lVar8 + 0xb0) == unaff_x22) {
                                    auVar12._8_8_ = *unaff_x24;
                                    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                                      uVar5 = FUN_02a830c8(0xf,*unaff_x24,param_1);
                                      return uVar5;
                                    }
                                    goto LAB_0505dfb0;
                                  }
                                  if (*(int *)(lVar4 + 0xe4) == 0) {
                                    auVar12 = thunk_FUN_02f6670c();
                                    lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                    if (lVar8 == 0) goto Newtonsoft_Json_JsonException___ctor;
                                  }
                                  uVar5 = auVar12._0_8_;
                                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                                    if (*(long *)(lVar8 + 0x28) != unaff_x22) {
                                      auVar12._8_8_ = *unaff_x24;
                                      auVar12._0_8_ = uVar5;
                                      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                                        uVar5 = FUN_02b01fe0(0x10,*unaff_x24,param_1);
                                        return uVar5;
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
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
LAB_0505dfb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar12._0_8_,auVar12._8_8_);
}


