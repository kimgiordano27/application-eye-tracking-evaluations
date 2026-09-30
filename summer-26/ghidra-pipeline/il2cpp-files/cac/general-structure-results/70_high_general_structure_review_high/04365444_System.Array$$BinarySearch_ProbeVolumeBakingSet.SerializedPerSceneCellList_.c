/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 04365444
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined4
System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (param_1 != *(long *)(param_3 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_043662cc;
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
      if ((uVar7 & 1) == 0) goto LAB_04366208;
    }
    uVar1 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1) & 0xffffffffffffff01;
    lVar10 = DAT_096a6f98;
LAB_043657e8:
    plVar8 = (long *)thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
LAB_043657f4:
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    if (plVar8 == (long *)0x0) {
LAB_04366054:
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      goto LAB_043662cc;
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(lVar10 + 0x40)) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar8);
      }
      goto LAB_043662cc;
    }
    puVar9 = (undefined4 *)thunk_FUN_03f4e7d4(plVar8);
LAB_04365838:
    uVar4 = *puVar9;
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
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_043657f4;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) {
LAB_04365718:
        uVar11 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar11;
        lVar10 = DAT_092c03c8;
        goto LAB_043657e8;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_04365718;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) {
LAB_04365908:
        _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
        lVar10 = DAT_092c0400;
        goto LAB_043657e8;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_04365908;
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) {
LAB_04365a8c:
        _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
        plVar8 = &DAT_092c1de8;
LAB_04365aa0:
        lVar10 = *plVar8;
        goto LAB_04365c38;
      }
      uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar11 = FUN_074c4a14(uVar11,0);
      uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
      uVar7 = FUN_074ce748(uVar11,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_04365a8c;
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
        if ((uVar7 & 1) == 0) goto LAB_04366208;
      }
      lVar10 = FUN_077731d4(&stack0x00000010,0);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) != 1) goto LAB_04366208;
        uVar2 = FUN_073213d0(lVar10,0,0);
        lVar10 = DAT_096a6ff8;
        goto LAB_04365c2c;
      }
      goto LAB_04366054;
    }
    if (uVar3 != 4) {
LAB_04366208:
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
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar6,uVar11,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6);
      }
      goto LAB_043662cc;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04365530:
      uVar4 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar10 = DAT_096a6fb8;
      goto LAB_043657e8;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04365530;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_043657d4:
      uVar11 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar10 = DAT_096a6fd8;
      goto LAB_043657e8;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_043657d4;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_043659c8:
      uVar11 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar11;
      lVar10 = DAT_096a6ff0;
LAB_04365c38:
      uVar11 = thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f4b260(lVar10);
      }
      puVar9 = (undefined4 *)FUN_03951c9c(uVar11,lVar10);
      goto LAB_04365838;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_043659c8;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04365b4c:
      uVar2 = FUN_077733cc(&stack0x00000010,0);
      lVar10 = DAT_096a6fa8;
LAB_04365c2c:
      in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
      goto LAB_04365c38;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04365b4c;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04365d14:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      plVar8 = &DAT_092c0650;
      goto LAB_04365aa0;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04365d14;
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_04365dcc:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      lVar10 = DAT_096a6f88;
      goto LAB_04365c38;
    }
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar11 = FUN_074c4a14(uVar11,0);
    uVar6 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar7 = FUN_074ce748(uVar11,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_04365dcc;
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
      if ((uVar7 & 1) != 0) goto LAB_04365e88;
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
        if ((uVar7 & 1) != 0) goto LAB_04365f44;
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
          if ((uVar7 & 1) != 0) goto LAB_0436603c;
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
            if ((uVar7 & 1) != 0) goto LAB_0436611c;
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
              if ((uVar7 & 1) == 0) goto LAB_04366208;
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
            lVar10 = DAT_096a6fa0;
          }
          else {
LAB_0436611c:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            lVar10 = DAT_096a6fe0;
          }
        }
        else {
LAB_0436603c:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
          lVar10 = DAT_096a6fb0;
        }
      }
      else {
LAB_04365f44:
        uVar4 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
        lVar10 = DAT_096a6fc0;
      }
    }
    else {
LAB_04365e88:
      uVar4 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar10 = DAT_096a6fe8;
    }
    uVar11 = thunk_FUN_03f4e2c4(lVar10,&stack0x00000028);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    puVar9 = (undefined4 *)FUN_03951c9c(uVar11,lVar10);
    uVar4 = *puVar9;
  }
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return uVar4;
  }
LAB_043662cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


