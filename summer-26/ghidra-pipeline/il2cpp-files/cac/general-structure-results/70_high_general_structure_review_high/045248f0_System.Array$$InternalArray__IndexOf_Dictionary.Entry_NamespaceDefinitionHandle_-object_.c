/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Dictionary.Entry<NamespaceDefinitionHandle,-object>>
ENTRY_POINT: 045248f0
PROGRAM: cac-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IndexOf<Dictionary_Entry<NamespaceDefinitionHandle,_object>>(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_03f13384();
  FUN_03f13384(PTR_DAT_0911fe80);
  FUN_03f13384(PTR_DAT_0911fe88);
  FUN_03f13384(PTR_DAT_0911fe90);
  FUN_03f13384(PTR_DAT_0911fe98);
  FUN_03f13384(PTR_DAT_0911fea0);
  FUN_03f13384(PTR_DAT_0911fea8);
  FUN_03f13384(PTR_DAT_0911feb0);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_03f4b2bc();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,*(undefined1 *)(unaff_x20 + 0x1a));
  auVar16 = thunk_FUN_03f4e2c4(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                               &stack0x00000028);
  plVar10 = auVar16._0_8_;
  if (plVar10 == (long *)0x0) {
LAB_045255ac:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    goto LAB_04525824;
  }
  auVar16._8_8_ = *(long *)PTR_DAT_0911fe30;
  auVar16._0_8_ = plVar10;
  if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)PTR_DAT_0911fe30 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac();
    }
    goto LAB_04525824;
  }
  puVar7 = (undefined8 *)thunk_FUN_03f4e7d4();
  in_stack_00000018 = puVar7[1];
  in_stack_00000010 = *puVar7;
  uVar5 = FUN_07772d00(&stack0x00000010,0);
  puVar2 = PTR_DAT_0910b550;
  uVar5 = uVar5 & 0xff;
  if (uVar5 - 5 < 2) {
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x28) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe78,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) goto LAB_04525760;
    }
    uVar3 = FUN_07773170(&stack0x00000010,0);
    uVar14 = *(undefined8 *)(puVar2 + 0x28);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3) & 0xffffffffffffff01;
LAB_04524d34:
    plVar10 = (long *)thunk_FUN_03f4e2c4(uVar14,&stack0x00000028);
LAB_04524d40:
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar11 = plVar10;
    if ((*(ushort *)((long)plVar12 + 0x135) & 1) == 0) {
      plVar11 = (long *)FUN_03f4b260(plVar12);
      plVar12 = plVar11;
    }
    auVar16._8_8_ = plVar12;
    auVar16._0_8_ = plVar11;
    if (plVar10 == (long *)0x0) goto LAB_045255ac;
    if (*(long *)(*plVar10 + 0x40) != plVar12[8]) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(plVar10);
      }
      goto LAB_04525824;
    }
    puVar7 = (undefined8 *)thunk_FUN_03f4e7d4(plVar10);
LAB_04524d84:
    uVar14 = *puVar7;
  }
  else {
    if (uVar5 == 3) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x90) + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_077731d4(&stack0x00000010,0);
        goto LAB_04524d40;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe10,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04524c64:
        uVar14 = FUN_07773880(&stack0x00000010,0);
        in_stack_00000028 = uVar14;
        uVar14 = *(undefined8 *)PTR_DAT_0910b600;
        goto LAB_04524d34;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea0,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04524c64;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe00,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_04524e5c:
        _in_stack_00000028 = FUN_077738fc(&stack0x00000010,0);
        uVar14 = *(undefined8 *)PTR_DAT_0911fe08;
        goto LAB_04524d34;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe58,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_04524e5c;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe40,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_04524fe0;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x88) + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe98,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_04525760;
        }
        auVar16 = FUN_077731d4(&stack0x00000010,0);
        lVar13 = auVar16._0_8_;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar16._8_8_;
        auVar16 = auVar1 << 0x40;
        if (lVar13 == 0) goto LAB_045255ac;
        if (*(int *)(lVar13 + 0x10) != 1) goto LAB_04525760;
        uVar4 = FUN_073213d0(lVar13,0,0);
        uVar14 = *(undefined8 *)(puVar2 + 0x88);
LAB_04525180:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar4);
      }
      else {
LAB_04524fe0:
        _in_stack_00000028 = FUN_07773978(&stack0x00000010,0);
        puVar7 = (undefined8 *)PTR_DAT_0911fe28;
LAB_04524ff4:
        uVar14 = *puVar7;
      }
LAB_0452518c:
      uVar14 = thunk_FUN_03f4e2c4(uVar14,&stack0x00000028);
      lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f4b260(lVar13);
      }
      puVar7 = (undefined8 *)FUN_03951c9c(uVar14,lVar13);
      goto LAB_04524d84;
    }
    if (uVar5 != 4) {
LAB_04525760:
      thunk_FUN_03f786f8(PTR_DAT_0911feb8);
      FUN_0395b070();
      uVar14 = FUN_0775d89c(0);
      uVar3 = FUN_07772d00(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
      uVar8 = thunk_FUN_03f786f8(PTR_DAT_0911fec0);
      uVar8 = thunk_FUN_03f4e2c4(uVar8,&stack0x00000028);
      uVar15 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
      uVar15 = FUN_074c4a14(uVar15,0);
      uVar14 = FUN_077594ec(uVar14,uVar8,uVar15,0);
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar8 = thunk_FUN_03f4e68c();
      auVar16 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                          (uVar8,uVar14,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar8);
      }
      goto LAB_04525824;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x48) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
System_Array__InternalArray__IndexOf<Dictionary_Entry<object,_AsyncOperationHandle<object>>>:
      uVar6 = FUN_077734ec(&stack0x00000010,0);
      uVar14 = *(undefined8 *)(puVar2 + 0x48);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar6);
      goto LAB_04524d34;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe88,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0)
    goto 
    System_Array__InternalArray__IndexOf<Dictionary_Entry<object,_AsyncOperationHandle<object>>>;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x68) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04524d20:
      uVar14 = FUN_077735e4(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      uVar14 = *(undefined8 *)(puVar2 + 0x68);
      goto LAB_04524d34;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe48,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04524d20;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x80) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04524f1c:
      uVar14 = FUN_077736dc(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      uVar14 = *(undefined8 *)(puVar2 + 0x80);
      goto LAB_0452518c;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe68,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04524f1c;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x38) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_045250a0:
      uVar4 = FUN_077733cc(&stack0x00000010,0);
      uVar14 = *(undefined8 *)(puVar2 + 0x38);
      goto LAB_04525180;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_045250a0;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04525268:
      _in_stack_00000028 = FUN_077737d4(&stack0x00000010,0);
      puVar7 = (undefined8 *)PTR_DAT_0910c2f0;
      goto LAB_04524ff4;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04525268;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x18) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_04525320:
      uVar3 = FUN_0777333c(&stack0x00000010,0);
      uVar14 = *(undefined8 *)(puVar2 + 0x18);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
      goto LAB_0452518c;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_04525320;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar14 = FUN_074c4a14(uVar14,0);
    uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x78) + 0x20,0);
    uVar9 = FUN_074ce748(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_045253dc;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar14 = FUN_074c4a14(uVar14,0);
      uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x50) + 0x20,0);
      uVar9 = FUN_074ce748(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_04525498;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar14 = FUN_074c4a14(uVar14,0);
        uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x40) + 0x20,0);
        uVar9 = FUN_074ce748(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) != 0) goto LAB_04525594;
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar14 = FUN_074c4a14(uVar14,0);
          uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x70) + 0x20,0);
          uVar9 = FUN_074ce748(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) != 0) goto LAB_04525674;
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar14 = FUN_074c4a14(uVar14,0);
            uVar8 = FUN_074c4a14(*(long *)(puVar2 + 0x30) + 0x20,0);
            uVar9 = FUN_074ce748(uVar14,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar14 = FUN_074c4a14(uVar14,0);
              uVar8 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar9 = FUN_074ce748(uVar14,uVar8,0);
              if ((uVar9 & 1) == 0) goto LAB_04525760;
            }
            uVar3 = FUN_077732ac(&stack0x00000010,0);
            uVar14 = *(undefined8 *)(puVar2 + 0x30);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
          }
          else {
LAB_04525674:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            uVar14 = *(undefined8 *)(puVar2 + 0x70);
          }
        }
        else {
LAB_04525594:
          uVar4 = FUN_0777345c(&stack0x00000010,0);
          uVar14 = *(undefined8 *)(puVar2 + 0x40);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar4);
        }
      }
      else {
LAB_04525498:
        uVar6 = FUN_07773568(&stack0x00000010,0);
        uVar14 = *(undefined8 *)(puVar2 + 0x50);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar6);
      }
    }
    else {
LAB_045253dc:
      uVar6 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      uVar14 = *(undefined8 *)(puVar2 + 0x78);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar6);
    }
    uVar14 = thunk_FUN_03f4e2c4(uVar14,&stack0x00000028);
    lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f4b260(lVar13);
    }
    puVar7 = (undefined8 *)FUN_03951c9c(uVar14,lVar13);
    uVar14 = *puVar7;
  }
  auVar16._8_8_ = puVar7[1];
  auVar16._0_8_ = uVar14;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04525824:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar16._0_8_,auVar16._8_8_);
}


