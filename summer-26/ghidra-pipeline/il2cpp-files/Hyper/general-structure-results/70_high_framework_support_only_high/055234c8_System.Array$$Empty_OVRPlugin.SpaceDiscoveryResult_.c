/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 055234c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool in_ZR;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (!in_ZR) {
LAB_05524258:
    thunk_FUN_049ae08c(&DAT_0ae9e198);
    FUN_0433a0d0();
    uVar13 = FUN_09371888(0);
    uVar3 = FUN_09386b04(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
    uVar6 = thunk_FUN_049ae08c(&DAT_0ae99000);
    uVar6 = thunk_FUN_04983b98(uVar6,&stack0x00000028);
    uVar14 = **(undefined8 **)(unaff_x19 + 0x38);
    FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar13 = FUN_0936d4d8(uVar13,uVar6,uVar14,0);
    thunk_FUN_049ae08c(&DAT_0ae98850);
    uVar6 = thunk_FUN_04983f60();
    auVar15 = FUN_08d79944(uVar6,uVar13,0);
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar6);
    }
    goto LAB_0552431c;
  }
  uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar13 = FUN_08d895f0(uVar13,0);
  uVar6 = FUN_08d895f0(DAT_0b345a68 + 0x20,0);
  uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
  if ((uVar7 & 1) == 0) {
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523574;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(DAT_0b345a88 + 0x20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_05523818:
      in_stack_00000028 = FUN_093873e8(&stack0x00000010,0);
      lVar12 = DAT_0b345a88;
      goto LAB_0552382c;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe0,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523818;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(DAT_0b345aa0 + 0x20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_05523a14:
      uVar13 = FUN_093874e0(&stack0x00000010,0);
      in_stack_00000028 = uVar13;
      lVar12 = DAT_0b345aa0;
LAB_05523c84:
      uVar13 = thunk_FUN_04983b98(lVar12,&stack0x00000028);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04980b34(lVar12);
      }
      puVar10 = (undefined8 *)FUN_0434463c(uVar13,lVar12);
      goto LAB_0552387c;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc00,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523a14;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(DAT_0b345a58 + 0x20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_05523b98:
      uVar4 = FUN_093871d0(&stack0x00000010,0);
      in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar4);
      lVar12 = DAT_0b345a58;
      goto LAB_05523c84;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf8,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523b98;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa8,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_05523aec:
      _in_stack_00000028 = FUN_093875d8(&stack0x00000010,0);
      lVar12 = DAT_0ae91dd8;
      goto LAB_05523c84;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd0,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523aec;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(DAT_0b345a38 + 0x20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) {
LAB_05523e18:
      uVar3 = FUN_09387140(&stack0x00000010,0);
      in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
      lVar12 = DAT_0b345a38;
      goto LAB_05523c84;
    }
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc40,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_05523e18;
    uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar13 = FUN_08d895f0(uVar13,0);
    uVar6 = FUN_08d895f0(DAT_0b345a98 + 0x20,0);
    uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe8,0);
      uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_05523ed4;
      uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar13 = FUN_08d895f0(uVar13,0);
      uVar6 = FUN_08d895f0(DAT_0b345a70 + 0x20,0);
      uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc28,0);
        uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
        if ((uVar7 & 1) != 0) goto LAB_05523f90;
        uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar13 = FUN_08d895f0(uVar13,0);
        uVar6 = FUN_08d895f0(DAT_0b345a60 + 0x20,0);
        uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_08d895f0(uVar13,0);
          uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc08,0);
          uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
          if ((uVar7 & 1) != 0) goto LAB_0552408c;
          uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_08d895f0(uVar13,0);
          uVar6 = FUN_08d895f0(DAT_0b345a90 + 0x20,0);
          uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar13 = FUN_08d895f0(uVar13,0);
            uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc48,0);
            uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
            if ((uVar7 & 1) != 0) goto LAB_0552416c;
            uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar13 = FUN_08d895f0(uVar13,0);
            uVar6 = FUN_08d895f0(DAT_0b345a50 + 0x20,0);
            uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
            if ((uVar7 & 1) == 0) {
              uVar13 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uVar13 = FUN_08d895f0(uVar13,0);
              uVar6 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc18,0);
              uVar7 = FUN_08d93fbc(uVar13,uVar6,0);
              if ((uVar7 & 1) == 0) goto LAB_05524258;
            }
            uVar3 = FUN_093870b0(&stack0x00000010,0);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar3);
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
          uVar4 = FUN_09387260(&stack0x00000010,0);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar4);
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
    puVar10 = (undefined8 *)FUN_0434463c(uVar13,lVar12);
    uVar13 = *puVar10;
  }
  else {
LAB_05523574:
    uVar5 = FUN_093872f0(&stack0x00000010,0);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar5);
    lVar12 = DAT_0b345a68;
LAB_0552382c:
    plVar8 = (long *)thunk_FUN_04983b98(lVar12,&stack0x00000028);
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x38) + 8);
    plVar9 = plVar8;
    if ((*(ushort *)((long)plVar11 + 0x135) & 1) == 0) {
      plVar9 = (long *)FUN_04980b34(plVar11);
      plVar11 = plVar9;
    }
    auVar2._8_8_ = in_stack_00000030;
    auVar2._0_8_ = in_stack_00000028;
    auVar15._8_8_ = plVar11;
    auVar15._0_8_ = plVar9;
    auVar1._8_8_ = plVar11;
    auVar1._0_8_ = plVar9;
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_0552431c;
    }
    if (*(long *)(*plVar8 + 0x40) != plVar11[8]) {
      auVar15 = auVar1;
      _in_stack_00000028 = auVar2;
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar8);
      }
      goto LAB_0552431c;
    }
    puVar10 = (undefined8 *)thunk_FUN_049840a8(plVar8);
LAB_0552387c:
    uVar13 = *puVar10;
  }
  auVar15._8_8_ = puVar10[1];
  auVar15._0_8_ = uVar13;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_0552431c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar15._0_8_,auVar15._8_8_);
}


