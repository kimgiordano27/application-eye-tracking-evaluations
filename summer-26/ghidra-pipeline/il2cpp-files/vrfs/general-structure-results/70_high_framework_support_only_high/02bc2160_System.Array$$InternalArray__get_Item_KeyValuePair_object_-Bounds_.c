/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-Bounds>>
ENTRY_POINT: 02bc2160
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


void System_Array__InternalArray__get_Item<KeyValuePair<object,_Bounds>>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,float param_4,
               long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int extraout_var;
  ulong uVar13;
  float extraout_w1;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar18;
  undefined4 uVar19;
  float extraout_s0;
  float extraout_s0_00;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float unaff_s8;
  float unaff_s9;
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_5 + 0x5e0));
  thunk_FUN_0159f088(PTR_DAT_06d9fd78);
  thunk_FUN_0159f088(PTR_DAT_06e492b0);
  *(undefined1 *)(unaff_x21 + 0x8ce) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if (*(char *)(unaff_x19 + 0x1cc) == '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x1a0) == 0) {
                    /* try { // try from 02bc21a0 to 02cc21eb has its CatchHandler @ 02bc2228 */
    FUN_02bc3520();
  }
  iVar30 = *(int *)(unaff_x19 + 0x184);
  iVar6 = FUN_02bbbd78();
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x1dc);
    lVar9 = FUN_0309c7ac(*(long *)(unaff_x19 + 0x100),0);
    if (lVar9 == 0) {
      return;
    }
    iVar7 = FUN_02049534(lVar9,0);
    if (iVar7 == 0) {
      return;
    }
    if (DAT_0722a89c == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e4d340);
      DAT_0722a89c = '\x01';
    }
                    /* try { // try from 02bc2200 to 02cc220b has its CatchHandler @ 02bc2218 */
    puVar5 = PTR_DAT_06e4d340;
                    /* try { // try from 02bc220c to 02cc2217 has its CatchHandler @ 02bc2228 */
    fVar28 = **(float **)(*(long *)PTR_DAT_06e4d340 + 0xb8);
    plVar10 = (long *)FUN_02049438(lVar9,0);
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      uVar8 = iVar6 - iVar1;
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06e42fe8) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02bc2284;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e42fe8,0);
LAB_02bc2284:
      iVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((int)uVar8 < iVar6) {
        plVar10 = (long *)FUN_02049438(lVar9,0);
        if (plVar10 == (long *)0x0) goto LAB_02bc27c8;
        lVar14 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06e07b98) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02bc2300;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e07b98,0);
LAB_02bc2300:
        fVar28 = (float)(*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
      }
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        fVar18 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
        if ((*(long *)(unaff_x19 + 0x100) != 0) &&
           (lVar14 = FUN_036636fc(*(long *)(unaff_x19 + 0x100),0), lVar14 != 0)) {
          fVar28 = fVar28 / fVar18;
          uVar19 = FUN_04f1d548(lVar14,0);
          in_stack_00000018 = CONCAT44(param_2,uVar19);
          in_stack_00000020 = CONCAT44(param_4,param_3);
          uVar12 = FUN_051dc1a8(&stack0x00000018,0);
          if (extraout_s0 < fVar28) {
            if ((*(long *)(unaff_x19 + 0x100) == 0) ||
               (lVar14 = FUN_036636fc(*(long *)(unaff_x19 + 0x100),0), lVar14 == 0))
            goto LAB_02bc27c8;
            uVar19 = FUN_04f1d548(lVar14,0);
            in_stack_00000018 = CONCAT44(param_2,uVar19);
            in_stack_00000020 = CONCAT44(param_4,param_3);
            uVar12 = FUN_051dc1a8(&stack0x00000018,0);
            fVar28 = extraout_s0_00;
          }
          uVar19 = FUN_02bbfecc(uVar12,uVar8,lVar9);
          plVar10 = (long *)FUN_02049494(lVar9,0);
          puVar2 = PTR_DAT_06dfc5e0;
          if (plVar10 != (long *)0x0) {
            lVar14 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06dfc5e0) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto System_Array__InternalArray__get_Item<KeyValuePair<object,_DateTime>>;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06dfc5e0,0);
System_Array__InternalArray__get_Item<KeyValuePair<object,_DateTime>>:
            (*(code *)*puVar11)(plVar10,uVar19,puVar11[1]);
            if (*(long *)(unaff_x19 + 0x100) != 0) {
              fVar18 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
              plVar10 = (long *)FUN_02049494(lVar9,0);
              if (plVar10 != (long *)0x0) {
                lVar9 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_02bc2498;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar2,0);
LAB_02bc2498:
                fStack0000000000000014 = unaff_s8;
                (*(code *)*puVar11)(plVar10,uVar19,puVar11[1]);
                if (*(long *)(unaff_x19 + 0x100) != 0) {
                  fVar20 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
                  puVar4 = PTR_DAT_06e492b0;
                  puVar3 = PTR_DAT_06da0418;
                  puVar2 = PTR_DAT_06d9fd78;
                  lVar9 = *(long *)(unaff_x19 + 0x1a0);
                  if (lVar9 != 0) {
                    uVar27 = (ulong)(uint)(float)iVar30;
                    fVar18 = extraout_w1 / fVar18;
                    uVar13 = (ulong)(uint)(float)extraout_var;
                    uVar16 = 0;
                    lVar14 = 0x48;
                    do {
                      fVar31 = (float)uVar27;
                      fVar26 = (float)uVar13;
                      iVar6 = (int)*(undefined8 *)(lVar9 + 0x18);
                      if ((long)iVar6 <= (long)uVar16) {
                        if (iVar6 == 0) goto LAB_02bc2ac0;
                        *(undefined4 *)(lVar9 + 0x28) = 0;
                        fVar20 = fVar18 - (float)extraout_var / fVar20;
                        *(float *)(lVar9 + 0x20) = fVar28;
                        *(float *)(lVar9 + 0x24) = fVar20;
                        lVar9 = *(long *)(unaff_x19 + 0x1a0);
                        if (lVar9 != 0) {
                          if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_02bc2ac0;
                          *(undefined4 *)(lVar9 + 0x94) = 0;
                          fVar26 = fVar28 + (float)iVar30;
                          *(float *)(lVar9 + 0x8c) = fVar26;
                          *(float *)(lVar9 + 0x90) = fVar20;
                          lVar9 = *(long *)(unaff_x19 + 0x1a0);
                          if (lVar9 != 0) {
                            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_02bc2ac0;
                            *(float *)(lVar9 + 0xf8) = fVar26;
                            *(float *)(lVar9 + 0xfc) = fVar18;
                            *(undefined4 *)(lVar9 + 0x100) = 0;
                            lVar9 = *(long *)(unaff_x19 + 0x1a0);
                            if (lVar9 != 0) {
                              if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_02bc2ac0;
                              *(float *)(lVar9 + 0x164) = fVar28;
                              *(float *)(lVar9 + 0x168) = fVar18;
                              *(undefined4 *)(lVar9 + 0x16c) = 0;
                              if (DAT_0722a89c == '\0') {
                                thunk_FUN_0159f088(PTR_DAT_06e4d340);
                                DAT_0722a89c = '\x01';
                              }
                              fVar28 = unaff_s9 - **(float **)(*(long *)puVar5 + 0xb8);
                              fStack0000000000000014 =
                                   fStack0000000000000014 - (*(float **)(*(long *)puVar5 + 0xb8))[1]
                              ;
                              if (fVar28 * fVar28 + fStack0000000000000014 * fStack0000000000000014
                                  < DAT_0534bf7c) goto LAB_02bc28c0;
                              if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                                uVar8 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
                                if ((int)uVar8 < 1) goto LAB_02bc28c0;
                                uVar15 = 0;
                                goto LAB_02bc28ac;
                              }
                            }
                          }
                        }
                        break;
                      }
                      fVar21 = (float)FUN_02bbb550();
                      fVar25 = fVar21;
                      if (1.0 < fVar21) {
                        fVar25 = 1.0;
                      }
                      uVar27 = 0x437f0000;
                      fVar25 = fVar25 * 255.0;
                      if (fVar21 < 0.0) {
                        fVar25 = 0.0;
                      }
                      fVar21 = param_4;
                      dVar23 = modf((double)fVar25,&stack0x00000028);
                      if (0.0 <= fVar25) {
                        if (dVar23 == 0.5) {
                          fVar25 = (float)in_stack_00000028 + 1.0;
                          goto LAB_02bc25a4;
                        }
                        fVar29 = (float)(int)(fVar25 + 0.5);
                      }
                      else if (dVar23 == -0.5) {
                        fVar25 = (float)in_stack_00000028 + -1.0;
LAB_02bc25a4:
                        fVar29 = (float)in_stack_00000028;
                        if (((long)in_stack_00000028 & 1U) != 0) {
                          fVar29 = fVar25;
                        }
                      }
                      else {
                        fVar29 = (float)(int)(fVar25 + -0.5);
                      }
                      fVar25 = fVar26;
                      if (1.0 < fVar26) {
                        fVar25 = 1.0;
                      }
                      fVar25 = fVar25 * 255.0;
                      if (fVar26 < 0.0) {
                        fVar25 = 0.0;
                      }
                      dVar23 = modf((double)fVar25,&stack0x00000028);
                      if (0.0 <= fVar25) {
                        if (dVar23 == 0.5) {
                          fVar26 = (float)in_stack_00000028 + 1.0;
                          goto FUN_02bc262c;
                        }
                        fVar25 = (float)(int)(fVar25 + 0.5);
                      }
                      else if (dVar23 == -0.5) {
                        fVar26 = (float)in_stack_00000028 + -1.0;
FUN_02bc262c:
                        fVar25 = (float)in_stack_00000028;
                        if (((long)in_stack_00000028 & 1U) != 0) {
                          fVar25 = fVar26;
                        }
                      }
                      else {
                        fVar25 = (float)(int)(fVar25 + -0.5);
                      }
                      fVar26 = fVar31;
                      if (1.0 < fVar31) {
                        fVar26 = 1.0;
                      }
                      fVar26 = fVar26 * 255.0;
                      if (fVar31 < 0.0) {
                        fVar26 = 0.0;
                      }
                      dVar23 = modf((double)fVar26,&stack0x00000028);
                      if (0.0 <= fVar26) {
                        if (dVar23 == 0.5) {
                          fVar26 = (float)in_stack_00000028 + 1.0;
                          goto 
                          System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>;
                        }
                        fVar31 = (float)(int)(fVar26 + 0.5);
                      }
                      else if (dVar23 == -0.5) {
                        fVar26 = (float)in_stack_00000028 + -1.0;
System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>:
                        fVar31 = (float)in_stack_00000028;
                        if (((long)in_stack_00000028 & 1U) != 0) {
                          fVar31 = fVar26;
                        }
                      }
                      else {
                        fVar31 = (float)(int)(fVar26 + -0.5);
                      }
                      fVar26 = param_4;
                      if (1.0 < param_4) {
                        fVar26 = 1.0;
                      }
                      uVar13 = 0x437f0000;
                      fVar26 = fVar26 * 255.0;
                      if (param_4 < 0.0) {
                        fVar26 = 0.0;
                      }
                      dVar23 = modf((double)fVar26,&stack0x00000028);
                      if (0.0 <= fVar26) {
                        if (dVar23 == 0.5) {
                          fVar26 = (float)in_stack_00000028 + 1.0;
                          goto LAB_02bc273c;
                        }
                        fVar22 = (float)(int)(fVar26 + 0.5);
                      }
                      else if (dVar23 == -0.5) {
                        fVar26 = (float)in_stack_00000028 + -1.0;
LAB_02bc273c:
                        uVar13 = (ulong)(uint)fVar26;
                        fVar22 = (float)in_stack_00000028;
                        if (((long)in_stack_00000028 & 1U) != 0) {
                          fVar22 = fVar26;
                        }
                      }
                      else {
                        fVar22 = (float)(int)(fVar26 + -0.5);
                      }
                      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_02bc2ac0;
                      *(uint *)(lVar9 + lVar14) =
                           (int)fVar29 & 0xffU | ((int)fVar25 & 0xffU) << 8 |
                           ((int)fVar31 & 0xffU) << 0x10 | (int)fVar22 << 0x18;
                      lVar9 = *(long *)(unaff_x19 + 0x1a0);
                      lVar14 = lVar14 + 0x6c;
                      uVar16 = uVar16 + 1;
                      param_4 = fVar21;
                    } while (lVar9 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_02bc27c8;
  while (uVar15 = uVar15 + 1, (int)uVar15 < (int)uVar8) {
LAB_02bc28ac:
    if (uVar8 <= uVar15) goto LAB_02bc2ac0;
  }
LAB_02bc28c0:
  if (unaff_x20 == 0) goto LAB_02bc27c8;
  FUN_0309de40();
  iVar6 = FUN_04882fc0(0);
  if ((*(long *)(unaff_x19 + 0x100) == 0) ||
     (lVar9 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar9 == 0)) goto LAB_02bc27c8;
  uVar8 = FUN_036e1214(lVar9,0);
  if (0 < (int)uVar8) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar9 = *(long *)puVar3;
    }
    lVar14 = **(long **)(lVar9 + 0xb8);
    if (lVar14 == 0) goto LAB_02bc27c8;
    if ((int)uVar8 < *(int *)(lVar14 + 0x18)) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar14 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar14 == 0) goto LAB_02bc27c8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_02bc2ac0;
      lVar9 = *(long *)(lVar14 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_02bc27c8;
      iVar6 = FUN_051d0f1c(lVar9,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x100) != 0) &&
     (lVar9 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar9 != 0)) {
    iVar30 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar9,0);
    if (iVar30 == 0) {
      uVar12 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar9 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar9 == 0)) goto LAB_02bc27c8;
      uVar12 = FUN_036e1620(lVar9,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
       (lVar9 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar9 != 0)) {
      lVar9 = FUN_051df7a8(lVar9,0);
      lVar14 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) == 0) {
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (lVar9 != 0) {
          uVar16 = (ulong)*(uint *)(lVar14 + 0x24);
          uVar13 = (ulong)*(uint *)(lVar14 + 0x28);
          uVar24 = FUN_04f1c778(*(undefined4 *)(lVar14 + 0x20),uVar16,uVar13,lVar9,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar24 = FUN_036df8cc(uVar24,uVar16,uVar13,uVar12,0);
          uVar12 = FUN_02bba0b8();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar2);
          }
          uVar13 = FUN_051d2ac0(uVar12,0,0);
          if ((uVar13 & 1) != 0) {
            plVar10 = (long *)FUN_02bba0b8();
            if (plVar10 == (long *)0x0) goto LAB_02bc27c8;
            (**(code **)(*plVar10 + 0x288))
                      (uVar24,(float)iVar6 - (float)uVar16,plVar10,*(undefined8 *)(*plVar10 + 0x290)
                      );
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


