/*
FUNCTION_NAME: ReadyPlayerMe.Samples.AvatarCreatorWizard.AvatarCreatorSelection$$Dispose
ENTRY_POINT: 08128720
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x08128fc0) */

float ReadyPlayerMe_Samples_AvatarCreatorWizard_AvatarCreatorSelection__Dispose(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  long unaff_x20;
  int iVar10;
  long unaff_x22;
  undefined **unaff_x23;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  ulong unaff_d11;
  float fVar22;
  ulong unaff_d13;
  float unaff_s14;
  undefined4 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  uint uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack00000000000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  
  uVar7 = _fStack0000000000000068;
  if (*param_1 == 0) goto LAB_08129424;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar4 = unaff_d11;
  FUN_081269a0(&stack0x000000e0,1,1,0);
  fVar13 = fStack0000000000000128;
  lVar9 = CONCAT44(fStack00000000000000e4,fStack00000000000000e0);
  if (lVar9 == 0) goto LAB_08129424;
  fVar11 = (float)FUN_05d12208(lVar9,0,*unaff_x25);
  if (0.0 < unaff_s14) {
    FUN_05d130dc(&stack0x000000e0,lVar9,*(undefined8 *)PTR_DAT_09f37fd8);
    *(ulong *)(unaff_x22 + 0x28) = CONCAT44(uStack00000000000000ec,fStack00000000000000e8);
    *(ulong *)(unaff_x22 + 0x20) = CONCAT44(fStack00000000000000e4,fStack00000000000000e0);
    *(undefined8 *)(unaff_x22 + 0x38) = in_stack_000000f8;
    *(ulong *)(unaff_x22 + 0x30) = in_stack_000000f0;
    puVar2 = PTR_DAT_09f37fa8;
    uVar18 = in_stack_000000f0;
    fVar12 = INFINITY;
    do {
      fVar21 = fVar11;
      fVar20 = fVar12;
      fVar22 = (float)unaff_d13;
      fStack0000000000000068 = (float)uVar4;
      do {
        uVar4 = FUN_0519bbfc(&stack0x000001a0,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) {
          FUN_0519bbf8(&stack0x000001a0,*(undefined8 *)PTR_DAT_09f37f80);
          if (DAT_0a51c00a == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e748);
            DAT_0a51c00a = '\x01';
          }
          puVar2 = PTR_DAT_09f1e748;
          fVar20 = fVar21 - fStack00000000000000a8;
          fVar12 = fVar22 - fStack0000000000000070;
          fVar11 = fStack0000000000000068 - (float)unaff_d11;
          if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            cVar8 = DAT_0a51c00a;
          }
          else {
            cVar8 = '\x01';
          }
          if (cVar8 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e748);
            DAT_0a51c00a = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          fVar16 = fStack0000000000000090 * fStack0000000000000090;
          bVar3 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar20 * fVar20) <
                  SQRT(fVar16 + in_stack_00000088._4_4_ * in_stack_00000088._4_4_ +
                                fStack0000000000000050 * fStack0000000000000050);
          goto LAB_08128a18;
        }
        unaff_d13 = (ulong)(uint)fStack00000000000001b4;
        uVar4 = (ulong)(uint)in_stack_000001b8;
        fVar11 = fStack00000000000000b0 - in_stack_000001b8;
        uVar18 = (ulong)(uint)fVar11;
        fVar12 = (fStack00000000000000ac - fStack00000000000001b0) *
                 (fStack00000000000000ac - fStack00000000000001b0) +
                 (unaff_s14 - fStack00000000000001b4) * (unaff_s14 - fStack00000000000001b4) +
                 fVar11 * fVar11;
        fVar11 = fStack00000000000001b0;
      } while (fVar20 <= fVar12);
    } while( true );
  }
  uVar18 = uVar4;
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
    uVar18 = uVar4;
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    cVar8 = DAT_0a51c009;
  }
  else {
    cVar8 = '\x01';
  }
  if (cVar8 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  fVar16 = fStack000000000000012c - (float)unaff_d11;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fStack0000000000000068 = fStack000000000000012c;
  fVar16 = fVar16 * fVar16;
  bVar3 = SQRT((in_stack_00000120._4_4_ - fStack00000000000000a8) *
               (in_stack_00000120._4_4_ - fStack00000000000000a8) + fVar13 * fVar13 + fVar16) <
          SQRT(fStack0000000000000090 * fStack0000000000000090 +
               unaff_s14 * unaff_s14 + in_stack_00000088._4_4_ * in_stack_00000088._4_4_);
  fVar21 = in_stack_00000120._4_4_;
  fVar22 = fVar13;
LAB_08128a18:
  puVar2 = PTR_DAT_09f1e540;
  uVar4 = (ulong)(uint)fVar16;
  if ((unaff_x26 & 1) != 0) {
    unaff_x26 = unaff_x26 & 0xffffffff;
    if (1 < *(int *)(unaff_x20 + 0x18)) {
      iVar10 = 1;
      do {
        uVar14 = FUN_05d12208();
        uVar17 = uVar4;
        uVar19 = uVar18;
        uVar15 = FUN_05d12208();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c5f30(uVar14,uVar4,uVar18,uVar15,uVar17,uVar19,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(unaff_x20 + 0x18));
    }
    puVar2 = PTR_DAT_09f1e540;
    if (1 < *(int *)(lVar9 + 0x18)) {
      iVar10 = 1;
      do {
        uVar14 = FUN_05d12208(lVar9,iVar10 + -1,*unaff_x25);
        uVar17 = uVar4;
        uVar19 = uVar18;
        uVar15 = FUN_05d12208(lVar9,iVar10,*unaff_x25);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c5f30(uVar14,uVar4,uVar18,uVar15,uVar17,uVar19,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar9 + 0x18));
    }
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    fVar11 = DAT_01c766a0;
    unaff_x23 = &PTR_FUN_0a51b000;
    lVar9 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar12 = *(float *)(lVar9 + 0x18) * DAT_01c766a0;
    fVar20 = *(float *)(lVar9 + 0x1c) * DAT_01c766a0;
    fVar16 = *(float *)(lVar9 + 0x20) * DAT_01c766a0;
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c5f30(fStack000000000000004c,fStack0000000000000048,in_stack_00000080,
                 fStack000000000000004c + fVar12,fStack0000000000000048 + fVar20,
                 in_stack_00000080 + fVar16,0);
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    FUN_094c5f30(fVar21,fVar22,fStack0000000000000068,fVar21 + *(float *)(lVar9 + 0x18) * fVar11,
                 fVar22 + *(float *)(lVar9 + 0x1c) * fVar11,
                 fStack0000000000000068 + *(float *)(lVar9 + 0x20) * fVar11,0);
  }
  if (*(char *)((long)unaff_x23 + 0xf43) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)((long)unaff_x23 + 0xf43) = 1;
  }
  if (unaff_s14 <= 0.0) {
    if (uStack0000000000000054 == bVar3) {
      if (DAT_0a51c009 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      puVar2 = PTR_DAT_09f1e748;
      if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        bVar3 = DAT_0a51c009 == '\0';
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar11 = SQRT((in_stack_00000058._4_4_ - fStack00000000000000ac) *
                    (in_stack_00000058._4_4_ - fStack00000000000000ac) +
                    (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14) +
                    (fStack0000000000000060 - fStack00000000000000b0) *
                    (fStack0000000000000060 - fStack00000000000000b0));
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = SQRT((in_stack_00000120._4_4_ - fStack00000000000000ac) *
                    (in_stack_00000120._4_4_ - fStack00000000000000ac) +
                    (fVar13 - unaff_s14) * (fVar13 - unaff_s14) +
                    (fStack000000000000012c - fStack00000000000000b0) *
                    (fStack000000000000012c - fStack00000000000000b0)) - fVar11;
LAB_08129254:
      fVar13 = (0.0 - fVar11) / fVar13;
      fVar11 = (fStack0000000000000074 - fStack000000000000009c) * fVar13;
      fVar12 = (fStack0000000000000078 - fStack0000000000000098) * fVar13;
      fVar13 = (fStack000000000000007c - fStack0000000000000094) * fVar13;
    }
    else {
      if (DAT_0a51c00a == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c00a = '\x01';
      }
      puVar2 = PTR_DAT_09f1e748;
      if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        bVar3 = DAT_0a51c00a == '\0';
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c00a = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = SQRT((fStack0000000000000060 - fStack00000000000000b0) *
                    (fStack0000000000000060 - fStack00000000000000b0) +
                    (in_stack_00000058._4_4_ - fStack00000000000000ac) *
                    (in_stack_00000058._4_4_ - fStack00000000000000ac) +
                    (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14)) /
               SQRT((fStack000000000000012c - fStack0000000000000060) *
                    (fStack000000000000012c - fStack0000000000000060) +
                    (in_stack_00000120._4_4_ - in_stack_00000058._4_4_) *
                    (in_stack_00000120._4_4_ - in_stack_00000058._4_4_) +
                    (fVar13 - fStack0000000000000064) * (fVar13 - fStack0000000000000064));
      if (1.0 < fVar13) {
        fVar13 = 1.0;
      }
      fVar11 = (fStack0000000000000074 - fStack000000000000009c) * fVar13;
      fVar12 = (fStack0000000000000078 - fStack0000000000000098) * fVar13;
      fVar13 = (fStack000000000000007c - fStack0000000000000094) * fVar13;
    }
  }
  else {
    plVar5 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,6);
    fStack00000000000000e0 = fStack00000000000000ac;
    fStack00000000000000e8 = fStack00000000000000b0;
    fStack00000000000000e4 = unaff_s14;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1e740,&stack0x000000e0);
    if (plVar5 == (long *)0x0) goto LAB_08129424;
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0812942c:
      uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
LAB_08129428:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[4] = lVar9;
    thunk_FUN_044bb4b4(plVar5 + 4,lVar9);
    fStack00000000000000d0 = fStack000000000000004c;
    fStack00000000000000d4 = fStack0000000000000048;
    in_stack_000000d8 = in_stack_00000080;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1e740,&stack0x000000d0);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0812942c;
    if (*(uint *)(plVar5 + 3) < 2) goto LAB_08129428;
    plVar5[5] = lVar9;
    thunk_FUN_044bb4b4(plVar5 + 5,lVar9);
    in_stack_000000c8 = fStack0000000000000068;
    fStack00000000000000c0 = fVar21;
    fStack00000000000000c4 = fVar22;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1e740,&stack0x000000c0);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0812942c;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_08129428;
    plVar5[6] = lVar9;
    thunk_FUN_044bb4b4(plVar5 + 6,lVar9);
    puVar2 = PTR_DAT_09f1e5b8;
    uStack00000000000000bc = (undefined1)((ulong)uVar7 >> 0x20);
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x28),(long)&stack0x000000b8 + 4);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0812942c;
    if (*(uint *)(plVar5 + 3) < 4) goto LAB_08129428;
    plVar5[7] = lVar9;
    bVar3 = 0.0 < unaff_s14 && fVar22 < unaff_s14;
    thunk_FUN_044bb4b4(plVar5 + 7,lVar9);
    uStack00000000000000b8 = bVar3;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar2 + 0x28),&stack0x000000b8);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0812942c;
    if (*(uint *)(plVar5 + 3) < 5) goto LAB_08129428;
    plVar5[8] = lVar9;
    thunk_FUN_044bb4b4(plVar5 + 8,lVar9);
    uStack00000000000000b4 = in_stack_00000040;
    lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(puVar2 + 0x78),(long)&stack0x000000b0 + 4);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0812942c;
    if (*(uint *)(plVar5 + 3) < 6) goto LAB_08129428;
    plVar5[9] = lVar9;
    thunk_FUN_044bb4b4(plVar5 + 9,lVar9);
    uVar7 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f6b490,plVar5,0);
    lVar6 = *(long *)PTR_DAT_09f22e40;
    lVar9 = *(long *)(lVar6 + 0x38);
    if (lVar9 == 0) {
      FUN_04482014(lVar6);
      lVar9 = *(long *)(lVar6 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_04481fb8();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_04481fb8();
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c674c(uVar7,uVar14,0);
    if (uStack000000000000006c == bVar3) {
      fVar11 = ABS(unaff_s14 - fStack0000000000000048);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = ABS(unaff_s14 - fVar22) - fVar11;
      goto LAB_08129254;
    }
    fVar13 = ABS((unaff_s14 - fStack0000000000000048) / (fVar22 - fStack0000000000000048));
    fVar11 = (fStack0000000000000074 - fStack000000000000009c) * fVar13;
    fVar12 = (fStack0000000000000078 - fStack0000000000000098) * fVar13;
    fVar13 = (fStack000000000000007c - fStack0000000000000094) * fVar13;
  }
  fStack000000000000009c = fStack000000000000009c + fVar11;
  if ((unaff_x26 & 1) == 0) {
    return fStack000000000000009c;
  }
  FUN_09536100(0);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a52a749 == '\0') {
    FUN_04447ba8(PTR_DAT_09f59a08);
    DAT_0a52a749 = '\x01';
  }
  lVar9 = *unaff_x29;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar9 = *unaff_x29;
  }
  if (**(long **)(lVar9 + 0xb8) != 0) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = (ulong)in_stack_000000a0;
    _fStack0000000000000070 = _fStack0000000000000070 & 0xffffffff;
    FUN_081269a0(&stack0x000000e0,fStack00000000000000a8,_fStack0000000000000070,uVar4,
                 fStack000000000000009c,fStack0000000000000098 + fVar12,
                 fStack0000000000000094 + fVar13,1,1,0);
    puVar2 = PTR_DAT_09f1e540;
    lVar9 = CONCAT44(fStack00000000000000e4,fStack00000000000000e0);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) < 2) {
        return fStack000000000000009c;
      }
      iVar10 = 0;
      do {
        uVar7 = FUN_05d12208(lVar9,iVar10,*unaff_x25);
        uVar18 = _fStack0000000000000070;
        uVar17 = uVar4;
        uVar14 = FUN_05d12208(lVar9,iVar10 + 1,*unaff_x25);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c5f30(uVar7,_fStack0000000000000070,uVar4,uVar14,uVar18,uVar17,0);
        iVar1 = iVar10 + 2;
        iVar10 = iVar10 + 1;
      } while (iVar1 < *(int *)(lVar9 + 0x18));
      return fStack000000000000009c;
    }
  }
LAB_08129424:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


