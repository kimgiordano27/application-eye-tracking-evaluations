/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<StyleCursor>
ENTRY_POINT: 04656964
PROGRAM: cac-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__set_Item<StyleCursor>(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_03f13384(param_1 + 0xe0);
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
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,*(undefined1 *)(unaff_x20 + 0x1a));
  plVar6 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                                      &stack0x00000028);
  if (plVar6 == (long *)0x0) {
LAB_0465769c:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04657914;
  }
  if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04657914;
  }
  puVar7 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar7[1];
  in_stack_00000010 = *puVar7;
  uVar4 = FUN_07772d00(&stack0x00000010,0);
  uVar4 = uVar4 & 0xff;
  if (uVar4 - 5 < 2) {
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) goto LAB_04657850;
    }
    uVar2 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2) & 0xffffffffffffff01;
    lVar13 = DAT_096a6f98;
LAB_04656e30:
    plVar10 = (long *)thunk_FUN_03f4e2c4(lVar13,&stack0x00000028);
LAB_04656e3c:
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar6 = plVar10;
    if ((*(ushort *)((long)plVar12 + 0x135) & 1) == 0) {
      plVar6 = (long *)FUN_03f4b260(plVar12);
      plVar12 = plVar6;
    }
    if (plVar10 == (long *)0x0) goto LAB_0465769c;
    if (*(long *)(*plVar10 + 0x40) != plVar12[8]) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar10);
      }
      goto LAB_04657914;
    }
    pbVar11 = (byte *)thunk_FUN_03f4e7d4(plVar10);
LAB_04656e80:
    bVar1 = *pbVar11;
  }
  else {
    if (uVar4 == 3) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_04656e3c;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04656d60:
        uVar14 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar14;
        lVar13 = DAT_092c03c8;
        goto LAB_04656e30;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04656d60;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04656f50:
        _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
        lVar13 = DAT_092c0400;
        goto LAB_04656e30;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04656f50;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_046570d4;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_04657850;
        }
        lVar13 = FUN_077731d4(&stack0x00000010,0);
        plVar6 = (long *)0x0;
        if (lVar13 == 0) goto LAB_0465769c;
        if (*(int *)(lVar13 + 0x10) != 1) goto LAB_04657850;
        uVar3 = FUN_073213d0(lVar13,0,0);
        lVar13 = DAT_096a6ff8;
LAB_04657274:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
      }
      else {
LAB_046570d4:
        _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
        plVar6 = &DAT_092c1de8;
LAB_046570e8:
        lVar13 = *plVar6;
      }
LAB_04657280:
      uVar14 = thunk_FUN_03f4e2c4(lVar13,&stack0x00000028);
      lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f4b260(lVar13);
      }
      pbVar11 = (byte *)FUN_03951c9c(uVar14,lVar13);
      goto LAB_04656e80;
    }
    if (uVar4 != 4) {
LAB_04657850:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar14 = FUN_0775d89c(0);
      uVar2 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      uVar8 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar8 = thunk_FUN_03f4e2c4(uVar8,&stack0x00000028);
      uVar15 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar14 = FUN_077594ec(uVar14,uVar8,uVar15,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar8 = thunk_FUN_03f4e68c();
      plVar6 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar8,uVar14,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar8);
      }
      goto LAB_04657914;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04656b78:
      uVar5 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar13 = DAT_096a6fb8;
      goto LAB_04656e30;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04656b78;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04656e1c:
      uVar14 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      lVar13 = DAT_096a6fd8;
      goto LAB_04656e30;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04656e1c;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04657010:
      uVar14 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      lVar13 = DAT_096a6ff0;
      goto LAB_04657280;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04657010;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04657194:
      uVar3 = FUN_077733cc(&stack0x00000010,0);
      lVar13 = DAT_096a6fa8;
      goto LAB_04657274;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04657194;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_0465735c:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      plVar6 = &DAT_092c0650;
      goto LAB_046570e8;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_0465735c;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04657414:
      uVar2 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      lVar13 = DAT_096a6f88;
      goto LAB_04657280;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04657414;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_046574d0;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_0465758c;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) != 0) goto LAB_04657684;
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) != 0) goto LAB_04657764;
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar14 = FUN_074c4a14(uVar14,0);
              uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar9 = FUN_074ce748(uVar14,uVar8,0);
              if ((uVar9 & 1) == 0) goto LAB_04657850;
            }
            uVar2 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
            lVar13 = DAT_096a6fa0;
          }
          else {
LAB_04657764:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            lVar13 = DAT_096a6fe0;
          }
        }
        else {
LAB_04657684:
          uVar3 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
          lVar13 = DAT_096a6fb0;
        }
      }
      else {
LAB_0465758c:
        uVar5 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
        lVar13 = DAT_096a6fc0;
      }
    }
    else {
LAB_046574d0:
      uVar5 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar13 = DAT_096a6fe8;
    }
    uVar14 = thunk_FUN_03f4e2c4(lVar13,&stack0x00000028);
    lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f4b260(lVar13);
    }
    pbVar11 = (byte *)FUN_03951c9c(uVar14,lVar13);
    bVar1 = *pbVar11;
  }
  plVar6 = (long *)(ulong)bVar1;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04657914:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


