/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 03c66cb4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_21;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x03c67e78) */

ulong UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering
                (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  ulong *puVar20;
  ulong uVar21;
  long *unaff_x20;
  int unaff_w21;
  undefined4 *puVar22;
  undefined8 *unaff_x24;
  long *plVar23;
  uint unaff_w25;
  uint uVar24;
  ulong uVar25;
  ulong *unaff_x28;
  float *pfVar26;
  int unaff_w29;
  float fVar27;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  ulong uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  ulong unaff_d14;
  undefined8 uVar41;
  float fStack000000000000006c;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  undefined8 in_stack_000001f0;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_000001fc;
  undefined4 in_stack_00000200;
  undefined4 in_stack_00000204;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined4 in_stack_00000220;
  undefined4 in_stack_000002a0;
  undefined4 in_stack_000002e0;
  undefined8 in_stack_00000340;
  ulong in_stack_00000348;
  
  uVar37 = param_1._8_8_;
  uVar31 = param_1._0_8_;
  uVar10 = thunk_FUN_01c496e0();
  FUN_03c54498(uVar10,0);
  fVar38 = (float)param_3;
  fVar33 = (float)param_2;
  iVar8 = unaff_w21 - unaff_w29;
  uVar24 = iVar8 + 1;
  uVar11 = 0;
  *unaff_x28 = uVar10;
  puVar6 = StringLiteral_5910;
  puVar5 = PTR_DAT_04233d20;
  if (1 < (int)uVar24) {
    fStack000000000000006c = (float)unaff_d14;
    if (uVar24 == 2) {
      if (unaff_x20 == (long *)0x0) {
LAB_03c67e74:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar11);
      }
      lVar14 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03c6774c;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c6774c:
      fVar28 = (float)(*(code *)*puVar12)();
      lVar14 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      fVar34 = fVar33;
      fVar39 = fVar38;
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03c677b4;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c677b4:
      fVar29 = (float)(*(code *)*puVar12)();
      if (DAT_0452ffe3 == '\0') {
        FUN_01c5d288(PTR_DAT_0422fa60);
        DAT_0452ffe3 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar34 = (fVar33 - fVar34) * (fVar33 - fVar34);
      fVar33 = (fVar28 - fVar29) * (fVar28 - fVar29) + fVar34;
      fVar38 = SQRT((fVar38 - fVar39) * (fVar38 - fVar39) + fVar33) / 3.0;
      lVar14 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03c67898;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c67898:
      uVar30 = (*(code *)*puVar12)();
      if (DAT_0452d6ea == '\0') {
        FUN_01c5d288(PTR_DAT_042301a0);
        DAT_0452d6ea = '\x01';
      }
      puVar5 = PTR_DAT_042301a0;
      fVar39 = fStack000000000000006c * fVar38;
      FUN_03a46568(**(undefined4 **)(*(long *)PTR_DAT_042301a0 + 0xb8),0);
      uVar10 = (ulong)(uint)fVar33;
      uVar25 = (ulong)(uint)fVar34;
      FUN_03c4a66c(uVar30,uVar10,uVar25,-(fStack0000000000000090 * fVar38),
                   -(fStack0000000000000094 * fVar38),-(in_stack_00000098 * fVar38),&stack0x000002b0
                   ,0);
      lVar14 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03c67998;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c67998:
      uVar32 = (*(code *)*puVar12)();
      if (DAT_0452d6ea == '\0') {
        FUN_01c5d288(PTR_DAT_042301a0);
        DAT_0452d6ea = '\x01';
      }
      FUN_03a46568(**(undefined4 **)(*(long *)puVar5 + 0xb8),0);
      FUN_03c4a66c(uVar32,uVar10,uVar25,fStack0000000000000088 * fVar38,
                   fStack000000000000008c * fVar38,fVar39,&stack0x00000270,0);
      uVar10 = thunk_FUN_01c496e0(*unaff_x24);
      uVar11 = FUN_03c54498(uVar10,0);
      *unaff_x28 = uVar10;
      if (uVar10 == 0) goto LAB_03c67e74;
      in_stack_000001b0 = uVar31;
      in_stack_000001b8 = uVar37;
      in_stack_000001c0 = uVar31;
      in_stack_000001c8 = uVar37;
      in_stack_000001d0 = uVar31;
      in_stack_000001d8 = uVar37;
      in_stack_000001e0 = in_stack_000002e0;
      FUN_03c56ca0(uVar10,&stack0x000001b0,4,0);
      uVar11 = 0;
      in_stack_00000170 = uVar31;
      in_stack_00000178 = uVar37;
      in_stack_00000180 = uVar31;
      in_stack_00000188 = uVar37;
      in_stack_00000190 = uVar31;
      in_stack_00000198 = uVar37;
      in_stack_000001a0 = in_stack_000002a0;
      if (*unaff_x28 == 0) goto LAB_03c67e74;
      in_stack_00000130 = uVar31;
      in_stack_00000138 = uVar37;
      in_stack_00000140 = uVar31;
      in_stack_00000148 = uVar37;
      in_stack_00000150 = uVar31;
      in_stack_00000158 = uVar37;
      in_stack_00000160 = in_stack_000002a0;
      FUN_03c56ca0(*unaff_x28,&stack0x00000130,4,0);
      uVar11 = 0;
      if (*unaff_x28 == 0) goto LAB_03c67e74;
      FUN_03c53434(*unaff_x28,unaff_w25 & 1,0);
    }
    else {
      FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04233d20,uVar24);
      lVar14 = FUN_01c5d2fc(*(undefined8 *)puVar5,uVar24);
      uVar11 = 0;
      if (lVar14 == 0) goto LAB_03c67e74;
      if (*(int *)(lVar14 + 0x18) == 0) {
LAB_03c67e70:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined4 *)(lVar14 + 0x20) = 0;
      uVar10 = FUN_01c5d2fc(*(undefined8 *)puVar5,iVar8);
      puVar5 = PTR_DAT_0422fa60;
      uVar11 = uVar10;
      if (unaff_x20 == (long *)0x0) goto LAB_03c67e74;
      fVar33 = 0.0;
      uVar25 = 1;
      do {
        fVar34 = (float)param_3;
        fVar38 = (float)param_2;
        lVar15 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03c66e18;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c66e18:
        fVar29 = (float)(*(code *)*puVar12)();
        lVar15 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        fVar39 = fVar38;
        fVar28 = fVar34;
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03c66e90;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c66e90:
        fVar27 = (float)(*(code *)*puVar12)();
        if (DAT_0452ffe3 == '\0') {
          FUN_01c5d288(puVar5);
          DAT_0452ffe3 = '\x01';
        }
        uVar11 = *(ulong *)puVar5;
        if (*(int *)(uVar11 + 0xe0) == 0) {
          uVar11 = thunk_FUN_01c1d1e8();
        }
        if (uVar10 == 0) goto LAB_03c67e74;
        uVar11 = uVar25 - 1;
        if (*(uint *)(uVar10 + 0x18) <= uVar11) goto LAB_03c67e70;
        fVar38 = (fVar38 - fVar39) * (fVar38 - fVar39);
        param_2 = (ulong)(uint)fVar38;
        fVar34 = (fVar34 - fVar28) * (fVar34 - fVar28);
        param_3 = (ulong)(uint)fVar34;
        uVar25 = uVar25 + 1;
        fVar33 = fVar33 + SQRT(fVar34 + (fVar29 - fVar27) * (fVar29 - fVar27) + fVar38);
        *(float *)(uVar10 + uVar11 * 4 + 0x20) = fVar33;
      } while (uVar25 != uVar24);
      uVar3 = *(uint *)(uVar10 + 0x18);
      if (0 < (long)((ulong)uVar3 << 0x20)) {
        lVar15 = 0x100000000;
        uVar11 = 0;
        do {
          if ((uVar3 <= uVar11) || (uVar25 = uVar11 + 1, *(uint *)(lVar14 + 0x18) <= uVar25))
          goto LAB_03c67e70;
          lVar1 = lVar15 >> 0x1e;
          lVar15 = lVar15 + 0x100000000;
          *(float *)(lVar14 + lVar1 + 0x20) = *(float *)(uVar10 + 0x20 + uVar11 * 4) / fVar33;
          uVar11 = uVar25;
        } while ((long)(int)uVar3 != uVar25);
      }
      uVar10 = (ulong)(uint)fStack0000000000000094;
      uVar25 = (ulong)(uint)in_stack_00000098;
      uVar11 = FUN_03c68154(fStack0000000000000090,uVar10,uVar25,fStack0000000000000088,
                            fStack000000000000008c);
      *unaff_x28 = uVar11;
      lVar15 = FUN_01c5d2fc(*(undefined8 *)StringLiteral_4040,uVar24);
      puVar5 = StringLiteral_5911;
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar21 = 0;
        uVar11 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        puVar22 = (undefined4 *)(lVar15 + 0x28);
        do {
          if (uVar11 <= uVar21) goto LAB_03c67e70;
          uVar11 = FUN_023e881c(*(undefined4 *)(lVar14 + 0x20 + uVar21 * 4),*unaff_x28,
                                *(undefined8 *)puVar5);
          if (lVar15 == 0) goto LAB_03c67e74;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_03c67e70;
          puVar22[-2] = extraout_s0;
          puVar22[-1] = (int)uVar10;
          *puVar22 = (int)uVar25;
          uVar11 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar21 = uVar21 + 1;
          puVar22 = puVar22 + 3;
        } while ((long)uVar21 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      fVar33 = (float)FUN_03c68c3c(in_stack_00000080._4_4_);
      if (in_stack_00000080._4_4_ <= fVar33) {
        uVar10 = (ulong)(uint)(in_stack_00000080._4_4_ * 4.0);
        if (fVar33 < in_stack_00000080._4_4_ * 4.0) {
          iVar9 = 0;
          uVar31 = NEON_fmov(0x40400000,4);
          lVar1 = lVar14 + 0x20 + (long)unaff_w29 * 4;
LAB_03c670b8:
          uVar11 = 0;
          if (*unaff_x28 != 0) {
            uVar30 = FUN_03c51ab8(*unaff_x28,0);
            uVar10 = FUN_01c5d2fc(*(undefined8 *)StringLiteral_5867,uVar30);
            uVar11 = uVar10;
            if ((*unaff_x28 != 0) &&
               (plVar23 = *(long **)(*unaff_x28 + 0x18), plVar23 != (long *)0x0)) {
              lVar16 = *plVar23;
              uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      *(long *)UnityEngine_Rendering_MousePositionDebug_TypeInfo) {
                    puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_03c6714c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01c72498(plVar23,*(long *)
                                              UnityEngine_Rendering_MousePositionDebug_TypeInfo,0);
LAB_03c6714c:
              plVar23 = (long *)(*(code *)*puVar12)(plVar23,puVar12[1]);
              if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar24 = 0;
              do {
                lVar16 = *plVar23;
                uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar11 != 0) {
                  piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_03c671b8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar11 != 0);
                }
                puVar12 = (undefined8 *)FUN_01c72498(plVar23,*(long *)PTR_DAT_04230960,0);
LAB_03c671b8:
                uVar11 = (*(code *)*puVar12)(plVar23,puVar12[1]);
                if ((uVar11 & 1) == 0) goto LAB_03c672a0;
                lVar16 = *plVar23;
                uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar11 != 0) {
                  piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)UnityEngine_UIElements_MouseOverEvent_TypeInfo) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_03c6721c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar11 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01c72498(plVar23,*(long *)
                                                UnityEngine_UIElements_MouseOverEvent_TypeInfo,0);
LAB_03c6721c:
                (*(code *)*puVar12)(&stack0x000001f0,plVar23,puVar12[1]);
                if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                in_stack_000000f8 = CONCAT44(in_stack_000001fc,in_stack_000001f8);
                in_stack_00000100 = CONCAT44(in_stack_00000204,in_stack_00000200);
                if (*(uint *)(uVar10 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4ac();
                }
                lVar16 = uVar10 + (long)(int)uVar24 * 0x34;
                uVar24 = uVar24 + 1;
                *(undefined4 *)(lVar16 + 0x50) = in_stack_00000220;
                *(undefined8 *)(lVar16 + 0x38) = in_stack_00000208;
                *(undefined8 *)(lVar16 + 0x30) = in_stack_00000100;
                *(undefined8 *)(lVar16 + 0x48) = in_stack_00000218;
                *(undefined8 *)(lVar16 + 0x40) = in_stack_00000210;
                *(undefined8 *)(lVar16 + 0x28) = in_stack_000000f8;
                *(undefined8 *)(lVar16 + 0x20) = in_stack_000001f0;
                in_stack_000000f0 = in_stack_000001f0;
                in_stack_00000108 = in_stack_00000208;
                in_stack_00000110 = in_stack_00000210;
                in_stack_00000118 = in_stack_00000218;
                in_stack_00000120 = in_stack_00000220;
              } while( true );
            }
          }
          goto LAB_03c67e74;
        }
LAB_03c67728:
        lVar14 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03c67b9c;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c67b9c:
        uVar31 = (*(code *)*puVar12)();
        lVar14 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar21 = uVar10;
        uVar35 = uVar25;
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03c67c0c;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c67c0c:
        uVar37 = (*(code *)*puVar12)();
        lVar14 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_5910) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03c67c80;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498();
LAB_03c67c80:
        (*(code *)*puVar12)();
        uVar31 = FUN_03c6903c(uVar31,uVar10,uVar25,uVar37,uVar21,uVar35);
        uVar11 = FUN_03c66b9c(fStack0000000000000090,fStack0000000000000094,in_stack_00000098,uVar31
                              ,uVar10,uVar25,in_stack_00000080._4_4_);
        if (((uVar11 & 1) == 0) ||
           (uVar11 = FUN_03c66b9c(-(float)uVar31,-(float)uVar10,-(float)uVar25,
                                  fStack0000000000000088,fStack000000000000008c,unaff_d14,
                                  in_stack_00000080._4_4_), (uVar11 & 1) == 0)) {
          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Mono_Globalization_Unicode_MSCompatUnicodeTable_TypeInfo);
          FUN_03c54498(uVar11,0);
          *unaff_x28 = uVar11;
          return 0;
        }
        if (in_stack_00000348 == 0) goto LAB_03c67e74;
        iVar8 = FUN_03c51ab8(in_stack_00000348,0);
        iVar8 = iVar8 + -1;
        iVar9 = FUN_03c51ab8(in_stack_00000348,0);
        FUN_03c54360(&stack0x00000170,in_stack_00000348,iVar9 + -1,0);
        uVar31 = in_stack_00000180;
        uVar11 = (ulong)in_stack_00000178 >> 0x20;
        FUN_03c5424c(in_stack_00000348,iVar8,0);
        FUN_03c56f4c(in_stack_00000348,in_stack_00000340,0);
        *unaff_x28 = in_stack_00000348;
        FUN_03c54360(&stack0x00000170,in_stack_00000348,iVar8,0);
        in_stack_00000178 = CONCAT44((int)uVar11,(int)in_stack_00000178);
        uVar11 = 0;
        in_stack_00000180 = uVar31;
        if (*unaff_x28 == 0) goto LAB_03c67e74;
        in_stack_000000b0 = in_stack_00000170;
        in_stack_000000c8 = in_stack_00000188;
        in_stack_000000d8 = in_stack_00000198;
        in_stack_000000d0 = in_stack_00000190;
        in_stack_000000e0 = in_stack_000001a0;
        in_stack_000000b8 = in_stack_00000178;
        in_stack_000000c0 = uVar31;
        FUN_03c543f0(*unaff_x28,iVar8,&stack0x000000b0,0);
      }
    }
LAB_03c67aec:
    uVar11 = 1;
  }
  return uVar11;
LAB_03c672a0:
  if (plVar23 != (long *)0x0) {
    lVar16 = *plVar23;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03c672fc;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c72498(plVar23,*(long *)PTR_DAT_0422fce8,0);
LAB_03c672fc:
    uVar11 = (*(code *)*puVar12)(plVar23,puVar12[1]);
  }
  if (uVar10 == 0) goto LAB_03c67e74;
  if ((*(int *)(uVar10 + 0x18) == 0) || (*(int *)(uVar10 + 0x18) == 1)) goto LAB_03c67e70;
  uVar40 = *(undefined8 *)(uVar10 + 0x20);
  fVar34 = *(float *)(uVar10 + 0x28);
  uVar41 = *(undefined8 *)(uVar10 + 0x38);
  fVar39 = *(float *)(uVar10 + 0x40);
  uVar37 = *(undefined8 *)(uVar10 + 0x54);
  fVar33 = *(float *)(uVar10 + 0x5c);
  uVar32 = *(undefined8 *)(uVar10 + 0x60);
  fVar38 = *(float *)(uVar10 + 0x68);
  lVar16 = FUN_01c5d2fc(*(undefined8 *)StringLiteral_4040,4);
  uVar11 = 0;
  if (lVar16 == 0) goto LAB_03c67e74;
  uVar24 = *(uint *)(lVar16 + 0x18);
  if (uVar24 == 0) goto LAB_03c67e70;
  *(undefined8 *)(lVar16 + 0x20) = uVar40;
  *(float *)(lVar16 + 0x28) = fVar34;
  if (uVar24 == 1) goto LAB_03c67e70;
  *(ulong *)(lVar16 + 0x2c) =
       CONCAT44((float)((ulong)uVar40 >> 0x20) + (float)((ulong)uVar41 >> 0x20),
                (float)uVar40 + (float)uVar41);
  *(float *)(lVar16 + 0x34) = fVar34 + fVar39;
  if (uVar24 < 3) goto LAB_03c67e70;
  unaff_d14 = (ulong)(uint)fStack000000000000006c;
  *(ulong *)(lVar16 + 0x38) =
       CONCAT44((float)((ulong)uVar37 >> 0x20) + (float)((ulong)uVar32 >> 0x20),
                (float)uVar37 + (float)uVar32);
  *(float *)(lVar16 + 0x40) = fVar33 + fVar38;
  if (uVar24 == 3) goto LAB_03c67e70;
  *(undefined8 *)(lVar16 + 0x44) = uVar37;
  *(float *)(lVar16 + 0x4c) = fVar33;
  lVar13 = FUN_01c5d2fc(*(undefined8 *)StringLiteral_4040,3);
  lVar17 = 0;
  uVar10 = 0;
  do {
    if ((ulong)*(uint *)(lVar16 + 0x18) <= uVar10 + 1) goto LAB_03c67e70;
    uVar11 = 0;
    if (lVar13 == 0) goto LAB_03c67e74;
    if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_03c67e70;
    lVar18 = lVar16 + lVar17;
    fVar33 = *(float *)(lVar18 + 0x34);
    fVar38 = *(float *)(lVar18 + 0x28);
    lVar2 = lVar13 + lVar17;
    lVar17 = lVar17 + 0xc;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x2c) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar18 + 0x20) >> 0x20)) *
                  (float)((ulong)uVar31 >> 0x20),
                  ((float)*(undefined8 *)(lVar18 + 0x2c) - (float)*(undefined8 *)(lVar18 + 0x20)) *
                  (float)uVar31);
    *(float *)(lVar2 + 0x28) = (fVar33 - fVar38) * 3.0;
    uVar10 = uVar10 + 1;
  } while (lVar17 != 0x24);
  lVar17 = FUN_01c5d2fc(*(undefined8 *)StringLiteral_4040,2);
  uVar10 = 0;
  bVar7 = true;
  do {
    bVar4 = bVar7;
    if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar10 + 1) goto LAB_03c67e70;
    uVar11 = 0;
    if (lVar17 == 0) goto LAB_03c67e74;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03c67e70;
    puVar12 = (undefined8 *)(lVar13 + 0x20 + (uVar10 + 1) * 0xc);
    uVar37 = *puVar12;
    puVar20 = (ulong *)(lVar13 + 0x20 + uVar10 * 0xc);
    uVar25 = *puVar20;
    lVar18 = lVar17 + uVar10 * 0xc;
    fVar38 = (float)uVar37 - (float)uVar25;
    fVar34 = (float)((ulong)uVar37 >> 0x20) - (float)(uVar25 >> 0x20);
    fVar33 = *(float *)(puVar12 + 1) - *(float *)(puVar20 + 1);
    uVar11 = CONCAT44(fVar34 + fVar34,fVar38 + fVar38);
    *(ulong *)(lVar18 + 0x20) = uVar11;
    *(float *)(lVar18 + 0x28) = fVar33 + fVar33;
    uVar10 = 1;
    bVar7 = false;
  } while (bVar4);
  if (unaff_w29 < iVar8) {
    lVar18 = 0;
    pfVar26 = (float *)((undefined4 *)(lVar15 + 0x28) + (long)unaff_w29 * 3);
    do {
      fVar33 = (float)uVar11;
      uVar24 = unaff_w29 + (int)lVar18;
      if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_03c67e70;
      uVar30 = *(undefined4 *)(lVar1 + lVar18 * 4);
      fVar39 = (float)FUN_03c68f04(uVar30,lVar16,3);
      uVar10 = uVar25;
      fVar34 = fVar33;
      fVar28 = (float)FUN_03c68f04(uVar30,lVar13,2);
      uVar21 = uVar10;
      fVar38 = fVar34;
      uVar11 = FUN_03c68f04(uVar30,lVar17,1);
      if (lVar15 == 0) goto LAB_03c67e74;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_03c67e70;
      fVar27 = (float)uVar10;
      fVar36 = (float)uVar25 - *pfVar26;
      fVar29 = (float)uVar21 * fVar36;
      fVar38 = fVar27 * fVar27 + fVar28 * fVar28 + fVar34 * fVar34 +
               fVar29 + extraout_s0_00 * (fVar39 - pfVar26[-2]) + fVar38 * (fVar33 - pfVar26[-1]);
      if (fVar38 != 0.0) {
        if (*(uint *)(lVar14 + 0x18) <= uVar24) goto LAB_03c67e70;
        fVar27 = fVar27 * fVar36;
        uVar21 = (ulong)(uint)fVar27;
        fVar29 = fVar27 + fVar28 * (fVar39 - pfVar26[-2]) + fVar34 * (fVar33 - pfVar26[-1]);
        *(float *)(lVar1 + lVar18 * 4) = *(float *)(lVar1 + lVar18 * 4) - fVar29 / fVar38;
      }
      uVar11 = (ulong)(uint)fVar29;
      lVar18 = lVar18 + 1;
      pfVar26 = pfVar26 + 3;
      uVar25 = uVar21;
    } while ((long)iVar8 - (long)unaff_w29 != lVar18);
    uVar10 = (ulong)(uint)fStack0000000000000094;
    uVar25 = (ulong)(uint)in_stack_00000098;
    uVar11 = FUN_03c68154(fStack0000000000000090,uVar10,uVar25,fStack0000000000000088,
                          fStack000000000000008c,unaff_d14);
    *unaff_x28 = uVar11;
  }
  else {
    uVar10 = (ulong)(uint)fStack0000000000000094;
    uVar25 = (ulong)(uint)in_stack_00000098;
    uVar11 = FUN_03c68154(fStack0000000000000090,uVar10,uVar25,fStack0000000000000088,
                          fStack000000000000008c,unaff_d14);
    *unaff_x28 = uVar11;
    if (lVar15 == 0) goto LAB_03c67e74;
  }
  puVar5 = StringLiteral_5911;
  if (0 < *(int *)(lVar15 + 0x18)) {
    uVar11 = 0;
    puVar22 = (undefined4 *)(lVar15 + 0x28);
    do {
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_03c67e70;
      uVar30 = FUN_023e881c(*(undefined4 *)(lVar14 + 0x20 + uVar11 * 4),*unaff_x28,
                            *(undefined8 *)puVar5);
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 <= uVar11) goto LAB_03c67e70;
      uVar11 = uVar11 + 1;
      puVar22[-2] = uVar30;
      puVar22[-1] = (int)uVar10;
      *puVar22 = (int)uVar25;
      puVar22 = puVar22 + 3;
    } while ((long)uVar11 < (long)(int)uVar24);
  }
  fVar33 = (float)FUN_03c68c3c(in_stack_00000080._4_4_);
  if (fVar33 < in_stack_00000080._4_4_) goto LAB_03c67aec;
  iVar9 = iVar9 + 1;
  if (iVar9 == 4) goto LAB_03c67728;
  goto LAB_03c670b8;
}


