/*
FUNCTION_NAME: System.Array$$Empty<MeshGenerator.BackgroundRepeatInstance>
ENTRY_POINT: 05523338
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<MeshGenerator_BackgroundRepeatInstance>(void)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_04947ee4(&DAT_0ae91c18);
  FUN_04947ee4(&DAT_0ae78a28);
  FUN_04947ee4(&DAT_0ae91dd8);
  FUN_04947ee4(&DAT_0ae79208);
  FUN_04947ee4(&DAT_0ae94e20);
  FUN_04947ee4(&DAT_0ae98c78);
  FUN_04947ee4(&DAT_0ae78028);
  FUN_04947ee4(&DAT_0ae78038);
  FUN_04947ee4(&DAT_0ae78050);
  FUN_04947ee4(&DAT_0ae78060);
  FUN_04947ee4(&DAT_0ae78020);
  FUN_04947ee4(&DAT_0ae78040);
  FUN_04947ee4(&DAT_0ae78030);
  FUN_04947ee4(&DAT_0ae78078);
  FUN_04947ee4(&DAT_0ae78000);
  FUN_04947ee4(&DAT_0ae78058);
  FUN_04947ee4(&DAT_0ae78048);
  FUN_04947ee4(&DAT_0ae78080);
  FUN_04947ee4(&DAT_0ae78010);
  FUN_04947ee4(&DAT_0ae78018);
  FUN_04947ee4(&DAT_0ae78008);
  FUN_04947ee4(&DAT_0ae78088);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_04980b90();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,*(undefined2 *)(unaff_x20 + 0x1a));
  auVar15 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                               &stack0x00000028);
  plVar9 = auVar15._0_8_;
  auVar16._8_8_ = DAT_0ae98c78;
  auVar16._0_8_ = plVar9;
  if (plVar9 == (long *)0x0) {
LAB_055240a4:
    auVar16 = auVar15;
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    goto LAB_0552431c;
  }
  if (*(long *)(*plVar9 + 0x40) != *(long *)(DAT_0ae98c78 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c();
    }
    goto LAB_0552431c;
  }
  puVar6 = (undefined8 *)thunk_FUN_049840a8();
  in_stack_00000018 = puVar6[1];
  in_stack_00000010 = *puVar6;
  uVar4 = FUN_09386b04(&stack0x00000010,0);
  uVar4 = uVar4 & 0xff;
  if (uVar4 - 5 < 2) {
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a48 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc10,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) goto LAB_05524258;
    }
    uVar2 = FUN_09386f74(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2) & 0xffffffffffffff01;
    lVar12 = DAT_0b345a48;
LAB_0552382c:
    plVar9 = (long *)thunk_FUN_04983b98(lVar12,&stack0x00000028);
LAB_05523838:
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar10 = plVar9;
    if ((*(ushort *)((long)plVar11 + 0x135) & 1) == 0) {
      plVar10 = (long *)FUN_04980b34(plVar11);
      plVar11 = plVar10;
    }
    auVar15._8_8_ = plVar11;
    auVar15._0_8_ = plVar10;
    if (plVar9 == (long *)0x0) goto LAB_055240a4;
    if (*(long *)(*plVar9 + 0x40) != plVar11[8]) {
      auVar16 = auVar15;
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar9);
      }
      goto LAB_0552431c;
    }
    puVar6 = (undefined8 *)thunk_FUN_049840a8(plVar9);
LAB_0552387c:
    uVar13 = *puVar6;
  }
  else {
    if (uVar4 == 3) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(DAT_0b345ab0 + 0x20,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_09386fd8(&stack0x00000010,0);
        goto LAB_05523838;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_0552375c:
        uVar13 = FUN_09387684(&stack0x00000010,0);
        in_stack_00000028 = uVar13;
        lVar12 = DAT_0ae91c18;
        goto LAB_0552382c;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc38,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_0552375c;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa0,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) {
LAB_05523954:
        _in_stack_00000028 = FUN_09387700(&stack0x00000010,0);
        lVar12 = DAT_0ae91c78;
        goto LAB_0552382c;
      }
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf0,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_05523954;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbc0,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd8,0);
        uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_05523ad8;
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar7 = FUN_08d895f0(DAT_0b345aa8 + 0x20,0);
        uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_08d895f0(uVar13,0);
          uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc30,0);
          uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_05524258;
        }
        auVar15 = FUN_09386fd8(&stack0x00000010,0);
        lVar12 = auVar15._0_8_;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar15._8_8_;
        auVar15 = auVar1 << 0x40;
        if (lVar12 == 0) goto LAB_055240a4;
        if (*(int *)(lVar12 + 0x10) != 1) goto LAB_05524258;
        uVar3 = FUN_08bd39a8(lVar12,0,0);
        lVar12 = DAT_0b345aa8;
LAB_05523c78:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
      }
      else {
LAB_05523ad8:
        _in_stack_00000028 = FUN_0938777c(&stack0x00000010,0);
        plVar9 = &DAT_0ae94e20;
LAB_05523aec:
        lVar12 = *plVar9;
      }
LAB_05523c84:
      uVar13 = thunk_FUN_04983b98(lVar12,&stack0x00000028);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04980b34(lVar12);
      }
      puVar6 = (undefined8 *)FUN_0434463c(uVar13,lVar12);
      goto LAB_0552387c;
    }
    if (uVar4 != 4) {
LAB_05524258:
      thunk_FUN_049ae08c(&DAT_0ae9e198);
      FUN_0433a0d0();
      uVar13 = FUN_09371888(0);
      uVar2 = FUN_09386b04(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      uVar7 = thunk_FUN_049ae08c(&DAT_0ae99000);
      uVar7 = thunk_FUN_04983b98(uVar7,&stack0x00000028);
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar13 = FUN_0936d4d8(uVar13,uVar7,uVar14,0);
      thunk_FUN_049ae08c(&DAT_0ae98850);
      uVar7 = thunk_FUN_04983f60();
      auVar16 = FUN_08d79944(uVar7,uVar13,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar7);
      }
      goto LAB_0552431c;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a68 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_05523574:
      uVar5 = FUN_093872f0(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar12 = DAT_0b345a68;
      goto LAB_0552382c;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_05523574;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a88 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_05523818:
      uVar13 = FUN_093873e8(&stack0x00000010,0);
      in_stack_00000028 = uVar13;
      lVar12 = DAT_0b345a88;
      goto LAB_0552382c;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe0,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_05523818;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345aa0 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_05523a14:
      uVar13 = FUN_093874e0(&stack0x00000010,0);
      in_stack_00000028 = uVar13;
      lVar12 = DAT_0b345aa0;
      goto LAB_05523c84;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc00,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_05523a14;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a58 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_05523b98:
      uVar3 = FUN_093871d0(&stack0x00000010,0);
      lVar12 = DAT_0b345a58;
      goto LAB_05523c78;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf8,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_05523b98;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa8,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
System_Array__Empty<OVRPlugin_Qpl_Annotation>:
      _in_stack_00000028 = FUN_093875d8(&stack0x00000010,0);
      plVar9 = &DAT_0ae91dd8;
      goto LAB_05523aec;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd0,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto System_Array__Empty<OVRPlugin_Qpl_Annotation>;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a38 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) {
LAB_05523e18:
      uVar2 = FUN_09387140(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      lVar12 = DAT_0b345a38;
      goto LAB_05523c84;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc40,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_05523e18;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar7 = FUN_08d895f0(DAT_0b345a98 + 0x20,0);
    uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe8,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) != 0) goto LAB_05523ed4;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar7 = FUN_08d895f0(DAT_0b345a70 + 0x20,0);
      uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc28,0);
        uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
        if ((uVar8 & 1) != 0) goto LAB_05523f90;
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar7 = FUN_08d895f0(DAT_0b345a60 + 0x20,0);
        uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_08d895f0(uVar13,0);
          uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc08,0);
          uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_0552408c;
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_08d895f0(uVar13,0);
          uVar7 = FUN_08d895f0(DAT_0b345a90 + 0x20,0);
          uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
          if ((uVar8 & 1) == 0) {
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar13 = FUN_08d895f0(uVar13,0);
            uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc48,0);
            uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
            if ((uVar8 & 1) != 0) goto LAB_0552416c;
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar13 = FUN_08d895f0(uVar13,0);
            uVar7 = FUN_08d895f0(DAT_0b345a50 + 0x20,0);
            uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
            if ((uVar8 & 1) == 0) {
              uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uVar13 = FUN_08d895f0(uVar13,0);
              uVar7 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc18,0);
              uVar8 = FUN_08d93fbc(uVar13,uVar7,0);
              if ((uVar8 & 1) == 0) goto LAB_05524258;
            }
            uVar2 = FUN_093870b0(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
            lVar12 = DAT_0b345a50;
          }
          else {
LAB_0552416c:
            in_stack_00000028 = FUN_09387464(&stack0x00000010,0);
            lVar12 = DAT_0b345a90;
          }
        }
        else {
LAB_0552408c:
          uVar3 = FUN_09387260(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
          lVar12 = DAT_0b345a60;
        }
      }
      else {
LAB_05523f90:
        uVar5 = FUN_0938736c(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
        lVar12 = DAT_0b345a70;
      }
    }
    else {
LAB_05523ed4:
      uVar5 = FUN_0938755c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar12 = DAT_0b345a98;
    }
    uVar13 = thunk_FUN_04983b98(lVar12,&stack0x00000028);
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_04980b34(lVar12);
    }
    puVar6 = (undefined8 *)FUN_0434463c(uVar13,lVar12);
    uVar13 = *puVar6;
  }
  auVar16._8_8_ = puVar6[1];
  auVar16._0_8_ = uVar13;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_0552431c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar16._0_8_,auVar16._8_8_);
}


