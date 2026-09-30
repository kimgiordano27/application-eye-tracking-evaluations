/*
FUNCTION_NAME: System.Array$$BinarySearch<NamespaceDefinitionHandle>
ENTRY_POINT: 0434fb58
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__BinarySearch<NamespaceDefinitionHandle>(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  long lVar10;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (*(long *)(*param_1 + 0x40) != *(long *)(param_2 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_043509dc;
  }
  puVar5 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar5[1];
  in_stack_00000010 = *puVar5;
  uVar3 = FUN_07772d00(&stack0x00000010,0);
  uVar3 = uVar3 & 0xff;
  if (uVar3 - 5 < 2) {
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) == 0) goto LAB_04350918;
    }
    uVar1 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1) & 0xffffffffffffff01;
    lVar8 = DAT_096a6f98;
LAB_0434ff04:
    lVar8 = thunk_FUN_03f4e2c4(lVar8,&stack0x00000028);
LAB_0434ff10:
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    if (lVar8 == 0) {
      param_1 = (long *)0x0;
    }
    else {
      param_1 = (long *)thunk_FUN_03f4e590(lVar8,lVar10);
      if (param_1 == (long *)0x0) {
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar8,lVar10);
        }
        goto LAB_043509dc;
      }
    }
  }
  else {
    if (uVar3 == 3) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
        uVar7 = FUN_074ce748(uVar11,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
          uVar7 = FUN_074ce748(uVar11,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074c4a14(uVar11,0);
            uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
            uVar7 = FUN_074ce748(uVar11,uVar6,0);
            if ((uVar7 & 1) == 0) {
              uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar11 = FUN_074c4a14(uVar11,0);
              uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
              uVar7 = FUN_074ce748(uVar11,uVar6,0);
              if ((uVar7 & 1) == 0) {
                uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
                if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                  thunk_FUN_03f6fea8();
                }
                uVar11 = FUN_074c4a14(uVar11,0);
                uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
                uVar7 = FUN_074ce748(uVar11,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
                  if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  uVar11 = FUN_074c4a14(uVar11,0);
                  uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
                  uVar7 = FUN_074ce748(uVar11,uVar6,0);
                  if ((uVar7 & 1) != 0) goto LAB_043501b8;
                  uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
                  if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  uVar11 = FUN_074c4a14(uVar11,0);
                  uVar6 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
                  uVar7 = FUN_074ce748(uVar11,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
                    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    uVar11 = FUN_074c4a14(uVar11,0);
                    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
                    uVar7 = FUN_074ce748(uVar11,uVar6,0);
                    if ((uVar7 & 1) == 0) goto LAB_04350918;
                  }
                  lVar8 = FUN_077731d4(&stack0x00000010,0);
                  if (lVar8 == 0) {
                    param_1 = (long *)0x0;
                    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_043509dc;
                  }
                  if (*(int *)(lVar8 + 0x10) != 1) goto LAB_04350918;
                  uVar2 = FUN_073213d0(lVar8,0,0);
                  lVar8 = DAT_096a6ff8;
LAB_04350358:
                  in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
                }
                else {
LAB_043501b8:
                  _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
                  plVar9 = &DAT_092c1de8;
LAB_043501cc:
                  lVar8 = *plVar9;
                }
LAB_04350364:
                uVar11 = thunk_FUN_03f4e2c4(lVar8,&stack0x00000028);
                lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_03f4b260(lVar8);
                }
                param_1 = (long *)FUN_039623a8(uVar11,lVar8);
                goto LAB_0434ff68;
              }
            }
            _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
            lVar8 = DAT_092c0400;
            goto LAB_0434ff04;
          }
        }
        uVar11 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar11;
        lVar8 = DAT_092c03c8;
        goto LAB_0434ff04;
      }
      lVar8 = FUN_077731d4(&stack0x00000010,0);
      goto LAB_0434ff10;
    }
    if (uVar3 != 4) {
LAB_04350918:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar11 = FUN_0775d89c(0);
      uVar1 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      uVar6 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar6 = thunk_FUN_03f4e2c4(uVar6,&stack0x00000028);
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar11 = FUN_077594ec(uVar11,uVar6,uVar12,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar6 = thunk_FUN_03f4e68c();
      param_1 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                  (uVar6,uVar11,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6);
      }
      goto LAB_043509dc;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_0434fc4c:
      uVar4 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar8 = DAT_096a6fb8;
      goto LAB_0434ff04;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0434fc4c;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_0434fef0:
      uVar11 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar8 = DAT_096a6fd8;
      goto LAB_0434ff04;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0434fef0;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_043500f4:
      uVar11 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar8 = DAT_096a6ff0;
      goto LAB_04350364;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_043500f4;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04350278:
      uVar2 = FUN_077733cc(&stack0x00000010,0);
      lVar8 = DAT_096a6fa8;
      goto LAB_04350358;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04350278;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04350440:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      plVar9 = &DAT_092c0650;
      goto LAB_043501cc;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04350440;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_043504f8:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      lVar8 = DAT_096a6f88;
      goto LAB_04350364;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_043504f8;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_043505b4;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar7 = FUN_074ce748(uVar11,uVar6,0);
        if ((uVar7 & 1) != 0) goto LAB_04350670;
        uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        uVar6 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar7 = FUN_074ce748(uVar11,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar7 = FUN_074ce748(uVar11,uVar6,0);
          if ((uVar7 & 1) != 0) goto LAB_04350764;
          uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar11 = FUN_074c4a14(uVar11,0);
          uVar6 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar7 = FUN_074ce748(uVar11,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074c4a14(uVar11,0);
            uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar7 = FUN_074ce748(uVar11,uVar6,0);
            if ((uVar7 & 1) != 0) goto LAB_04350844;
            uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar11 = FUN_074c4a14(uVar11,0);
            uVar6 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar7 = FUN_074ce748(uVar11,uVar6,0);
            if ((uVar7 & 1) == 0) {
              uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar11 = FUN_074c4a14(uVar11,0);
              uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar7 = FUN_074ce748(uVar11,uVar6,0);
              if ((uVar7 & 1) == 0) goto LAB_04350918;
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
            lVar8 = DAT_096a6fa0;
          }
          else {
LAB_04350844:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            lVar8 = DAT_096a6fe0;
          }
        }
        else {
LAB_04350764:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
          lVar8 = DAT_096a6fb0;
        }
      }
      else {
LAB_04350670:
        uVar4 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
        lVar8 = DAT_096a6fc0;
      }
    }
    else {
LAB_043505b4:
      uVar4 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar8 = DAT_096a6fe8;
    }
    uVar11 = thunk_FUN_03f4e2c4(lVar8,&stack0x00000028);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f4b260(lVar8);
    }
    param_1 = (long *)FUN_039623a8(uVar11,lVar8);
  }
LAB_0434ff68:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_043509dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


