/*
FUNCTION_NAME: Unity.Properties.PropertyContainer$$Accept<StyleTextShadow>
ENTRY_POINT: 04a43cbc
PROGRAM: cac-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void Unity_Properties_PropertyContainer__Accept<StyleTextShadow>(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  FUN_03f13384(param_1 + 0x400);
  FUN_03f13384(&DAT_092aea68);
  FUN_03f13384(&DAT_092c03c8);
  FUN_03f13384(&DAT_092aeb30);
  FUN_03f13384(&DAT_092c0650);
  FUN_03f13384(&DAT_092af0e0);
  FUN_03f13384(&DAT_092c1de8);
  FUN_03f13384(&DAT_092c4170);
  FUN_03f13384(&DAT_092ae150);
  FUN_03f13384(&DAT_092ae160);
  FUN_03f13384(&DAT_092ae178);
  FUN_03f13384(&DAT_092ae188);
  FUN_03f13384(&DAT_092ae148);
  FUN_03f13384(&DAT_092ae168);
  FUN_03f13384(&DAT_092ae158);
  FUN_03f13384(&DAT_092ae1a0);
  FUN_03f13384(&DAT_092ae128);
  FUN_03f13384(&DAT_092ae180);
  FUN_03f13384(&DAT_092ae170);
  FUN_03f13384(&DAT_092ae1a8);
  FUN_03f13384(&DAT_092ae138);
  FUN_03f13384(&DAT_092ae140);
  FUN_03f13384(&DAT_092ae130);
  FUN_03f13384(&DAT_092ae1b0);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_03f4b2bc();
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  plVar5 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                                      &stack0x00000020);
  if (plVar5 == (long *)0x0) {
Unity_Properties_PropertyContainer__Accept<TransformOrigin>:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04a44ca8;
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04a44ca8;
  }
  puVar6 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar6[1];
  in_stack_00000010 = *puVar6;
  uVar3 = FUN_07772d00(&stack0x00000010,0);
  uVar3 = uVar3 & 0xff;
  if (uVar3 - 5 < 2) {
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) == 0) goto LAB_04a44be4;
    }
    uVar1 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1) & 0xffffffffffffff01;
    lVar11 = DAT_096a6f98;
LAB_04a441c4:
    plVar9 = (long *)thunk_FUN_03f4e2c4(lVar11,&stack0x00000020);
LAB_04a441d0:
    plVar10 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar5 = plVar9;
    if ((*(ushort *)((long)plVar10 + 0x135) & 1) == 0) {
      plVar5 = (long *)FUN_03f4b260(plVar10);
      plVar10 = plVar5;
    }
    if (plVar9 == (long *)0x0) goto Unity_Properties_PropertyContainer__Accept<TransformOrigin>;
    if (*(long *)(*plVar9 + 0x40) != plVar10[8]) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar9);
      }
      goto LAB_04a44ca8;
    }
    plVar5 = (long *)thunk_FUN_03f4e7d4(plVar9);
LAB_04a44214:
    plVar5 = (long *)*plVar5;
  }
  else {
    if (uVar3 == 3) {
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_04a441d0;
      }
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_04a440f4:
        uVar12 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000020 = uVar12;
        lVar11 = DAT_092c03c8;
        goto LAB_04a441c4;
      }
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04a440f4;
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_04a442e4:
        _in_stack_00000020 = FUN_077738fc(&stack0x00000010,0);
        lVar11 = DAT_092c0400;
        goto LAB_04a441c4;
      }
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04a442e4;
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074c4a14(uVar12,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar8 = FUN_074ce748(uVar12,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_04a44468;
        uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074c4a14(uVar12,0);
        uVar7 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar8 = FUN_074ce748(uVar12,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar12 = FUN_074c4a14(uVar12,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar8 = FUN_074ce748(uVar12,uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_04a44be4;
        }
        lVar11 = FUN_077731d4(&stack0x00000010,0);
        plVar5 = (long *)0x0;
        if (lVar11 == 0) goto Unity_Properties_PropertyContainer__Accept<TransformOrigin>;
        if (*(int *)(lVar11 + 0x10) != 1) goto LAB_04a44be4;
        uVar2 = FUN_073213d0(lVar11,0,0);
        lVar11 = DAT_096a6ff8;
LAB_04a44608:
        in_stack_00000020 = CONCAT62(in_stack_00000020._2_6_,uVar2);
      }
      else {
LAB_04a44468:
        _in_stack_00000020 = FUN_07773978(&stack0x00000010,0);
        plVar5 = &DAT_092c1de8;
LAB_04a4447c:
        lVar11 = *plVar5;
      }
LAB_04a44614:
      uVar12 = thunk_FUN_03f4e2c4(lVar11,&stack0x00000020);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f4b260(lVar11);
      }
      plVar5 = (long *)FUN_03951c9c(uVar12,lVar11);
      goto LAB_04a44214;
    }
    if (uVar3 != 4) {
LAB_04a44be4:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar12 = FUN_0775d89c(0);
      uVar1 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
      uVar7 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar7 = thunk_FUN_03f4e2c4(uVar7,&stack0x00000020);
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar12 = FUN_077594ec(uVar12,uVar7,uVar13,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar7 = thunk_FUN_03f4e68c();
      plVar5 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar7,uVar12,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar7);
      }
      goto LAB_04a44ca8;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a43f0c:
      uVar4 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar4);
      lVar11 = DAT_096a6fb8;
      goto LAB_04a441c4;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a43f0c;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a441b0:
      uVar12 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000020 = uVar12;
      lVar11 = DAT_096a6fd8;
      goto LAB_04a441c4;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a441b0;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a443a4:
      uVar12 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000020 = uVar12;
      lVar11 = DAT_096a6ff0;
      goto LAB_04a44614;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a443a4;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a44528:
      uVar2 = FUN_077733cc(&stack0x00000010,0);
      lVar11 = DAT_096a6fa8;
      goto LAB_04a44608;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a44528;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a446f0:
      _in_stack_00000020 = FUN_077737d4(&stack0x00000010,0);
      plVar5 = &DAT_092c0650;
      goto LAB_04a4447c;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a446f0;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04a447a8:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
      lVar11 = DAT_096a6f88;
      goto LAB_04a44614;
    }
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04a447a8;
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar12 = FUN_074c4a14(uVar12,0);
    uVar7 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar12,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04a44864;
      uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar12 = FUN_074c4a14(uVar12,0);
      uVar7 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar8 = FUN_074ce748(uVar12,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074c4a14(uVar12,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar8 = FUN_074ce748(uVar12,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_04a44920;
        uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074c4a14(uVar12,0);
        uVar7 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar8 = FUN_074ce748(uVar12,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar12 = FUN_074c4a14(uVar12,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar8 = FUN_074ce748(uVar12,uVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_04a44a18;
          uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar12 = FUN_074c4a14(uVar12,0);
          uVar7 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar8 = FUN_074ce748(uVar12,uVar7,0);
          if ((uVar8 & 1) == 0) {
            uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar12 = FUN_074c4a14(uVar12,0);
            uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar8 = FUN_074ce748(uVar12,uVar7,0);
            if ((uVar8 & 1) != 0) goto LAB_04a44af8;
            uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar12 = FUN_074c4a14(uVar12,0);
            uVar7 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar8 = FUN_074ce748(uVar12,uVar7,0);
            if ((uVar8 & 1) == 0) {
              uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar12 = FUN_074c4a14(uVar12,0);
              uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar8 = FUN_074ce748(uVar12,uVar7,0);
              if ((uVar8 & 1) == 0) goto LAB_04a44be4;
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
            lVar11 = DAT_096a6fa0;
          }
          else {
LAB_04a44af8:
            in_stack_00000020 = FUN_07773660(&stack0x00000010,0);
            lVar11 = DAT_096a6fe0;
          }
        }
        else {
LAB_04a44a18:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000020 = CONCAT62(in_stack_00000020._2_6_,uVar2);
          lVar11 = DAT_096a6fb0;
        }
      }
      else {
LAB_04a44920:
        uVar4 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar4);
        lVar11 = DAT_096a6fc0;
      }
    }
    else {
LAB_04a44864:
      uVar4 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar4);
      lVar11 = DAT_096a6fe8;
    }
    uVar12 = thunk_FUN_03f4e2c4(lVar11,&stack0x00000020);
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f4b260(lVar11);
    }
    plVar5 = (long *)FUN_03951c9c(uVar12,lVar11);
    plVar5 = (long *)*plVar5;
  }
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04a44ca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


