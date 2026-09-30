/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 05545464
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
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
  
  FUN_04947ee4();
  FUN_04947ee4(&DAT_0ae78008);
  FUN_04947ee4(&DAT_0ae78088);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_04980b90();
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  plVar6 = (long *)thunk_FUN_04983b98(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),
                                      &stack0x00000028);
  if (plVar6 == (long *)0x0) {
LAB_055460e0:
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    goto LAB_05546358;
  }
  if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_0ae98c78 + 0x40)) {
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c();
    }
    goto LAB_05546358;
  }
  puVar7 = (undefined8 *)thunk_FUN_049840a8();
  in_stack_00000018 = puVar7[1];
  in_stack_00000010 = *puVar7;
  uVar4 = FUN_09386b04(&stack0x00000010,0);
  uVar4 = uVar4 & 0xff;
  if (uVar4 - 5 < 2) {
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a48 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc10,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) goto LAB_05546294;
    }
    uVar2 = FUN_09386f74(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2) & 0xffffffffffffff01;
    lVar13 = DAT_0b345a48;
LAB_0554586c:
    plVar10 = (long *)thunk_FUN_04983b98(lVar13,&stack0x00000028);
LAB_05545878:
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar6 = plVar10;
    if ((*(ushort *)((long)plVar12 + 0x135) & 1) == 0) {
      plVar6 = (long *)FUN_04980b34(plVar12);
      plVar12 = plVar6;
    }
    if (plVar10 == (long *)0x0) goto LAB_055460e0;
    if (*(long *)(*plVar10 + 0x40) != plVar12[8]) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar10);
      }
      goto LAB_05546358;
    }
    pcVar11 = (char *)thunk_FUN_049840a8(plVar10);
LAB_055458bc:
    cVar1 = *pcVar11;
  }
  else {
    if (uVar4 == 3) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(DAT_0b345ab0 + 0x20,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_09386fd8(&stack0x00000010,0);
        goto LAB_05545878;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_0554579c:
        uVar14 = FUN_09387684(&stack0x00000010,0);
        in_stack_00000028 = uVar14;
        lVar13 = DAT_0ae91c18;
        goto LAB_0554586c;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc38,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_0554579c;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_05545994:
        _in_stack_00000028 = FUN_09387700(&stack0x00000010,0);
        lVar13 = DAT_0ae91c78;
        goto LAB_0554586c;
      }
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_05545994;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbc0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd8,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_05545b18;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(DAT_0b345aa8 + 0x20,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc30,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_05546294;
        }
        lVar13 = FUN_09386fd8(&stack0x00000010,0);
        plVar6 = (long *)0x0;
        if (lVar13 == 0) goto LAB_055460e0;
        if (*(int *)(lVar13 + 0x10) != 1) goto LAB_05546294;
        uVar3 = FUN_08bd39a8(lVar13,0,0);
        lVar13 = DAT_0b345aa8;
LAB_05545cb8:
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
      }
      else {
LAB_05545b18:
        _in_stack_00000028 = FUN_0938777c(&stack0x00000010,0);
        plVar6 = &DAT_0ae94e20;
LAB_05545b2c:
        lVar13 = *plVar6;
      }
LAB_05545cc4:
      uVar14 = thunk_FUN_04983b98(lVar13,&stack0x00000028);
      lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04980b34(lVar13);
      }
      pcVar11 = (char *)FUN_0434463c(uVar14,lVar13);
      goto LAB_055458bc;
    }
    if (uVar4 != 4) {
LAB_05546294:
      thunk_FUN_049ae08c(&DAT_0ae9e198);
      FUN_0433a0d0();
      uVar14 = FUN_09371888(0);
      uVar2 = FUN_09386b04(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      uVar8 = thunk_FUN_049ae08c(&DAT_0ae99000);
      uVar8 = thunk_FUN_04983b98(uVar8,&stack0x00000028);
      uVar15 = **(undefined8 **)(unaff_x19 + 0x38);
      FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
      uVar15 = FUN_08d895f0(uVar15,0);
      uVar14 = FUN_0936d4d8(uVar14,uVar8,uVar15,0);
      thunk_FUN_049ae08c(&DAT_0ae98850);
      uVar8 = thunk_FUN_04983f60();
      plVar6 = (long *)FUN_08d79944(uVar8,uVar14,0);
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar8);
      }
      goto LAB_05546358;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a68 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_055455b4:
      uVar5 = FUN_093872f0(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar13 = DAT_0b345a68;
      goto LAB_0554586c;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_055455b4;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a88 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05545858:
      uVar14 = FUN_093873e8(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      lVar13 = DAT_0b345a88;
      goto LAB_0554586c;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe0,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05545858;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345aa0 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05545a54:
      uVar14 = FUN_093874e0(&stack0x00000010,0);
      in_stack_00000028 = uVar14;
      lVar13 = DAT_0b345aa0;
      goto LAB_05545cc4;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc00,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05545a54;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a58 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05545bd8:
      uVar3 = FUN_093871d0(&stack0x00000010,0);
      lVar13 = DAT_0b345a58;
      goto LAB_05545cb8;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf8,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05545bd8;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa8,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05545da0:
      _in_stack_00000028 = FUN_093875d8(&stack0x00000010,0);
      plVar6 = &DAT_0ae91dd8;
      goto LAB_05545b2c;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd0,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05545da0;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a38 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05545e58:
      uVar2 = FUN_09387140(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
      lVar13 = DAT_0b345a38;
      goto LAB_05545cc4;
    }
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc40,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05545e58;
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a98 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe8,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_05545f14;
      uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(DAT_0b345a70 + 0x20,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc28,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_05545fd0;
        uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(DAT_0b345a60 + 0x20,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc08,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) != 0) goto LAB_055460c8;
          uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(DAT_0b345a90 + 0x20,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar14 = FUN_08d895f0(uVar14,0);
            uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc48,0);
            uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
            if ((uVar9 & 1) != 0) goto LAB_055461a8;
            uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar14 = FUN_08d895f0(uVar14,0);
            uVar8 = FUN_08d895f0(DAT_0b345a50 + 0x20,0);
            uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uVar14 = FUN_08d895f0(uVar14,0);
              uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc18,0);
              uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
              if ((uVar9 & 1) == 0) goto LAB_05546294;
            }
            uVar2 = FUN_093870b0(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar2);
            lVar13 = DAT_0b345a50;
          }
          else {
LAB_055461a8:
            in_stack_00000028 = FUN_09387464(&stack0x00000010,0);
            lVar13 = DAT_0b345a90;
          }
        }
        else {
LAB_055460c8:
          uVar3 = FUN_09387260(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar3);
          lVar13 = DAT_0b345a60;
        }
      }
      else {
LAB_05545fd0:
        uVar5 = FUN_0938736c(&stack0x00000010,0);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
        lVar13 = DAT_0b345a70;
      }
    }
    else {
LAB_05545f14:
      uVar5 = FUN_0938755c(&stack0x00000010,0);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
      lVar13 = DAT_0b345a98;
    }
    uVar14 = thunk_FUN_04983b98(lVar13,&stack0x00000028);
    lVar13 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04980b34(lVar13);
    }
    pcVar11 = (char *)FUN_0434463c(uVar14,lVar13);
    cVar1 = *pcVar11;
  }
  plVar6 = (long *)(ulong)(cVar1 != '\0');
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_05546358:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


