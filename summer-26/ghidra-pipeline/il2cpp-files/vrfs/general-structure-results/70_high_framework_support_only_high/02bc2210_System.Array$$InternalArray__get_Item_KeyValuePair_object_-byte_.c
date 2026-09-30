/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-byte>>
ENTRY_POINT: 02bc2210
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_byte>>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int extraout_var;
  ulong uVar11;
  float extraout_w1;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  int unaff_w22;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar17;
  float extraout_s0;
  float extraout_s0_00;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float unaff_s8;
  float unaff_s9;
  float fVar26;
  float fVar27;
  int unaff_s12;
  float fVar28;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  double in_stack_00000028;
  
                    /* catch() { ... } // from try @ 02bc2154 with catch @ 02bc2218
                       catch() { ... } // from try @ 02bc2200 with catch @ 02bc2218
                       try { // try from 02bc2218 to 02cc2247 has its CatchHandler @ 02bc20f8 */
  fVar26 = **(float **)(*unaff_x25 + 0xb8);
  plVar8 = (long *)FUN_02049438();
  if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02bc21a0 with catch @ 02bc2228
                       catch() { ... } // from try @ 02bc220c with catch @ 02bc2228 */
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    uVar6 = unaff_w22 - unaff_w26 & (unaff_w22 - unaff_w26 >> 0x1f ^ 0xffffffffU);
    if (uVar14 != 0) {
                    /* try { // try from 02bc2248 to 02cc225f has its CatchHandler @ 02bc22e4 */
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06e42fe8) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02bc2284;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
                    /* try { // try from 02bc2264 to 02cc2267 has its CatchHandler @ 02bc22d0 */
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)PTR_DAT_06e42fe8,0);
                    /* try { // try from 02bc2274 to 02cc228b has its CatchHandler @ 02bc22d4 */
LAB_02bc2284:
                    /* try { // try from 02bc228c to 02cc22a7 has its CatchHandler @ 02bc22d8 */
    iVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((int)uVar6 < iVar4) {
      plVar8 = (long *)FUN_02049438();
      if (plVar8 == (long *)0x0) goto LAB_02bc27c8;
                    /* try { // try from 02bc22a8 to 02cc22bb has its CatchHandler @ 02bc20f8 */
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06e07b98) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02bc2300;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)PTR_DAT_06e07b98,0);
LAB_02bc2300:
      fVar26 = (float)(*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
    }
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      fVar17 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
      if ((*(long *)(unaff_x19 + 0x100) != 0) &&
         (lVar12 = FUN_036636fc(*(long *)(unaff_x19 + 0x100),0), lVar12 != 0)) {
        fVar26 = fVar26 / fVar17;
        uStack0000000000000018 = FUN_04f1d548(lVar12,0);
        uStack000000000000001c = param_2;
        uStack0000000000000020 = param_3;
        fStack0000000000000024 = param_4;
        uVar10 = FUN_051dc1a8(&stack0x00000018,0);
        if (extraout_s0 < fVar26) {
          if ((*(long *)(unaff_x19 + 0x100) == 0) ||
             (lVar12 = FUN_036636fc(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0))
          goto LAB_02bc27c8;
          uStack0000000000000018 = FUN_04f1d548(lVar12,0);
          uStack000000000000001c = param_2;
          uStack0000000000000020 = param_3;
          fStack0000000000000024 = param_4;
          uVar10 = FUN_051dc1a8(&stack0x00000018,0);
          fVar26 = extraout_s0_00;
        }
        uVar5 = FUN_02bbfecc(uVar10,uVar6);
        plVar8 = (long *)FUN_02049494();
        puVar1 = PTR_DAT_06dfc5e0;
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06dfc5e0) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto System_Array__InternalArray__get_Item<KeyValuePair<object,_DateTime>>;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)PTR_DAT_06dfc5e0,0);
System_Array__InternalArray__get_Item<KeyValuePair<object,_DateTime>>:
          (*(code *)*puVar9)(plVar8,uVar5,puVar9[1]);
          if (*(long *)(unaff_x19 + 0x100) != 0) {
            fVar17 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
            plVar8 = (long *)FUN_02049494();
            if (plVar8 != (long *)0x0) {
              lVar12 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_02bc2498;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)puVar1,0);
LAB_02bc2498:
              fStack0000000000000014 = unaff_s8;
              (*(code *)*puVar9)(plVar8,uVar5,puVar9[1]);
              if (*(long *)(unaff_x19 + 0x100) != 0) {
                fVar18 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
                puVar3 = PTR_DAT_06e492b0;
                puVar2 = PTR_DAT_06da0418;
                puVar1 = PTR_DAT_06d9fd78;
                lVar12 = *(long *)(unaff_x19 + 0x1a0);
                if (lVar12 != 0) {
                  uVar25 = (ulong)(uint)(float)unaff_s12;
                  fVar17 = extraout_w1 / fVar17;
                  uVar11 = (ulong)(uint)(float)extraout_var;
                  uVar14 = 0;
                  lVar16 = 0x48;
                  do {
                    fVar28 = (float)uVar25;
                    fVar24 = (float)uVar11;
                    iVar4 = (int)*(undefined8 *)(lVar12 + 0x18);
                    if ((long)iVar4 <= (long)uVar14) {
                      if (iVar4 == 0) goto LAB_02bc2ac0;
                      *(undefined4 *)(lVar12 + 0x28) = 0;
                      fVar18 = fVar17 - (float)extraout_var / fVar18;
                      *(float *)(lVar12 + 0x20) = fVar26;
                      *(float *)(lVar12 + 0x24) = fVar18;
                      lVar12 = *(long *)(unaff_x19 + 0x1a0);
                      if (lVar12 != 0) {
                        if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_02bc2ac0;
                        *(undefined4 *)(lVar12 + 0x94) = 0;
                        fVar24 = fVar26 + (float)unaff_s12;
                        *(float *)(lVar12 + 0x8c) = fVar24;
                        *(float *)(lVar12 + 0x90) = fVar18;
                        lVar12 = *(long *)(unaff_x19 + 0x1a0);
                        if (lVar12 != 0) {
                          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_02bc2ac0;
                          *(float *)(lVar12 + 0xf8) = fVar24;
                          *(float *)(lVar12 + 0xfc) = fVar17;
                          *(undefined4 *)(lVar12 + 0x100) = 0;
                          lVar12 = *(long *)(unaff_x19 + 0x1a0);
                          if (lVar12 != 0) {
                            if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_02bc2ac0;
                            *(float *)(lVar12 + 0x164) = fVar26;
                            *(float *)(lVar12 + 0x168) = fVar17;
                            *(undefined4 *)(lVar12 + 0x16c) = 0;
                            if (*(char *)(unaff_x24 + 0x89c) == '\0') {
                              thunk_FUN_0159f088(PTR_DAT_06e4d340);
                              *(undefined1 *)(unaff_x24 + 0x89c) = 1;
                            }
                            fVar26 = unaff_s9 - **(float **)(*unaff_x25 + 0xb8);
                            fStack0000000000000014 =
                                 fStack0000000000000014 - (*(float **)(*unaff_x25 + 0xb8))[1];
                            if (fVar26 * fVar26 + fStack0000000000000014 * fStack0000000000000014 <
                                DAT_0534bf7c) goto LAB_02bc28c0;
                            if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                              uVar6 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
                              if ((int)uVar6 < 1) goto LAB_02bc28c0;
                              uVar13 = 0;
                              goto LAB_02bc28ac;
                            }
                          }
                        }
                      }
                      break;
                    }
                    fVar19 = (float)FUN_02bbb550();
                    fVar23 = fVar19;
                    if (1.0 < fVar19) {
                      fVar23 = 1.0;
                    }
                    uVar25 = 0x437f0000;
                    fVar23 = fVar23 * 255.0;
                    if (fVar19 < 0.0) {
                      fVar23 = 0.0;
                    }
                    fVar19 = param_4;
                    dVar21 = modf((double)fVar23,&stack0x00000028);
                    if (0.0 <= fVar23) {
                      if (dVar21 == 0.5) {
                        fVar23 = (float)in_stack_00000028 + 1.0;
                        goto LAB_02bc25a4;
                      }
                      fVar27 = (float)(int)(fVar23 + 0.5);
                    }
                    else if (dVar21 == -0.5) {
                      fVar23 = (float)in_stack_00000028 + -1.0;
LAB_02bc25a4:
                      fVar27 = (float)in_stack_00000028;
                      if (((long)in_stack_00000028 & 1U) != 0) {
                        fVar27 = fVar23;
                      }
                    }
                    else {
                      fVar27 = (float)(int)(fVar23 + -0.5);
                    }
                    fVar23 = fVar24;
                    if (1.0 < fVar24) {
                      fVar23 = 1.0;
                    }
                    fVar23 = fVar23 * 255.0;
                    if (fVar24 < 0.0) {
                      fVar23 = 0.0;
                    }
                    dVar21 = modf((double)fVar23,&stack0x00000028);
                    if (0.0 <= fVar23) {
                      if (dVar21 == 0.5) {
                        fVar24 = (float)in_stack_00000028 + 1.0;
                        goto FUN_02bc262c;
                      }
                      fVar23 = (float)(int)(fVar23 + 0.5);
                    }
                    else if (dVar21 == -0.5) {
                      fVar24 = (float)in_stack_00000028 + -1.0;
FUN_02bc262c:
                      fVar23 = (float)in_stack_00000028;
                      if (((long)in_stack_00000028 & 1U) != 0) {
                        fVar23 = fVar24;
                      }
                    }
                    else {
                      fVar23 = (float)(int)(fVar23 + -0.5);
                    }
                    fVar24 = fVar28;
                    if (1.0 < fVar28) {
                      fVar24 = 1.0;
                    }
                    fVar24 = fVar24 * 255.0;
                    if (fVar28 < 0.0) {
                      fVar24 = 0.0;
                    }
                    dVar21 = modf((double)fVar24,&stack0x00000028);
                    if (0.0 <= fVar24) {
                      if (dVar21 == 0.5) {
                        fVar24 = (float)in_stack_00000028 + 1.0;
                        goto System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>;
                      }
                      fVar28 = (float)(int)(fVar24 + 0.5);
                    }
                    else if (dVar21 == -0.5) {
                      fVar24 = (float)in_stack_00000028 + -1.0;
System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>:
                      fVar28 = (float)in_stack_00000028;
                      if (((long)in_stack_00000028 & 1U) != 0) {
                        fVar28 = fVar24;
                      }
                    }
                    else {
                      fVar28 = (float)(int)(fVar24 + -0.5);
                    }
                    fVar24 = param_4;
                    if (1.0 < param_4) {
                      fVar24 = 1.0;
                    }
                    uVar11 = 0x437f0000;
                    fVar24 = fVar24 * 255.0;
                    if (param_4 < 0.0) {
                      fVar24 = 0.0;
                    }
                    dVar21 = modf((double)fVar24,&stack0x00000028);
                    if (0.0 <= fVar24) {
                      if (dVar21 == 0.5) {
                        fVar24 = (float)in_stack_00000028 + 1.0;
                        goto LAB_02bc273c;
                      }
                      fVar20 = (float)(int)(fVar24 + 0.5);
                    }
                    else if (dVar21 == -0.5) {
                      fVar24 = (float)in_stack_00000028 + -1.0;
LAB_02bc273c:
                      uVar11 = (ulong)(uint)fVar24;
                      fVar20 = (float)in_stack_00000028;
                      if (((long)in_stack_00000028 & 1U) != 0) {
                        fVar20 = fVar24;
                      }
                    }
                    else {
                      fVar20 = (float)(int)(fVar24 + -0.5);
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_02bc2ac0;
                    *(uint *)(lVar12 + lVar16) =
                         (int)fVar27 & 0xffU | ((int)fVar23 & 0xffU) << 8 |
                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar20 << 0x18;
                    lVar12 = *(long *)(unaff_x19 + 0x1a0);
                    lVar16 = lVar16 + 0x6c;
                    uVar14 = uVar14 + 1;
                    param_4 = fVar19;
                  } while (lVar12 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_02bc27c8;
  while (uVar13 = uVar13 + 1, (int)uVar13 < (int)uVar6) {
LAB_02bc28ac:
    if (uVar6 <= uVar13) goto LAB_02bc2ac0;
  }
LAB_02bc28c0:
  if (unaff_x20 == 0) goto LAB_02bc27c8;
  FUN_0309de40();
  iVar4 = FUN_04882fc0(0);
  if ((*(long *)(unaff_x19 + 0x100) == 0) ||
     (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0)) goto LAB_02bc27c8;
  uVar6 = FUN_036e1214(lVar12,0);
  if (0 < (int)uVar6) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar12 = *(long *)puVar2;
    }
    lVar16 = **(long **)(lVar12 + 0xb8);
    if (lVar16 == 0) goto LAB_02bc27c8;
    if ((int)uVar6 < *(int *)(lVar16 + 0x18)) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar16 == 0) goto LAB_02bc27c8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_02bc2ac0;
      lVar12 = *(long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_02bc27c8;
      iVar4 = FUN_051d0f1c(lVar12,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x100) != 0) &&
     (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 != 0)) {
    iVar7 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
    if (iVar7 == 0) {
      uVar10 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0)) goto LAB_02bc27c8;
      uVar10 = FUN_036e1620(lVar12,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
       (lVar12 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar12 != 0)) {
      lVar12 = FUN_051df7a8(lVar12,0);
      lVar16 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x18) == 0) {
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (lVar12 != 0) {
          uVar14 = (ulong)*(uint *)(lVar16 + 0x24);
          uVar11 = (ulong)*(uint *)(lVar16 + 0x28);
          uVar22 = FUN_04f1c778(*(undefined4 *)(lVar16 + 0x20),uVar14,uVar11,lVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar22 = FUN_036df8cc(uVar22,uVar14,uVar11,uVar10,0);
          uVar10 = FUN_02bba0b8();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar1);
          }
          uVar11 = FUN_051d2ac0(uVar10,0,0);
          if ((uVar11 & 1) != 0) {
            plVar8 = (long *)FUN_02bba0b8();
            if (plVar8 == (long *)0x0) goto LAB_02bc27c8;
            (**(code **)(*plVar8 + 0x288))
                      (uVar22,(float)iVar4 - (float)uVar14,plVar8,*(undefined8 *)(*plVar8 + 0x290));
          }
          return;
        }
      }
    }
  }
LAB_02bc27c8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


