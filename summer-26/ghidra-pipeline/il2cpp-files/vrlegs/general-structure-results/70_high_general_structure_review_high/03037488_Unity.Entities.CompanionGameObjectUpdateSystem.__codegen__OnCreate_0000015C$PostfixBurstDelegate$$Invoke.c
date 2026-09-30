/*
FUNCTION_NAME: Unity.Entities.CompanionGameObjectUpdateSystem.__codegen__OnCreate_0000015C$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03037488
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x030377bc) */
/* WARNING: Removing unreachable block (ram,0x030378bc) */

void Unity_Entities_CompanionGameObjectUpdateSystem___codegen__OnCreate_0000015C_PostfixBurstDelegate__Invoke
               (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 *param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ushort unaff_w22;
  ushort uVar12;
  long lVar13;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float unaff_s15;
  float fStack0000000000000020;
  ulong uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined4 uStack0000000000000088;
  uint uStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  ulong in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  ulong in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  ulong in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  ulong in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
code_r0x03037488:
  FUN_02210dd4(param_3,param_4,param_5);
  uVar21 = _fStack0000000000000020;
  uVar12 = unaff_w22;
LAB_030377cc:
  while( true ) {
    sVar2 = FUN_0303874c();
    if (sVar2 == 0) {
      FUN_0303890c();
      return;
    }
    sVar2 = *(short *)(unaff_x19 + 0x30);
    uVar5 = param_2;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      uVar5 = param_2;
    }
    unaff_w22 = FUN_026b8594(sVar2,0);
    param_2 = uVar5;
    if (unaff_w22 < 0x76) break;
    if (unaff_w22 == 0x76) {
      if ((ushort)(sVar2 - 0x61U) < 0x1a) {
        fVar19 = *(float *)(unaff_x19 + 0x24);
        fVar16 = (float)FUN_03038c70();
        uVar5 = (ulong)(uint)(fVar19 + fVar16);
      }
      else {
        uVar5 = FUN_03038c70();
      }
      fVar19 = *(float *)(unaff_x19 + 0x20);
      fVar16 = *(float *)(unaff_x19 + 0x24);
      if (*(char *)(unaff_x26 + 0x1e4) == '\0') {
        FUN_01ab69ac();
        *(undefined1 *)(unaff_x26 + 0x1e4) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x28;
      }
      fVar16 = (float)uVar5 - fVar16;
      fVar16 = fVar16 * fVar16;
      param_2 = (ulong)(uint)fVar16;
      if (**(float **)(lVar6 + 0xb8) < SQRT((fVar19 - fVar19) * (fVar19 - fVar19) + fVar16)) {
        lVar13 = *(long *)(unaff_x19 + 0x10);
        uVar23 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar22 = *(undefined4 *)(unaff_x19 + 0x24);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0303d8ac(&stack0x00000160,uVar23,uVar22,fVar19,uVar5,0);
        in_stack_00000188 = in_stack_00000168;
        in_stack_00000180 = in_stack_00000160;
        in_stack_00000198 = in_stack_00000178;
        in_stack_00000190 = in_stack_00000170;
        if (lVar13 == 0) goto LAB_03037870;
        in_stack_00000108 = in_stack_00000168;
        in_stack_00000100 = in_stack_00000160;
        in_stack_00000118 = in_stack_00000178;
        in_stack_00000110 = in_stack_00000170;
        param_2 = in_stack_00000170;
        FUN_02210dd4(lVar13,&stack0x00000100,*unaff_x29);
      }
      *(float *)(unaff_x19 + 0x20) = fVar19;
      *(float *)(unaff_x19 + 0x24) = (float)uVar5;
      uVar12 = unaff_w22;
    }
    else {
      if (unaff_w22 != 0x7a) goto switchD_03036d80_caseD_69;
      if (*unaff_x20 == 0) goto LAB_03037870;
      lVar6 = *(long *)(*unaff_x20 + 0x10);
      if (lVar6 != 0) {
        FUN_01ea4674(lVar6,&stack0x00000180,*(undefined8 *)PTR_DAT_03d297c0);
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000180;
        param_2 = uVar5;
      }
LAB_030370f4:
      FUN_0303890c();
      uVar12 = unaff_w22;
    }
  }
  switch(unaff_w22) {
  case 0x68:
    if ((ushort)(sVar2 - 0x61U) < 0x1a) {
      fVar19 = *(float *)(unaff_x19 + 0x20);
      fVar16 = (float)FUN_03038c70();
      uVar10 = (ulong)(uint)(fVar19 + fVar16);
    }
    else {
      uVar10 = FUN_03038c70();
    }
    fVar16 = *(float *)(unaff_x19 + 0x20);
    fVar19 = *(float *)(unaff_x19 + 0x24);
    uVar5 = (ulong)(uint)fVar19;
    if (*(char *)(unaff_x26 + 0x1e4) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x26 + 0x1e4) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x28;
    }
    fVar16 = (float)uVar10 - fVar16;
    fVar19 = (fVar19 - fVar19) * (fVar19 - fVar19);
    param_2 = (ulong)(uint)fVar19;
    if (SQRT(fVar19 + fVar16 * fVar16) <= **(float **)(lVar6 + 0xb8)) break;
    lVar13 = *(long *)(unaff_x19 + 0x10);
    uVar23 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar22 = *(undefined4 *)(unaff_x19 + 0x24);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0303d8ac(&stack0x00000160,uVar23,uVar22,uVar10,uVar5,0);
    in_stack_00000188 = in_stack_00000168;
    in_stack_00000180 = in_stack_00000160;
    in_stack_00000198 = in_stack_00000178;
    in_stack_00000190 = in_stack_00000170;
    if (lVar13 == 0) goto LAB_03037870;
    uVar17 = *unaff_x29;
    puVar8 = &stack0x00000120;
    in_stack_00000128 = in_stack_00000168;
    in_stack_00000120 = in_stack_00000160;
    in_stack_00000138 = in_stack_00000178;
    in_stack_00000130 = in_stack_00000170;
LAB_0303727c:
    param_2 = in_stack_00000170;
    in_stack_00000180 = in_stack_00000160;
    in_stack_00000188 = in_stack_00000168;
    in_stack_00000190 = in_stack_00000170;
    in_stack_00000198 = in_stack_00000178;
    FUN_02210dd4(lVar13,puVar8,uVar17);
    break;
  case 0x6c:
    uVar10 = FUN_030388c0();
    fVar16 = *(float *)(unaff_x19 + 0x20);
    fVar19 = *(float *)(unaff_x19 + 0x24);
    if (*(char *)(unaff_x26 + 0x1e4) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x26 + 0x1e4) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x28;
    }
    fVar16 = (float)uVar10 - fVar16;
    fVar19 = (float)uVar5 - fVar19;
    fVar19 = fVar19 * fVar19;
    param_2 = (ulong)(uint)fVar19;
    if (**(float **)(lVar6 + 0xb8) < SQRT(fVar16 * fVar16 + fVar19)) {
      lVar13 = *(long *)(unaff_x19 + 0x10);
      uVar23 = *(undefined4 *)(unaff_x19 + 0x20);
      uVar22 = *(undefined4 *)(unaff_x19 + 0x24);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0303d8ac(&stack0x00000160,uVar23,uVar22,uVar10,uVar5,0);
      in_stack_00000188 = in_stack_00000168;
      in_stack_00000180 = in_stack_00000160;
      in_stack_00000198 = in_stack_00000178;
      in_stack_00000190 = in_stack_00000170;
      if (lVar13 != 0) {
        uVar17 = *unaff_x29;
        puVar8 = &stack0x00000140;
        in_stack_00000148 = in_stack_00000168;
        in_stack_00000140 = in_stack_00000160;
        in_stack_00000158 = in_stack_00000178;
        in_stack_00000150 = in_stack_00000170;
        goto LAB_0303727c;
      }
      goto LAB_03037870;
    }
    break;
  case 0x6d:
    uVar9 = 0x6c;
    if (0x19 < (ushort)(sVar2 - 0x61U)) {
      uVar9 = 0x4c;
    }
    uVar22 = FUN_030388c0();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar22;
    *(int *)(unaff_x19 + 0x24) = (int)uVar5;
    *(undefined2 *)(unaff_x19 + 0x30) = uVar9;
    param_2 = uVar5;
    goto LAB_030370f4;
  case 0x71:
switchD_03036d80_caseD_71:
    fVar24 = *(float *)(unaff_x19 + 0x20);
    fVar25 = *(float *)(unaff_x19 + 0x24);
    uStack0000000000000030 = FUN_030388c0();
    fStack0000000000000020 = (float)uVar5;
    fVar19 = 0.0;
    fVar14 = 0.0;
    fVar16 = fStack0000000000000020;
    if (unaff_w22 == 99) {
      fVar19 = fStack0000000000000020;
      fVar14 = (float)FUN_030388c0();
      fVar16 = fVar19;
    }
    fVar15 = (float)FUN_030388c0();
    if (unaff_w22 == 0x71) {
      fVar14 = (float)uStack0000000000000030;
      fVar19 = fStack0000000000000020 - fVar16;
      uVar21 = CONCAT44(fStack0000000000000020,fVar14);
      uStack0000000000000030 = (ulong)(uint)(fVar24 + (fVar14 - fVar24) * unaff_s15);
      fStack0000000000000020 = fVar25 + (fStack0000000000000020 - fVar25) * unaff_s15;
      fVar14 = fVar15 + (fVar14 - fVar15) * unaff_s15;
      fVar19 = fVar16 + fVar19 * unaff_s15;
    }
    *(ulong *)(unaff_x19 + 0x20) = CONCAT44(fVar16,fVar15);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    param_2 = uStack0000000000000030;
    fStack00000000000000e0 = fVar24;
    fStack00000000000000e4 = fVar25;
    uStack00000000000000e8 = (int)uStack0000000000000030;
    fStack00000000000000ec = fStack0000000000000020;
    fStack00000000000000f0 = fVar14;
    fStack00000000000000f4 = fVar19;
    fStack00000000000000f8 = fVar15;
    fStack00000000000000fc = fVar16;
    uVar5 = FUN_030405a8(&stack0x000000e0,0);
    uVar12 = unaff_w22;
    if ((uVar5 & 1) == 0) {
      if (*unaff_x20 == 0) goto LAB_03037870;
      fStack00000000000000c0 = fVar24;
      fStack00000000000000c4 = fVar25;
      uStack00000000000000c8 = (int)uStack0000000000000030;
      fStack00000000000000cc = fStack0000000000000020;
      fStack00000000000000d0 = fVar14;
      fStack00000000000000d4 = fVar19;
      fStack00000000000000d8 = fVar15;
      fStack00000000000000dc = fVar16;
      FUN_02210dd4(*unaff_x20,&stack0x000000c0,*unaff_x29);
      param_2 = uStack0000000000000030;
    }
    goto LAB_030377cc;
  default:
    if (unaff_w22 == 99) goto switchD_03036d80_caseD_71;
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x70:
switchD_03036d80_caseD_69:
    if (unaff_w22 - 0x73 < 2) {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_03037870;
      param_2 = *(ulong *)(unaff_x19 + 0x20);
      uVar5 = param_2;
      _fStack0000000000000020 = param_2;
      if (((0 < *(int *)(lVar6 + 0x18)) && (uVar12 - 99 < 0x12)) &&
         ((1 << (ulong)(uVar12 - 99 & 0x1f) & 0x34001U) != 0)) {
        lVar6 = FUN_02210658(lVar6,*unaff_x25);
        if (lVar6 == 0) goto LAB_03037870;
        FUN_01ea4674(lVar6,&stack0x00000180,*(undefined8 *)PTR_DAT_03d297c0);
        uVar17 = in_stack_00000198;
        uVar10 = uVar21;
        if ((uVar12 != 0x71) && (uVar12 != 0x74)) {
          if ((*unaff_x20 == 0) || (lVar6 = FUN_02210658(*unaff_x20,*unaff_x25), lVar6 == 0))
          goto LAB_03037870;
          FUN_01ea4674(lVar6,&stack0x00000180,*(undefined8 *)PTR_DAT_03d297c0);
          uVar10 = in_stack_00000190;
        }
        uVar5 = *(ulong *)(unaff_x19 + 0x20);
        _fStack0000000000000020 =
             CONCAT44((float)(param_2 >> 0x20) +
                      ((float)((ulong)uVar17 >> 0x20) - (float)(uVar10 >> 0x20)),
                      (float)param_2 + ((float)uVar17 - (float)uVar10));
      }
      fVar16 = 0.0;
      uVar10 = 0;
      if (unaff_w22 == 0x73) {
        fVar16 = (float)FUN_030388c0();
        uVar10 = param_2;
      }
      fVar25 = (float)uVar10;
      fVar19 = (float)FUN_030388c0();
      fVar15 = (float)param_2;
      fVar14 = (float)uVar5;
      fVar24 = (float)(uVar5 >> 0x20);
      uVar10 = _fStack0000000000000020;
      if (unaff_w22 == 0x74) {
        fVar20 = (float)(_fStack0000000000000020 >> 0x20);
        fVar25 = fVar20 - fVar15;
        param_2 = (ulong)(uint)fVar25;
        fVar16 = fVar19 + ((float)_fStack0000000000000020 - fVar19) * unaff_s15;
        fVar25 = fVar15 + fVar25 * unaff_s15;
        uVar10 = CONCAT44(fVar24 + (fVar20 - fVar24) * 0.6666667,
                          fVar14 + ((float)_fStack0000000000000020 - fVar14) * 0.6666667);
        uVar21 = _fStack0000000000000020;
      }
      _fStack0000000000000020 = uVar21;
      *(ulong *)(unaff_x19 + 0x20) = CONCAT44(fVar15,fVar19);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000000a0 = uVar5;
      in_stack_000000a8 = uVar10;
      fStack00000000000000b0 = fVar16;
      fStack00000000000000b4 = fVar25;
      fStack00000000000000b8 = fVar19;
      fStack00000000000000bc = fVar15;
      uVar5 = FUN_030405a8(&stack0x000000a0,0);
      uVar21 = _fStack0000000000000020;
      uVar12 = unaff_w22;
      if ((uVar5 & 1) == 0) goto code_r0x03037458;
      goto LAB_030377cc;
    }
    uVar12 = unaff_w22;
    if (unaff_w22 != 0x61) goto LAB_030377cc;
    uVar17 = FUN_03038c70();
    uVar18 = FUN_03038c70();
    fVar16 = (float)FUN_03038c70();
    uVar3 = FUN_03038f8c();
    uVar4 = FUN_03038f8c();
    fVar19 = (float)FUN_030388c0();
    if (*(char *)(unaff_x26 + 0x1e4) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x26 + 0x1e4) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x28;
    }
    fVar14 = *(float *)(unaff_x19 + 0x20);
    fVar24 = *(float *)(unaff_x19 + 0x24);
    param_2 = (ulong)(uint)fVar24;
    if (**(float **)(lVar6 + 0xb8) <
        SQRT((float)uVar17 * (float)uVar17 + (float)uVar18 * (float)uVar18)) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_0303d198(fVar14,param_2,fVar19,uVar5,fVar16 * DAT_00d3893c,uVar17,uVar18,
                            uVar3 & 1,uVar4 & 1,0);
      plVar7 = (long *)FUN_0303f6bc(uVar17,0,0);
      puVar1 = PTR_DAT_03cbed20;
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d297b0) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03037644;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d297b0,0);
LAB_03037644:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          lVar6 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_030376a4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_030376a4:
          uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar10 & 1) == 0) goto LAB_03037744;
          lVar6 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d297b8) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03037708;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d297b8,0);
LAB_03037708:
          (*(code *)*puVar8)(&stack0x00000180,plVar7,puVar8[1]);
          in_stack_000001a8 = in_stack_00000188;
          in_stack_000001a0 = in_stack_00000180;
          in_stack_000001b8 = in_stack_00000198;
          in_stack_000001b0 = in_stack_00000190;
          if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000048 = in_stack_00000188;
          in_stack_00000040 = in_stack_00000180;
          in_stack_00000058 = in_stack_00000198;
          in_stack_00000050 = in_stack_00000190;
          param_2 = in_stack_00000190;
          FUN_02210dd4(*unaff_x20,&stack0x00000040,*unaff_x29);
        } while( true );
      }
      goto LAB_03037870;
    }
    if (*(char *)(unaff_x26 + 0x1e4) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x26 + 0x1e4) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x28;
    }
    fVar14 = fVar19 - fVar14;
    fVar24 = (float)uVar5 - fVar24;
    fVar24 = fVar24 * fVar24;
    param_2 = (ulong)(uint)fVar24;
    if (SQRT(fVar14 * fVar14 + fVar24) <= **(float **)(lVar6 + 0xb8)) goto LAB_030377c0;
    lVar13 = *(long *)(unaff_x19 + 0x10);
    uVar23 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar22 = *(undefined4 *)(unaff_x19 + 0x24);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0303d8ac(&stack0x00000160,uVar23,uVar22,fVar19,uVar5,0);
    in_stack_00000188 = in_stack_00000168;
    in_stack_00000180 = in_stack_00000160;
    in_stack_00000198 = in_stack_00000178;
    in_stack_00000190 = in_stack_00000170;
    if (lVar13 == 0) goto LAB_03037870;
    in_stack_00000068 = in_stack_00000168;
    in_stack_00000060 = in_stack_00000160;
    in_stack_00000078 = in_stack_00000178;
    in_stack_00000070 = in_stack_00000170;
    param_2 = in_stack_00000170;
    FUN_02210dd4(lVar13,&stack0x00000060,*unaff_x29);
    goto LAB_030377c0;
  }
  *(int *)(unaff_x19 + 0x20) = (int)uVar10;
  *(int *)(unaff_x19 + 0x24) = (int)uVar5;
  uVar12 = unaff_w22;
  goto LAB_030377cc;
code_r0x03037458:
  param_3 = *unaff_x20;
  if (param_3 == 0) {
LAB_03037870:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  param_5 = *unaff_x29;
  param_4 = (undefined8 *)&stack0x00000080;
  uStack000000000000008c = (uint)(uVar10 >> 0x20);
  param_2 = (ulong)uStack000000000000008c;
  uStack0000000000000088 = (undefined4)uVar10;
  fStack0000000000000080 = fVar14;
  fStack0000000000000084 = fVar24;
  fStack0000000000000090 = fVar16;
  fStack0000000000000094 = fVar25;
  fStack0000000000000098 = fVar19;
  fStack000000000000009c = fVar15;
  goto code_r0x03037488;
LAB_03037744:
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_030377a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_030377a4:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
LAB_030377c0:
  *(float *)(unaff_x19 + 0x20) = fVar19;
  *(float *)(unaff_x19 + 0x24) = (float)uVar5;
  unaff_x25 = (undefined8 *)PTR_DAT_03d297e0;
  goto LAB_030377cc;
}


