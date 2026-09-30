/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$set_useJitIfAvailable
ENTRY_POINT: 036ab1e8
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


void Unity_VisualScripting_OptimizedReflection__set_useJitIfAvailable
               (long param_1,undefined8 param_2,ulong param_3)

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
  ulong uVar19;
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
  undefined1 uVar20;
  char cVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  int in_w9;
  float *pfVar25;
  long lVar26;
  code *pcVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar37;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar38;
  undefined8 uVar39;
  long unaff_x26;
  uint unaff_w28;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  uint uVar53;
  ulong uVar54;
  float fVar55;
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
  
code_r0x036ab1e8:
  *(int *)(param_1 + 0x20) = in_w9;
LAB_036ab1ec:
  if (in_stack_0000109c != 0xa0) goto LAB_036ab6c0;
  if ((*in_stack_00000190 != 0) && (lVar22 = *(long *)(*in_stack_00000190 + 0x50), lVar22 != 0)) {
    if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
LAB_036ab6c0:
      iVar15 = (int)unaff_x24;
      if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar56 = *(float *)(unaff_x19 + 0x3d);
        iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
        lVar22 = unaff_x19[0xca];
        fVar57 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar57 = 1.0;
        }
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_036afadc;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar61 = *(float *)(lVar22 + 0x2c);
        fVar46 = (float)FUN_0396b17c(*(long *)(lVar22 + 0x20),0);
        fVar60 = *_fStack00000000000000b0;
        fVar46 = fVar59 * (fVar56 / (float)iVar12) * fVar45 * fVar57 * fVar61 * fVar46;
        fVar56 = *_fStack00000000000000a8;
        param_3 = extraout_x1_09;
        if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])
           ) {
          if ((*in_stack_00000190 == 0) ||
             (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0)) goto LAB_036afadc;
          uVar42 = *(int *)((long)unaff_x19 + 0x494) - 1;
          if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
          if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
          fVar57 = *(float *)(lVar22 + (long)(int)uVar42 * (long)iVar15 + 0x60);
          iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
          if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
          fVar59 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
          lVar22 = unaff_x19[0xca];
          fVar45 = fStack00000000000000a0;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar45 = 1.0;
          }
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_036afadc;
          fVar61 = *(float *)((long)unaff_x19 + 0x404);
          fVar62 = *(float *)(lVar22 + 0x2c);
          fVar46 = (float)FUN_0396b17c(*(long *)(lVar22 + 0x20),0);
          if ((*in_stack_00000190 == 0) ||
             (lVar22 = *(long *)(*in_stack_00000190 + 0x50), lVar22 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
          lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          fVar60 = *(float *)(lVar22 + 0x60);
          fVar56 = *(float *)(lVar22 + 100);
          fVar46 = fVar61 * (fVar57 / (float)iVar12) * fVar59 * fVar45 * fVar62 * fVar46;
          param_3 = extraout_x1_10;
        }
        fVar59 = *(float *)(unaff_x19 + 0x9b);
        fVar57 = 0.0;
        fVar45 = 0.0;
        if ((0.0 < fVar59) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar62 = *(float *)(unaff_x19 + 0x97);
        fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar61 = *(float *)(unaff_x19 + 200);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xca] == 0) || (lVar22 = *(long *)(unaff_x19[0xca] + 0x20), lVar22 == 0))
          goto LAB_036afadc;
          FUN_0396b140(&stack0x000010a0,lVar22,0);
          fVar57 = (float)FUN_0396af88(&stack0x00000fc0,0);
          param_3 = extraout_x1_11;
        }
        puVar8 = PTR_DAT_03d9c920;
        fVar52 = *(float *)(unaff_x19 + 0x6c);
        fVar56 = (fStack00000000000000a4 - fVar60) - fVar56;
        bVar10 = true;
        if ((fVar52 <= fVar56) && (bVar10 = false, !NAN(fVar52))) {
          bVar10 = fVar52 == -1.0;
        }
        if (!bVar10) {
          fVar56 = fVar52;
        }
        fVar60 = 1.0;
        if (unaff_w28 != 0) {
          fVar60 = DAT_00b55374;
        }
        if (((fVar62 - (fVar65 - fVar59)) + fVar45 < fStack00000000000000c8) &&
           (ABS(fVar61) + fVar46 * fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
            fVar60 * fVar56)) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
          lVar22 = *(long *)(*(long *)puVar8 + 0xb8);
          uVar39 = *(undefined8 *)PTR_DAT_03d9c8c8;
          memcpy(&stack0x000010a0,(void *)(lVar22 + 0x788),0x378);
          FUN_02178ef4(lVar22 + 0x11f0,&stack0x000010a0,uVar39);
          param_3 = extraout_x1_12;
        }
      }
      lVar22 = *in_stack_00000190;
      if (lVar22 == 0) goto LAB_036afadc;
      lVar26 = *(long *)(lVar22 + 0x38);
      uVar18 = _fStack0000000000000140 & 0xffffffff;
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      uVar42 = *(uint *)(unaff_x19 + 0x95);
      lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
      *(uint *)(lVar26 + 100) = uVar42;
      *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x96];
      if (((unaff_w23 & 1) == 0) &&
         ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
        lVar22 = *(long *)(lVar22 + 0x50);
        if (lVar22 == 0) goto LAB_036afadc;
LAB_036aba84:
        if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
        *(int *)(lVar22 + (long)(int)uVar42 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      else {
        lVar22 = *(long *)(lVar22 + 0x50);
        if (lVar22 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
        if (*(int *)(lVar22 + (long)(int)uVar42 * 0x5c + 0x24) == 1) goto LAB_036aba84;
      }
      if (in_stack_0000109c == 9) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar56 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar45 = *(float *)(unaff_x19 + 200);
        fVar57 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
        fVar56 = fStack0000000000000140 * fVar56 * fVar57;
        fVar57 = fVar56 * (float)(int)(fVar45 / fVar56);
        uVar48 = (ulong)(uint)fVar57;
        param_3 = extraout_x1_13;
        if (fVar57 <= fVar45) {
          fVar57 = fVar45 + fVar56;
        }
LAB_036abca4:
        *(float *)(unaff_x19 + 200) = fVar57;
      }
      else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
        if ((char)unaff_x19[0x1e] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
            fVar45 = 1.0;
          }
          else {
            fVar45 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
          }
          fVar57 = *(float *)(unaff_x19 + 200);
          fVar46 = (float)FUN_0396af88(&stack0x00001050,0);
          if (unaff_x19[0x20] != 0) {
            fVar56 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
            fVar57 = fVar57 + fVar56 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                       fStack0000000000000140 *
                                       (fStack0000000000000138 + fVar45 * fVar46) +
                                       in_stack_000000f0 *
                                       (in_stack_000000e0._4_4_ +
                                       fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 200) = fVar57;
            param_3 = extraout_x1_14;
            goto joined_r0x036abbe8;
          }
          goto LAB_036afadc;
        }
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (*(float *)((long)unaff_x19 + 0x2ac) +
                 fStack0000000000000140 * fStack0000000000000138 +
                 in_stack_000000f0 *
                 (in_stack_000000e0._4_4_ +
                 fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
        uVar48 = (ulong)(uint)fVar57;
        fVar57 = *(float *)(unaff_x19 + 200) - fVar57;
        *(float *)(unaff_x19 + 200) = fVar57;
        if ((in_stack_0000109c == 0x200b) || (in_stack_00000070._4_4_ != 0)) {
          fVar56 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
          uVar48 = (ulong)(uint)fVar56;
          fVar57 = fVar57 - fVar56;
          goto LAB_036abca4;
        }
      }
      else {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar56 = *(float *)(unaff_x19 + 200);
        fVar57 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                          (*(float *)((long)unaff_x19 + 0x2ac) +
                          (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                          in_stack_000000f0 *
                          (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar57;
joined_r0x036abbe8:
        if ((in_stack_0000109c == 0x200b) ||
           (uVar48 = (ulong)(uint)fVar56, in_stack_00000070._4_4_ != 0)) {
          fVar56 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
          uVar48 = (ulong)(uint)fVar56;
          fVar57 = fVar57 + fVar56;
          goto LAB_036abca4;
        }
      }
      lVar22 = *in_stack_00000190;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_036afadc;
      uVar42 = *unaff_x20;
      uVar16 = (uint)*(undefined8 *)(lVar26 + 0x18);
      if (uVar16 <= uVar42) goto LAB_036afbe8;
      *(float *)(lVar26 + (long)(int)uVar42 * unaff_x24 + 0x144) = fVar57;
      uVar53 = in_stack_0000109c;
      uVar67 = in_stack_0000109c;
      if ((int)in_stack_0000109c < 0xd) {
        if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
        if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
           ((float)uVar42 == in_stack_00000090._4_4_)) goto LAB_036abd48;
      }
      else {
        if (1 < in_stack_0000109c - 0x2028) {
          if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
          uVar48 = 0;
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          if ((float)uVar42 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
        }
LAB_036abd48:
        if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
          fVar56 = *(float *)(unaff_x19 + 0x99);
          fVar57 = *(float *)(unaff_x19 + 0x9a);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                               ,param_3);
          }
          fVar56 = fVar56 - fVar57;
          if (((fStack0000000000000060 < ABS(fVar56)) &&
              (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
            FUN_036ed624(fVar56);
            *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar56;
            *(float *)(unaff_x19 + 0x9b) = fVar56 + *(float *)(unaff_x19 + 0x9b);
            puVar8 = PTR_DAT_03d9c920;
            lVar22 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar22 = *(long *)puVar8;
            }
            lVar26 = *(long *)(lVar22 + 0xb8);
            if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x95]) {
              if (*(int *)(lVar22 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              }
              FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
              memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
              puVar8 = PTR_DAT_03d9c920;
              lVar22 = *(long *)PTR_DAT_03d9c920;
              memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x000001d0,0x378);
              thunk_FUN_01b4f09c(*(long *)(lVar22 + 0xb8) + 0x818,0);
              lVar22 = *(long *)(*(long *)puVar8 + 0xb8);
              *(float *)(lVar22 + 0x7bc) = fVar56 + *(float *)(lVar22 + 0x7bc);
              *(float *)(lVar22 + 0x800) = fVar56 + *(float *)(lVar22 + 0x800);
              uVar39 = *(undefined8 *)PTR_DAT_03d9c8c8;
              memcpy(&stack0x000010a0,(void *)(lVar22 + 0x788),0x378);
              FUN_02178ef4(lVar22 + 0x11f0,&stack0x000010a0,uVar39);
              in_stack_00000070._4_4_ = unaff_w21;
            }
          }
        }
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
        fVar57 = *(float *)((long)unaff_x19 + 0x4cc) - fVar45;
        fVar56 = *(float *)((long)unaff_x19 + 0x4c4);
        if (fVar57 <= *(float *)((long)unaff_x19 + 0x4c4)) {
          fVar56 = fVar57;
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar56;
        fVar46 = *(float *)(unaff_x19 + 0x99);
        if (in_stack_00001094 == '\0') {
          in_stack_00001098 = fVar56;
        }
        if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
           (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
            ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
          in_stack_00001094 = '\x01';
        }
        lVar22 = *in_stack_00000190;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_036afadc;
        uVar42 = *(uint *)(unaff_x19 + 0x95);
        if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
        lVar29 = unaff_x19[0x93];
        lVar32 = lVar26 + (long)(int)uVar42 * 0x5c;
        *(int *)(lVar32 + 0x34) = (int)lVar29;
        uVar16 = *(uint *)(unaff_x19 + 0x93);
        if ((int)lVar29 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
          uVar16 = *(uint *)((long)unaff_x19 + 0x49c);
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar16;
        *(uint *)(lVar32 + 0x38) = uVar16;
        *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
        *(undefined4 *)(lVar32 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
        iVar12 = *(int *)((long)unaff_x19 + 0x49c);
        if ((int)uVar16 <= *(int *)((long)unaff_x19 + 0x4a4)) {
          iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
        }
        *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
        *(int *)(lVar32 + 0x40) = iVar12;
        *(int *)(lVar32 + 0x24) = (*(int *)(lVar32 + 0x3c) - *(int *)(lVar32 + 0x34)) + 1;
        *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_036afbe8;
        uVar64 = *(undefined4 *)(lVar22 + (long)(int)uVar16 * (long)iVar15 + 0x11c);
        lVar26 = lVar26 + (long)(int)uVar42 * 0x5c;
        *(float *)(lVar26 + 0x70) = fVar57;
        *(undefined4 *)(lVar26 + 0x6c) = uVar64;
        lVar22 = *in_stack_00000190;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
        fVar46 = fVar46 - fVar45;
        uVar48 = (ulong)(uint)fVar46;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(undefined4 *)(lVar26 + 0x74) =
             *(undefined4 *)
              (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
        *(float *)(lVar26 + 0x78) = fVar46;
        lVar22 = *in_stack_00000190;
        if ((lVar22 == 0) || (lVar29 = *(long *)(lVar22 + 0x50), lVar29 == 0)) goto LAB_036afadc;
        lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x95);
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar26 = lVar29 + lVar32 * 0x5c;
        *(float *)(lVar26 + 0x44) =
             *(float *)(lVar26 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
        *(float *)(lVar26 + 0x5c) = in_stack_00000108._4_4_;
        if (*(int *)(lVar26 + 0x24) == 1) {
          *(int *)(lVar29 + lVar32 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
        }
        if ((*in_stack_00000178 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0))
        goto LAB_036afadc;
        lVar33 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
        uVar16 = (uint)*(undefined8 *)(lVar26 + 0x18);
        if (uVar16 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
        if ((*(char *)(lVar26 + lVar33 * unaff_x24 + 0x194) == '\0') &&
           (lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar16 <= *(uint *)(unaff_x19 + 0x94)))
        goto LAB_036afbe8;
        lVar29 = lVar29 + lVar32 * 0x5c;
        fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 (in_stack_000000f0 *
                  (in_stack_000000e0._4_4_ +
                  fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
                 *(float *)((long)unaff_x19 + 0x2ac));
        fVar56 = -fVar45;
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar56 = fVar45;
        }
        *(float *)(lVar29 + 0x58) = *(float *)(lVar26 + lVar33 * unaff_x24 + 0x144) + fVar56;
        *(float *)(lVar29 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
        *(float *)(lVar29 + 0x54) = fVar57;
        *(float *)(lVar29 + 0x48) = fStack0000000000000064 + (fVar46 - fVar57);
        *(float *)(lVar29 + 0x4c) = fVar46;
        if ((int)in_stack_0000109c < 0x2d) {
          if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_036ed2b4();
            lVar22 = unaff_x19[0x6d];
            *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
            iVar12 = (int)unaff_x19[0x95] + 1;
            *(int *)(unaff_x19 + 0x95) = iVar12;
            *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
            if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar12) {
                FUN_036ed7dc();
                lVar22 = unaff_x19[0x6d];
                if (lVar22 == 0) goto LAB_036afadc;
              }
              lVar22 = *(long *)(lVar22 + 0x38);
              if (lVar22 != 0) {
                if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
                  fVar56 = *(float *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                  if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                    if ((in_stack_0000109c == 0x2029) || (fVar57 = 0.0, in_stack_0000109c == 10)) {
                      fVar57 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar20 = 0;
                    fVar57 = fVar56 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                             in_stack_00000058._4_4_ *
                             (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                             in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar57) +
                             *(float *)(unaff_x19 + 0x9b);
                  }
                  else {
                    if ((in_stack_0000109c == 0x2029) || (fVar57 = 0.0, in_stack_0000109c == 10)) {
                      fVar57 = *(float *)((long)unaff_x19 + 0x2cc);
                    }
                    uVar20 = 1;
                    fVar57 = *(float *)(unaff_x19 + 0x9b) +
                             *(float *)(unaff_x19 + 0x58) +
                             in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar57);
                  }
                  *(float *)(unaff_x19 + 0x9b) = fVar57;
                  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar20;
                  puVar8 = PTR_DAT_03d9c920;
                  lVar22 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar22 = *(long *)puVar8;
                  }
                  uVar39 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x9a) = fVar56;
                  uVar48 = NEON_rev64(uVar39,4);
                  unaff_x19[0x99] = uVar48;
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
      uVar42 = *unaff_x20;
      if (uVar16 <= uVar42) goto LAB_036afbe8;
      if (*(char *)(lVar26 + (long)(int)uVar42 * unaff_x24 + 0x194) != '\0') {
        lVar26 = lVar26 + (long)(int)uVar42 * unaff_x24;
        uVar51 = *(ulong *)(lVar26 + 0x11c);
        uVar48 = *(ulong *)(in_stack_00000088 + 0x230);
        *(ulong *)(in_stack_00000088 + 0x230) =
             uVar48 ^ (uVar48 ^ uVar51) &
                      ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar51 >> 0x20)),
                                -(uint)((float)uVar48 < (float)uVar51));
        uVar51 = *(ulong *)(in_stack_00000088 + 0x238);
        uVar48 = *(ulong *)(lVar26 + 0x128);
        *(ulong *)(in_stack_00000088 + 0x238) =
             uVar51 ^ (uVar51 ^ uVar48) &
                      ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar51 >> 0x20)),
                                -(uint)((float)uVar48 < (float)uVar51));
      }
      if (((int)unaff_x19[0x5c] == 5) &&
         ((0xd < uVar53 || ((1 << (ulong)(uVar53 & 0x1f) & 0x2c00U) == 0)))) {
        lVar26 = *(long *)(lVar22 + 0x58);
        if (lVar26 == 0) goto LAB_036afadc;
        iVar12 = (int)unaff_x19[0x96] + 1;
        if (*(int *)(lVar26 + 0x18) < iVar12) {
          if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52e84((long *)(lVar22 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
          lVar22 = *in_stack_00000190;
          if (lVar22 == 0) goto LAB_036afadc;
        }
        lVar26 = *(long *)(lVar22 + 0x58);
        if (lVar26 == 0) goto LAB_036afadc;
        uVar16 = *(uint *)(unaff_x19 + 0x96);
        lVar29 = (long)(int)uVar16;
        uVar42 = *(uint *)(lVar26 + 0x18);
        if (uVar42 <= uVar16) goto LAB_036afbe8;
        lVar32 = lVar26 + lVar29 * 0x14;
        fVar57 = *(float *)(lVar32 + 0x30);
        uVar48 = (ulong)(uint)fVar57;
        *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
        fVar56 = *(float *)((long)unaff_x19 + 0x4c4);
        if (fVar57 <= *(float *)((long)unaff_x19 + 0x4c4)) {
          fVar56 = fVar57;
        }
        *(float *)(lVar32 + 0x30) = fVar56;
        uVar53 = *(uint *)((long)unaff_x19 + 0x494);
        if (uVar53 == 0 && uVar16 == 0) {
          *(uint *)(lVar26 + (ulong)uVar16 * 0x14 + 0x20) = uVar53;
        }
        else {
          uVar40 = uVar53 - 1;
          if (0 < (int)uVar53) {
            lVar22 = *(long *)(lVar22 + 0x38);
            if (lVar22 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar22 + 0x18) <= uVar40) goto LAB_036afbe8;
            if (uVar16 != *(uint *)(lVar22 + (ulong)uVar40 * (unaff_x24 & 0xffffffff) + 0x68)) {
              if (uVar16 - 1 < uVar42) {
                *(uint *)(lVar26 + 0x20 + (long)(int)(uVar16 - 1) * 0x14 + 4) = uVar40;
                *(uint *)(lVar26 + 0x20 + lVar29 * 0x14) = uVar53;
                goto LAB_036ac564;
              }
              goto LAB_036afbe8;
            }
          }
          if ((float)uVar53 == in_stack_00000090._4_4_) {
            *(float *)(lVar26 + lVar29 * 0x14 + 0x24) = in_stack_00000090._4_4_;
          }
        }
      }
LAB_036ac564:
      puVar8 = PTR_DAT_03d9c920;
      if (((char)unaff_x19[0x5b] == '\0') &&
         ((6 < *(uint *)(unaff_x19 + 0x5c) ||
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
      if ((in_stack_00000070._4_4_ == 0) &&
         (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) &&
          (in_stack_0000109c != 0xad)))) {
        if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
          if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
               (0x1d < in_stack_0000109c - 0xa961)) || (uVar51 = FUN_036fbce8(0), (uVar51 & 1) != 0)
              ) && ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
                     (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))
                   )) goto LAB_036ac6e8;
          lVar22 = FUN_036fbb7c(0);
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_036afadc;
          uVar42 = FUN_0254f914(*(long *)(lVar22 + 0x10),in_stack_0000109c,
                                *(undefined8 *)PTR_DAT_03d9c860);
          if ((int)in_stack_00000090._4_4_ <= (int)*unaff_x20) {
            if ((uVar42 & 1) == 0) {
LAB_036ac8e4:
              if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_036ed2b4();
              goto LAB_036ac91c;
            }
LAB_036ac84c:
            if ((uint)unaff_x26 != unaff_w25 || ((bStack0000000000000078 ^ 0xff) & 1) != 0)
            goto LAB_036ac920;
            if (in_stack_00000070._4_4_ != 0) goto LAB_036ac868;
            goto LAB_036ac8a0;
          }
          lVar22 = FUN_036fbb7c(0);
          if (((lVar22 == 0) || (*in_stack_00000190 == 0)) ||
             (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_036afadc;
          uVar51 = FUN_0254f914(*(long *)(lVar22 + 0x18),
                                *(undefined2 *)
                                 (lVar26 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20),
                                *(undefined8 *)PTR_DAT_03d9c860);
          if ((uVar42 & 1) != 0) goto LAB_036ac84c;
          if ((uVar51 & 1) == 0) goto LAB_036ac8e4;
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
      fVar56 = (float)uVar18;
      in_stack_00001068 = in_stack_00001068 + 1;
      lVar22 = unaff_x19[0x8f];
      if (lVar22 != 0) {
        if ((int)in_stack_00001068 < (int)*(uint *)(lVar22 + 0x18)) {
          if (*(uint *)(lVar22 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
          in_stack_0000109c = *(uint *)(lVar22 + (long)(int)in_stack_00001068 * 0xc + 0x20);
          if (in_stack_0000109c == 0) goto LAB_036acbd8;
          if (5 < in_stack_00000188._4_4_) {
            uVar39 = FUN_0303de64(&stack0x0000109c,0);
            uVar17 = FUN_0303de64(&stack0x00001068,0);
            uVar39 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar39,
                                  *(undefined8 *)PTR_DAT_03d9c940,uVar17,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                );
            }
            FUN_038f2e04(uVar39,0);
            in_stack_00001088 = CONCAT44(3,*unaff_x20);
          }
          if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_0000109c == 0x3c))
          goto code_r0x036a8fdc;
          if ((*in_stack_00000190 != 0) &&
             (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar22 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar22 + 0x58);
              unaff_x19[0x20] = *(long *)(lVar22 + 0x38);
              thunk_FUN_01b4f09c(in_stack_00000178);
              goto LAB_036a9064;
            }
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
LAB_036acbd8:
        fVar56 = (float)uVar48;
        if (((char)unaff_x19[0x47] != '\0') &&
           (fVar56 = DAT_00b552b8,
           DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
          fVar56 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar57 = *(float *)((long)unaff_x19 + 0x254);
          if ((fVar56 < fVar57) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
            }
            fVar45 = (*(float *)((long)unaff_x19 + 0x23c) - fVar56) * 0.5;
            if (fVar45 <= DAT_00b55428) {
              fVar45 = DAT_00b55428;
            }
            *(float *)(unaff_x19 + 0x48) = fVar56;
            fVar45 = (fVar56 + fVar45) * 20.0 + 0.5;
            fVar56 = DAT_00b556b4;
            if (fVar45 != INFINITY) {
              fVar56 = (float)(int)fVar45 / 20.0;
            }
            if (fVar57 <= fVar56) {
              fVar56 = fVar57;
            }
            goto LAB_036acc94;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
        puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
          uVar39 = FUN_0303de64(in_stack_00000038,0);
          uVar17 = FUN_03052638(_fStack0000000000000040,0);
          uVar39 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar39,
                                *(undefined8 *)PTR_DAT_03d9c938,uVar17,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2acc(uVar39,0);
        }
        puVar9 = PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar67 == 3)))) {
          (**(code **)(*unaff_x19 + 0x948))();
          goto LAB_036acd60;
        }
        lVar22 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar22 = *(long *)puVar9;
        }
        plVar38 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
        lVar22 = **(long **)(lVar22 + 0xb8);
        if (lVar22 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
        iVar15 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000190 == 0) ||
           (lVar22 = *(long *)(*in_stack_00000190 + 0x60), lVar22 == 0)) goto LAB_036afadc;
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
        FUN_036fa40c(lVar22 + 0x20,0,0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        iVar12 = (int)unaff_x19[0x4e];
        in_stack_00000108._4_4_ =
             **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        in_stack_000000f8 =
             *(long **)(*(float **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
        lVar22 = unaff_x19[0xe3];
        _fStack00000000000000c8 = (ulong)in_stack_000000f8;
        fStack00000000000000d0 = in_stack_00000108._4_4_;
        if (iVar12 < 0x401) {
          if (iVar12 == 0x100) {
            if (lVar22 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar22 + 0x18) < 2) goto LAB_036afbe8;
            uVar39 = *(undefined8 *)(lVar22 + 0x30);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000190 == 0) ||
                 (lVar26 = *(long *)(*in_stack_00000190 + 0x58), lVar26 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              fVar56 = *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar56 = *(float *)(unaff_x19 + 0x97);
            }
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
            fVar56 = (0.0 - fVar56) - fStack0000000000000020;
          }
          else if (iVar12 == 0x200) {
            if (lVar22 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_036afbe8;
            fStack00000000000000d0 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            uVar39 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar22 + 0x24) +
                              (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000190 == 0) ||
                 (lVar22 = *(long *)(*in_stack_00000190 + 0x58), lVar22 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              lVar22 = lVar22 + (long)(int)uStack0000000000000030 * 0x14;
              fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
              fVar56 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) +
                        *(float *)(lVar22 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
              fVar56 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar12 != 0x400) goto LAB_036ad288;
            if (lVar22 == 0) goto LAB_036afadc;
            if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
            uVar39 = *(undefined8 *)(lVar22 + 0x24);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*in_stack_00000190 == 0) ||
                 (lVar26 = *(long *)(*in_stack_00000190 + 0x58), lVar26 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              in_stack_00001098 =
                   *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
            fVar56 = fStack0000000000000024 + (0.0 - in_stack_00001098);
          }
LAB_036ad278:
          _fStack00000000000000c8 =
               CONCAT44((float)((ulong)uVar39 >> 0x20) + 0.0,(float)uVar39 + fVar56);
        }
        else if (iVar12 == 0x800) {
          if (lVar22 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_036afbe8;
          fVar56 = fStack000000000000002c + 0.0 +
                   (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar22 + 0x24) +
                        (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + 0.0);
          fStack00000000000000d0 = fVar56;
        }
        else {
          if (iVar12 == 0x1000) {
            if (lVar22 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar22 + 0x18) != 1) && (*(int *)(lVar22 + 0x18) != 0)) {
              uVar39 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar22 + 0x24) +
                                (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
              fStack00000000000000d0 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
              fVar56 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                              *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
              goto LAB_036ad278;
            }
            goto LAB_036afbe8;
          }
          if (iVar12 == 0x2000) {
            if (lVar22 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0)) goto LAB_036afbe8;
            fVar56 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                           fStack0000000000000024) * 0.5;
            _fStack00000000000000c8 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar22 + 0x24) +
                          (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5 + fVar56);
            fStack00000000000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          }
        }
LAB_036ad288:
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        uVar39 = FUN_03afb088(unaff_x19[0xe5],0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar8);
        }
        uVar18 = FUN_03922f24(uVar39,0,0);
        lVar22 = FUN_036dfed8();
        if (lVar22 == 0) goto LAB_036afadc;
        FUN_0392a7f0(lVar22,0);
        *(float *)(unaff_x19 + 0xe2) = fVar56;
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        iVar12 = FUN_03afa68c(unaff_x19[0xe5],0);
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        fVar57 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
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
        lVar22 = *(long *)PTR_DAT_03d9c888;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar22 = *(long *)puVar8;
        }
        puVar23 = *(undefined4 **)(lVar22 + 0xb8);
        uVar48 = (ulong)(uint)puVar23[1];
        uVar51 = (ulong)(uint)puVar23[2];
        uVar54 = (ulong)(uint)puVar23[3];
        FUN_036c214c(*puVar23,uVar48,uVar51,uVar54,&stack0x00001070,0x4000ffff,0);
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar22 = *in_stack_00000190;
        if (lVar22 == 0) goto LAB_036afadc;
        uVar42 = *unaff_x20;
        if ((int)uVar42 < 1) {
          in_stack_000000e0._4_4_ = 0.0;
          iVar15 = 0;
          goto LAB_036af524;
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        fVar56 = ABS(fVar56);
        fVar45 = 1.0;
        if ((uVar18 & 1) == 0) {
          fVar45 = fVar56;
        }
        if (lVar22 == 0) goto LAB_036afadc;
        bVar11 = false;
        bVar7 = false;
        _fStack0000000000000138 = 0;
        bVar10 = false;
        in_stack_000000e0._4_4_ = 0.0;
        fStack000000000000002c = 0.0;
        in_stack_00000170._4_4_ = 0.0;
        in_stack_00000070._4_4_ = 0;
        lVar26 = 0x2e0;
        fVar59 = 0.0;
        fVar46 = 0.0;
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
      goto LAB_036afadc;
    }
    goto LAB_036afbe8;
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar51 = FUN_036e7318();
  if (((uVar51 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar67 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  uVar42 = *unaff_x20;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar29 = (long)(int)uVar42;
  cVar21 = *(char *)(lVar22 + lVar29 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar26 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar42) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar22 + lVar29 * unaff_x24 + 0x30) = unaff_x19[0xca];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xcb];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      uVar42 = *unaff_x20;
      if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar22 + (long)(int)uVar42 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar42 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*in_stack_00000178 == 0) || (lVar32 = FUN_036c835c(*in_stack_00000178,0), lVar32 == 0))
      goto LAB_036afadc;
      uVar39 = FUN_0262f3a4(lVar32,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
      *(undefined8 *)(lVar22 + lVar29 * unaff_x24 + 0x30) = uVar39;
      thunk_FUN_01b4f09c();
      uVar42 = *(uint *)((long)unaff_x19 + 0x494);
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
  if (((int)uVar42 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
    lVar22 = lVar22 + (long)(int)uVar42 * (long)iVar15;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *unaff_x20 = uVar42 + 1;
    uVar67 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar42 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar42 >> 4 & 1) == 0) {
      if ((uVar42 >> 3 & 1) == 0) {
        fVar57 = 1.0;
        if ((uVar42 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar51 = FUN_02fdd9e8(in_stack_0000109c,0);
          if ((uVar51 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar42 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar42 & 0xffff;
            fVar57 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar51 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar57 = 1.0;
        if ((uVar51 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar42 = FUN_02fdddc0(in_stack_0000109c,0);
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
      uVar51 = FUN_02fdd9e8(in_stack_0000109c,0);
      fVar57 = 1.0;
      if ((uVar51 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar42 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar57 = 1.0;
        in_stack_0000109c = uVar42 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    uVar67 = in_stack_0000109c;
    if (*in_stack_000000f8 == 0) goto LAB_036a9250;
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000178 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    thunk_FUN_01b4f09c(in_stack_00000178);
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000168 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    thunk_FUN_01b4f09c();
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    uVar16 = *unaff_x20;
    uVar42 = *(uint *)(lVar22 + 0x18);
    if (uVar42 <= uVar16) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar22 + (long)(int)uVar16 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar45 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar22 = unaff_x19[0x20];
    }
    else {
      lVar26 = unaff_x19[0x8f];
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar26 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar42 <= uVar16 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar45 = *(float *)(lVar22 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar22 = *in_stack_00000178;
    }
    if (lVar22 == 0) goto LAB_036afadc;
    fVar59 = (float)FUN_0396ac34(lVar22 + 0x50,0);
    fVar46 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar46 = 1.0;
    }
    fVar61 = 0.0;
    fVar60 = 0.0;
    if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar60 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar61 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar22 = unaff_x19[0xc9];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_036afadc;
    fVar62 = *(float *)((long)unaff_x19 + 0x404);
    fVar65 = *(float *)(lVar22 + 0x2c);
    fVar56 = (float)FUN_0396b17c(*(long *)(lVar22 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar52 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar43 = *(float *)((long)unaff_x19 + 0x404);
    fVar41 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar22 = unaff_x19[0x6d];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar26 + 0x2c) = 0;
    fVar46 = ((fVar57 * fVar45) / (float)iVar12) * fVar59 * fVar46;
    fVar56 = fVar46 * fVar62 * fVar65 * fVar56;
    *(float *)(lVar26 + 0x160) = fVar56;
    uVar42 = *(uint *)(unaff_x19 + 0x24);
    fVar41 = fVar46 * fVar52 * fVar43 * fVar41;
    fStack000000000000012c = fVar61;
    if (uVar42 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar26 = unaff_x19[0xe1];
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar26 = *(long *)(lVar26 + (long)(int)uVar42 * 8 + 0x20);
      if (lVar26 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar26 + 0x10c);
    }
FUN_036a9b34:
    fVar45 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar45 = fVar56;
    }
  }
  else {
    fVar57 = 1.0;
    if (iVar12 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar12 == 1) {
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar22 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar22 == 0))
      goto LAB_036afadc;
      lVar22 = FUN_02b59714(lVar22,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar8 = PTR_DAT_03d9c920;
      uVar67 = in_stack_0000109c;
      if (lVar22 == 0) goto LAB_036a9250;
      if (in_stack_0000109c == 0x3c) {
        in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar29 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar29 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar29 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar56 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar46 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar45 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar45 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar45 = (fVar56 / (float)iVar12) * fVar46 * fVar45;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar56 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar59 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar46 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar22 + 0x20),0);
        fVar62 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_036afadc;
        fVar52 = *(float *)(lVar22 + 0x2c);
        fVar65 = (float)FUN_0396b17c(*(long *)(lVar22 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar43 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar41 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar41 = fVar45 * fVar43 * fVar50 * fVar41;
        fVar46 = (fVar56 / (float)iVar12) * fVar59 * fVar46;
        fVar56 = fVar46 * (fVar61 / fVar62) * fVar52 * fVar65;
        fVar46 = fVar46 / fVar56;
        fVar60 = fVar46 * fVar60;
        fVar45 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar46 = fVar46 * fVar45;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_036afadc;
        fVar61 = *(float *)(lVar22 + 0x2c);
        fVar59 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        fVar62 = (float)FUN_0396b17c(*(long *)(lVar22 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar65 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar52 = *(float *)((long)unaff_x19 + 0x404);
        fVar41 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar41 = fVar45 * fVar65 * fVar52 * fVar41;
        fVar56 = (fVar56 / (float)iVar12) * fVar46 * fVar59 * fVar61 * fVar62;
        fVar46 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar22;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar22);
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar22 + 0x2c) = 1;
      *(float *)(lVar22 + 0x160) = fVar56;
      *(long *)(lVar22 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar22 = *in_stack_00000190;
      if ((lVar22 == 0) || (lVar29 = *(long *)(lVar22 + 0x38), lVar29 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar26;
      fStack000000000000012c = fVar46;
      goto FUN_036a9b34;
    }
    lVar22 = *in_stack_00000190;
    fVar45 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar45 = fVar56;
    }
    fVar41 = 0.0;
    if (lVar22 == 0) goto LAB_036afadc;
    fVar60 = 0.0;
    fStack000000000000012c = 0.0;
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar22 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  uVar42 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)uVar42 * unaff_x24;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar22 + 0x184) = in_stack_000001d8;
  *(undefined8 *)(lVar22 + 0x17c) = in_stack_000001d0;
  if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar22,0);
  puVar8 = StringLiteral_455;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar42 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar42 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar42 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar42 << 0x20;
    fVar59 = 0.0;
    fVar46 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar53 = *unaff_x20;
    uVar16 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar53 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= uVar53 + 1) goto LAB_036afbe8;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar53 + 1) * (long)iVar15 + 0x30);
      if ((((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar26,uVar16 | *(int *)(lVar22 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar64 = 0;
      if ((uVar18 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar42 << 0x20;
        fVar59 = 0.0;
        fVar46 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar64 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar46 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar59 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar42 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar42,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar53 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000138 = (ulong)uVar42 << 0x20;
      fVar59 = 0.0;
      fVar46 = 0.0;
    }
    if (0 < (int)uVar53) {
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= uVar53 - 1) goto LAB_036afbe8;
      lVar22 = *(long *)(lVar22 + (ulong)(uVar53 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar22 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0 ||
          (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar26,*(uint *)(lVar22 + 0x28) | uVar16 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar47 = (undefined4)_fStack0000000000000138;
        fVar46 = (float)FUN_036d2d10(fVar46,fVar59,_fStack0000000000000138 & 0xffffffff,uVar64,
                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar47);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar62 = *(float *)(unaff_x19 + 200);
    fVar61 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar62 = fVar62 - fVar45 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar62;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar62 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar61 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar61 != 0.0) {
    fVar62 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar65 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar61 * 0.5 - fVar45 * (fVar62 * 0.5 + fVar65));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar22 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar22,0,0);
    fVar62 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar22 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar22 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar62 = 0.0;
      if ((uVar18 & 1) != 0) {
        lVar22 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar22 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_03900954(lVar22,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar65 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar62 = (float)FUN_03900954(*in_stack_00000168,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar62 = fVar62 * fVar61 * fVar65 * 0.25;
        if (fVar61 < in_stack_00000170._4_4_ + fVar62) {
          in_stack_00000170._4_4_ = fVar61 - fVar62;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_000000e0._4_4_ = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar22 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar22,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar22 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar22 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar18 & 1) != 0) {
        lVar22 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar22 == 0) goto LAB_036afadc;
        uVar18 = FUN_038ffa04(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar18 & 1) != 0) {
          lVar22 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar22 == 0) goto LAB_036afadc;
          fVar61 = (float)FUN_03900954(lVar22,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar65 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar62 = (float)FUN_03900954(*in_stack_00000168,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar62 = fVar62 * fVar61 * fVar65 * 0.25;
          if (fVar61 < in_stack_00000170._4_4_ + fVar62) {
            in_stack_00000170._4_4_ = fVar61 - fVar62;
          }
          goto LAB_036aa254;
        }
      }
    }
    fVar62 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar61 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar45 * (fVar46 + ((fVar61 - in_stack_00000170._4_4_) - fVar62));
  fVar46 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar41 + fVar45 * (fVar59 + in_stack_00000170._4_4_ + fVar46)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar46 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar52 = fVar65 - fVar45 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar46);
  fVar46 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar61 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar45 * (fVar62 + fVar62 + in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar46);
  param_3 = extraout_x1;
  fVar46 = fStack0000000000000124;
  fVar59 = fVar61;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar43 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar46 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar55 = fVar43 * fVar45 * (fVar62 + in_stack_00000170._4_4_ + fVar46);
    fVar46 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar59 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar65 = fVar65 + 0.0;
    fVar52 = fVar52 + 0.0;
    fVar50 = fStack0000000000000124 + fVar55;
    fVar43 = fVar43 * fVar45 * (((fVar46 - fVar59) - in_stack_00000170._4_4_) - fVar62);
    fVar59 = fVar61 + fVar43;
    fVar44 = (fVar55 - fVar43) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar43) - fVar44;
    fVar61 = (fVar61 + fVar55) - fVar44;
    param_3 = extraout_x1_04;
    fVar46 = fVar50 - fVar44;
    fVar59 = fVar59 - fVar44;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar45;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar55 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar50 = fVar52;
    fStack0000000000000114 = fVar65;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar63 = (fVar52 + fVar65) * 0.5;
    fVar58 = (fVar61 + fStack0000000000000124) * 0.5;
    fVar65 = fVar65 - fVar63;
    fStack0000000000000110 = 0.0;
    fVar49 = fVar65;
    fVar46 = (float)FUN_03911ddc(fVar46 - fVar58,_fStack0000000000000080,0);
    fVar46 = fVar58 + fVar46;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar52 = fVar52 - fVar63;
    fVar43 = 0.0;
    fVar50 = fVar52;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar58,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar58 + fStack0000000000000124;
    fVar43 = fVar43 + 0.0;
    fVar55 = 0.0;
    fVar61 = (float)FUN_03911ddc(fVar61 - fVar58,_fStack0000000000000080,0);
    fVar61 = fVar58 + fVar61;
    fVar65 = fVar63 + fVar65;
    fVar55 = fVar55 + 0.0;
    fVar44 = 0.0;
    fVar59 = (float)FUN_03911ddc(fVar59 - fVar58,_fStack0000000000000080,0);
    fVar59 = fVar58 + fVar59;
    fVar52 = fVar63 + fVar52;
    fVar44 = fVar44 + 0.0;
    param_3 = extraout_x1_00;
    fVar50 = fVar63 + fVar50;
    fStack0000000000000114 = fVar63 + fVar49;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar22 = *(long *)(*in_stack_00000190 + 0x38);
  uVar18 = (ulong)(uint)fVar45;
  if (lVar22 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar22 + 0x120) = fVar50;
  *(float *)(lVar22 + 0x124) = fVar43;
  if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x110) = fVar46;
  *(float *)(lVar22 + 0x114) = fStack0000000000000114;
  *(float *)(lVar22 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x128) = fVar61;
  *(float *)(lVar22 + 300) = fVar65;
  *(float *)(lVar22 + 0x130) = fVar55;
  if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar22 = lVar22 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar22 + 0x134) = fVar59;
  *(float *)(lVar22 + 0x138) = fVar52;
  *(float *)(lVar22 + 0x13c) = fVar44;
  if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
  goto LAB_036afadc;
  uVar42 = *unaff_x20;
  unaff_x26 = (long)(int)uVar42;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar22 + unaff_x26 * unaff_x24;
  *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
  fVar59 = *(float *)(unaff_x19 + 0x9b);
  uVar48 = (ulong)(uint)fVar59;
  fVar46 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar26 + 0x15c) = (fVar61 - fStack0000000000000124) / (fStack0000000000000114 - fVar50)
  ;
  *(float *)(lVar26 + 0x14c) = (fVar41 - fVar59) + fVar46;
  fVar60 = fVar60 * fVar45;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar60 = fVar60 / fVar57;
    fStack000000000000012c = (fStack000000000000012c * fVar45) / fVar57;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar45;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar42 == unaff_w25)) {
    fStack000000000000012c = fVar46 + fStack000000000000012c;
    fVar60 = fVar46 + fVar60;
    fVar65 = fStack000000000000012c;
    fVar61 = fVar60;
    if (fVar46 != 0.0) {
      fVar61 = (fVar60 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      fVar65 = (fStack000000000000012c - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar61 <= fVar60) {
        fVar61 = fVar60;
      }
      if (fStack000000000000012c <= fVar65) {
        fVar65 = fStack000000000000012c;
      }
    }
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    fVar46 = fVar61;
    if (fVar61 <= *(float *)(unaff_x19 + 0x99)) {
      fVar46 = *(float *)(unaff_x19 + 0x99);
    }
    fVar52 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
      fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar52;
    *(float *)(unaff_x19 + 0x99) = fVar46;
    *(float *)(lVar22 + 0x154) = fVar61;
    *(float *)(lVar22 + 0x158) = fVar65;
    *(float *)(lVar22 + 0x148) = fVar60 - fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar60 - fVar59;
    *(float *)(lVar22 + 0x150) = fStack000000000000012c - fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar59;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar46;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar46 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar59 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar57 = (fVar45 * fVar59) / fVar57;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar46 <= fVar57) {
        fVar46 = fVar57;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar46;
      param_3 = extraout_x1_01;
    }
    if ((float)uVar48 == 0.0) {
      fVar57 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar60) {
        fVar57 = fVar60;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar57;
    }
  }
  else {
    fVar57 = *(float *)(unaff_x19 + 0x99);
    lVar22 = lVar22 + unaff_x26 * unaff_x24;
    *(float *)(lVar22 + 0x154) = fVar57;
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar57 = fVar57 - fVar59;
    *(float *)(lVar22 + 0x148) = fVar57;
    *(float *)(lVar22 + 0x158) = fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar57;
    fVar46 = fVar46 - fVar59;
    *(float *)(lVar22 + 0x150) = fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
  }
  lVar22 = *in_stack_00000190;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_036afadc;
  uVar42 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar26 + (long)(int)uVar42 * unaff_x24;
  *(undefined1 *)(lVar26 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  in_stack_00000070._4_4_ = unaff_w21;
  uVar67 = in_stack_0000109c;
  if (((in_stack_0000109c != 9) &&
      ((((unaff_w21 != 0 || (in_stack_0000109c == 3)) || (in_stack_0000109c == 0x200b)) ||
       (in_stack_0000109c == 0xad)))) &&
     (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x644) != 1)))) {
    if (((in_stack_0000109c & 0xfffffffe) != 10) || ((int)unaff_x19[0x5c] != 6)) {
LAB_036aad9c:
      if ((((0x22 < in_stack_0000109c - 0x2007) ||
           ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
          (1 < in_stack_0000109c - 10)) && (in_stack_0000109c != 0xa0)) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        auVar66 = FUN_02fdea78(in_stack_0000109c,0);
        param_3 = auVar66._8_8_;
        if ((auVar66._0_8_ & 1) == 0) goto LAB_036ab1ec;
      }
      if (((in_stack_0000109c == 0xad) || (in_stack_0000109c == 0x200b)) ||
         (in_stack_0000109c == 0x2060)) goto LAB_036ab1ec;
      param_1 = *in_stack_00000190;
      if ((param_1 == 0) || (lVar22 = *(long *)(param_1 + 0x50), lVar22 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar22 + 0x2c) = *(int *)(lVar22 + 0x2c) + 1;
      in_w9 = *(int *)(param_1 + 0x20) + 1;
      goto code_r0x036ab1e8;
    }
    fVar57 = (float)uVar48;
    fVar56 = 0.0;
    if ((0.0 < fVar57) && (fVar56 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar56 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar48 = _fStack00000000000000c8 & 0xffffffff;
    if ((*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar57)) + fVar56 <=
        fStack00000000000000c8) goto LAB_036aad9c;
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar42;
    }
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_stack_00001068 = FUN_036ecf20();
    lVar22 = unaff_x19[0x5d];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar51 = FUN_0391f968(lVar22,0,0);
    if ((uVar51 & 1) != 0) {
      plVar38 = (long *)unaff_x19[0x5d];
      uVar39 = (**(code **)(*unaff_x19 + 0x548))();
      if (plVar38 == (long *)0x0) goto LAB_036afadc;
      (**(code **)(*plVar38 + 0x558))(plVar38,uVar39,*(undefined8 *)(*plVar38 + 0x560));
      lVar22 = unaff_x19[0x5d];
      if (lVar22 == 0) goto LAB_036afadc;
      *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
      FUN_036dfca8(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar38 = (long *)unaff_x19[0x5d];
      if (plVar38 == (long *)0x0) goto LAB_036afadc;
      (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    goto LAB_036aad90;
  }
  *(undefined1 *)(lVar26 + 0x194) = 1;
  pfVar25 = _fStack00000000000000a8;
  pfVar28 = _fStack00000000000000b0;
  if (unaff_w23 != 0) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    pfVar28 = (float *)(lVar22 + 0x60);
    pfVar25 = (float *)(lVar22 + 100);
  }
  fVar46 = *pfVar28;
  fVar59 = *pfVar25;
  fVar57 = *(float *)(unaff_x19 + 0x6c);
  fVar60 = *(float *)(unaff_x19 + 200);
  in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar46) - fVar59;
  bVar10 = true;
  if ((fVar57 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar57))) {
    bVar10 = fVar57 == -1.0;
  }
  if (!bVar10) {
    in_stack_00000108._4_4_ = fVar57;
  }
  fVar57 = 0.0;
  if ((char)unaff_x19[0x1e] == '\0') {
    fVar57 = (float)FUN_0396af88(&stack0x00001050,0);
    uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    param_3 = extraout_x1_02;
  }
  fVar61 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
  if (in_stack_0000109c != 0xad) {
    fVar56 = fVar45;
  }
  fVar52 = (float)uVar48;
  fVar45 = 0.0;
  if ((0.0 < fVar52) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar42 = *unaff_x20;
  fVar45 = (*(float *)(unaff_x19 + 0x97) - (fVar65 - fVar52)) + fVar45;
  if (fStack00000000000000c8 < fVar45) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar42;
    }
    puVar8 = PTR_DAT_03d9c920;
    uVar39 = DAT_00b92750;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar41 = *(float *)(unaff_x19 + 0x59);
      if (((fVar41 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar52)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar56 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar45) / (float)(int)unaff_x19[0x95]) /
                 in_stack_00000058._4_4_;
        if (fVar56 <= fVar41) {
          fVar56 = fVar41;
        }
        goto LAB_036ad184;
      }
      fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar45 = *(float *)(unaff_x19 + 0x4a);
      uVar48 = (ulong)(uint)fVar45;
      if ((fVar45 < fVar52) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar56 = (fVar52 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar56 <= DAT_00b55428) {
          fVar56 = DAT_00b55428;
        }
        fVar57 = (fVar52 - fVar56) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar52;
        fVar56 = DAT_00b556b4;
        if (fVar57 != INFINITY) {
          fVar56 = (float)(int)fVar57 / 20.0;
        }
        if (fVar56 <= fVar45) {
          fVar56 = fVar45;
        }
        goto LAB_036acc94;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar22 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *(long *)puVar8;
      }
      lVar26 = *(long *)(lVar22 + 0xb8);
      if (*(int *)(lVar26 + 0x1580) == 0) goto LAB_036acbbc;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      }
      FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
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
      goto LAB_036aabc0;
    case 5:
      if ((uVar42 == 0) || ((int)in_stack_00001068 < 0)) {
        *unaff_x20 = 0;
        in_stack_00001068 = 0xffffffff;
        in_stack_00001088 = uVar39;
        goto LAB_036a9250;
      }
      fVar56 = *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (fVar56 - fVar65 <= fStack00000000000000c8) {
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar48 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar22 = NEON_rev64(uVar48,4);
        unaff_x19[0x99] = lVar22;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_036a9250;
      }
      break;
    case 6:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      lVar22 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar51 = FUN_0391f968(lVar22,0,0);
      if ((uVar51 & 1) != 0) {
        plVar38 = (long *)unaff_x19[0x5d];
        uVar39 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x558))(plVar38,uVar39,*(undefined8 *)(*plVar38 + 0x560));
        lVar22 = unaff_x19[0x5d];
        if (lVar22 == 0) goto LAB_036afadc;
        *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar38 = (long *)unaff_x19[0x5d];
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
    }
  }
  else {
switchD_036aaa24_caseD_2:
    puVar8 = PTR_DAT_03d9c920;
    fVar45 = 1.0 - fVar61;
    uVar48 = (ulong)(uint)fVar45;
    fVar57 = ABS(fVar60) + fVar57 * fVar45 * fVar56;
    fVar56 = 1.0;
    if (unaff_w28 != 0) {
      fVar56 = DAT_00b55374;
    }
    fVar60 = fVar56 * in_stack_00000108._4_4_;
    if (fVar57 <= fVar60) goto LAB_036ab54c;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar42 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
        lVar22 = *in_stack_00000190;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = 0.0;
        if ((0.0 < fVar45) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar60 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar22 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar22 == 0) goto LAB_036afadc;
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_036afadc;
      uVar16 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar22 + 0x18) <= uVar16) ||
         (uVar53 = uVar16 - 1, *(uint *)(lVar22 + 0x18) <= uVar53)) goto LAB_036afbe8;
      uVar48 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
      fVar65 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar45) -
               *(float *)(lVar22 + (long)(int)uVar16 * unaff_x24 + 0x158);
      if (((bStack000000000000007c & 1) == 0 &&
           *(short *)(lVar22 + (long)(int)uVar53 * (long)iVar15 + 0x20) == 0xad) &&
         ((fVar65 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
        bStack000000000000007c = 0;
        *unaff_x20 = uVar53;
        in_stack_00001068 = in_stack_00001068 - 1;
        in_stack_00001088 = CONCAT44(0x2d,uVar53);
        goto LAB_036a9250;
      }
      if (*(short *)(lVar22 + (long)(int)uVar16 * unaff_x24 + 0x20) == 0xad) {
        bStack000000000000007c = 1;
        goto LAB_036a9250;
      }
      if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
        fVar61 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar60 <= fVar61) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
          fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar48 = (ulong)(uint)fVar45;
          fVar60 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar45 <= fVar60) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
          goto LAB_036ab340;
LAB_036afae0:
          fVar56 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar56 <= DAT_00b55428) {
            fVar56 = DAT_00b55428;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar45;
          fVar57 = (fVar45 - fVar56) * 20.0 + 0.5;
          fVar56 = DAT_00b556b4;
          if (fVar57 != INFINITY) {
            fVar56 = (float)(int)fVar57 / 20.0;
          }
          if (fVar56 <= fVar60) {
            fVar56 = fVar60;
          }
LAB_036acc94:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar56;
          return;
        }
LAB_036afb7c:
        fVar45 = fVar57;
        if (0.0 < fVar61) {
          fVar45 = fVar57 / (1.0 - fVar61);
        }
        fVar61 = fVar61 + (fVar57 - fVar56 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar45;
LAB_036afb6c:
        if (fVar60 <= fVar61) {
          fVar61 = fVar60;
        }
        *(float *)((long)unaff_x19 + 0x2d4) = fVar61;
        return;
      }
LAB_036ab340:
      lVar22 = *(long *)PTR_DAT_03d9c920;
      param_3 = extraout_x1_03;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *(long *)puVar8;
        param_3 = extraout_x1_05;
      }
      iVar12 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000078 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
        goto LAB_036afadc;
        uVar16 = *unaff_x20 - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_036afbe8;
        param_3 = extraout_x1_06;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar22 + (long)(int)uVar16 * (long)iVar15 + 0x20) == 0xad) {
          bStack000000000000007c = 0;
          *unaff_x20 = uVar16;
          in_stack_00001068 = in_stack_00001068 - 1;
          in_stack_00001088 = CONCAT44(0x2d,uVar16);
          goto LAB_036a9250;
        }
      }
      if (fVar65 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
        uVar48 = uVar18;
        FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
LAB_036ab530:
        bStack0000000000000078 = 1;
        bStack000000000000007c = 0;
        in_stack_00000068 = 1;
        goto LAB_036a9250;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar60 = fStack00000000000000c8;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar45 = *(float *)(unaff_x19 + 0x59);
        if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar56 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)((int)unaff_x19[0x95] + 1)) /
                   in_stack_00000058._4_4_;
          if (fVar56 <= fVar45) {
            fVar56 = fVar45;
          }
LAB_036ad184:
          *(float *)((long)unaff_x19 + 700) = fVar56;
          return;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar61 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_036afb7c;
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar48 = (ulong)(uint)fVar45;
        fVar60 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar60 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_036afae0;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_036ab4e4_caseD_0;
      case 1:
        lVar22 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar22 = *(long *)PTR_DAT_03d9c920;
        }
        lVar26 = *(long *)(lVar22 + 0xb8);
        if (*(int *)(lVar26 + 0x1580) == 0) {
          bStack000000000000007c = 0;
LAB_036acbbc:
          in_stack_00001088 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
          goto LAB_036a9250;
        }
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
        iVar12 = FUN_036ecf20();
        bStack000000000000007c = 0;
LAB_036ab020:
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
        goto LAB_036aad90;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        uVar48 = uVar18;
        FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_036ab530;
      case 6:
        lVar22 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar51 = FUN_0391f968(lVar22,0,0);
        if ((uVar51 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar39 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar38 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar38 + 0x558))(plVar38,uVar39,*(undefined8 *)(*plVar38 + 0x560));
          lVar22 = unaff_x19[0x5d];
          if (lVar22 == 0) goto LAB_036afadc;
          *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar38 = (long *)unaff_x19[0x5d];
          if (plVar38 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        bStack000000000000007c = 0;
LAB_036ab13c:
        in_stack_00001088 = CONCAT44(3,*unaff_x20);
        goto LAB_036a9250;
      default:
        goto switchD_036ab4e4_default;
      }
    }
    if (((char)unaff_x19[0x47] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
      fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar61 < fVar60) {
        fVar45 = fVar57 / fVar45;
        if (fVar61 <= 0.0) {
          fVar45 = fVar57;
        }
        fVar61 = fVar61 + (fVar57 - fVar56 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar45;
        goto LAB_036afb6c;
      }
      fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar48 = (ulong)(uint)fVar45;
      fVar60 = *(float *)(unaff_x19 + 0x4a);
      if (fVar60 < fVar45) goto LAB_036afae0;
    }
    iVar12 = (int)unaff_x19[0x5c];
    if (iVar12 == 1) {
      lVar22 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *(long *)puVar8;
      }
      lVar26 = *(long *)(lVar22 + 0xb8);
      if (*(int *)(lVar26 + 0x1580) == 0) goto LAB_036acbbc;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      }
      FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
      memcpy(&stack0x00000550,&stack0x000010a0,0x378);
      goto LAB_036ab014;
    }
    if (iVar12 == 6) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      lVar22 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar51 = FUN_0391f968(lVar22,0,0);
      if ((uVar51 & 1) != 0) {
        plVar38 = (long *)unaff_x19[0x5d];
        uVar39 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x558))(plVar38,uVar39,*(undefined8 *)(*plVar38 + 0x560));
        lVar22 = unaff_x19[0x5d];
        if (lVar22 == 0) goto LAB_036afadc;
        *(int *)(lVar22 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar22,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar38 = (long *)unaff_x19[0x5d];
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      goto LAB_036ab13c;
    }
    if (iVar12 != 3) goto LAB_036ab54c;
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
LAB_036aabc0:
    in_stack_00001068 = FUN_036ecf20();
  }
LAB_036aad90:
  in_stack_00001088 = CONCAT44(3,uVar42);
  goto LAB_036a9250;
switchD_036ab4e4_default:
  bStack000000000000007c = 0;
LAB_036ab54c:
  if (in_stack_0000109c == 0xad) {
    if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x38), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *(undefined1 *)(lVar22 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    goto LAB_036ab6c0;
  }
  if (in_stack_0000109c != 9) {
    lVar22 = 0x4ec;
    if (*(char *)((long)unaff_x19 + 0x1d4) != '\0') {
      lVar22 = 0x144;
    }
    param_3 = (ulong)*(uint *)((long)unaff_x19 + lVar22);
    if (*(int *)((long)unaff_x19 + 0x644) == 1) {
      (**(code **)(*unaff_x19 + 0x8c8))(fVar60,fVar62);
      param_3 = extraout_x1_08;
    }
    else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
      (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
      param_3 = extraout_x1_07;
    }
    uVar42 = *unaff_x20;
    if ((in_stack_00000068 & 1) != 0) {
      *(uint *)(in_stack_00000088 + 0x1f0) = uVar42;
    }
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar42;
    *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x50), lVar22 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    in_stack_00000068 = 0;
    *(float *)(lVar22 + 0x60) = fVar46;
    *(float *)(lVar22 + 100) = fVar59;
    goto LAB_036ab6c0;
  }
  lVar22 = *in_stack_00000190;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_036afadc;
  uVar42 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  *(undefined1 *)(lVar26 + (long)(int)uVar42 * unaff_x24 + 0x194) = 0;
  *(uint *)((long)unaff_x19 + 0x4a4) = uVar42;
  lVar26 = *(long *)(lVar22 + 0x50);
  if (lVar26 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
  lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
  *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
  goto LAB_036ab5c8;
LAB_036ad4b0:
  uVar42 = uVar16 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x50), lVar29 == 0))
  goto LAB_036afadc;
  lVar33 = (long)(int)uVar42;
  lVar32 = lVar22 + lVar33 * 0x178;
  uVar67 = *(uint *)(lVar32 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar67) goto LAB_036afbe8;
  lVar36 = (long)(int)uVar67;
  lVar29 = lVar29 + lVar36 * 0x5c;
  lVar30 = *(long *)(lVar32 + 0x38);
  uVar3 = *(ushort *)(lVar32 + 0x20);
  uVar5 = *(uint *)(lVar29 + 0x3c);
  uVar40 = *(uint *)(lVar29 + 0x68);
  iVar2 = *(int *)(lVar29 + 0x20);
  iVar13 = *(int *)(lVar29 + 0x28);
  iVar14 = *(int *)(lVar29 + 0x2c);
  uVar6 = *(uint *)(lVar29 + 0x40);
  lVar32 = (long)(int)uVar6;
  fVar62 = *(float *)(lVar29 + 0x4c);
  fVar52 = *(float *)(lVar29 + 0x54);
  fVar60 = *(float *)(lVar29 + 0x58);
  fVar50 = *(float *)(lVar29 + 0x5c);
  fVar41 = *(float *)(lVar29 + 0x60);
  fVar43 = *(float *)(lVar29 + 0x6c);
  fVar44 = *(float *)(lVar29 + 0x70);
  fVar61 = *(float *)(lVar29 + 0x74);
  fVar65 = *(float *)(lVar29 + 0x78);
  uVar35 = (uint)uVar3;
  if ((int)uVar40 < 9) {
    switch(uVar40) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar41 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar41 + fVar50 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar50 + fVar41) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar50 + fVar41;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar40 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar22 + 0x18) <= uVar5) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fde5f4(uVar4,0);
      if ((uVar18 & 1) == 0) {
        bVar1 = (int)uVar67 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar50) && (!bVar1 && uVar40 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar41;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar50 + fVar41;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar16 == 1) || (uVar67 != uVar53)) || (uVar42 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar41;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar50 + fVar41;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar35,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1e];
        fVar41 = -fVar60;
        if (cVar21 != '\0') {
          fVar41 = fVar60;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar5) goto LAB_036afbe8;
        iVar14 = (int)*(char *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar60 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar35 == 9) {
LAB_036af498:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar35 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_02fdea78(uVar35,0);
            cVar21 = (char)unaff_x19[0x1e];
            if ((uVar18 & 1) != 0) goto LAB_036af498;
          }
          iVar14 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar13;
        }
        fVar60 = ((fVar50 + fVar41) * fVar60) / (float)iVar14;
        if (cVar21 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar60;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar60;
        }
      }
    }
  }
  else if (uVar40 == 0x20) {
    fVar60 = fVar43 + fVar61;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar40 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar29 = lVar22 + lVar33 * 0x178;
  fVar50 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar60 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar41 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_036adf70;
  iVar13 = *(int *)(lVar22 + lVar33 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_036add84;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar67,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar24 = lVar22 + lVar33 * 0x178;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined4 *)(lVar24 + 0xac) = 0;
    *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar22 + lVar33 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar24 = lVar22 + lVar33 * 0x178;
      fVar61 = (in_stack_00000108._4_4_ + fVar65) - *(float *)(in_stack_00000088 + 0x230);
      fVar65 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar24 = lVar22 + lVar33 * 0x178;
    fVar61 = fVar61 - fVar43;
    *(float *)(lVar24 + 0x84) = fVar59 + (fVar65 - fVar43) / fVar61;
    *(float *)(lVar24 + 0xac) = fVar59 + (*(float *)(lVar24 + 0x98) - fVar43) / fVar61;
    *(float *)(lVar24 + 0xd4) = fVar59 + (*(float *)(lVar24 + 0xc0) - fVar43) / fVar61;
    fVar59 = fVar59 + (*(float *)(lVar24 + 0xe8) - fVar43) / fVar61;
    break;
  case 2:
    lVar24 = lVar22 + lVar33 * 0x178;
    fVar65 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar61 = (in_stack_00000108._4_4_ + *(float *)(lVar24 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar24 + 0x84) = fVar59 + fVar61 / fVar65;
    *(float *)(lVar24 + 0xac) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar24 + 0xd4) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar59 = fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar24 = lVar22 + lVar33 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0;
      *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar24 = lVar22 + lVar33 * 0x178;
      fVar65 = fVar65 - fVar44;
      fVar61 = fVar59 + (*(float *)(lVar24 + 0x74) - fVar44) / fVar65;
      fVar65 = fVar59 + (*(float *)(lVar24 + 0x9c) - fVar44) / fVar65;
      *(float *)(lVar24 + 0x88) = fVar61;
      *(float *)(lVar24 + 0xb0) = fVar65;
      *(float *)(lVar24 + 0xd8) = fVar61;
      *(float *)(lVar24 + 0x100) = fVar65;
      break;
    case 2:
      lVar24 = lVar22 + lVar33 * 0x178;
      fVar61 = fVar59 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar24 + 0x88) = fVar61;
      fVar65 = *(float *)(unaff_x19 + 0x9c);
      fVar43 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar24 + 0xd8) = fVar61;
      fVar61 = fVar59 + (*(float *)(lVar24 + 0x9c) - fVar65) / (fVar43 - fVar65);
      *(float *)(lVar24 + 0xb0) = fVar61;
      *(float *)(lVar24 + 0x100) = fVar61;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar40 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar22 + lVar33 * 0x178;
    fVar61 = *(float *)(lVar24 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar61) * 0.5;
    fVar43 = fVar59 + *(float *)(lVar24 + 0x88) * fVar61 + fVar65;
    fVar59 = fVar59 + fVar65 + *(float *)(lVar24 + 0xb0) * fVar61;
    *(float *)(lVar24 + 0x84) = fVar43;
    *(float *)(lVar24 + 0xac) = fVar43;
    *(float *)(lVar24 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar22 + lVar33 * 0x178 + 0xfc) = fVar59;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar22 + lVar33 * 0x178;
    *(undefined4 *)(lVar24 + 0x88) = 0;
    *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x100) = 0;
    break;
  case 1:
    if (uVar42 < uVar40) {
      lVar24 = lVar22 + lVar33 * 0x178;
      fVar62 = fVar62 - fVar52;
      fVar59 = (*(float *)(lVar24 + 0x74) - fVar52) / fVar62;
      fVar62 = (*(float *)(lVar24 + 0x9c) - fVar52) / fVar62;
      *(float *)(lVar24 + 0x88) = fVar59;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar22 + lVar33 * 0x178;
    fVar59 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar24 + 0x88) = fVar59;
    fVar62 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar24 + 0xb0) = fVar62;
    *(float *)(lVar24 + 0xd8) = fVar62;
    *(float *)(lVar24 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar22 + lVar33 * 0x178;
    fVar62 = *(float *)(lVar24 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar62) * 0.5;
    fVar59 = *(float *)(lVar24 + 0x84) / fVar62 + fVar61;
    fVar61 = fVar61 + *(float *)(lVar24 + 0xd4) / fVar62;
    *(float *)(lVar24 + 0x88) = fVar59;
    *(float *)(lVar24 + 0xb0) = fVar61;
    *(float *)(lVar24 + 0x100) = fVar59;
    *(float *)(lVar24 + 0xd8) = fVar61;
  }
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar24 = lVar22 + lVar33 * 0x178;
  fVar59 = *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar33 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar61 = fVar56;
  if (((iVar12 == 2) || (fVar61 = fVar45, iVar12 == 1)) || (fVar61 = fVar56 / fVar57, iVar12 == 0))
  {
    fVar59 = fVar61 * fVar59;
  }
  lVar24 = lVar22 + lVar33 * 0x178;
  fVar62 = *(float *)(lVar24 + 0x88);
  fVar65 = *(float *)(lVar24 + 0x84);
  fVar61 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar61 = (float)(int)fVar65;
  }
  fVar43 = *(float *)(lVar24 + 0xd4);
  fVar44 = *(float *)(lVar24 + 0xd8);
  fVar52 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar52 = (float)(int)fVar62;
  }
  uVar47 = FUN_036f2b00(fVar65 - fVar61,fVar62 - fVar52);
  *(undefined4 *)(lVar24 + 0x84) = uVar47;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar44 = fVar44 - fVar52;
  *(float *)(lVar24 + 0x88) = fVar59;
  uVar47 = FUN_036f2b00(fVar65 - fVar61,fVar44);
  *(undefined4 *)(lVar22 + lVar33 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar43 = fVar43 - fVar61;
  *(float *)(lVar22 + lVar33 * 0x178 + 0xb0) = fVar59;
  fVar61 = (float)FUN_036f2b00(fVar43,fVar44);
  *(float *)(lVar24 + 0xd4) = fVar61;
  if (*(uint *)(lVar22 + 0x18) <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar24 + 0xd8) = fVar59;
  uVar47 = FUN_036f2b00(fVar43,fVar62 - fVar52);
  *(undefined4 *)(lVar22 + lVar33 * 0x178 + 0xfc) = uVar47;
  uVar40 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar22 + lVar33 * 0x178 + 0x100) = fVar59;
LAB_036add84:
  if (((int)uVar42 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar67 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar40 <= uVar42) goto LAB_036afbe8;
      lVar29 = lVar22 + lVar33 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar41 + *(float *)(lVar29 + 0x78);
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar41 + *(float *)(lVar29 + 0xa0);
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar41 + *(float *)(lVar29 + 200);
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar41 + *(float *)(lVar29 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar67 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar42 < uVar40) {
        if (*(uint *)(lVar22 + lVar33 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar29 = lVar22 + lVar33 * 0x178;
          *(ulong *)(lVar29 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar29 + 0x70));
          *(float *)(lVar29 + 0x78) = fVar41 + *(float *)(lVar29 + 0x78);
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar41 + *(float *)(lVar29 + 0xa0);
          *(ulong *)(lVar29 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar29 + 0xc0));
          *(float *)(lVar29 + 200) = fVar41 + *(float *)(lVar29 + 200);
          *(ulong *)(lVar29 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar29 + 0xe8));
          *(float *)(lVar29 + 0xf0) = fVar41 + *(float *)(lVar29 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar40 = *(uint *)(lVar22 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar47 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar24 = lVar22 + lVar33 * 0x178;
  *(undefined8 *)(lVar24 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar24 + 0x78) = uVar47;
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar24 = lVar22 + lVar33 * 0x178;
  *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 0xf0) = uVar47;
  *(undefined1 *)(lVar29 + 0x194) = 0;
LAB_036adf28:
  if (iVar13 == 0) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar27)();
  }
  else if (iVar13 == 1) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar29 = lVar29 + lVar33 * 0x178;
  uVar39 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar39 >> 0x20),fVar50 + (float)uVar39);
  *(float *)(lVar29 + 0x124) = fVar41 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar29 = lVar29 + lVar33 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar41 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar29 = lVar29 + lVar33 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar41 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar29 = lVar29 + lVar33 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar50 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000190;
  if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x38), lVar24 == 0)) goto LAB_036afadc;
  uVar40 = *(uint *)(lVar24 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar31 = lVar24 + lVar33 * 0x178;
  uVar48 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar31 + 0x140));
  fVar61 = fVar60 + *(float *)(lVar31 + 0x150);
  uVar51 = (ulong)(uint)fVar61;
  uVar54 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar31 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar31 + 0x148));
  *(float *)(lVar31 + 0x150) = fVar61;
  *(ulong *)(lVar31 + 0x140) = uVar48;
  *(ulong *)(lVar31 + 0x148) = uVar54;
  if (uVar67 == uVar53) {
    uVar53 = *unaff_x20 - 1;
    if (uVar42 == uVar53) goto LAB_036ae17c;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar31 = (long)(int)uVar53;
    lVar34 = lVar29 + lVar31 * 0x5c;
    uVar54 = (ulong)(uint)*(float *)(lVar34 + 0x58);
    fVar61 = fVar60 + *(float *)(lVar34 + 0x54);
    uVar48 = (ulong)(uint)fVar61;
    fVar62 = fVar50 + *(float *)(lVar34 + 0x58);
    uVar51 = (ulong)(uint)fVar62;
    *(ulong *)(lVar34 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar34 + 0x4c));
    *(float *)(lVar34 + 0x54) = fVar61;
    *(float *)(lVar34 + 0x58) = fVar62;
    if (uVar40 <= *(uint *)(lVar34 + 0x34)) goto LAB_036afbe8;
    uVar47 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar31 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar61;
    *(undefined4 *)(lVar29 + 0x6c) = uVar47;
    lVar29 = *in_stack_00000190;
    if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x50), lVar24 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_036afadc;
    uVar53 = *(uint *)(lVar24 + lVar31 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar24 = lVar24 + lVar31 * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar53 * 0x178 + 0x128);
    *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    uVar53 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar42 == uVar53) {
      lVar29 = *in_stack_00000190;
      if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x50), lVar24 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar31 = lVar24 + lVar36 * 0x5c;
      uVar54 = (ulong)(uint)*(float *)(lVar31 + 0x58);
      uVar48 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar31 + 0x4c));
      fVar61 = fVar60 + *(float *)(lVar31 + 0x54);
      fVar50 = fVar50 + *(float *)(lVar31 + 0x58);
      uVar51 = (ulong)(uint)fVar50;
      *(ulong *)(lVar31 + 0x4c) = uVar48;
      *(float *)(lVar31 + 0x54) = fVar61;
      *(float *)(lVar31 + 0x58) = fVar50;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar31 + 0x34)) goto LAB_036afbe8;
      uVar47 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar61;
      *(undefined4 *)(lVar24 + 0x6c) = uVar47;
      lVar29 = *in_stack_00000190;
      if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x50), lVar24 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_036afadc;
      uVar53 = *(uint *)(lVar24 + lVar36 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_036afbe8;
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar53 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar18 = FUN_02fddb80(uVar35,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar35 - 0x2010)) && (uVar35 != 0xad)) && (uVar35 != 0x2d)) {
    if (bVar7) {
      if (((uVar16 != 1) && ((int)uVar42 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar42 < (int)*unaff_x20 && ((uVar35 == 0x2019 || (uVar35 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar22 + lVar26 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fddb80(uVar4,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar22 + lVar26 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_02fddb80(uVar4,0);
          if ((uVar18 & 1) != 0) goto LAB_036ae3a0;
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
      uVar18 = FUN_02fddab4(uVar35,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdb080(uVar35,0);
        if (((uVar35 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar42 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddb80(uVar35,0);
      iVar13 = (int)fStack0000000000000138;
      if ((uVar18 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar13 = uVar16 - 2;
    }
    lVar29 = *in_stack_00000190;
    if (lVar29 == 0) goto LAB_036afadc;
    lVar24 = *(long *)(lVar29 + 0x40);
    if (lVar24 == 0) goto LAB_036afadc;
    uVar53 = *(uint *)(lVar29 + 0x24);
    iVar14 = *(int *)(lVar24 + 0x18);
    if (iVar14 < (int)(uVar53 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar29 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar29 = *in_stack_00000190;
      if (lVar29 == 0) goto LAB_036afadc;
    }
    lVar29 = *(long *)(lVar29 + 0x40);
    if (lVar29 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_036afbe8;
    lVar29 = lVar29 + (long)(int)uVar53 * 0x18;
    *(long **)(lVar29 + 0x20) = unaff_x19;
    *(float *)(lVar29 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar29 + 0x2c) = iVar13;
    *(int *)(lVar29 + 0x30) = (iVar13 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar29 = unaff_x19[0x6d];
    if (lVar29 == 0) goto LAB_036afadc;
    lVar24 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar24 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar67) goto LAB_036afbe8;
    lVar24 = lVar24 + lVar36 * 0x5c;
    bVar7 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000170._4_4_ = (float)uVar42;
    }
    if (uVar42 == *unaff_x20 - 1) {
      lVar29 = *in_stack_00000190;
      if (lVar29 == 0) goto LAB_036afadc;
      lVar24 = *(long *)(lVar29 + 0x40);
      if (lVar24 == 0) goto LAB_036afadc;
      uVar53 = *(uint *)(lVar29 + 0x24);
      iVar13 = *(int *)(lVar24 + 0x18);
      if (iVar13 < (int)(uVar53 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar29 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar29 = *in_stack_00000190;
        if (lVar29 == 0) goto LAB_036afadc;
      }
      lVar29 = *(long *)(lVar29 + 0x40);
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_036afbe8;
      lVar29 = lVar29 + (long)(int)uVar53 * 0x18;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      *(float *)(lVar29 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar29 + 0x2c) = uVar42;
      *(uint *)(lVar29 + 0x30) = uVar16 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar29 = unaff_x19[0x6d];
      if (lVar29 == 0) goto LAB_036afadc;
      lVar24 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar67) goto LAB_036afbe8;
      lVar24 = lVar24 + lVar36 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar7 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  uVar53 = *(uint *)(lVar29 + 0x18);
  if (uVar53 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar29 + lVar33 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar53 <= uVar16 - 2) goto LAB_036afbe8;
      lVar36 = *unaff_x19;
      uVar53 = *(uint *)(lVar29 + lVar26 + -0x330);
      uVar47 = *(undefined4 *)(lVar29 + lVar26 + -0x2f8);
LAB_036ae924:
      pcVar27 = *(code **)(lVar36 + 0x908);
LAB_036ae92c:
      uVar54 = (ulong)uVar53;
      uVar48 = (ulong)(uint)_bStack0000000000000078;
      uVar51 = (ulong)_bStack000000000000007c;
      (*pcVar27)(fStack0000000000000080,uVar48,uVar51,uVar54,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar47);
      puVar8 = PTR_DAT_03d9c920;
      lVar29 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar29 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar46 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar33 * 0x178;
    iVar13 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
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
    uVar18 = FUN_02fdb080(uVar35,0);
    if ((uVar35 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar29 = *in_stack_00000190;
      if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x38), lVar36 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar36 + 0x18) <= uVar42) goto LAB_036afbe8;
      fVar61 = *(float *)(lVar36 + lVar33 * 0x178 + 0x160);
      if (fVar46 <= fVar61) {
        fVar46 = fVar61;
      }
      if (fStack0000000000000110 <= ABS(fVar59)) {
        fStack0000000000000110 = ABS(fVar59);
      }
      if (iVar13 != in_stack_00000070._4_4_) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar29 = *in_stack_00000190;
          if (lVar29 == 0) goto LAB_036afadc;
          lVar36 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar36 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar36 + 0x15a8);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar62 = *(float *)(lVar29 + lVar33 * 0x178 + 0x14c);
      fVar61 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar62 = fVar62 + fVar46 * fVar61;
      if (fVar62 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar62;
      }
      uVar48 = (ulong)(uint)fStack0000000000000114;
      in_stack_00000070._4_4_ = iVar13;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar35 == 0xd) || ((uVar35 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar35,0);
        if ((uVar18 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar29 = lVar29 + lVar33 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar29 + 0x160);
      fStack0000000000000080 = *(float *)(lVar29 + 0x11c);
      uVar51 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar46 != 0.0;
      fVar61 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar61 = fVar46;
      }
      fVar46 = fVar61;
      uVar64 = *(undefined4 *)(lVar29 + 0x168);
      _bStack000000000000007c = 0;
      fVar61 = fVar59;
      if (bVar11) {
        fVar61 = fStack0000000000000110;
      }
      uVar48 = (ulong)(uint)fVar61;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar61;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        if (uVar42 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar33 * 0x178;
          lVar36 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + 0x128);
          uVar47 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar42 == uVar5) || ((int)uVar6 <= (int)uVar42)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar35,0);
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        lVar36 = lVar33;
        uVar53 = uVar42;
        if (uVar35 == 0x200b || (uVar18 & 1) != 0) {
          lVar36 = lVar32;
          uVar53 = uVar6;
        }
        if (uVar53 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar36 * 0x178;
          uVar53 = *(uint *)(lVar29 + 0x128);
          uVar47 = *(undefined4 *)(lVar29 + 0x160);
          pcVar27 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        uVar53 = *(uint *)(lVar29 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_036afbe8;
      uVar18 = FUN_036c0e18(uVar64,*(undefined4 *)(lVar29 + lVar26),0);
      if ((uVar18 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0)) {
          if (uVar42 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar33 * 0x178;
            uVar54 = (ulong)*(uint *)(lVar29 + 0x128);
            uVar51 = (ulong)_bStack000000000000007c;
            uVar48 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar48,uVar51,uVar54,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar29 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar29 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar29 = *(long *)puVar8;
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
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
  if (lVar30 == 0) goto LAB_036afadc;
  uVar53 = *(uint *)(lVar29 + lVar33 * 0x178 + 400);
  fVar61 = (float)FUN_0396ad04(lVar30 + 0x50,0);
  if ((uVar53 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
      uVar53 = *(uint *)(lVar29 + lVar26 + -0x330);
      fVar60 = *(float *)(lVar29 + lVar26 + -0x30c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar54 = (ulong)uVar53;
      uVar48 = (ulong)(uint)fStack00000000000000a4;
      uVar51 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar27)(fStack00000000000000a8,uVar48,uVar51,uVar54,
                 fStack00000000000000b0 * fVar61 + fVar60,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar29 = *in_stack_00000190;
    if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x38), lVar36 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar36 + 0x18) <= uVar42) goto LAB_036afbe8;
    *(int *)(lVar36 + lVar33 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar36 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar35 == 0xd) || ((uVar35 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar35,0);
        if ((uVar18 & 1) != 0) goto LAB_036aeb20;
        lVar29 = *in_stack_00000190;
        if (lVar29 == 0) goto LAB_036afadc;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar29 = lVar29 + lVar33 * 0x178;
      fStack000000000000004c = *(float *)(lVar29 + 0x60);
      fStack0000000000000040 = *(float *)(lVar29 + 0x14c);
      uVar48 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar29 + 0x11c);
      uVar51 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar29 + 0x160);
      fStack00000000000000a4 = fVar61 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar53 = *unaff_x20;
    if (uVar53 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        if (uVar42 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar33 * 0x178;
          lVar32 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + 0x128);
          fVar60 = *(float *)(lVar29 + 0x14c);
LAB_036aec8c:
          pcVar27 = *(code **)(lVar32 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar42 == uVar5) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar35,0);
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        uVar53 = *(uint *)(lVar29 + 0x18);
        if (uVar35 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar53 <= uVar6) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar32 = lVar33;
          if (uVar53 <= uVar42) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar29 = lVar29 + lVar32 * 0x178;
        fVar60 = *(float *)(lVar29 + 0x14c);
        uVar53 = *(uint *)(lVar29 + 0x128);
        pcVar27 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)uVar53) {
      lVar29 = *in_stack_00000190;
      if ((lVar29 != 0) && (lVar36 = *(long *)(lVar29 + 0x38), lVar36 != 0)) {
        if (uVar16 < *(uint *)(lVar36 + 0x18)) {
          if (*(float *)(lVar36 + lVar26 + -0x108) == fStack000000000000004c) {
            fVar62 = *(float *)(lVar36 + lVar26 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar48 = (ulong)(uint)fStack0000000000000040;
            uVar18 = FUN_036c122c(fVar60 + fVar62,uVar48,0);
            if ((uVar18 & 1) != 0) {
              uVar53 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar29 = *in_stack_00000190;
            if (lVar29 == 0) goto LAB_036afadc;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar53 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar42 <= (int)uVar6) goto LAB_036aef20;
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
    if ((int)uVar42 < (int)uVar53) {
      iVar13 = FUN_03922ce0(lVar30,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_036afbe8;
      lVar29 = *(long *)(lVar22 + lVar26 + -0x130);
      if (lVar29 == 0) goto LAB_036afadc;
      iVar14 = FUN_03922ce0(lVar29,0);
      if (iVar13 != iVar14) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar32 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + lVar26 + -0x330);
          fVar60 = *(float *)(lVar29 + lVar26 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
  goto LAB_036afadc;
  uVar53 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar53 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar29 + lVar33 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar51,uVar54,fStack00000000000000d8,uVar51);
    }
LAB_036aefe8:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar67)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar29 + lVar33 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar35 == 0xd) || ((uVar35 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar35,0);
        if ((uVar18 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar32 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar32 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0))
      goto LAB_036afadc;
      uVar53 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar53 <= uVar42) goto LAB_036afbe8;
      lVar32 = *(long *)(lVar32 + 0xb8);
      lVar30 = lVar29 + lVar33 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar30 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar30 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar32 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar32 + 0x159c);
      in_stack_00001080 = *(float *)(lVar30 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar32 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar32 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar53 <= uVar42) goto LAB_036afbe8;
    lVar29 = lVar29 + lVar33 * 0x178;
    fVar61 = *(float *)(lVar29 + 0x128);
    fVar52 = *(float *)(lVar29 + 0x188);
    uVar17 = *(undefined8 *)(lVar29 + 0x17c);
    fVar43 = *(float *)(lVar29 + 0x184);
    uVar39 = *(undefined8 *)(lVar29 + 0x184);
    fVar41 = *(float *)(lVar29 + 0x18c);
    fVar60 = *(float *)(lVar29 + 0x11c);
    fVar62 = *(float *)(lVar29 + 0x148);
    fVar65 = *(float *)(lVar29 + 0x150);
    in_stack_00000198 = uVar17;
    fStack00000000000001a0 = fVar43;
    fStack00000000000001a4 = fVar52;
    in_stack_000001a8 = fVar41;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar18 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar29 = *(long *)PTR_DAT_03d9c888;
    if ((uVar18 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar29);
      }
      fVar61 = fVar61 + (float)in_stack_00001078;
      uVar51 = (ulong)(uint)fVar61;
      fVar60 = fVar60 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar62 = fVar62 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar54 = (ulong)(uint)fVar62;
      if (fVar60 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar60;
      }
      if (fVar65 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar65 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar61) {
        fStack00000000000000d4 = fVar61;
      }
      uVar48 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar62) {
        fStack00000000000000d8 = fVar62;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar29);
      }
      fVar60 = (fVar60 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar54 = (ulong)(uint)fVar60;
      if (fVar65 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar65;
      }
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar62) {
        fStack00000000000000d8 = fVar62;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar51,uVar54,fStack00000000000000d8,uVar51);
      fStack00000000000000ec = fVar65 - fVar41;
      fStack00000000000000d4 = fVar61 + fVar43;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar62 + fVar52;
      fStack00000000000000e8 = fVar60;
      in_stack_00001070 = uVar17;
      in_stack_00001078 = uVar39;
      in_stack_00001080 = fVar41;
    }
    if (((*unaff_x20 == 1) || (uVar42 == uVar5)) || (((int)uVar6 <= (int)uVar42 || (!bVar1)))) {
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar51,uVar54,fStack00000000000000d8,uVar51);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar42 = *unaff_x20;
  lVar26 = lVar26 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar42 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar53 = uVar67;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar22 = *in_stack_00000190;
  if (lVar22 != 0) {
    iVar15 = uVar67 + 1;
    plVar38 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar22 + 0x18) = uVar42;
    lVar26 = unaff_x19[0xd4];
    *(int *)(lVar22 + 0x2c) = iVar15;
    if ((int)uVar42 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar26;
    *(float *)(lVar22 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar18 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar18 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar22 = unaff_x19[0xdf];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar22 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar15 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar22 = unaff_x19[0xe5];
      if (lVar22 == 0) goto LAB_036afadc;
      uVar42 = FUN_03afacb8(lVar22,0);
      FUN_03afacf4(lVar22,uVar42 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar22 = *(long *)(*in_stack_00000190 + 0x60), lVar22 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar38 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar39 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar42 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar22 = *in_stack_00000190;
                              if (lVar22 != 0) {
                                lVar29 = 0;
                                lVar26 = 0;
                                do {
                                  uVar18 = lVar26 + 1;
                                  if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar18)
                                  goto LAB_036acd60;
                                  lVar22 = *(long *)(lVar22 + 0x60);
                                  if (lVar22 == 0) break;
                                  if (*(int *)(*plVar38 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  FUN_036fa544(lVar22 + lVar29 + 0x70,0);
                                  lVar22 = unaff_x19[0xe1];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  uVar17 = *(undefined8 *)(lVar22 + lVar26 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar19 = FUN_03922f24(uVar17,0,0);
                                  if ((uVar19 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar22 = *(long *)(*in_stack_00000190 + 0x60), lVar22 == 0
                                         )) break;
                                      if (*(int *)(*plVar38 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                      FUN_036fa678(lVar22 + lVar29 + 0x70,1,0);
                                    }
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_03702ba4(lVar22,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar22 == 0) break;
                                    FUN_0390262c(lVar22,*(undefined8 *)(lVar32 + lVar29 + 0x80),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_03702ba4(lVar22,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar22 == 0) break;
                                    FUN_03902830(lVar22,*(undefined8 *)(lVar32 + lVar29 + 0x98),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_03702ba4(lVar22,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar22 == 0) break;
                                    FUN_039028dc(lVar22,*(undefined8 *)(lVar32 + lVar29 + 0xa0),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_03702ba4(lVar22,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar22 == 0) break;
                                    FUN_03902a3c(lVar22,*(undefined8 *)(lVar32 + lVar29 + 0xa8),0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_03702ba4(lVar22,0), lVar22 == 0)) break;
                                    FUN_03904ddc(lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_039add2c(lVar22,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar32 = *(long *)(lVar32 + lVar26 * 8 + 0x28);
                                    if ((lVar32 == 0) ||
                                       (uVar17 = FUN_03702ba4(lVar32,0), lVar22 == 0)) break;
                                    FUN_03af8c9c(lVar22,uVar17,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_039add2c(lVar22,0), lVar22 == 0)) break;
                                    FUN_03af8894(uVar39,uVar48,uVar51,uVar54,lVar22,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_039add2c(lVar22,0), lVar22 == 0)) break;
                                    FUN_03af87d0(lVar22,uVar42 & 1,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    plVar37 = *(long **)(lVar22 + lVar26 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar37 == (long *)0x0) break;
                                    (**(code **)(*plVar37 + 0x2c8))
                                              (plVar37,uVar16 & 1,*(undefined8 *)(*plVar37 + 0x2d0))
                                    ;
                                  }
                                  lVar22 = *in_stack_00000190;
                                  lVar26 = lVar26 + 1;
                                  lVar29 = lVar29 + 0x50;
                                } while (lVar22 != 0);
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


