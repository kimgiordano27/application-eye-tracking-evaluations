/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$MoveNext
ENTRY_POINT: 07764e00
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__MoveNext
               (long param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint in_w9;
  long *unaff_x19;
  long unaff_x20;
  uint uVar14;
  long lVar15;
  int unaff_w22;
  long *plVar16;
  uint unaff_w23;
  long *plVar17;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  long unaff_x29;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float unaff_s9;
  float unaff_s10;
  float fVar22;
  float unaff_s11;
  float fVar23;
  undefined8 in_stack_00000050;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  uint in_stack_00000070;
  long in_stack_00000088;
  undefined8 in_stack_000000b0;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  uint uStack00000000000000d8;
  uint uStack00000000000000dc;
  
code_r0x07764e00:
  param_2 = param_2 + param_2 + *(float *)(unaff_x29 + 0x2c);
  fVar20 = unaff_s10;
  if (in_w9 != 0) {
    fVar20 = unaff_s11;
  }
  fVar20 = *(float *)(param_1 + 0x2c) + fVar20;
LAB_07764e4c:
  if (param_2 <= fVar20) goto LAB_07764e64;
LAB_07764e58:
  *in_stack_00000060 = unaff_x29;
  thunk_FUN_044bb4b4(in_stack_00000060,unaff_x29);
LAB_07764e64:
  while( true ) {
    if (((int)uStack00000000000000d8 < (int)unaff_w27) && (*(char *)(unaff_x20 + 0x14) != '\0')) {
      uStack00000000000000d8 = uStack00000000000000d8 << 1;
    }
    else {
      uVar14 = uStack00000000000000d8 + in_stack_00000068._4_4_;
      bVar3 = (int)unaff_w27 <= (int)uStack00000000000000d8;
      uStack00000000000000d8 = unaff_w27;
      if ((int)uVar14 <= (int)unaff_w27 || bVar3) {
        uStack00000000000000d8 = uVar14;
      }
    }
    if (3 < *(int *)(unaff_x20 + 0x10)) {
      uVar7 = FUN_07a3b850(&stack0x000000d8,0);
      uVar8 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
      uVar7 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32df0,uVar7,*unaff_x24,uVar8,0);
      lVar15 = *unaff_x19;
      lVar12 = *(long *)(lVar15 + 0x38);
      if (lVar12 == 0) {
        FUN_04482014(lVar15);
        lVar12 = *(long *)(lVar15 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar12 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8();
      }
      FUN_0771ec00(uVar7,**(undefined8 **)(lVar12 + 0xb8),0);
    }
    if ((unaff_w22 < 1) || (unaff_w25 <= (int)uStack00000000000000d8)) break;
    unaff_w22 = 0;
    uStack00000000000000dc = in_stack_00000070;
    while ((int)uStack00000000000000dc < unaff_w25) {
      unaff_x29 = thunk_FUN_0448520c(*unaff_x26);
      FUN_07a80df4(unaff_x29,0);
      if (4 < *(int *)(unaff_x20 + 0x10)) {
        uVar7 = FUN_07a3b850(&stack0x000000d8,0);
        uVar8 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
        uVar7 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32dd0,uVar7,*unaff_x24,uVar8,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar7,0);
      }
      uVar9 = FUN_07761c50();
      if ((uVar9 & 1) != 0) {
        param_1 = *in_stack_00000060;
        if (param_1 == 0) goto LAB_07764e58;
        if (unaff_x29 == 0) goto LAB_07765a28;
        param_2 = unaff_s10;
        if (*(char *)(unaff_x29 + 0x28) != '\0') {
          param_2 = unaff_s9;
        }
        if (*(char *)(unaff_x20 + 0x14) != '\0') {
          in_w9 = (uint)*(byte *)(param_1 + 0x28);
          goto code_r0x07764e00;
        }
        fVar20 = unaff_s10;
        if (*(char *)(param_1 + 0x28) != '\0') {
          fVar20 = unaff_s9;
        }
        param_2 = param_2 + *(float *)(unaff_x29 + 0x30) +
                            *(float *)(unaff_x29 + 0x2c) + *(float *)(unaff_x29 + 0x2c);
        fVar20 = fVar20 + *(float *)(param_1 + 0x30) +
                          *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
        goto LAB_07764e4c;
      }
      if (((int)uStack00000000000000dc < (int)unaff_w23) && (*(char *)(unaff_x20 + 0x14) != '\0')) {
        uStack00000000000000dc = uStack00000000000000dc << 1;
      }
      else {
        uVar14 = uStack00000000000000dc + unaff_w28;
        bVar3 = (int)unaff_w23 <= (int)uStack00000000000000dc;
        uStack00000000000000dc = unaff_w23;
        if ((int)uVar14 <= (int)unaff_w23 || bVar3) {
          uStack00000000000000dc = uVar14;
        }
      }
      if (4 < *(int *)(unaff_x20 + 0x10)) {
        uVar7 = FUN_07a3b850(&stack0x000000d8,0);
        uVar8 = FUN_07a3b850((long)&stack0x000000d8 + 4,0);
        uVar7 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f32e08,uVar7,*unaff_x24,uVar8,0);
        lVar15 = *unaff_x19;
        lVar12 = *(long *)(lVar15 + 0x38);
        if (lVar12 == 0) {
          FUN_04482014(lVar15);
          lVar12 = *(long *)(lVar15 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar12 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar7,**(undefined8 **)(lVar12 + 0xb8),0);
      }
      unaff_w22 = unaff_w22 + 1;
    }
  }
  lVar12 = *in_stack_00000060;
  if (lVar12 == 0) {
    return 0;
  }
  _iStack00000000000000d0 = 0;
  uVar14 = *(uint *)(lVar12 + 0x10);
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    if ((int)unaff_w23 <= (int)uVar14) {
      uVar14 = unaff_w23;
    }
    uVar11 = *(uint *)(lVar12 + 0x14);
    if ((int)unaff_w27 <= (int)*(uint *)(lVar12 + 0x14)) {
      uVar11 = unaff_w27;
    }
    _iStack00000000000000d0 = CONCAT44(uVar14,uVar11);
  }
  else {
    fVar18 = logf((float)(int)uVar14);
    fVar20 = DAT_01c7661c;
    fVar18 = exp2f((float)(int)(fVar18 / DAT_01c7661c));
    uVar14 = 0x80000000;
    if (fVar18 != INFINITY) {
      uVar14 = (int)fVar18;
    }
    if (uVar14 < 3) {
      uVar14 = 2;
    }
    if ((int)unaff_w23 <= (int)uVar14) {
      uVar14 = unaff_w23;
    }
    uStack00000000000000d4 = uVar14;
    fVar18 = logf((float)*(int *)(lVar12 + 0x14));
    fVar20 = exp2f((float)(int)(fVar18 / fVar20));
    uVar2 = 0x80000000;
    if (fVar20 != INFINITY) {
      uVar2 = (int)fVar20;
    }
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if ((int)unaff_w27 <= (int)uVar2) {
      uVar2 = unaff_w27;
    }
    uVar1 = uVar14;
    if ((int)uVar14 < 0) {
      uVar1 = uVar14 + 1;
    }
    uVar11 = (int)uVar1 >> 1;
    if ((int)uVar1 >> 1 <= (int)uVar2) {
      uVar11 = uVar2;
    }
    uVar2 = uVar11;
    if ((int)uVar11 < 0) {
      uVar2 = uVar11 + 1;
    }
    uVar2 = (int)uVar2 >> 1;
    if ((int)uVar14 < (int)uVar2) {
      uVar14 = uVar2;
      uStack00000000000000d4 = uVar2;
    }
    _iStack00000000000000d0 = CONCAT44(uStack00000000000000d4,uVar11);
  }
  *(uint *)(lVar12 + 0x18) = uVar14;
  *(uint *)(lVar12 + 0x1c) = uVar11;
  if (3 < *(int *)(unaff_x20 + 0x10)) {
    lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
    if (lVar12 == 0) goto LAB_07765a28;
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f32d90;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
    uVar7 = FUN_07a3b850((long)&stack0x000000d0 + 4,0);
    if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x28) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f32da0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30));
    uVar7 = FUN_07a3b850(&stack0x000000d0,0);
    if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x38) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f32de8;
    thunk_FUN_044bb4b4();
    if (*in_stack_00000060 == 0) goto LAB_07765a28;
    uVar7 = FUN_07a3b850(*in_stack_00000060 + 0x10,0);
    if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x48) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x48),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*in_stack_00000060 == 0) goto LAB_07765a28;
    uVar7 = FUN_07a3b850(*in_stack_00000060 + 0x14,0);
    if (*(uint *)(lVar12 + 0x18) < 8) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x58) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x58),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*in_stack_00000060 == 0) goto LAB_07765a28;
    uVar7 = FUN_07a5081c(*in_stack_00000060 + 0x2c,0);
    if (*(uint *)(lVar12 + 0x18) < 10) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x68) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x68),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 0xb) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*in_stack_00000060 == 0) goto LAB_07765a28;
    uVar7 = FUN_07a5081c(*in_stack_00000060 + 0x30,0);
    if (*(uint *)(lVar12 + 0x18) < 0xc) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x78) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x78),uVar7);
    if (*(uint *)(lVar12 + 0x18) < 0xd) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar15 = *in_stack_00000060;
    if (lVar15 == 0) goto LAB_07765a28;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_079a04dc(lVar15 + 0x28,0);
    if (*(uint *)(lVar12 + 0x18) < 0xe) goto LAB_07765a24;
    *(undefined8 *)(lVar12 + 0x88) = uVar7;
    thunk_FUN_044bb4b4();
    uVar7 = FUN_078b57fc(lVar12,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar7,0);
  }
  puVar4 = PTR_DAT_09f32ce0;
  lVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
  FUN_05bad610(lVar12,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_09f32d80;
  if (*in_stack_00000060 != 0) {
    FUN_077617f0(*(undefined8 *)(*in_stack_00000060 + 0x20),lVar12);
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
    FUN_07a80df4(uVar7,0);
    if (lVar12 != 0) {
      FUN_05baf864(lVar12,uVar7,*(undefined8 *)PTR_DAT_09f32d88);
      lVar15 = *in_stack_00000060;
      if ((lVar15 != 0) && (in_stack_00000088 != 0)) {
        iVar21 = *(int *)(lVar15 + 0x10);
        iVar19 = *(int *)(lVar15 + 0x14);
        FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
        uVar9 = FUN_07760c44((float)iVar21,(float)iVar19);
        if ((in_stack_00000050._4_4_ < 0xb) && ((uVar9 & 1) != 0)) {
          if (3 < *(int *)(unaff_x20 + 0x10)) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
          }
          lVar12 = FUN_07764110();
          return lVar12;
        }
        uVar7 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
        lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(lVar15,0);
        *(undefined8 *)(lVar15 + 0x28) = uVar7;
        thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x28),uVar7);
        lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar12 + 0x18));
        plVar16 = (long *)(lVar15 + 0x20);
        *plVar16 = lVar10;
        thunk_FUN_044bb4b4(plVar16);
        lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar12 + 0x18));
        plVar17 = (long *)(lVar15 + 0x30);
        *plVar17 = lVar10;
        thunk_FUN_044bb4b4(plVar17,lVar10);
        *(undefined8 *)(lVar15 + 0x18) = 0xffffffffffffffff;
        *(uint *)(lVar15 + 0x10) = uStack00000000000000d4;
        *(int *)(lVar15 + 0x14) = iStack00000000000000d0;
        puVar6 = PTR_DAT_09f32ba8;
        puVar5 = PTR_DAT_09f24a78;
        puVar4 = PTR_DAT_09f22e40;
        uStack00000000000000bc = 0;
        if (0 < *(int *)(lVar12 + 0x18)) {
          do {
            lVar10 = FUN_05badb74(lVar12,uStack00000000000000bc,*(undefined8 *)puVar6);
            if ((lVar10 == 0) || (lVar13 = *plVar16, lVar13 == 0)) goto LAB_07765a28;
            if (*(uint *)(lVar13 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            fVar23 = fStack00000000000000cc +
                     (float)*(int *)(lVar10 + 0x1c) / (float)(int)uStack00000000000000d4;
            lVar13 = lVar13 + (long)(int)uStack00000000000000bc * 0x10;
            fVar22 = fStack00000000000000c8 +
                     (float)*(int *)(lVar10 + 0x20) / (float)iStack00000000000000d0;
            fVar18 = (float)*(int *)(lVar10 + 0x14) / (float)(int)uStack00000000000000d4 -
                     (fStack00000000000000cc + fStack00000000000000cc);
            fVar20 = (float)*(int *)(lVar10 + 0x18) / (float)iStack00000000000000d0 -
                     (fStack00000000000000c8 + fStack00000000000000c8);
            *(float *)(lVar13 + 0x20) = fVar23;
            *(float *)(lVar13 + 0x24) = fVar22;
            *(float *)(lVar13 + 0x28) = fVar18;
            *(float *)(lVar13 + 0x2c) = fVar20;
            lVar13 = *plVar17;
            if (lVar13 == 0) goto LAB_07765a28;
            if (*(uint *)(lVar13 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
            *(undefined4 *)(lVar13 + (long)(int)uStack00000000000000bc * 4 + 0x20) =
                 *(undefined4 *)(lVar10 + 0x10);
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
              if (lVar13 == 0) goto LAB_07765a28;
              if (*(int *)(lVar13 + 0x18) == 0) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x20));
              uVar7 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x28) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x28),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x30));
              uVar7 = FUN_07a3b850((undefined4 *)(lVar10 + 0x10),0);
              if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x38) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x38),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x40));
              fStack00000000000000b8 = fVar23 * (float)(int)uStack00000000000000d4;
              uVar7 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x48) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x48),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x50));
              fStack00000000000000b8 = fVar22 * (float)iStack00000000000000d0;
              uVar7 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x58) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x58),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x60));
              fStack00000000000000b8 = fVar18 * (float)(int)uStack00000000000000d4;
              uVar7 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 10) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x68) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x68),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 0xb) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x70));
              fStack00000000000000b8 = fVar20 * (float)iStack00000000000000d0;
              uVar7 = FUN_07a5081c(&stack0x000000b8,0);
              if (*(uint *)(lVar13 + 0x18) < 0xc) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x78) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x78),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 0xd) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x80));
              uVar9 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                   *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = (uint)(uVar9 >> 0x1f) & 0xfffffffe;
              uVar7 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 0xe) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x88) = uVar7;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x88),uVar7);
              if (*(uint *)(lVar13 + 0x18) < 0xf) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)puVar5;
              thunk_FUN_044bb4b4((undefined8 *)(lVar13 + 0x90));
              iVar19 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                    *(undefined8 *)PTR_DAT_09f32c78);
              in_stack_000000b0._4_4_ = iVar19 << 1;
              uVar7 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
              if (*(uint *)(lVar13 + 0x18) < 0x10) goto LAB_07765a24;
              *(undefined8 *)(lVar13 + 0x98) = uVar7;
              thunk_FUN_044bb4b4();
              uVar7 = FUN_078b57fc(lVar13,0);
              lVar13 = *(long *)puVar4;
              lVar10 = *(long *)(lVar13 + 0x38);
              if (lVar10 == 0) {
                FUN_04482014(lVar13);
                lVar10 = *(long *)(lVar13 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_04481fb8();
              }
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar7,**(undefined8 **)(lVar10 + 0xb8),0);
            }
            uStack00000000000000bc = uStack00000000000000bc + 1;
          } while ((int)uStack00000000000000bc < *(int *)(lVar12 + 0x18));
        }
        FUN_077606dc(lVar15);
        return lVar15;
      }
    }
  }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


