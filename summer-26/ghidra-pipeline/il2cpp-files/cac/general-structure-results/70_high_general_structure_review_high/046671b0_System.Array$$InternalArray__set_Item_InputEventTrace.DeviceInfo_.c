/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<InputEventTrace.DeviceInfo>
ENTRY_POINT: 046671b0
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


void System_Array__InternalArray__set_Item<InputEventTrace_DeviceInfo>(void)

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
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
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
  plVar5 = (long *)thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                                      &stack0x00000028);
  if (plVar5 == (long *)0x0) {
LAB_04667ebc:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04668134;
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_092c4170 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04668134;
  }
  puVar6 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar6[1];
  in_stack_00000010 = *puVar6;
  uVar3 = FUN_07772d00(&stack0x00000010,0);
  uVar3 = uVar3 & 0xff;
  if (uVar3 - 5 < 2) {
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6f98 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) goto LAB_04668070;
    }
    uVar1 = FUN_07773170(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1) & 0xffffffffffffff01;
    lVar12 = DAT_096a6f98;
LAB_04667650:
    plVar9 = (long *)thunk_FUN_03f4e2c4(lVar12,&stack0x00000028);
LAB_0466765c:
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar5 = plVar9;
    if ((*(ushort *)((long)plVar11 + 0x135) & 1) == 0) {
      plVar5 = (long *)FUN_03f4b260(plVar11);
      plVar11 = plVar5;
    }
    if (plVar9 == (long *)0x0) goto LAB_04667ebc;
    if (*(long *)(*plVar9 + 0x40) != plVar11[8]) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar9);
      }
      goto LAB_04668134;
    }
    puVar10 = (uint *)thunk_FUN_03f4e7d4(plVar9);
LAB_046676a0:
    uVar3 = *puVar10;
  }
  else {
    if (uVar3 == 3) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(DAT_096a7000 + 0x20,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_0466765c;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_04667580:
        uVar13 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar13;
        lVar12 = DAT_092c03c8;
        goto LAB_04667650;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04667580;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_04667770:
        _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
        lVar12 = DAT_092c0400;
        goto LAB_04667650;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04667770;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar8 = FUN_074ce748(uVar13,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_046678f4;
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar7 = FUN_074c4a14(DAT_096a6ff8 + 0x20,0);
        uVar8 = FUN_074ce748(uVar13,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar8 = FUN_074ce748(uVar13,uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_04668070;
        }
        lVar12 = FUN_077731d4(&stack0x00000010,0);
        plVar5 = (long *)0x0;
        if (lVar12 == 0) goto LAB_04667ebc;
        if (*(int *)(lVar12 + 0x10) != 1) goto LAB_04668070;
        uVar2 = FUN_073213d0(lVar12,0,0);
        lVar12 = DAT_096a6ff8;
LAB_04667a94:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
      }
      else {
LAB_046678f4:
        _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
        plVar5 = &DAT_092c1de8;
LAB_04667908:
        lVar12 = *plVar5;
      }
LAB_04667aa0:
      uVar13 = thunk_FUN_03f4e2c4(lVar12,&stack0x00000028);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f4b260(lVar12);
      }
      puVar10 = (uint *)FUN_03951c9c(uVar13,lVar12);
      goto LAB_046676a0;
    }
    if (uVar3 != 4) {
LAB_04668070:
      thunk_FUN_03f786f8(&DAT_092c7648);
      FUN_0395b070();
      uVar13 = FUN_0775d89c(0);
      uVar1 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      uVar7 = thunk_FUN_03f786f8(&DAT_092c43a0);
      uVar7 = thunk_FUN_03f4e2c4(uVar7,&stack0x00000028);
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar13 = FUN_077594ec(uVar13,uVar7,uVar14,0);
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar7 = thunk_FUN_03f4e68c();
      plVar5 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                 (uVar7,uVar13,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar7);
      }
      goto LAB_04668134;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6fb8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04667398:
      uVar4 = FUN_077734ec(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar12 = DAT_096a6fb8;
      goto LAB_04667650;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04667398;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6fd8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_0466763c:
      uVar13 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar13;
      lVar12 = DAT_096a6fd8;
      goto LAB_04667650;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_0466763c;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6ff0 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04667830:
      uVar13 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar13;
      lVar12 = DAT_096a6ff0;
      goto LAB_04667aa0;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04667830;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6fa8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_046679b4:
      uVar2 = FUN_077733cc(&stack0x00000010,0);
      lVar12 = DAT_096a6fa8;
      goto LAB_04667a94;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_046679b4;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04667b7c:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      plVar5 = &DAT_092c0650;
      goto LAB_04667908;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04667b7c;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6f88 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_04667c34:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
      lVar12 = DAT_096a6f88;
      goto LAB_04667aa0;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_04667c34;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar13 = FUN_074c4a14(uVar13,0);
    uVar7 = FUN_074c4a14(DAT_096a6fe8 + 0x20,0);
    uVar8 = FUN_074ce748(uVar13,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_04667cf0;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c4a14(uVar13,0);
      uVar7 = FUN_074c4a14(DAT_096a6fc0 + 0x20,0);
      uVar8 = FUN_074ce748(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar8 = FUN_074ce748(uVar13,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_04667dac;
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar13 = FUN_074c4a14(uVar13,0);
        uVar7 = FUN_074c4a14(DAT_096a6fb0 + 0x20,0);
        uVar8 = FUN_074ce748(uVar13,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar8 = FUN_074ce748(uVar13,uVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_04667ea4;
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar13 = FUN_074c4a14(uVar13,0);
          uVar7 = FUN_074c4a14(DAT_096a6fe0 + 0x20,0);
          uVar8 = FUN_074ce748(uVar13,uVar7,0);
          if ((uVar8 & 1) == 0) {
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar13 = FUN_074c4a14(uVar13,0);
            uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar8 = FUN_074ce748(uVar13,uVar7,0);
            if ((uVar8 & 1) != 0) goto LAB_04667f84;
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar13 = FUN_074c4a14(uVar13,0);
            uVar7 = FUN_074c4a14(DAT_096a6fa0 + 0x20,0);
            uVar8 = FUN_074ce748(uVar13,uVar7,0);
            if ((uVar8 & 1) == 0) {
              uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_096a7050 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar13 = FUN_074c4a14(uVar13,0);
              uVar7 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar8 = FUN_074ce748(uVar13,uVar7,0);
              if ((uVar8 & 1) == 0) goto LAB_04668070;
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
            lVar12 = DAT_096a6fa0;
          }
          else {
LAB_04667f84:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            lVar12 = DAT_096a6fe0;
          }
        }
        else {
LAB_04667ea4:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
          lVar12 = DAT_096a6fb0;
        }
      }
      else {
LAB_04667dac:
        uVar4 = FUN_07773568(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
        lVar12 = DAT_096a6fc0;
      }
    }
    else {
LAB_04667cf0:
      uVar4 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar4);
      lVar12 = DAT_096a6fe8;
    }
    uVar13 = thunk_FUN_03f4e2c4(lVar12,&stack0x00000028);
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260(lVar12);
    }
    puVar10 = (uint *)FUN_03951c9c(uVar13,lVar12);
    uVar3 = *puVar10;
  }
  plVar5 = (long *)(ulong)uVar3;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04668134:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


