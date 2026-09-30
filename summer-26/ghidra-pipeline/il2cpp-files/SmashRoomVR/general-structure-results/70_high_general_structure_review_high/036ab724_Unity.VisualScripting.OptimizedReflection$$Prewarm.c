/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$Prewarm
ENTRY_POINT: 036ab724
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_OptimizedReflection__Prewarm
               (long param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  undefined1 uVar19;
  char cVar20;
  undefined4 *puVar21;
  long lVar22;
  uint in_w9;
  float *pfVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar36;
  byte unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  long *plVar37;
  undefined8 uVar38;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint uVar39;
  undefined8 *unaff_x29;
  float fVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  ulong uVar50;
  ulong uVar51;
  float fVar52;
  uint uVar53;
  ulong uVar54;
  float fVar55;
  float unaff_s8;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  byte bStack0000000000000078;
  byte bStack000000000000007c;
  float fStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  float fStack000000000000012c;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  long *in_stack_00000168;
  undefined8 in_stack_00000170;
  long *in_stack_00000178;
  undefined8 in_stack_00000188;
  long *in_stack_00000190;
  undefined8 in_stack_00000198;
  float fStack00000000000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  long in_stack_00000fb8;
  uint in_stack_0000104c;
  uint in_stack_00001068;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  float in_stack_00001080;
  undefined8 in_stack_00001088;
  char in_stack_00001094;
  float in_stack_00001098;
  uint uVar67;
  uint in_stack_0000109c;
  
code_r0x036ab724:
  if (in_w9 != 0) {
    param_3 = param_4;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_036afadc;
  fVar57 = *(float *)((long)unaff_x19 + 0x404);
  fVar59 = *(float *)(param_1 + 0x2c);
  fVar44 = (float)FUN_0396b17c(*(long *)(param_1 + 0x20),0);
  fVar58 = *_fStack00000000000000b0;
  fVar44 = fVar57 * (unaff_s8 / (float)unaff_w25) * param_2 * param_3 * fVar59 * fVar44;
  fVar57 = *_fStack00000000000000a8;
  iVar15 = (int)unaff_x24;
  uVar47 = extraout_x1_09;
  if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    uVar41 = *(int *)((long)unaff_x19 + 0x494) - 1;
    if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar59 = *(float *)(lVar24 + (long)(int)uVar41 * (long)iVar15 + 0x60);
    iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar45 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar24 = unaff_x19[0xca];
    fVar61 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar61 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
    fVar60 = *(float *)((long)unaff_x19 + 0x404);
    fVar62 = *(float *)(lVar24 + 0x2c);
    fVar44 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    fVar58 = *(float *)(lVar24 + 0x60);
    fVar57 = *(float *)(lVar24 + 100);
    fVar44 = fVar60 * (fVar59 / (float)iVar12) * fVar45 * fVar61 * fVar62 * fVar44;
    uVar47 = extraout_x1_10;
  }
  fVar45 = *(float *)(unaff_x19 + 0x9b);
  fVar59 = 0.0;
  fVar61 = 0.0;
  if ((0.0 < fVar45) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  fVar62 = *(float *)(unaff_x19 + 0x97);
  fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
  fVar60 = *(float *)(unaff_x19 + 200);
  if ((char)unaff_x19[0x1e] == '\0') {
    if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
    goto LAB_036afadc;
    FUN_0396b140(&stack0x000010a0,lVar24,0);
    unaff_x29[1] = unaff_x29[0x1d];
    *unaff_x29 = unaff_x29[0x1c];
    fVar59 = (float)FUN_0396af88(&stack0x00000fc0,0);
    uVar47 = extraout_x1_11;
  }
  puVar8 = PTR_DAT_03d9c920;
  fVar52 = *(float *)(unaff_x19 + 0x6c);
  fVar57 = (fStack00000000000000a4 - fVar58) - fVar57;
  bVar10 = true;
  if ((fVar52 <= fVar57) && (bVar10 = false, !NAN(fVar52))) {
    bVar10 = fVar52 == -1.0;
  }
  if (!bVar10) {
    fVar57 = fVar52;
  }
  fVar58 = 1.0;
  if (unaff_w28 != 0) {
    fVar58 = DAT_00b55374;
  }
  if (((fVar62 - (fVar65 - fVar45)) + fVar61 < fStack00000000000000c8) &&
     (ABS(fVar60) + fVar44 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) < fVar58 * fVar57)
     ) {
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036ed2b4();
    lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
    uVar38 = *(undefined8 *)PTR_DAT_03d9c8c8;
    memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
    FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar38);
    unaff_x29 = (undefined8 *)&stack0x00000fc0;
    uVar47 = extraout_x1_12;
  }
LAB_036ab9e8:
  lVar24 = *in_stack_00000190;
  if (lVar24 != 0) {
    lVar25 = *(long *)(lVar24 + 0x38);
    uVar51 = _fStack0000000000000140 & 0xffffffff;
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    uVar41 = *(uint *)(unaff_x19 + 0x95);
    lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar25 + 100) = uVar41;
    *(int *)(lVar25 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
LAB_036aba84:
      if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
      *(int *)(lVar24 + (long)(int)uVar41 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
      if (*(int *)(lVar24 + (long)(int)uVar41 * 0x5c + 0x24) == 1) goto LAB_036aba84;
    }
    if (in_stack_0000109c == 9) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar57 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar58 = *(float *)(unaff_x19 + 200);
      fVar44 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar57 = fStack0000000000000140 * fVar57 * fVar44;
      fVar44 = fVar57 * (float)(int)(fVar58 / fVar57);
      uVar50 = (ulong)(uint)fVar44;
      uVar47 = extraout_x1_13;
      if (fVar44 <= fVar58) {
        fVar44 = fVar58 + fVar57;
      }
LAB_036abca4:
      *(float *)(unaff_x19 + 200) = fVar44;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar58 = 1.0;
        }
        else {
          fVar58 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
        }
        fVar44 = *(float *)(unaff_x19 + 200);
        fVar59 = (float)FUN_0396af88(&stack0x00001050,0);
        if (unaff_x19[0x20] != 0) {
          fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = fVar44 + fVar57 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000140 *
                                     (fStack0000000000000138 + fVar58 * fVar59) +
                                     in_stack_000000f0 *
                                     (in_stack_000000e0._4_4_ +
                                     fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar44;
          uVar47 = extraout_x1_14;
          goto joined_r0x036abbe8;
        }
        goto LAB_036afadc;
      }
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000140 * fStack0000000000000138 +
               in_stack_000000f0 *
               (in_stack_000000e0._4_4_ +
               fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      uVar50 = (ulong)(uint)fVar44;
      fVar44 = *(float *)(unaff_x19 + 200) - fVar44;
      *(float *)(unaff_x19 + 200) = fVar44;
      if ((in_stack_0000109c == 0x200b) || (in_stack_00000070._4_4_ != 0)) {
        fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar57;
        fVar44 = fVar44 - fVar57;
        goto LAB_036abca4;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar57 = *(float *)(unaff_x19 + 200);
      fVar44 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                        in_stack_000000f0 *
                        (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar44;
joined_r0x036abbe8:
      if ((in_stack_0000109c == 0x200b) ||
         (uVar50 = (ulong)(uint)fVar57, in_stack_00000070._4_4_ != 0)) {
        fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar57;
        fVar44 = fVar44 + fVar57;
        goto LAB_036abca4;
      }
    }
    lVar24 = *in_stack_00000190;
    if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0)) goto LAB_036afadc;
    uVar41 = *unaff_x20;
    uVar16 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar16 <= uVar41) goto LAB_036afbe8;
    *(float *)(lVar25 + (long)(int)uVar41 * unaff_x24 + 0x144) = fVar44;
    uVar53 = in_stack_0000109c;
    uVar67 = in_stack_0000109c;
    if ((int)in_stack_0000109c < 0xd) {
      if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
      if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
         ((float)uVar41 == in_stack_00000090._4_4_)) goto LAB_036abd48;
    }
    else {
      if (1 < in_stack_0000109c - 0x2028) {
        if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
        uVar50 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar41 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
      }
LAB_036abd48:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar57 = *(float *)(unaff_x19 + 0x99);
        fVar44 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                             ,uVar47);
        }
        fVar57 = fVar57 - fVar44;
        if (((fStack0000000000000060 < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_036ed624(fVar57);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
          *(float *)(unaff_x19 + 0x9b) = fVar57 + *(float *)(unaff_x19 + 0x9b);
          puVar8 = PTR_DAT_03d9c920;
          lVar24 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar24 = *(long *)puVar8;
          }
          lVar25 = *(long *)(lVar24 + 0xb8);
          if (*(int *)(lVar25 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar25 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            FUN_0217900c(&stack0x000010a0,lVar25 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
            memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
            puVar8 = PTR_DAT_03d9c920;
            lVar24 = *(long *)PTR_DAT_03d9c920;
            memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000001d0,0x378);
            thunk_FUN_01b4f09c(*(long *)(lVar24 + 0xb8) + 0x818,0);
            lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
            *(float *)(lVar24 + 0x7bc) = fVar57 + *(float *)(lVar24 + 0x7bc);
            *(float *)(lVar24 + 0x800) = fVar57 + *(float *)(lVar24 + 0x800);
            uVar38 = *(undefined8 *)PTR_DAT_03d9c8c8;
            memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
            FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar38);
            unaff_x29 = (undefined8 *)&stack0x00000fc0;
            in_stack_00000070._4_4_ = unaff_w21;
          }
        }
      }
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc) - fVar58;
      fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar57 = fVar44;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
      fVar59 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_00001094 == '\0') {
        in_stack_00001098 = fVar57;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_00001094 = '\x01';
      }
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      uVar41 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar25 + 0x18) <= uVar41) goto LAB_036afbe8;
      lVar28 = unaff_x19[0x93];
      lVar31 = lVar25 + (long)(int)uVar41 * 0x5c;
      *(int *)(lVar31 + 0x34) = (int)lVar28;
      uVar16 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar28 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar16 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar16;
      *(uint *)(lVar31 + 0x38) = uVar16;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar31 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar16 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
      *(int *)(lVar31 + 0x40) = iVar12;
      *(int *)(lVar31 + 0x24) = (*(int *)(lVar31 + 0x3c) - *(int *)(lVar31 + 0x34)) + 1;
      *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
      uVar64 = *(undefined4 *)(lVar24 + (long)(int)uVar16 * (long)iVar15 + 0x11c);
      lVar25 = lVar25 + (long)(int)uVar41 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar44;
      *(undefined4 *)(lVar25 + 0x6c) = uVar64;
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      fVar59 = fVar59 - fVar58;
      uVar50 = (ulong)(uint)fVar59;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) =
           *(undefined4 *)
            (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar25 + 0x78) = fVar59;
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_036afadc;
      lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar28 + lVar31 * 0x5c;
      *(float *)(lVar25 + 0x44) =
           *(float *)(lVar25 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
      *(float *)(lVar25 + 0x5c) = in_stack_00000108._4_4_;
      if (*(int *)(lVar25 + 0x24) == 1) {
        *(int *)(lVar28 + lVar31 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      lVar32 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar16 = (uint)*(undefined8 *)(lVar25 + 0x18);
      if (uVar16 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      if ((*(char *)(lVar25 + lVar32 * unaff_x24 + 0x194) == '\0') &&
         (lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar16 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_036afbe8;
      lVar28 = lVar28 + lVar31 * 0x5c;
      fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (in_stack_000000f0 *
                (in_stack_000000e0._4_4_ +
                fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar57 = -fVar58;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar57 = fVar58;
      }
      *(float *)(lVar28 + 0x58) = *(float *)(lVar25 + lVar32 * unaff_x24 + 0x144) + fVar57;
      *(float *)(lVar28 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar28 + 0x54) = fVar44;
      *(float *)(lVar28 + 0x48) = fStack0000000000000064 + (fVar59 - fVar44);
      *(float *)(lVar28 + 0x4c) = fVar59;
      if ((int)in_stack_0000109c < 0x2d) {
        if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
          lVar24 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar12 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar12;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar12) {
              FUN_036ed7dc();
              lVar24 = unaff_x19[0x6d];
              if (lVar24 == 0) goto LAB_036afadc;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
                fVar57 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                  if ((in_stack_0000109c == 0x2029) || (fVar44 = 0.0, in_stack_0000109c == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar19 = 0;
                  fVar44 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000058._4_4_ *
                           (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                           in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar44) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_0000109c == 0x2029) || (fVar44 = 0.0, in_stack_0000109c == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar19 = 1;
                  fVar44 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar44);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar44;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar19;
                puVar8 = PTR_DAT_03d9c920;
                lVar24 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar24 = *(long *)puVar8;
                }
                uVar38 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar57;
                uVar50 = NEON_rev64(uVar38,4);
                unaff_x19[0x99] = uVar50;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_036ed2b4();
                FUN_036ed2b4();
                bStack0000000000000078 = 1;
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068 = 1;
                goto LAB_036a9250;
              }
              goto LAB_036afbe8;
            }
          }
          goto LAB_036afadc;
        }
        if (in_stack_0000109c == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
          in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar53 = 3;
        }
      }
      else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
    }
LAB_036ac2f4:
    uVar41 = *unaff_x20;
    if (uVar16 <= uVar41) goto LAB_036afbe8;
    if (*(char *)(lVar25 + (long)(int)uVar41 * unaff_x24 + 0x194) != '\0') {
      lVar25 = lVar25 + (long)(int)uVar41 * unaff_x24;
      uVar50 = *(ulong *)(lVar25 + 0x11c);
      uVar47 = *(ulong *)(in_stack_00000088 + 0x230);
      *(ulong *)(in_stack_00000088 + 0x230) =
           uVar47 ^ (uVar47 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar47 >> 0x20) < (float)(uVar50 >> 0x20)),
                              -(uint)((float)uVar47 < (float)uVar50));
      uVar47 = *(ulong *)(in_stack_00000088 + 0x238);
      uVar50 = *(ulong *)(lVar25 + 0x128);
      *(ulong *)(in_stack_00000088 + 0x238) =
           uVar47 ^ (uVar47 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar47 >> 0x20)),
                              -(uint)((float)uVar50 < (float)uVar47));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar53 || ((1 << (ulong)(uVar53 & 0x1f) & 0x2c00U) == 0)))) {
      lVar25 = *(long *)(lVar24 + 0x58);
      if (lVar25 == 0) goto LAB_036afadc;
      iVar12 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar25 + 0x18) < iVar12) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52e84((long *)(lVar24 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
        lVar24 = *in_stack_00000190;
        if (lVar24 == 0) goto LAB_036afadc;
      }
      lVar25 = *(long *)(lVar24 + 0x58);
      if (lVar25 == 0) goto LAB_036afadc;
      uVar16 = *(uint *)(unaff_x19 + 0x96);
      lVar28 = (long)(int)uVar16;
      uVar41 = *(uint *)(lVar25 + 0x18);
      unaff_x29 = (undefined8 *)&stack0x00000fc0;
      if (uVar41 <= uVar16) goto LAB_036afbe8;
      lVar31 = lVar25 + lVar28 * 0x14;
      fVar44 = *(float *)(lVar31 + 0x30);
      uVar50 = (ulong)(uint)fVar44;
      *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar57 = fVar44;
      }
      *(float *)(lVar31 + 0x30) = fVar57;
      uVar53 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar53 == 0 && uVar16 == 0) {
        *(uint *)(lVar25 + (ulong)uVar16 * 0x14 + 0x20) = uVar53;
      }
      else {
        uVar39 = uVar53 - 1;
        if (0 < (int)uVar53) {
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar24 + 0x18) <= uVar39) goto LAB_036afbe8;
          if (uVar16 != *(uint *)(lVar24 + (ulong)uVar39 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar16 - 1 < uVar41) {
              *(uint *)(lVar25 + 0x20 + (long)(int)(uVar16 - 1) * 0x14 + 4) = uVar39;
              *(uint *)(lVar25 + 0x20 + lVar28 * 0x14) = uVar53;
              goto LAB_036ac564;
            }
            goto LAB_036afbe8;
          }
        }
        if ((float)uVar53 == in_stack_00000090._4_4_) {
          *(float *)(lVar25 + lVar28 * 0x14 + 0x24) = in_stack_00000090._4_4_;
        }
      }
    }
LAB_036ac564:
    puVar8 = PTR_DAT_03d9c920;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
    if ((in_stack_00000070._4_4_ == 0) &&
       (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) && (in_stack_0000109c != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
        if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
             (0x1d < in_stack_0000109c - 0xa961)) || (uVar47 = FUN_036fbce8(0), (uVar47 & 1) != 0))
           && ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
                (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
        goto LAB_036ac6e8;
        lVar24 = FUN_036fbb7c(0);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_036afadc;
        uVar41 = FUN_0254f914(*(long *)(lVar24 + 0x10),in_stack_0000109c,
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((int)in_stack_00000090._4_4_ <= (int)*unaff_x20) {
          if ((uVar41 & 1) == 0) {
LAB_036ac8e4:
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_036ed2b4();
            goto LAB_036ac91c;
          }
LAB_036ac84c:
          if ((uint)unaff_x26 != unaff_w27 || ((bStack0000000000000078 ^ 0xff) & 1) != 0)
          goto LAB_036ac920;
          if (in_stack_00000070._4_4_ != 0) goto LAB_036ac868;
          goto LAB_036ac8a0;
        }
        lVar24 = FUN_036fbb7c(0);
        if (((lVar24 == 0) || (*in_stack_00000190 == 0)) ||
           (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
        if (*(long *)(lVar24 + 0x18) == 0) goto LAB_036afadc;
        uVar47 = FUN_0254f914(*(long *)(lVar24 + 0x18),
                              *(undefined2 *)
                               (lVar25 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20),
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((uVar41 & 1) != 0) goto LAB_036ac84c;
        if ((uVar47 & 1) == 0) goto LAB_036ac8e4;
        if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
        if (in_stack_00000070._4_4_ != 0) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
      }
      else {
        if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
LAB_036ac6f8:
        if ((bStack000000000000007c & 1) == 0 && in_stack_0000109c == 0xad) goto LAB_036ac868;
LAB_036ac8a0:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
      }
      bStack0000000000000078 = 1;
    }
    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_036ac6e8:
      if ((bStack0000000000000078 & 1) != 0) {
        if (in_stack_00000070._4_4_ == 0) goto LAB_036ac6f8;
LAB_036ac868:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        goto LAB_036ac8a0;
      }
LAB_036ac91c:
      bStack0000000000000078 = 0;
    }
    else {
      if (((in_stack_0000109c - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_0000109c == 0xa0 || (in_stack_0000109c == 0x2060)))) goto LAB_036ac660;
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      bStack0000000000000078 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_036ac920:
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036ed2b4();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_036a9250:
    fVar57 = (float)uVar51;
    in_stack_00001068 = in_stack_00001068 + 1;
    lVar24 = unaff_x19[0x8f];
    if (lVar24 != 0) {
      if ((int)in_stack_00001068 < (int)*(uint *)(lVar24 + 0x18)) {
        if (*(uint *)(lVar24 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
        in_stack_0000109c = *(uint *)(lVar24 + (long)(int)in_stack_00001068 * 0xc + 0x20);
        if (in_stack_0000109c == 0) goto LAB_036acbd8;
        if (5 < in_stack_00000188._4_4_) {
          uVar38 = FUN_0303de64(&stack0x0000109c,0);
          uVar17 = FUN_0303de64(&stack0x00001068,0);
          uVar38 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar38,
                                *(undefined8 *)PTR_DAT_03d9c940,uVar17,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2e04(uVar38,0);
          in_stack_00001088 = CONCAT44(3,*unaff_x20);
        }
        if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_0000109c == 0x3c))
        goto code_r0x036a8fdc;
        if ((*in_stack_00000190 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
            thunk_FUN_01b4f09c(in_stack_00000178);
            goto LAB_036a9064;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
LAB_036acbd8:
      fVar57 = (float)uVar50;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar57 = DAT_00b552b8,
         DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar44 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar57 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar58 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
          if (fVar58 <= DAT_00b55428) {
            fVar58 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x48) = fVar57;
          fVar58 = (fVar57 + fVar58) * 20.0 + 0.5;
          fVar57 = DAT_00b556b4;
          if (fVar58 != INFINITY) {
            fVar57 = (float)(int)fVar58 / 20.0;
          }
          if (fVar44 <= fVar57) {
            fVar57 = fVar44;
          }
          goto LAB_036acc94;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar38 = FUN_0303de64(in_stack_00000038,0);
        uVar17 = FUN_03052638(_fStack0000000000000040,0);
        uVar38 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar38,*(undefined8 *)PTR_DAT_03d9c938
                              ,uVar17,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar38,0);
      }
      puVar9 = PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar67 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_036acd60;
      }
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar9;
      }
      plVar37 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
      iVar15 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0))
      goto LAB_036afadc;
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa40c(lVar24 + 0x20,0,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_00000108._4_4_ =
           **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      in_stack_000000f8 =
           *(long **)(*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                     + 1);
      lVar24 = unaff_x19[0xe3];
      _fStack00000000000000c8 = (ulong)in_stack_000000f8;
      fStack00000000000000d0 = in_stack_00000108._4_4_;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_036afbe8;
          uVar38 = *(undefined8 *)(lVar24 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000190 + 0x58), lVar25 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            fVar57 = *(float *)(lVar25 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar57 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
          fVar57 = (0.0 - fVar57) - fStack0000000000000020;
        }
        else if (iVar12 == 0x200) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
          fStack00000000000000d0 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          uVar38 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar24 = *(long *)(*in_stack_00000190 + 0x58), lVar24 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
            fVar57 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
            fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_036ad288;
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
          uVar38 = *(undefined8 *)(lVar24 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000190 + 0x58), lVar25 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            in_stack_00001098 = *(float *)(lVar25 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
          fVar57 = fStack0000000000000024 + (0.0 - in_stack_00001098);
        }
LAB_036ad278:
        _fStack00000000000000c8 =
             CONCAT44((float)((ulong)uVar38 >> 0x20) + 0.0,(float)uVar38 + fVar57);
      }
      else if (iVar12 == 0x800) {
        if (lVar24 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
        fVar57 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30)
                      ) * 0.5 + 0.0);
        fStack00000000000000d0 = fVar57;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
            uVar38 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            fStack00000000000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_036ad278;
          }
          goto LAB_036afbe8;
        }
        if (iVar12 == 0x2000) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
          fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar24 + 0x24) +
                        (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar57);
          fStack00000000000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        }
      }
LAB_036ad288:
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      uVar38 = FUN_03afb088(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar8);
      }
      uVar47 = FUN_03922f24(uVar38,0,0);
      lVar24 = FUN_036dfed8();
      if (lVar24 == 0) goto LAB_036afadc;
      FUN_0392a7f0(lVar24,0);
      *(float *)(unaff_x19 + 0xe2) = fVar57;
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      iVar12 = FUN_03afa68c(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      fVar44 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
      uVar64 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
      }
      if (DAT_03ff747c == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03d9c888);
        DAT_03ff747c = '\x01';
      }
      puVar8 = PTR_DAT_03d9c888;
      lVar24 = *(long *)PTR_DAT_03d9c888;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar8;
      }
      puVar21 = *(undefined4 **)(lVar24 + 0xb8);
      uVar51 = (ulong)(uint)puVar21[1];
      uVar50 = (ulong)(uint)puVar21[2];
      uVar54 = (ulong)(uint)puVar21[3];
      FUN_036c214c(*puVar21,uVar51,uVar50,uVar54,&stack0x00001070,0x4000ffff,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar24 = *in_stack_00000190;
      if (lVar24 == 0) goto LAB_036afadc;
      uVar41 = *unaff_x20;
      if ((int)uVar41 < 1) {
        in_stack_000000e0._4_4_ = 0.0;
        iVar15 = 0;
        goto LAB_036af524;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      fVar57 = ABS(fVar57);
      fVar58 = 1.0;
      if ((uVar47 & 1) == 0) {
        fVar58 = fVar57;
      }
      if (lVar24 == 0) goto LAB_036afadc;
      bVar11 = false;
      bVar7 = false;
      _fStack0000000000000138 = 0;
      bVar10 = false;
      in_stack_000000e0._4_4_ = 0.0;
      fStack000000000000002c = 0.0;
      in_stack_00000170._4_4_ = 0.0;
      in_stack_00000070._4_4_ = 0;
      lVar25 = 0x2e0;
      fVar61 = 0.0;
      fVar59 = 0.0;
      fStack00000000000000d4 = fStack00000000000000e8;
      fStack00000000000000d8 = fStack00000000000000ec;
      fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
      _bStack0000000000000078 = fStack00000000000000ec;
      fStack00000000000000a4 = fStack00000000000000ec;
      fStack00000000000000a8 = fStack00000000000000e8;
      fStack0000000000000110 = 0.0;
      in_stack_00000090._4_4_ = 0.0;
      fStack000000000000004c = 0.0;
      fStack00000000000000b0 = 0.0;
      fStack0000000000000040 = 0.0;
      _bStack000000000000007c = in_stack_000000c0._4_4_;
      fStack0000000000000080 = fStack00000000000000e8;
      fStack00000000000000a0 = (float)in_stack_000000c0._4_4_;
      uVar16 = 1;
      uVar53 = 0;
      goto LAB_036ad4b0;
    }
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar47 = FUN_036e7318();
  if (((uVar47 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar67 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar41 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar28 = (long)(int)uVar41;
  cVar20 = *(char *)(lVar24 + lVar28 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar25 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar41) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar24 + lVar28 * unaff_x24 + 0x30) = unaff_x19[0xca];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 0;
      *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      uVar41 = *unaff_x20;
      if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar24 + (long)(int)uVar41 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar41 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*in_stack_00000178 == 0) || (lVar31 = FUN_036c835c(*in_stack_00000178,0), lVar31 == 0))
      goto LAB_036afadc;
      uVar38 = FUN_0262f3a4(lVar31,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
      *(undefined8 *)(lVar24 + lVar28 * unaff_x24 + 0x30) = uVar38;
      thunk_FUN_01b4f09c();
      uVar41 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  if (((int)uVar41 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
    lVar24 = lVar24 + (long)(int)uVar41 * (long)iVar15;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar41 + 1;
    uVar67 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar41 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar41 >> 4 & 1) == 0) {
      if ((uVar41 >> 3 & 1) == 0) {
        fVar44 = 1.0;
        if ((uVar41 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar47 = FUN_02fdd9e8(in_stack_0000109c,0);
          if ((uVar47 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar41 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar41 & 0xffff;
            fVar44 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar44 = 1.0;
        if ((uVar47 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar41 = FUN_02fdddc0(in_stack_0000109c,0);
          goto LAB_036a9658;
        }
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fdd9e8(in_stack_0000109c,0);
      fVar44 = 1.0;
      if ((uVar47 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar41 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar44 = 1.0;
        in_stack_0000109c = uVar41 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    uVar67 = in_stack_0000109c;
    if (*in_stack_000000f8 == 0) goto LAB_036a9250;
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000178 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    thunk_FUN_01b4f09c(in_stack_00000178);
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000168 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    thunk_FUN_01b4f09c();
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    uVar16 = *unaff_x20;
    uVar41 = *(uint *)(lVar24 + 0x18);
    if (uVar41 <= uVar16) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar24 + (long)(int)uVar16 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar24 = unaff_x19[0x20];
    }
    else {
      lVar25 = unaff_x19[0x8f];
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar25 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar41 <= uVar16 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar58 = *(float *)(lVar24 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar24 = *in_stack_00000178;
    }
    if (lVar24 == 0) goto LAB_036afadc;
    fVar61 = (float)FUN_0396ac34(lVar24 + 0x50,0);
    fVar59 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar59 = 1.0;
    }
    fVar60 = 0.0;
    fVar45 = 0.0;
    if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar60 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar24 = unaff_x19[0xc9];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
    fVar62 = *(float *)((long)unaff_x19 + 0x404);
    fVar65 = *(float *)(lVar24 + 0x2c);
    fVar57 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar52 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar42 = *(float *)((long)unaff_x19 + 0x404);
    fVar40 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar24 = unaff_x19[0x6d];
    if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar25 + 0x2c) = 0;
    fVar59 = ((fVar44 * fVar58) / (float)iVar12) * fVar61 * fVar59;
    fVar57 = fVar59 * fVar62 * fVar65 * fVar57;
    *(float *)(lVar25 + 0x160) = fVar57;
    uVar41 = *(uint *)(unaff_x19 + 0x24);
    fVar40 = fVar59 * fVar52 * fVar42 * fVar40;
    fStack000000000000012c = fVar60;
    if (uVar41 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar25 = unaff_x19[0xe1];
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar41) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (long)(int)uVar41 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar25 + 0x10c);
    }
FUN_036a9b34:
    unaff_x29 = (undefined8 *)&stack0x00000fc0;
    fVar58 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar58 = fVar57;
    }
  }
  else {
    fVar44 = 1.0;
    if (iVar12 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar12 == 1) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar24 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_036afadc;
      lVar24 = FUN_02b59714(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar8 = PTR_DAT_03d9c920;
      if (lVar24 == 0) {
        unaff_x29 = (undefined8 *)&stack0x00000fc0;
        uVar67 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 0x3c) {
        in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar28 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar59 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar58 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar58 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar58 = (fVar57 / (float)iVar12) * fVar59 * fVar58;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar59 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar24 + 0x20),0);
        fVar62 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        fVar52 = *(float *)(lVar24 + 0x2c);
        fVar65 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar42 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar49 = *(float *)((long)unaff_x19 + 0x404);
        fVar40 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar40 = fVar58 * fVar42 * fVar49 * fVar40;
        fVar59 = (fVar57 / (float)iVar12) * fVar61 * fVar59;
        fVar57 = fVar59 * (fVar60 / fVar62) * fVar52 * fVar65;
        fVar59 = fVar59 / fVar57;
        fVar45 = fVar59 * fVar45;
        fVar58 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar59 = fVar59 * fVar58;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar59 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        fVar60 = *(float *)(lVar24 + 0x2c);
        fVar61 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        fVar62 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar65 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar52 = *(float *)((long)unaff_x19 + 0x404);
        fVar40 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar40 = fVar58 * fVar65 * fVar52 * fVar40;
        fVar57 = (fVar57 / (float)iVar12) * fVar59 * fVar61 * fVar60 * fVar62;
        fVar59 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar24;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar24);
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar57;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar25;
      fStack000000000000012c = fVar59;
      goto FUN_036a9b34;
    }
    lVar24 = *in_stack_00000190;
    fVar58 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar58 = fVar57;
    }
    fVar40 = 0.0;
    if (lVar24 == 0) goto LAB_036afadc;
    fVar45 = 0.0;
    fStack000000000000012c = 0.0;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar41 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  unaff_x29[0x1d] = in_stack_000001d8;
  unaff_x29[0x1c] = in_stack_000001d0;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  uVar17 = unaff_x29[0x1d];
  uVar38 = unaff_x29[0x1c];
  lVar24 = lVar24 + (long)(int)uVar41 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar24 + 0x184) = uVar17;
  *(undefined8 *)(lVar24 + 0x17c) = uVar38;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar24,0);
  puVar8 = StringLiteral_455;
  unaff_x29[0x13] = in_stack_000001d8;
  unaff_x29[0x12] = in_stack_000001d0;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar41 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar41 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar41 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar41 << 0x20;
    fVar61 = 0.0;
    fVar59 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar53 = *unaff_x20;
    uVar16 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar53 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar53 + 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar53 + 1) * (long)iVar15 + 0x30);
      if ((((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0)) ||
         (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_036afadc;
      uVar47 = FUN_02630bd0(lVar25,uVar16 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar64 = 0;
      if ((uVar47 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar41 << 0x20;
        fVar61 = 0.0;
        fVar59 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar64 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar59 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar61 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar41 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar41,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar53 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000138 = (ulong)uVar41 << 0x20;
      fVar61 = 0.0;
      fVar59 = 0.0;
    }
    if (0 < (int)uVar53) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar53 - 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar53 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar25 = *(long *)(*in_stack_00000178 + 0x128), lVar25 == 0 ||
          (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)))) goto LAB_036afadc;
      uVar47 = FUN_02630bd0(lVar25,*(uint *)(lVar24 + 0x28) | uVar16 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar47 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar46 = (undefined4)_fStack0000000000000138;
        fVar59 = (float)FUN_036d2d10(fVar59,fVar61,_fStack0000000000000138 & 0xffffffff,uVar64,
                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar46);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar62 = *(float *)(unaff_x19 + 200);
    fVar60 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar62 = fVar62 - fVar58 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar62;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar62 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar60 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar60 != 0.0) {
    fVar62 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar65 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar60 * 0.5 - fVar58 * (fVar62 * 0.5 + fVar65));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar20 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar47 = FUN_0391f968(lVar24,0,0);
    fVar62 = 0.0;
    if ((uVar47 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar47 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar62 = 0.0;
      if ((uVar47 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar65 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar62 = (float)FUN_03900954(*in_stack_00000168,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar62 = fVar62 * fVar60 * fVar65 * 0.25;
        if (fVar60 < in_stack_00000170._4_4_ + fVar62) {
          in_stack_00000170._4_4_ = fVar60 - fVar62;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_000000e0._4_4_ = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar47 = FUN_0391f968(lVar24,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar47 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar47 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar47 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        uVar47 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar47 & 1) != 0) {
          lVar24 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar24 == 0) goto LAB_036afadc;
          fVar60 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar65 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar62 = (float)FUN_03900954(*in_stack_00000168,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar62 = fVar62 * fVar60 * fVar65 * 0.25;
          if (fVar60 < in_stack_00000170._4_4_ + fVar62) {
            in_stack_00000170._4_4_ = fVar60 - fVar62;
          }
          goto LAB_036aa254;
        }
      }
    }
    fVar62 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar60 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar58 * (fVar59 + ((fVar60 - in_stack_00000170._4_4_) - fVar62));
  fVar59 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar40 + fVar58 * (fVar61 + in_stack_00000170._4_4_ + fVar59)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar59 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar52 = fVar65 - fVar58 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar59);
  fVar59 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar60 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar58 * (fVar62 + fVar62 + in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar59);
  uVar47 = extraout_x1;
  fVar59 = fStack0000000000000124;
  fVar61 = fVar60;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar20 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar42 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar59 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar55 = fVar42 * fVar58 * (fVar62 + in_stack_00000170._4_4_ + fVar59);
    fVar59 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar61 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar65 = fVar65 + 0.0;
    fVar52 = fVar52 + 0.0;
    fVar49 = fStack0000000000000124 + fVar55;
    fVar42 = fVar42 * fVar58 * (((fVar59 - fVar61) - in_stack_00000170._4_4_) - fVar62);
    fVar61 = fVar60 + fVar42;
    fVar43 = (fVar55 - fVar42) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar42) - fVar43;
    fVar60 = (fVar60 + fVar55) - fVar43;
    uVar47 = extraout_x1_04;
    fVar59 = fVar49 - fVar43;
    fVar61 = fVar61 - fVar43;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar58;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar55 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar49 = fVar52;
    fStack0000000000000114 = fVar65;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar63 = (fVar52 + fVar65) * 0.5;
    fVar56 = (fVar60 + fStack0000000000000124) * 0.5;
    fVar65 = fVar65 - fVar63;
    fStack0000000000000110 = 0.0;
    fVar48 = fVar65;
    fVar59 = (float)FUN_03911ddc(fVar59 - fVar56,_fStack0000000000000080,0);
    fVar59 = fVar56 + fVar59;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar52 = fVar52 - fVar63;
    fVar42 = 0.0;
    fVar49 = fVar52;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar56,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar56 + fStack0000000000000124;
    fVar42 = fVar42 + 0.0;
    fVar55 = 0.0;
    fVar60 = (float)FUN_03911ddc(fVar60 - fVar56,_fStack0000000000000080,0);
    fVar60 = fVar56 + fVar60;
    fVar65 = fVar63 + fVar65;
    fVar55 = fVar55 + 0.0;
    fVar43 = 0.0;
    fVar61 = (float)FUN_03911ddc(fVar61 - fVar56,_fStack0000000000000080,0);
    fVar61 = fVar56 + fVar61;
    fVar52 = fVar63 + fVar52;
    fVar43 = fVar43 + 0.0;
    uVar47 = extraout_x1_00;
    fVar49 = fVar63 + fVar49;
    fStack0000000000000114 = fVar63 + fVar48;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar24 = *(long *)(*in_stack_00000190 + 0x38);
  uVar51 = (ulong)(uint)fVar58;
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar24 + 0x120) = fVar49;
  *(float *)(lVar24 + 0x124) = fVar42;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x110) = fVar59;
  *(float *)(lVar24 + 0x114) = fStack0000000000000114;
  *(float *)(lVar24 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar60;
  *(float *)(lVar24 + 300) = fVar65;
  *(float *)(lVar24 + 0x130) = fVar55;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar61;
  *(float *)(lVar24 + 0x138) = fVar52;
  *(float *)(lVar24 + 0x13c) = fVar43;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar41 = *unaff_x20;
  unaff_x26 = (long)(int)uVar41;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar25 = lVar24 + unaff_x26 * unaff_x24;
  *(int *)(lVar25 + 0x140) = (int)unaff_x19[200];
  fVar61 = *(float *)(unaff_x19 + 0x9b);
  uVar50 = (ulong)(uint)fVar61;
  fVar59 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar25 + 0x15c) = (fVar60 - fStack0000000000000124) / (fStack0000000000000114 - fVar49)
  ;
  *(float *)(lVar25 + 0x14c) = (fVar40 - fVar61) + fVar59;
  fVar45 = fVar45 * fVar58;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fVar44;
    fStack000000000000012c = (fStack000000000000012c * fVar58) / fVar44;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar58;
  }
  unaff_w27 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar41 == unaff_w27)) {
    fStack000000000000012c = fVar59 + fStack000000000000012c;
    fVar45 = fVar59 + fVar45;
    fVar65 = fStack000000000000012c;
    fVar60 = fVar45;
    if (fVar59 != 0.0) {
      fVar60 = (fVar45 - fVar59) / *(float *)((long)unaff_x19 + 0x404);
      fVar65 = (fStack000000000000012c - fVar59) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar60 <= fVar45) {
        fVar60 = fVar45;
      }
      if (fStack000000000000012c <= fVar65) {
        fVar65 = fStack000000000000012c;
      }
    }
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    fVar59 = fVar60;
    if (fVar60 <= *(float *)(unaff_x19 + 0x99)) {
      fVar59 = *(float *)(unaff_x19 + 0x99);
    }
    fVar52 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
      fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar52;
    *(float *)(unaff_x19 + 0x99) = fVar59;
    *(float *)(lVar24 + 0x154) = fVar60;
    *(float *)(lVar24 + 0x158) = fVar65;
    *(float *)(lVar24 + 0x148) = fVar45 - fVar61;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar61;
    *(float *)(lVar24 + 0x150) = fStack000000000000012c - fVar61;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar61;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar59;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar61 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar44 = (fVar58 * fVar61) / fVar44;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar59 <= fVar44) {
        fVar59 = fVar44;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar59;
      uVar47 = extraout_x1_01;
    }
    if ((float)uVar50 == 0.0) {
      fVar44 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar45) {
        fVar44 = fVar45;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar44;
    }
  }
  else {
    fVar44 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar44;
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar44 = fVar44 - fVar61;
    *(float *)(lVar24 + 0x148) = fVar44;
    *(float *)(lVar24 + 0x158) = fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar44;
    fVar59 = fVar59 - fVar61;
    *(float *)(lVar24 + 0x150) = fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
  }
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0)) goto LAB_036afadc;
  uVar41 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)uVar41 * unaff_x24;
  *(undefined1 *)(lVar25 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  uVar67 = in_stack_0000109c;
  if (((in_stack_0000109c != 9) &&
      ((((unaff_w21 != 0 || (in_stack_0000109c == 3)) || (in_stack_0000109c == 0x200b)) ||
       (in_stack_0000109c == 0xad)))) &&
     (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar44 = (float)uVar50;
      fVar57 = 0.0;
      if ((0.0 < fVar44) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar50 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar44)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar41;
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar47 = FUN_0391f968(lVar24,0,0);
        if ((uVar47 & 1) != 0) {
          plVar37 = (long *)unaff_x19[0x5d];
          uVar38 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar37 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar37 + 0x558))(plVar37,uVar38,*(undefined8 *)(*plVar37 + 0x560));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_036afadc;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar37 = (long *)unaff_x19[0x5d];
          if (plVar37 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar37 + 0x7d8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_036aad90;
      }
    }
    if ((((0x22 < in_stack_0000109c - 0x2007) ||
         ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_0000109c - 10)) && (in_stack_0000109c != 0xa0)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      auVar66 = FUN_02fdea78(in_stack_0000109c,0);
      uVar47 = auVar66._8_8_;
      if ((auVar66._0_8_ & 1) == 0) goto LAB_036ab1ec;
    }
    if (((in_stack_0000109c != 0xad) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0x2060)) {
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
LAB_036ab1ec:
    if (in_stack_0000109c != 0xa0) goto LAB_036ab6c0;
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    goto LAB_036ab5c8;
  }
  *(undefined1 *)(lVar25 + 0x194) = 1;
  pfVar23 = _fStack00000000000000a8;
  pfVar27 = _fStack00000000000000b0;
  if (unaff_w23 != 0) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar27 = (float *)(lVar24 + 0x60);
    pfVar23 = (float *)(lVar24 + 100);
  }
  fVar59 = *pfVar27;
  fVar61 = *pfVar23;
  fVar44 = *(float *)(unaff_x19 + 0x6c);
  fVar45 = *(float *)(unaff_x19 + 200);
  in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar59) - fVar61;
  bVar10 = true;
  if ((fVar44 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar44))) {
    bVar10 = fVar44 == -1.0;
  }
  if (!bVar10) {
    in_stack_00000108._4_4_ = fVar44;
  }
  fVar44 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar44 = (float)FUN_0396af88(&stack0x00001050,0);
    uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    uVar47 = extraout_x1_02;
  }
  fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_stack_0000109c != 0xad) {
    fVar57 = fVar58;
  }
  fVar52 = (float)uVar50;
  fVar58 = 0.0;
  if ((0.0 < fVar52) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar41 = *unaff_x20;
  fVar58 = (*(float *)(unaff_x19 + 0x97) - (fVar65 - fVar52)) + fVar58;
  if (fStack00000000000000c8 < fVar58) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar41;
    }
    puVar8 = PTR_DAT_03d9c920;
    uVar38 = DAT_00b92750;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar40 = *(float *)(unaff_x19 + 0x59);
      if (((fVar40 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar52)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar57 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar58) / (float)(int)unaff_x19[0x95]) /
                 in_stack_00000058._4_4_;
        if (fVar57 <= fVar40) {
          fVar57 = fVar40;
        }
        goto LAB_036ad184;
      }
      fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar58 = *(float *)(unaff_x19 + 0x4a);
      uVar50 = (ulong)(uint)fVar58;
      if ((fVar58 < fVar52) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar57 = (fVar52 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar57 <= DAT_00b55428) {
          fVar57 = DAT_00b55428;
        }
        fVar44 = (fVar52 - fVar57) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar52;
        fVar57 = DAT_00b556b4;
        if (fVar44 != INFINITY) {
          fVar57 = (float)(int)fVar44 / 20.0;
        }
        if (fVar57 <= fVar58) {
          fVar57 = fVar58;
        }
        goto LAB_036acc94;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar8;
      }
      lVar25 = *(long *)(lVar24 + 0xb8);
      if (*(int *)(lVar25 + 0x1580) == 0) goto LAB_036acbbc;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar25 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      }
      FUN_0217900c(&stack0x000010a0,lVar25 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
      memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
      iVar12 = FUN_036ecf20();
      goto LAB_036ab020;
    default:
      goto switchD_036aaa24_caseD_2;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      break;
    case 5:
      if ((uVar41 != 0) && (-1 < (int)in_stack_00001068)) {
        fVar57 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x00000fc0;
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if (fVar57 - fVar65 <= fStack00000000000000c8) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar50 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(uVar50,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_036a9250;
        }
        goto LAB_036aad90;
      }
      in_stack_00001068 = 0xffffffff;
      *unaff_x20 = 0;
      goto LAB_036ab538;
    case 6:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar47 = FUN_0391f968(lVar24,0,0);
      if ((uVar47 & 1) != 0) {
        plVar37 = (long *)unaff_x19[0x5d];
        uVar38 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar37 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar37 + 0x558))(plVar37,uVar38,*(undefined8 *)(*plVar37 + 0x560));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_036afadc;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar37 = (long *)unaff_x19[0x5d];
        if (plVar37 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar37 + 0x7d8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      goto LAB_036aad90;
    }
LAB_036aabc0:
    in_stack_00001068 = FUN_036ecf20();
    goto LAB_036aad90;
  }
switchD_036aaa24_caseD_2:
  puVar8 = PTR_DAT_03d9c920;
  fVar58 = 1.0 - fVar60;
  uVar50 = (ulong)(uint)fVar58;
  fVar44 = ABS(fVar45) + fVar44 * fVar58 * fVar57;
  fVar57 = 1.0;
  if (unaff_w28 != 0) {
    fVar57 = DAT_00b55374;
  }
  fVar45 = fVar57 * in_stack_00000108._4_4_;
  if (fVar44 <= fVar45) goto LAB_036ab54c;
  if (((char)unaff_x19[0x5b] == '\0') || (uVar41 == *(uint *)(unaff_x19 + 0x93))) {
    if (((char)unaff_x19[0x47] == '\0') ||
       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_036aab40:
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar24 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar8;
        }
        lVar25 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar25 + 0x1580) == 0) goto LAB_036acbbc;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar25 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000550,&stack0x000010a0,0x378);
        goto LAB_036ab014;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar47 = FUN_0391f968(lVar24,0,0);
        if ((uVar47 & 1) != 0) {
          plVar37 = (long *)unaff_x19[0x5d];
          uVar38 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar37 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar37 + 0x558))(plVar37,uVar38,*(undefined8 *)(*plVar37 + 0x560));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_036afadc;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar37 = (long *)unaff_x19[0x5d];
          if (plVar37 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar37 + 0x7d8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_036ab13c;
      }
      if (iVar12 != 3) goto LAB_036ab54c;
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      goto LAB_036aabc0;
    }
    fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if (fVar60 < fVar45) {
      fVar58 = fVar44 / fVar58;
      if (fVar60 <= 0.0) {
        fVar58 = fVar44;
      }
      fVar60 = fVar60 + (fVar44 - fVar57 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar58;
      goto LAB_036afb6c;
    }
    fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
    uVar50 = (ulong)(uint)fVar58;
    fVar45 = *(float *)(unaff_x19 + 0x4a);
    if (fVar58 <= fVar45) goto LAB_036aab40;
LAB_036afae0:
    fVar57 = (fVar58 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar57 <= DAT_00b55428) {
      fVar57 = DAT_00b55428;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar58;
    fVar44 = (fVar58 - fVar57) * 20.0 + 0.5;
    fVar57 = DAT_00b556b4;
    if (fVar44 != INFINITY) {
      fVar57 = (float)(int)fVar44 / 20.0;
    }
    if (fVar57 <= fVar45) {
      fVar57 = fVar45;
    }
LAB_036acc94:
    *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  in_stack_00001068 = FUN_036ecf20();
  if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
    lVar24 = *in_stack_00000190;
    if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    fVar45 = 0.0;
    if ((0.0 < fVar58) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar45 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
             *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
             (fVar45 - *(float *)((long)unaff_x19 + 0x4cc)) +
             in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
  }
  else {
    lVar24 = unaff_x19[0x6d];
    *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
    if (lVar24 == 0) goto LAB_036afadc;
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    fVar45 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
  }
  puVar8 = PTR_DAT_03d9c920;
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  uVar16 = *(uint *)((long)unaff_x19 + 0x494);
  if ((*(uint *)(lVar24 + 0x18) <= uVar16) ||
     (uVar53 = uVar16 - 1, *(uint *)(lVar24 + 0x18) <= uVar53)) goto LAB_036afbe8;
  uVar50 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x97));
  fVar65 = (fVar45 + *(float *)(unaff_x19 + 0x97) + fVar58) -
           *(float *)(lVar24 + (long)(int)uVar16 * unaff_x24 + 0x158);
  if (((bStack000000000000007c & 1) == 0 &&
       *(short *)(lVar24 + (long)(int)uVar53 * (long)iVar15 + 0x20) == 0xad) &&
     ((fVar65 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
    in_stack_00001068 = in_stack_00001068 - 1;
    bStack000000000000007c = 0;
    uVar38 = CONCAT44(0x2d,uVar53);
    *unaff_x20 = uVar53;
    goto LAB_036ab538;
  }
  uVar38 = in_stack_00001088;
  if (*(short *)(lVar24 + (long)(int)uVar16 * unaff_x24 + 0x20) == 0xad) {
    bStack000000000000007c = 1;
    goto LAB_036ab538;
  }
  if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
    fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
    if ((fVar45 <= fVar60) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
      fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar50 = (ulong)(uint)fVar58;
      fVar45 = *(float *)(unaff_x19 + 0x4a);
      if ((fVar45 < fVar58) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afae0;
      goto LAB_036ab340;
    }
LAB_036afb7c:
    fVar58 = fVar44;
    if (0.0 < fVar60) {
      fVar58 = fVar44 / (1.0 - fVar60);
    }
    fVar60 = fVar60 + (fVar44 - fVar57 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar58;
LAB_036afb6c:
    if (fVar45 <= fVar60) {
      fVar60 = fVar45;
    }
    *(float *)((long)unaff_x19 + 0x2d4) = fVar60;
    return;
  }
LAB_036ab340:
  lVar24 = *(long *)PTR_DAT_03d9c920;
  uVar47 = extraout_x1_03;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar24 = *(long *)puVar8;
    uVar47 = extraout_x1_05;
  }
  iVar12 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
  if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
     (((bStack0000000000000078 ^ 1) & 1) == 0)) {
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_stack_00001068 = FUN_036ecf20();
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    uVar16 = *unaff_x20 - 1;
    if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
    uVar47 = extraout_x1_06;
    iStack0000000000000034 = iVar12;
    if (*(short *)(lVar24 + (long)(int)uVar16 * (long)iVar15 + 0x20) == 0xad) {
      in_stack_00001068 = in_stack_00001068 - 1;
      bStack000000000000007c = 0;
      *unaff_x20 = uVar16;
      uVar38 = CONCAT44(0x2d,uVar16);
      goto LAB_036ab538;
    }
  }
  if (fVar65 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
    uVar50 = uVar51;
    FUN_036ed998(in_stack_00000058._4_4_,uVar51,in_stack_000000f0,
                 *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                 fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
    }
    fVar45 = fStack00000000000000c8;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar58 = *(float *)(unaff_x19 + 0x59);
      if ((fVar58 < *(float *)((long)unaff_x19 + 700)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar57 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar65) / (float)((int)unaff_x19[0x95] + 1)) /
                 in_stack_00000058._4_4_;
        if (fVar57 <= fVar58) {
          fVar57 = fVar58;
        }
LAB_036ad184:
        *(float *)((long)unaff_x19 + 700) = fVar57;
        return;
      }
      fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
      fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if ((fVar60 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afb7c;
      fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar50 = (ulong)(uint)fVar58;
      fVar45 = *(float *)(unaff_x19 + 0x4a);
      if ((fVar45 < fVar58) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afae0;
    }
    switch((int)unaff_x19[0x5c]) {
    case 0:
    case 2:
    case 4:
      goto switchD_036ab4e4_caseD_0;
    case 1:
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)PTR_DAT_03d9c920;
      }
      lVar25 = *(long *)(lVar24 + 0xb8);
      if (*(int *)(lVar25 + 0x1580) == 0) {
        bStack000000000000007c = 0;
LAB_036acbbc:
        in_stack_00001088 = DAT_00b92750;
        unaff_x29 = (undefined8 *)&stack0x00000fc0;
        unaff_x20[0] = 0;
        unaff_x20[1] = 0;
        in_stack_00001068 = 0xffffffff;
        goto LAB_036a9250;
      }
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar25 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      }
      FUN_0217900c(&stack0x000010a0,lVar25 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
      memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
      iVar12 = FUN_036ecf20();
      bStack000000000000007c = 0;
LAB_036ab020:
      unaff_x29 = (undefined8 *)&stack0x00000fc0;
      iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
      *(int *)((long)unaff_x19 + 0x494) = iVar13;
      in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
      in_stack_00001068 = iVar12 - 1;
      in_stack_00001088 = CONCAT44(0x2026,iVar13);
      goto LAB_036a9250;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      bStack000000000000007c = 0;
LAB_036aad90:
      unaff_x29 = (undefined8 *)&stack0x00000fc0;
      in_stack_00001088 = CONCAT44(3,uVar41);
      goto LAB_036a9250;
    case 5:
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
      uVar50 = uVar51;
      FUN_036ed998(in_stack_00000058._4_4_,uVar51,in_stack_000000f0,
                   *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                   fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
      *(undefined4 *)(unaff_x19 + 0x9b) = 0;
      *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
      *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
      break;
    case 6:
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_0391f968(lVar24,0,0);
      if ((uVar47 & 1) != 0) {
        plVar37 = (long *)unaff_x19[0x5d];
        uVar38 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar37 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar37 + 0x558))(plVar37,uVar38,*(undefined8 *)(*plVar37 + 0x560));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_036afadc;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar37 = (long *)unaff_x19[0x5d];
        if (plVar37 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar37 + 0x7d8))(plVar37,0,0,*(undefined8 *)(*plVar37 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      bStack000000000000007c = 0;
LAB_036ab13c:
      unaff_x29 = (undefined8 *)&stack0x00000fc0;
      in_stack_00001088 = CONCAT44(3,*unaff_x20);
      goto LAB_036a9250;
    default:
      bStack000000000000007c = 0;
LAB_036ab54c:
      if (in_stack_0000109c == 0xad) {
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
      }
      else if (in_stack_0000109c == 9) {
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar25 = *(long *)(lVar24 + 0x38), lVar25 == 0)) goto LAB_036afadc;
        uVar41 = *unaff_x20;
        if (*(uint *)(lVar25 + 0x18) <= uVar41) goto LAB_036afbe8;
        *(undefined1 *)(lVar25 + (long)(int)uVar41 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar41;
        lVar25 = *(long *)(lVar24 + 0x50);
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
LAB_036ab5c8:
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
      else {
        lVar24 = 0x4ec;
        if (*(char *)((long)unaff_x19 + 0x1d4) != '\0') {
          lVar24 = 0x144;
        }
        uVar47 = (ulong)*(uint *)((long)unaff_x19 + lVar24);
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(fVar45,fVar62);
          uVar47 = extraout_x1_08;
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
          uVar47 = extraout_x1_07;
        }
        uVar41 = *unaff_x20;
        if ((in_stack_00000068 & 1) != 0) {
          *(uint *)(in_stack_00000088 + 0x1f0) = uVar41;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar41;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        in_stack_00000068 = 0;
        *(float *)(lVar24 + 0x60) = fVar59;
        *(float *)(lVar24 + 100) = fVar61;
      }
LAB_036ab6c0:
      unaff_x29 = (undefined8 *)&stack0x00000fc0;
      in_stack_00000070._4_4_ = unaff_w21;
      if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1))))
      goto LAB_036ab6e0;
      goto LAB_036ab9e8;
    }
  }
  bStack0000000000000078 = 1;
  bStack000000000000007c = 0;
  in_stack_00000068 = 1;
LAB_036ab538:
  unaff_x29 = (undefined8 *)&stack0x00000fc0;
  in_stack_00001088 = uVar38;
  goto LAB_036a9250;
LAB_036ab6e0:
  if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
  unaff_s8 = *(float *)(unaff_x19 + 0x3d);
  unaff_w25 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
  if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
  param_2 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
  in_w9 = (uint)*(byte *)((long)unaff_x19 + 0x305);
  param_1 = unaff_x19[0xca];
  param_4 = 1.0;
  param_3 = fStack00000000000000a0;
  goto code_r0x036ab724;
LAB_036ad4b0:
  uVar41 = uVar16 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x50), lVar28 == 0))
  goto LAB_036afadc;
  lVar32 = (long)(int)uVar41;
  lVar31 = lVar24 + lVar32 * 0x178;
  uVar67 = *(uint *)(lVar31 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar67) goto LAB_036afbe8;
  lVar35 = (long)(int)uVar67;
  lVar28 = lVar28 + lVar35 * 0x5c;
  lVar29 = *(long *)(lVar31 + 0x38);
  uVar3 = *(ushort *)(lVar31 + 0x20);
  uVar5 = *(uint *)(lVar28 + 0x3c);
  uVar39 = *(uint *)(lVar28 + 0x68);
  iVar2 = *(int *)(lVar28 + 0x20);
  iVar13 = *(int *)(lVar28 + 0x28);
  iVar14 = *(int *)(lVar28 + 0x2c);
  uVar6 = *(uint *)(lVar28 + 0x40);
  lVar31 = (long)(int)uVar6;
  fVar62 = *(float *)(lVar28 + 0x4c);
  fVar52 = *(float *)(lVar28 + 0x54);
  fVar45 = *(float *)(lVar28 + 0x58);
  fVar49 = *(float *)(lVar28 + 0x5c);
  fVar40 = *(float *)(lVar28 + 0x60);
  fVar42 = *(float *)(lVar28 + 0x6c);
  fVar43 = *(float *)(lVar28 + 0x70);
  fVar60 = *(float *)(lVar28 + 0x74);
  fVar65 = *(float *)(lVar28 + 0x78);
  uVar34 = (uint)uVar3;
  if ((int)uVar39 < 9) {
    switch(uVar39) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar40 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar45;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar40 + fVar49 * 0.5) - fVar45 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar49 + fVar40) - fVar45;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar49 + fVar40;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar39 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fde5f4(uVar4,0);
      if ((uVar47 & 1) == 0) {
        bVar1 = (int)uVar67 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar45 <= fVar49) && (!bVar1 && uVar39 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar40;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar40;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar16 == 1) || (uVar67 != uVar53)) || (uVar41 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar40;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar40;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar34,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar20 = (char)unaff_x19[0x1e];
        fVar40 = -fVar45;
        if (cVar20 != '\0') {
          fVar40 = fVar45;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_036afbe8;
        iVar14 = (int)*(char *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar45 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar34 == 9) {
LAB_036af498:
          fVar45 = 1.0 - fVar45;
        }
        else {
          if (uVar34 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar47 = FUN_02fdea78(uVar34,0);
            cVar20 = (char)unaff_x19[0x1e];
            if ((uVar47 & 1) != 0) goto LAB_036af498;
          }
          iVar14 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar13;
        }
        fVar45 = ((fVar49 + fVar40) * fVar45) / (float)iVar14;
        if (cVar20 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar45;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar45;
        }
      }
    }
  }
  else if (uVar39 == 0x20) {
    fVar45 = fVar42 + fVar60;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar39 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  lVar28 = lVar24 + lVar32 * 0x178;
  fVar49 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar45 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar40 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_036adf70;
  iVar13 = *(int *)(lVar24 + lVar32 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_036add84;
  fVar61 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar67,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar22 = lVar24 + lVar32 * 0x178;
    *(undefined4 *)(lVar22 + 0x84) = 0;
    *(undefined4 *)(lVar22 + 0xac) = 0;
    *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
    fVar61 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar24 + lVar32 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar22 = lVar24 + lVar32 * 0x178;
      fVar60 = (in_stack_00000108._4_4_ + fVar65) - *(float *)(in_stack_00000088 + 0x230);
      fVar65 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar22 = lVar24 + lVar32 * 0x178;
    fVar60 = fVar60 - fVar42;
    *(float *)(lVar22 + 0x84) = fVar61 + (fVar65 - fVar42) / fVar60;
    *(float *)(lVar22 + 0xac) = fVar61 + (*(float *)(lVar22 + 0x98) - fVar42) / fVar60;
    *(float *)(lVar22 + 0xd4) = fVar61 + (*(float *)(lVar22 + 0xc0) - fVar42) / fVar60;
    fVar61 = fVar61 + (*(float *)(lVar22 + 0xe8) - fVar42) / fVar60;
    break;
  case 2:
    lVar22 = lVar24 + lVar32 * 0x178;
    fVar65 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar60 = (in_stack_00000108._4_4_ + *(float *)(lVar22 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar22 + 0x84) = fVar61 + fVar60 / fVar65;
    *(float *)(lVar22 + 0xac) =
         fVar61 + ((in_stack_00000108._4_4_ + *(float *)(lVar22 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar22 + 0xd4) =
         fVar61 + ((in_stack_00000108._4_4_ + *(float *)(lVar22 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar61 = fVar61 + ((in_stack_00000108._4_4_ + *(float *)(lVar22 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar22 = lVar24 + lVar32 * 0x178;
      *(undefined4 *)(lVar22 + 0x88) = 0;
      *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar22 + 0xd8) = 0;
      *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar22 = lVar24 + lVar32 * 0x178;
      fVar65 = fVar65 - fVar43;
      fVar60 = fVar61 + (*(float *)(lVar22 + 0x74) - fVar43) / fVar65;
      fVar65 = fVar61 + (*(float *)(lVar22 + 0x9c) - fVar43) / fVar65;
      *(float *)(lVar22 + 0x88) = fVar60;
      *(float *)(lVar22 + 0xb0) = fVar65;
      *(float *)(lVar22 + 0xd8) = fVar60;
      *(float *)(lVar22 + 0x100) = fVar65;
      break;
    case 2:
      lVar22 = lVar24 + lVar32 * 0x178;
      fVar60 = fVar61 + (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar22 + 0x88) = fVar60;
      fVar65 = *(float *)(unaff_x19 + 0x9c);
      fVar42 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar22 + 0xd8) = fVar60;
      fVar60 = fVar61 + (*(float *)(lVar22 + 0x9c) - fVar65) / (fVar42 - fVar65);
      *(float *)(lVar22 + 0xb0) = fVar60;
      *(float *)(lVar22 + 0x100) = fVar60;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar39 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar39 <= uVar41) goto LAB_036afbe8;
    lVar22 = lVar24 + lVar32 * 0x178;
    fVar60 = *(float *)(lVar22 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar60) * 0.5;
    fVar42 = fVar61 + *(float *)(lVar22 + 0x88) * fVar60 + fVar65;
    fVar61 = fVar61 + fVar65 + *(float *)(lVar22 + 0xb0) * fVar60;
    *(float *)(lVar22 + 0x84) = fVar42;
    *(float *)(lVar22 + 0xac) = fVar42;
    *(float *)(lVar22 + 0xd4) = fVar61;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar24 + lVar32 * 0x178 + 0xfc) = fVar61;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar39 <= uVar41) goto LAB_036afbe8;
    lVar22 = lVar24 + lVar32 * 0x178;
    *(undefined4 *)(lVar22 + 0x88) = 0;
    *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar22 + 0x100) = 0;
    break;
  case 1:
    if (uVar41 < uVar39) {
      lVar22 = lVar24 + lVar32 * 0x178;
      fVar62 = fVar62 - fVar52;
      fVar61 = (*(float *)(lVar22 + 0x74) - fVar52) / fVar62;
      fVar62 = (*(float *)(lVar22 + 0x9c) - fVar52) / fVar62;
      *(float *)(lVar22 + 0x88) = fVar61;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar39 <= uVar41) goto LAB_036afbe8;
    lVar22 = lVar24 + lVar32 * 0x178;
    fVar61 = (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar22 + 0x88) = fVar61;
    fVar62 = (*(float *)(lVar22 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar22 + 0xb0) = fVar62;
    *(float *)(lVar22 + 0xd8) = fVar62;
    *(float *)(lVar22 + 0x100) = fVar61;
    break;
  case 3:
    if (uVar39 <= uVar41) goto LAB_036afbe8;
    lVar22 = lVar24 + lVar32 * 0x178;
    fVar62 = *(float *)(lVar22 + 0x15c);
    fVar60 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar62) * 0.5;
    fVar61 = *(float *)(lVar22 + 0x84) / fVar62 + fVar60;
    fVar60 = fVar60 + *(float *)(lVar22 + 0xd4) / fVar62;
    *(float *)(lVar22 + 0x88) = fVar61;
    *(float *)(lVar22 + 0xb0) = fVar60;
    *(float *)(lVar22 + 0x100) = fVar61;
    *(float *)(lVar22 + 0xd8) = fVar60;
  }
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  lVar22 = lVar24 + lVar32 * 0x178;
  fVar61 = *(float *)(lVar22 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar22 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar32 * 0x178 + 400) & 1) != 0)) {
    fVar61 = -fVar61;
  }
  fVar60 = fVar57;
  if (((iVar12 == 2) || (fVar60 = fVar58, iVar12 == 1)) || (fVar60 = fVar57 / fVar44, iVar12 == 0))
  {
    fVar61 = fVar60 * fVar61;
  }
  lVar22 = lVar24 + lVar32 * 0x178;
  fVar62 = *(float *)(lVar22 + 0x88);
  fVar65 = *(float *)(lVar22 + 0x84);
  fVar60 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar60 = (float)(int)fVar65;
  }
  fVar42 = *(float *)(lVar22 + 0xd4);
  fVar43 = *(float *)(lVar22 + 0xd8);
  fVar52 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar52 = (float)(int)fVar62;
  }
  uVar46 = FUN_036f2b00(fVar65 - fVar60,fVar62 - fVar52);
  *(undefined4 *)(lVar22 + 0x84) = uVar46;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  fVar43 = fVar43 - fVar52;
  *(float *)(lVar22 + 0x88) = fVar61;
  uVar46 = FUN_036f2b00(fVar65 - fVar60,fVar43);
  *(undefined4 *)(lVar24 + lVar32 * 0x178 + 0xac) = uVar46;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  fVar42 = fVar42 - fVar60;
  *(float *)(lVar24 + lVar32 * 0x178 + 0xb0) = fVar61;
  fVar60 = (float)FUN_036f2b00(fVar42,fVar43);
  *(float *)(lVar22 + 0xd4) = fVar60;
  if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
  *(float *)(lVar22 + 0xd8) = fVar61;
  uVar46 = FUN_036f2b00(fVar42,fVar62 - fVar52);
  *(undefined4 *)(lVar24 + lVar32 * 0x178 + 0xfc) = uVar46;
  uVar39 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  *(float *)(lVar24 + lVar32 * 0x178 + 0x100) = fVar61;
LAB_036add84:
  if (((int)uVar41 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar67 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar39 <= uVar41) goto LAB_036afbe8;
      lVar28 = lVar24 + lVar32 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar40 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar40 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar40 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar40 + *(float *)(lVar28 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar67 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar41 < uVar39) {
        if (*(uint *)(lVar24 + lVar32 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar28 = lVar24 + lVar32 * 0x178;
          *(ulong *)(lVar28 + 0x70) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar28 + 0x70));
          *(float *)(lVar28 + 0x78) = fVar40 + *(float *)(lVar28 + 0x78);
          *(ulong *)(lVar28 + 0x98) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar28 + 0x98));
          *(float *)(lVar28 + 0xa0) = fVar40 + *(float *)(lVar28 + 0xa0);
          *(ulong *)(lVar28 + 0xc0) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar28 + 0xc0));
          *(float *)(lVar28 + 200) = fVar40 + *(float *)(lVar28 + 200);
          *(ulong *)(lVar28 + 0xe8) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar28 + 0xe8));
          *(float *)(lVar28 + 0xf0) = fVar40 + *(float *)(lVar28 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar39 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar46 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar22 = lVar24 + lVar32 * 0x178;
  *(undefined8 *)(lVar22 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar22 + 0x78) = uVar46;
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar22 = lVar24 + lVar32 * 0x178;
  *(undefined8 *)(lVar22 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar22 + 0xa0) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar22 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar22 + 200) = uVar46;
  uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar22 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar22 + 0xf0) = uVar46;
  *(undefined1 *)(lVar28 + 0x194) = 0;
LAB_036adf28:
  if (iVar13 == 0) {
    pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar26)();
  }
  else if (iVar13 == 1) {
    pcVar26 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar28 = lVar28 + lVar32 * 0x178;
  uVar38 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar45 + (float)((ulong)uVar38 >> 0x20),fVar49 + (float)uVar38);
  *(float *)(lVar28 + 0x124) = fVar40 + *(float *)(lVar28 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar28 = lVar28 + lVar32 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar40 + *(float *)(lVar28 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar28 = lVar28 + lVar32 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar40 + *(float *)(lVar28 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
  lVar28 = lVar28 + lVar32 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar49 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *in_stack_00000190;
  if ((lVar28 == 0) || (lVar22 = *(long *)(lVar28 + 0x38), lVar22 == 0)) goto LAB_036afadc;
  uVar39 = *(uint *)(lVar22 + 0x18);
  if (uVar39 <= uVar41) goto LAB_036afbe8;
  lVar30 = lVar22 + lVar32 * 0x178;
  uVar51 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x140) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar30 + 0x140));
  fVar60 = fVar45 + *(float *)(lVar30 + 0x150);
  uVar50 = (ulong)(uint)fVar60;
  uVar54 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar30 + 0x148) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar30 + 0x148));
  *(float *)(lVar30 + 0x150) = fVar60;
  *(ulong *)(lVar30 + 0x140) = uVar51;
  *(ulong *)(lVar30 + 0x148) = uVar54;
  if (uVar67 == uVar53) {
    uVar53 = *unaff_x20 - 1;
    if (uVar41 == uVar53) goto LAB_036ae17c;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar30 = (long)(int)uVar53;
    lVar33 = lVar28 + lVar30 * 0x5c;
    uVar54 = (ulong)(uint)*(float *)(lVar33 + 0x58);
    fVar60 = fVar45 + *(float *)(lVar33 + 0x54);
    uVar51 = (ulong)(uint)fVar60;
    fVar62 = fVar49 + *(float *)(lVar33 + 0x58);
    uVar50 = (ulong)(uint)fVar62;
    *(ulong *)(lVar33 + 0x4c) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar33 + 0x4c));
    *(float *)(lVar33 + 0x54) = fVar60;
    *(float *)(lVar33 + 0x58) = fVar62;
    if (uVar39 <= *(uint *)(lVar33 + 0x34)) goto LAB_036afbe8;
    uVar46 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar30 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar60;
    *(undefined4 *)(lVar28 + 0x6c) = uVar46;
    lVar28 = *in_stack_00000190;
    if ((lVar28 == 0) || (lVar22 = *(long *)(lVar28 + 0x50), lVar22 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_036afadc;
    uVar53 = *(uint *)(lVar22 + lVar30 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar22 = lVar22 + lVar30 * 0x5c;
    *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar53 * 0x178 + 0x128);
    *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
    uVar53 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar41 == uVar53) {
      lVar28 = *in_stack_00000190;
      if ((lVar28 == 0) || (lVar22 = *(long *)(lVar28 + 0x50), lVar22 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar30 = lVar22 + lVar35 * 0x5c;
      uVar54 = (ulong)(uint)*(float *)(lVar30 + 0x58);
      uVar51 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar30 + 0x4c) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar30 + 0x4c));
      fVar60 = fVar45 + *(float *)(lVar30 + 0x54);
      fVar49 = fVar49 + *(float *)(lVar30 + 0x58);
      uVar50 = (ulong)(uint)fVar49;
      *(ulong *)(lVar30 + 0x4c) = uVar51;
      *(float *)(lVar30 + 0x54) = fVar60;
      *(float *)(lVar30 + 0x58) = fVar49;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar30 + 0x34)) goto LAB_036afbe8;
      uVar46 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar30 + 0x34) * 0x178 + 0x11c);
      lVar22 = lVar22 + lVar35 * 0x5c;
      *(float *)(lVar22 + 0x70) = fVar60;
      *(undefined4 *)(lVar22 + 0x6c) = uVar46;
      lVar28 = *in_stack_00000190;
      if ((lVar28 == 0) || (lVar22 = *(long *)(lVar28 + 0x50), lVar22 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_036afadc;
      uVar53 = *(uint *)(lVar22 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_036afbe8;
      lVar22 = lVar22 + lVar35 * 0x5c;
      *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar53 * 0x178 + 0x128);
      *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar47 = FUN_02fddb80(uVar34,0);
  if (((((uVar47 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)) {
    if (bVar7) {
      if (((uVar16 != 1) && ((int)uVar41 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar41 < (int)*unaff_x20 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar24 + lVar25 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fddb80(uVar4,0);
        if ((uVar47 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar24 + lVar25 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar47 = FUN_02fddb80(uVar4,0);
          if ((uVar47 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar16 != 1) {
LAB_036aeea4:
        bVar7 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fddab4(uVar34,0);
      if ((uVar47 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fdb080(uVar34,0);
        if (((uVar34 != 0x200b) && ((uVar47 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar41 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fddb80(uVar34,0);
      iVar13 = (int)fStack0000000000000138;
      if ((uVar47 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar13 = uVar16 - 2;
    }
    lVar28 = *in_stack_00000190;
    if (lVar28 == 0) goto LAB_036afadc;
    lVar22 = *(long *)(lVar28 + 0x40);
    if (lVar22 == 0) goto LAB_036afadc;
    uVar53 = *(uint *)(lVar28 + 0x24);
    iVar14 = *(int *)(lVar22 + 0x18);
    if (iVar14 < (int)(uVar53 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar28 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar28 = *in_stack_00000190;
      if (lVar28 == 0) goto LAB_036afadc;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar28 = lVar28 + (long)(int)uVar53 * 0x18;
    *(long **)(lVar28 + 0x20) = unaff_x19;
    *(float *)(lVar28 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar28 + 0x2c) = iVar13;
    *(int *)(lVar28 + 0x30) = (iVar13 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar28 = unaff_x19[0x6d];
    if (lVar28 == 0) goto LAB_036afadc;
    lVar22 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar22 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= uVar67) goto LAB_036afbe8;
    lVar22 = lVar22 + lVar35 * 0x5c;
    bVar7 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000170._4_4_ = (float)uVar41;
    }
    if (uVar41 == *unaff_x20 - 1) {
      lVar28 = *in_stack_00000190;
      if (lVar28 == 0) goto LAB_036afadc;
      lVar22 = *(long *)(lVar28 + 0x40);
      if (lVar22 == 0) goto LAB_036afadc;
      uVar53 = *(uint *)(lVar28 + 0x24);
      iVar13 = *(int *)(lVar22 + 0x18);
      if (iVar13 < (int)(uVar53 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar28 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar28 = *in_stack_00000190;
        if (lVar28 == 0) goto LAB_036afadc;
      }
      lVar28 = *(long *)(lVar28 + 0x40);
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_036afbe8;
      lVar28 = lVar28 + (long)(int)uVar53 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar28 + 0x2c) = uVar41;
      *(uint *)(lVar28 + 0x30) = uVar16 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_036afadc;
      lVar22 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar22 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar22 = lVar22 + lVar35 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar7 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  uVar53 = *(uint *)(lVar28 + 0x18);
  if (uVar53 <= uVar41) goto LAB_036afbe8;
  if ((*(byte *)(lVar28 + lVar32 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar53 <= uVar16 - 2) goto LAB_036afbe8;
      lVar35 = *unaff_x19;
      uVar53 = *(uint *)(lVar28 + lVar25 + -0x330);
      uVar46 = *(undefined4 *)(lVar28 + lVar25 + -0x2f8);
LAB_036ae924:
      pcVar26 = *(code **)(lVar35 + 0x908);
LAB_036ae92c:
      uVar54 = (ulong)uVar53;
      uVar51 = (ulong)(uint)_bStack0000000000000078;
      uVar50 = (ulong)_bStack000000000000007c;
      (*pcVar26)(fStack0000000000000080,uVar51,uVar50,uVar54,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar46);
      puVar8 = PTR_DAT_03d9c920;
      lVar28 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar28 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar59 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar32 * 0x178;
    iVar13 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar41) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar47 = FUN_02fdb080(uVar34,0);
    if ((uVar34 != 0x200b) && ((uVar47 & 1) == 0)) {
      lVar28 = *in_stack_00000190;
      if ((lVar28 == 0) || (lVar35 = *(long *)(lVar28 + 0x38), lVar35 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar35 + 0x18) <= uVar41) goto LAB_036afbe8;
      fVar60 = *(float *)(lVar35 + lVar32 * 0x178 + 0x160);
      if (fVar59 <= fVar60) {
        fVar59 = fVar60;
      }
      if (fStack0000000000000110 <= ABS(fVar61)) {
        fStack0000000000000110 = ABS(fVar61);
      }
      if (iVar13 != in_stack_00000070._4_4_) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *in_stack_00000190;
          if (lVar28 == 0) goto LAB_036afadc;
          lVar35 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar35 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar35 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar62 = *(float *)(lVar28 + lVar32 * 0x178 + 0x14c);
      fVar60 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar62 = fVar62 + fVar59 * fVar60;
      if (fVar62 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar62;
      }
      uVar51 = (ulong)(uint)fStack0000000000000114;
      in_stack_00000070._4_4_ = iVar13;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar41)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar41 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fdea78(uVar34,0);
        if ((uVar47 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
      lVar28 = lVar28 + lVar32 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000080 = *(float *)(lVar28 + 0x11c);
      uVar50 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar59 != 0.0;
      fVar60 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar60 = fVar59;
      }
      fVar59 = fVar60;
      uVar64 = *(undefined4 *)(lVar28 + 0x168);
      _bStack000000000000007c = 0;
      fVar60 = fVar61;
      if (bVar11) {
        fVar60 = fStack0000000000000110;
      }
      uVar51 = (ulong)(uint)fVar60;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar60;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        if (uVar41 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar32 * 0x178;
          lVar35 = *unaff_x19;
          uVar53 = *(uint *)(lVar28 + 0x128);
          uVar46 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar41 == uVar5) || ((int)uVar6 <= (int)uVar41)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fdb080(uVar34,0);
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        lVar35 = lVar32;
        uVar53 = uVar41;
        if (uVar34 == 0x200b || (uVar47 & 1) != 0) {
          lVar35 = lVar31;
          uVar53 = uVar6;
        }
        if (uVar53 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar35 * 0x178;
          uVar53 = *(uint *)(lVar28 + 0x128);
          uVar46 = *(undefined4 *)(lVar28 + 0x160);
          pcVar26 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        uVar53 = *(uint *)(lVar28 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar41 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_036afbe8;
      uVar47 = FUN_036c0e18(uVar64,*(undefined4 *)(lVar28 + lVar25),0);
      if ((uVar47 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0)) {
          if (uVar41 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar32 * 0x178;
            uVar54 = (ulong)*(uint *)(lVar28 + 0x128);
            uVar50 = (ulong)_bStack000000000000007c;
            uVar51 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar51,uVar50,uVar54,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar28 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar28 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar28 = *(long *)puVar8;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar11 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
  if (lVar29 == 0) goto LAB_036afadc;
  uVar53 = *(uint *)(lVar28 + lVar32 * 0x178 + 400);
  fVar60 = (float)FUN_0396ad04(lVar29 + 0x50,0);
  if ((uVar53 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
      uVar53 = *(uint *)(lVar28 + lVar25 + -0x330);
      fVar45 = *(float *)(lVar28 + lVar25 + -0x30c);
      pcVar26 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar54 = (ulong)uVar53;
      uVar51 = (ulong)(uint)fStack00000000000000a4;
      uVar50 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar26)(fStack00000000000000a8,uVar51,uVar50,uVar54,
                 fStack00000000000000b0 * fVar60 + fVar45,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar28 = *in_stack_00000190;
    if ((lVar28 == 0) || (lVar35 = *(long *)(lVar28 + 0x38), lVar35 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar35 + 0x18) <= uVar41) goto LAB_036afbe8;
    *(int *)(lVar35 + lVar32 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar41) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar35 + lVar32 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar41)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar41 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fdea78(uVar34,0);
        if ((uVar47 & 1) != 0) goto LAB_036aeb20;
        lVar28 = *in_stack_00000190;
        if (lVar28 == 0) goto LAB_036afadc;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_036afbe8;
      lVar28 = lVar28 + lVar32 * 0x178;
      fStack000000000000004c = *(float *)(lVar28 + 0x60);
      fStack0000000000000040 = *(float *)(lVar28 + 0x14c);
      uVar51 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar28 + 0x11c);
      uVar50 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar28 + 0x160);
      fStack00000000000000a4 = fVar60 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar53 = *unaff_x20;
    if (uVar53 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        if (uVar41 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar32 * 0x178;
          lVar31 = *unaff_x19;
          uVar53 = *(uint *)(lVar28 + 0x128);
          fVar45 = *(float *)(lVar28 + 0x14c);
LAB_036aec8c:
          pcVar26 = *(code **)(lVar31 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar41 == uVar5) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar47 = FUN_02fdb080(uVar34,0);
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        uVar53 = *(uint *)(lVar28 + 0x18);
        if (uVar34 == 0x200b || (uVar47 & 1) != 0) {
          if (uVar53 <= uVar6) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar31 = lVar32;
          if (uVar53 <= uVar41) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar28 = lVar28 + lVar31 * 0x178;
        fVar45 = *(float *)(lVar28 + 0x14c);
        uVar53 = *(uint *)(lVar28 + 0x128);
        pcVar26 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar41 < (int)uVar53) {
      lVar28 = *in_stack_00000190;
      if ((lVar28 != 0) && (lVar35 = *(long *)(lVar28 + 0x38), lVar35 != 0)) {
        if (uVar16 < *(uint *)(lVar35 + 0x18)) {
          if (*(float *)(lVar35 + lVar25 + -0x108) == fStack000000000000004c) {
            fVar62 = *(float *)(lVar35 + lVar25 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar51 = (ulong)(uint)fStack0000000000000040;
            uVar47 = FUN_036c122c(fVar45 + fVar62,uVar51,0);
            if ((uVar47 & 1) != 0) {
              uVar53 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar28 = *in_stack_00000190;
            if (lVar28 == 0) goto LAB_036afadc;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar53 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar41 <= (int)uVar6) goto LAB_036aef20;
            if (uVar6 < uVar53) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar41 < (int)uVar53) {
      iVar13 = FUN_03922ce0(lVar29,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
      lVar28 = *(long *)(lVar24 + lVar25 + -0x130);
      if (lVar28 == 0) goto LAB_036afadc;
      iVar14 = FUN_03922ce0(lVar28,0);
      if (iVar13 != iVar14) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar31 = *unaff_x19;
          uVar53 = *(uint *)(lVar28 + lVar25 + -0x330);
          fVar45 = *(float *)(lVar28 + lVar25 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
  goto LAB_036afadc;
  uVar53 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar53 <= uVar41) goto LAB_036afbe8;
  if ((*(byte *)(lVar28 + lVar32 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      uVar51 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar51,uVar50,uVar54,fStack00000000000000d8,uVar50);
    }
LAB_036aefe8:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar41) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar32 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar41)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar41 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fdea78(uVar34,0);
        if ((uVar47 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar31 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar31 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0))
      goto LAB_036afadc;
      uVar53 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar53 <= uVar41) goto LAB_036afbe8;
      lVar31 = *(long *)(lVar31 + 0xb8);
      lVar29 = lVar28 + lVar32 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar29 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar29 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar31 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar31 + 0x159c);
      in_stack_00001080 = *(float *)(lVar29 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar31 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar31 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar53 <= uVar41) goto LAB_036afbe8;
    lVar28 = lVar28 + lVar32 * 0x178;
    fVar60 = *(float *)(lVar28 + 0x128);
    fVar52 = *(float *)(lVar28 + 0x188);
    uVar17 = *(undefined8 *)(lVar28 + 0x17c);
    fVar42 = *(float *)(lVar28 + 0x184);
    uVar38 = *(undefined8 *)(lVar28 + 0x184);
    fVar40 = *(float *)(lVar28 + 0x18c);
    fVar45 = *(float *)(lVar28 + 0x11c);
    fVar62 = *(float *)(lVar28 + 0x148);
    fVar65 = *(float *)(lVar28 + 0x150);
    in_stack_00000198 = uVar17;
    fStack00000000000001a0 = fVar42;
    fStack00000000000001a4 = fVar52;
    in_stack_000001a8 = fVar40;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar47 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar28 = *(long *)PTR_DAT_03d9c888;
    if ((uVar47 & 1) == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar28);
      }
      fVar60 = fVar60 + (float)in_stack_00001078;
      uVar50 = (ulong)(uint)fVar60;
      fVar45 = fVar45 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar62 = fVar62 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar54 = (ulong)(uint)fVar62;
      if (fVar45 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar45;
      }
      if (fVar65 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar65 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar60) {
        fStack00000000000000d4 = fVar60;
      }
      uVar51 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar62) {
        fStack00000000000000d8 = fVar62;
      }
    }
    else {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar28);
      }
      fVar45 = (fVar45 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar54 = (ulong)(uint)fVar45;
      if (fVar65 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar65;
      }
      uVar51 = (ulong)(uint)fStack00000000000000ec;
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar62) {
        fStack00000000000000d8 = fVar62;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar51,uVar50,uVar54,fStack00000000000000d8,uVar50);
      fStack00000000000000ec = fVar65 - fVar40;
      fStack00000000000000d4 = fVar60 + fVar42;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar62 + fVar52;
      fStack00000000000000e8 = fVar45;
      in_stack_00001070 = uVar17;
      in_stack_00001078 = uVar38;
      in_stack_00001080 = fVar40;
    }
    if (((*unaff_x20 == 1) || (uVar41 == uVar5)) || (((int)uVar6 <= (int)uVar41 || (!bVar1)))) {
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      uVar51 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar51,uVar50,uVar54,fStack00000000000000d8,uVar50);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar41 = *unaff_x20;
  lVar25 = lVar25 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar41 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar53 = uVar67;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar24 = *in_stack_00000190;
  if (lVar24 != 0) {
    iVar15 = uVar67 + 1;
    plVar37 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar24 + 0x18) = uVar41;
    lVar25 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar15;
    if ((int)uVar41 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar25;
    *(float *)(lVar24 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar47 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar47 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar15 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_036afadc;
      uVar41 = FUN_03afacb8(lVar24,0);
      FUN_03afacf4(lVar24,uVar41 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar37 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar38 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar41 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar24 = *in_stack_00000190;
                              if (lVar24 != 0) {
                                lVar28 = 0;
                                lVar25 = 0;
                                do {
                                  uVar47 = lVar25 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar47)
                                  goto LAB_036acd60;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar37 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                  FUN_036fa544(lVar24 + lVar28 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                  uVar17 = *(undefined8 *)(lVar24 + lVar25 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar18 = FUN_03922f24(uVar17,0,0);
                                  if ((uVar18 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0
                                         )) break;
                                      if (*(int *)(*plVar37 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                      FUN_036fa678(lVar24 + lVar28 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar31 = *(long *)(*in_stack_00000190 + 0x60), lVar31 == 0))
                                    break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_0390262c(lVar24,*(undefined8 *)(lVar31 + lVar28 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar31 = *(long *)(*in_stack_00000190 + 0x60), lVar31 == 0))
                                    break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902830(lVar24,*(undefined8 *)(lVar31 + lVar28 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar31 = *(long *)(*in_stack_00000190 + 0x60), lVar31 == 0))
                                    break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_039028dc(lVar24,*(undefined8 *)(lVar31 + lVar28 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar31 = *(long *)(*in_stack_00000190 + 0x60), lVar31 == 0))
                                    break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902a3c(lVar24,*(undefined8 *)(lVar31 + lVar28 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_03702ba4(lVar24,0), lVar24 == 0)) break;
                                    FUN_03904ddc(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_039add2c(lVar24,0);
                                    lVar31 = unaff_x19[0xe1];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar31 = *(long *)(lVar31 + lVar25 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (uVar17 = FUN_03702ba4(lVar31,0), lVar24 == 0)) break;
                                    FUN_03af8c9c(lVar24,uVar17,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af8894(uVar38,uVar51,uVar50,uVar54,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af87d0(lVar24,uVar41 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
                                    plVar36 = *(long **)(lVar24 + lVar25 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar36 == (long *)0x0) break;
                                    (**(code **)(*plVar36 + 0x2c8))
                                              (plVar36,uVar16 & 1,*(undefined8 *)(*plVar36 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *in_stack_00000190;
                                  lVar25 = lVar25 + 1;
                                  lVar28 = lVar28 + 0x50;
                                } while (lVar24 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036afadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


