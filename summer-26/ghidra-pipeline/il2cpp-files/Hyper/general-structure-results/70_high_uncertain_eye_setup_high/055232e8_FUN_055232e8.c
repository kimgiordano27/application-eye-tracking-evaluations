/*
FUNCTION_NAME: FUN_055232e8
ENTRY_POINT: 055232e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_055232e8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_04947ee4(&DAT_0ae789e0);
    FUN_04947ee4(&DAT_0ae91c78);
    FUN_04947ee4(&DAT_0ae789c0);
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
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_04980b90(param_2);
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  local_48._0_2_ = *(undefined2 *)(param_1 + 0x1a);
  auVar16 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0),local_48);
  plVar10 = auVar16._0_8_;
  auVar17._8_8_ = DAT_0ae98c78;
  auVar17._0_8_ = plVar10;
  if (plVar10 == (long *)0x0) {
LAB_055240a4:
    auVar17 = auVar16;
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    goto LAB_0552431c;
  }
  if (*(long *)(*plVar10 + 0x40) != *(long *)(DAT_0ae98c78 + 0x40)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c();
    }
    goto LAB_0552431c;
  }
  puVar7 = (undefined8 *)thunk_FUN_049840a8();
  uStack_58 = puVar7[1];
  local_60 = *puVar7;
  uVar5 = FUN_09386b04(&local_60,0);
  uVar5 = uVar5 & 0xff;
  if (uVar5 - 5 < 2) {
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a48 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc10,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) goto LAB_05524258;
    }
    uVar3 = FUN_09386f74(&local_60,0);
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
    lVar13 = DAT_0b345a48;
LAB_0552382c:
    plVar10 = (long *)thunk_FUN_04983b98(lVar13,local_48);
LAB_05523838:
    plVar12 = *(long **)(*(long *)(param_2 + 0x38) + 8);
    plVar11 = plVar10;
    if ((*(ushort *)((long)plVar12 + 0x135) & 1) == 0) {
      plVar11 = (long *)FUN_04980b34(plVar12);
      plVar12 = plVar11;
    }
    auVar16._8_8_ = plVar12;
    auVar16._0_8_ = plVar11;
    if (plVar10 == (long *)0x0) goto LAB_055240a4;
    if (*(long *)(*plVar10 + 0x40) != plVar12[8]) {
      auVar17 = auVar16;
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar10);
      }
      goto LAB_0552431c;
    }
    puVar7 = (undefined8 *)thunk_FUN_049840a8(plVar10);
LAB_0552387c:
    uVar14 = *puVar7;
  }
  else {
    if (uVar5 == 3) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(DAT_0b345ab0 + 0x20,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_09386fd8(&local_60,0);
        goto LAB_05523838;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac1d270,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_0552375c:
        uVar14 = FUN_09387684(&local_60,0);
        local_48._0_8_ = uVar14;
        lVar13 = DAT_0ae91c18;
        goto LAB_0552382c;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc38,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_0552375c;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) {
LAB_05523954:
        local_48 = FUN_09387700(&local_60,0);
        lVar13 = DAT_0ae91c78;
        goto LAB_0552382c;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_05523954;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbc0,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd8,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_05523ad8;
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(DAT_0b345aa8 + 0x20,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc30,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_05524258;
        }
        auVar16 = FUN_09386fd8(&local_60,0);
        lVar13 = auVar16._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar16._8_8_;
        auVar16 = auVar2 << 0x40;
        if (lVar13 == 0) goto LAB_055240a4;
        if (*(int *)(lVar13 + 0x10) != 1) goto LAB_05524258;
        uVar4 = FUN_08bd39a8(lVar13,0,0);
        lVar13 = DAT_0b345aa8;
LAB_05523c78:
        local_48._0_2_ = uVar4;
      }
      else {
LAB_05523ad8:
        local_48 = FUN_0938777c(&local_60,0);
        plVar10 = &DAT_0ae94e20;
LAB_05523aec:
        lVar13 = *plVar10;
      }
LAB_05523c84:
      uVar14 = thunk_FUN_04983b98(lVar13,local_48);
      lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_04980b34(lVar13);
      }
      puVar7 = (undefined8 *)FUN_0434463c(uVar14,lVar13);
      goto LAB_0552387c;
    }
    if (uVar5 != 4) {
LAB_05524258:
      thunk_FUN_049ae08c(&DAT_0ae9e198);
      FUN_0433a0d0();
      uVar14 = FUN_09371888(0);
      uVar3 = FUN_09386b04(&local_60,0);
      local_48[0] = uVar3;
      uVar8 = thunk_FUN_049ae08c(&DAT_0ae99000);
      uVar8 = thunk_FUN_04983b98(uVar8,local_48);
      uVar15 = **(undefined8 **)(param_2 + 0x38);
      FUN_0433a0d0(*(undefined8 *)(PTR_DAT_0ac09758 + 0xe0));
      uVar15 = FUN_08d895f0(uVar15,0);
      uVar14 = FUN_0936d4d8(uVar14,uVar8,uVar15,0);
      thunk_FUN_049ae08c(&DAT_0ae98850);
      uVar8 = thunk_FUN_04983f60();
      auVar17 = FUN_08d79944(uVar8,uVar14,0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar8,param_2);
      }
      goto LAB_0552431c;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a68 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05523574:
      uVar6 = FUN_093872f0(&local_60,0);
      local_48._0_4_ = uVar6;
      lVar13 = DAT_0b345a68;
      goto LAB_0552382c;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05523574;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a88 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05523818:
      uVar14 = FUN_093873e8(&local_60,0);
      local_48._0_8_ = uVar14;
      lVar13 = DAT_0b345a88;
      goto LAB_0552382c;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe0,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05523818;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345aa0 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05523a14:
      uVar14 = FUN_093874e0(&local_60,0);
      local_48._0_8_ = uVar14;
      lVar13 = DAT_0b345aa0;
      goto LAB_05523c84;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc00,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05523a14;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a58 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05523b98:
      uVar4 = FUN_093871d0(&local_60,0);
      lVar13 = DAT_0b345a58;
      goto LAB_05523c78;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbf8,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05523b98;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac2afa8,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
System_Array__Empty<OVRPlugin_Qpl_Annotation>:
      local_48 = FUN_093875d8(&local_60,0);
      plVar10 = &DAT_0ae91dd8;
      goto LAB_05523aec;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbd0,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto System_Array__Empty<OVRPlugin_Qpl_Annotation>;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a38 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) {
LAB_05523e18:
      uVar3 = FUN_09387140(&local_60,0);
      local_48[0] = uVar3;
      lVar13 = DAT_0b345a38;
      goto LAB_05523c84;
    }
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc40,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) != 0) goto LAB_05523e18;
    uVar14 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar14 = FUN_08d895f0(uVar14,0);
    uVar8 = FUN_08d895f0(DAT_0b345a98 + 0x20,0);
    uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fbe8,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) != 0) goto LAB_05523ed4;
      uVar14 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar14 = FUN_08d895f0(uVar14,0);
      uVar8 = FUN_08d895f0(DAT_0b345a70 + 0x20,0);
      uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc28,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) != 0) goto LAB_05523f90;
        uVar14 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar14 = FUN_08d895f0(uVar14,0);
        uVar8 = FUN_08d895f0(DAT_0b345a60 + 0x20,0);
        uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc08,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) != 0) goto LAB_0552408c;
          uVar14 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar14 = FUN_08d895f0(uVar14,0);
          uVar8 = FUN_08d895f0(DAT_0b345a90 + 0x20,0);
          uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar14 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar14 = FUN_08d895f0(uVar14,0);
            uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc48,0);
            uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
            if ((uVar9 & 1) != 0) goto LAB_0552416c;
            uVar14 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar14 = FUN_08d895f0(uVar14,0);
            uVar8 = FUN_08d895f0(DAT_0b345a50 + 0x20,0);
            uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar14 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(DAT_0b345b00 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uVar14 = FUN_08d895f0(uVar14,0);
              uVar8 = FUN_08d895f0(*(undefined8 *)PTR_DAT_0ac3fc18,0);
              uVar9 = FUN_08d93fbc(uVar14,uVar8,0);
              if ((uVar9 & 1) == 0) goto LAB_05524258;
            }
            uVar3 = FUN_093870b0(&local_60,0);
            local_48[0] = uVar3;
            lVar13 = DAT_0b345a50;
          }
          else {
LAB_0552416c:
            local_48._0_8_ = FUN_09387464(&local_60,0);
            lVar13 = DAT_0b345a90;
          }
        }
        else {
LAB_0552408c:
          uVar4 = FUN_09387260(&local_60,0);
          local_48._0_2_ = uVar4;
          lVar13 = DAT_0b345a60;
        }
      }
      else {
LAB_05523f90:
        uVar6 = FUN_0938736c(&local_60,0);
        local_48._0_4_ = uVar6;
        lVar13 = DAT_0b345a70;
      }
    }
    else {
LAB_05523ed4:
      uVar6 = FUN_0938755c(&local_60,0);
      local_48._0_4_ = uVar6;
      lVar13 = DAT_0b345a98;
    }
    uVar14 = thunk_FUN_04983b98(lVar13,local_48);
    lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04980b34(lVar13);
    }
    puVar7 = (undefined8 *)FUN_0434463c(uVar14,lVar13);
    uVar14 = *puVar7;
  }
  auVar17._8_8_ = puVar7[1];
  auVar17._0_8_ = uVar14;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0552431c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar17._0_8_,auVar17._8_8_);
}


