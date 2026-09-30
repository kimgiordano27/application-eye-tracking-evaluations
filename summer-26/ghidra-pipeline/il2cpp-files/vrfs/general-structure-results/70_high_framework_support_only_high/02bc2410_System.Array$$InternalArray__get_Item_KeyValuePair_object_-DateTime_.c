/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-DateTime>>
ENTRY_POINT: 02bc2410
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


void System_Array__InternalArray__get_Item<KeyValuePair<object,_DateTime>>(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  int extraout_var;
  undefined8 uVar9;
  ulong uVar10;
  float extraout_w1;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined4 unaff_w22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar25;
  int unaff_s12;
  float fVar26;
  float fStack000000000000000c;
  float fStack0000000000000014;
  double in_stack_00000028;
  
                    /* try { // try from 02bc2410 to 02cc246b has its CatchHandler @ 02bc2410
                       catch() { ... } // from try @ 02bc2410 with catch @ 02bc2410
                       catch() { ... } // from try @ 02bc2530 with catch @ 02bc2410
                       catch() { ... } // from try @ 02bc25c0 with catch @ 02bc2410
                       catch() { ... } // from try @ 02bc2608 with catch @ 02bc2410
                       catch() { ... } // from try @ 02bc2634 with catch @ 02bc2410
                       catch() { ... } // from try @ 02bc26b4 with catch @ 02bc2410 */
  (*(code *)*param_1)();
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    fVar16 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
    plVar7 = (long *)FUN_02049494();
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
                    /* try { // try from 02bc246c to 02cc2497 has its CatchHandler @ 02bc2530 */
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02bc2498;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*unaff_x26,0);
LAB_02bc2498:
      fStack000000000000000c = unaff_s10;
      fStack0000000000000014 = unaff_s8;
      (*(code *)*puVar8)(plVar7,unaff_w22,puVar8[1]);
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        fVar17 = (float)FUN_0309d274(*(long *)(unaff_x19 + 0x100),0);
        puVar3 = PTR_DAT_06e492b0;
        puVar2 = PTR_DAT_06da0418;
        puVar1 = PTR_DAT_06d9fd78;
        lVar11 = *(long *)(unaff_x19 + 0x1a0);
        if (lVar11 != 0) {
          uVar24 = (ulong)(uint)(float)unaff_s12;
          fVar16 = extraout_w1 / fVar16;
          uVar10 = (ulong)(uint)(float)extraout_var;
          uVar13 = 0;
          lVar15 = 0x48;
          do {
            fVar26 = (float)uVar24;
            fVar23 = (float)uVar10;
            iVar4 = (int)*(undefined8 *)(lVar11 + 0x18);
            if ((long)iVar4 <= (long)uVar13) {
              if (iVar4 == 0) goto LAB_02bc2ac0;
              *(undefined4 *)(lVar11 + 0x28) = 0;
              fVar17 = fVar16 - (float)extraout_var / fVar17;
              *(float *)(lVar11 + 0x20) = fStack000000000000000c;
              *(float *)(lVar11 + 0x24) = fVar17;
              lVar11 = *(long *)(unaff_x19 + 0x1a0);
              if (lVar11 != 0) {
                if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_02bc2ac0;
                *(undefined4 *)(lVar11 + 0x94) = 0;
                fVar23 = fStack000000000000000c + (float)unaff_s12;
                *(float *)(lVar11 + 0x8c) = fVar23;
                *(float *)(lVar11 + 0x90) = fVar17;
                lVar11 = *(long *)(unaff_x19 + 0x1a0);
                if (lVar11 != 0) {
                  if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_02bc2ac0;
                  *(float *)(lVar11 + 0xf8) = fVar23;
                  *(float *)(lVar11 + 0xfc) = fVar16;
                  *(undefined4 *)(lVar11 + 0x100) = 0;
                  lVar11 = *(long *)(unaff_x19 + 0x1a0);
                  if (lVar11 != 0) {
                    if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_02bc2ac0;
                    *(float *)(lVar11 + 0x164) = fStack000000000000000c;
                    *(float *)(lVar11 + 0x168) = fVar16;
                    *(undefined4 *)(lVar11 + 0x16c) = 0;
                    if (*(char *)(unaff_x24 + 0x89c) == '\0') {
                      thunk_FUN_0159f088(PTR_DAT_06e4d340);
                      *(undefined1 *)(unaff_x24 + 0x89c) = 1;
                    }
                    fVar16 = unaff_s9 - **(float **)(*unaff_x25 + 0xb8);
                    fStack0000000000000014 =
                         fStack0000000000000014 - (*(float **)(*unaff_x25 + 0xb8))[1];
                    if (fVar16 * fVar16 + fStack0000000000000014 * fStack0000000000000014 <
                        DAT_0534bf7c) goto LAB_02bc28c0;
                    if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                      uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
                      if ((int)uVar5 < 1) goto LAB_02bc28c0;
                      uVar12 = 0;
                      goto LAB_02bc28ac;
                    }
                  }
                }
              }
              break;
            }
            fVar18 = (float)FUN_02bbb550();
            fVar22 = fVar18;
            if (1.0 < fVar18) {
              fVar22 = 1.0;
            }
            uVar24 = 0x437f0000;
            fVar22 = fVar22 * 255.0;
            if (fVar18 < 0.0) {
              fVar22 = 0.0;
            }
            fVar18 = in_s3;
            dVar20 = modf((double)fVar22,&stack0x00000028);
            if (0.0 <= fVar22) {
              if (dVar20 == 0.5) {
                fVar22 = (float)in_stack_00000028 + 1.0;
                goto LAB_02bc25a4;
              }
              fVar25 = (float)(int)(fVar22 + 0.5);
            }
            else if (dVar20 == -0.5) {
              fVar22 = (float)in_stack_00000028 + -1.0;
LAB_02bc25a4:
              fVar25 = (float)in_stack_00000028;
              if (((long)in_stack_00000028 & 1U) != 0) {
                fVar25 = fVar22;
              }
            }
            else {
              fVar25 = (float)(int)(fVar22 + -0.5);
            }
            fVar22 = fVar23;
            if (1.0 < fVar23) {
              fVar22 = 1.0;
            }
            fVar22 = fVar22 * 255.0;
            if (fVar23 < 0.0) {
              fVar22 = 0.0;
            }
            dVar20 = modf((double)fVar22,&stack0x00000028);
            if (0.0 <= fVar22) {
              if (dVar20 == 0.5) {
                fVar23 = (float)in_stack_00000028 + 1.0;
                goto FUN_02bc262c;
              }
              fVar22 = (float)(int)(fVar22 + 0.5);
            }
            else if (dVar20 == -0.5) {
              fVar23 = (float)in_stack_00000028 + -1.0;
FUN_02bc262c:
              fVar22 = (float)in_stack_00000028;
              if (((long)in_stack_00000028 & 1U) != 0) {
                fVar22 = fVar23;
              }
            }
            else {
              fVar22 = (float)(int)(fVar22 + -0.5);
            }
            fVar23 = fVar26;
            if (1.0 < fVar26) {
              fVar23 = 1.0;
            }
            fVar23 = fVar23 * 255.0;
            if (fVar26 < 0.0) {
              fVar23 = 0.0;
            }
            dVar20 = modf((double)fVar23,&stack0x00000028);
            if (0.0 <= fVar23) {
              if (dVar20 == 0.5) {
                fVar23 = (float)in_stack_00000028 + 1.0;
                goto System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>;
              }
              fVar26 = (float)(int)(fVar23 + 0.5);
            }
            else if (dVar20 == -0.5) {
              fVar23 = (float)in_stack_00000028 + -1.0;
System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>:
              fVar26 = (float)in_stack_00000028;
              if (((long)in_stack_00000028 & 1U) != 0) {
                fVar26 = fVar23;
              }
            }
            else {
              fVar26 = (float)(int)(fVar23 + -0.5);
            }
            fVar23 = in_s3;
            if (1.0 < in_s3) {
              fVar23 = 1.0;
            }
            uVar10 = 0x437f0000;
            fVar23 = fVar23 * 255.0;
            if (in_s3 < 0.0) {
              fVar23 = 0.0;
            }
            dVar20 = modf((double)fVar23,&stack0x00000028);
            if (0.0 <= fVar23) {
              if (dVar20 == 0.5) {
                fVar23 = (float)in_stack_00000028 + 1.0;
                goto LAB_02bc273c;
              }
              fVar19 = (float)(int)(fVar23 + 0.5);
            }
            else if (dVar20 == -0.5) {
              fVar23 = (float)in_stack_00000028 + -1.0;
LAB_02bc273c:
              uVar10 = (ulong)(uint)fVar23;
              fVar19 = (float)in_stack_00000028;
              if (((long)in_stack_00000028 & 1U) != 0) {
                fVar19 = fVar23;
              }
            }
            else {
              fVar19 = (float)(int)(fVar23 + -0.5);
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_02bc2ac0;
            *(uint *)(lVar11 + lVar15) =
                 (int)fVar25 & 0xffU | ((int)fVar22 & 0xffU) << 8 | ((int)fVar26 & 0xffU) << 0x10 |
                 (int)fVar19 << 0x18;
            lVar11 = *(long *)(unaff_x19 + 0x1a0);
            lVar15 = lVar15 + 0x6c;
            uVar13 = uVar13 + 1;
            in_s3 = fVar18;
          } while (lVar11 != 0);
        }
      }
    }
  }
  goto LAB_02bc27c8;
  while (uVar12 = uVar12 + 1, (int)uVar12 < (int)uVar5) {
LAB_02bc28ac:
    if (uVar5 <= uVar12) goto LAB_02bc2ac0;
  }
LAB_02bc28c0:
  if (unaff_x20 == 0) goto LAB_02bc27c8;
  FUN_0309de40();
  iVar4 = FUN_04882fc0(0);
  if ((*(long *)(unaff_x19 + 0x100) == 0) ||
     (lVar11 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar11 == 0)) goto LAB_02bc27c8;
  uVar5 = FUN_036e1214(lVar11,0);
  if (0 < (int)uVar5) {
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar2;
    }
    lVar15 = **(long **)(lVar11 + 0xb8);
    if (lVar15 == 0) goto LAB_02bc27c8;
    if ((int)uVar5 < *(int *)(lVar15 + 0x18)) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar15 == 0) goto LAB_02bc27c8;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_02bc2ac0;
      lVar11 = *(long *)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_02bc27c8;
      iVar4 = FUN_051d0f1c(lVar11,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x100) != 0) &&
     (lVar11 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar11 != 0)) {
    iVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar11,0);
    if (iVar6 == 0) {
      uVar9 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar11 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar11 == 0)) goto LAB_02bc27c8;
      uVar9 = FUN_036e1620(lVar11,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
       (lVar11 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar11 != 0)) {
      lVar11 = FUN_051df7a8(lVar11,0);
      lVar15 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar15 != 0) {
        if (*(int *)(lVar15 + 0x18) == 0) {
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (lVar11 != 0) {
          uVar13 = (ulong)*(uint *)(lVar15 + 0x24);
          uVar10 = (ulong)*(uint *)(lVar15 + 0x28);
          uVar21 = FUN_04f1c778(*(undefined4 *)(lVar15 + 0x20),uVar13,uVar10,lVar11,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar21 = FUN_036df8cc(uVar21,uVar13,uVar10,uVar9,0);
          uVar9 = FUN_02bba0b8();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar1);
          }
          uVar10 = FUN_051d2ac0(uVar9,0,0);
          if ((uVar10 & 1) != 0) {
            plVar7 = (long *)FUN_02bba0b8();
            if (plVar7 == (long *)0x0) goto LAB_02bc27c8;
            (**(code **)(*plVar7 + 0x288))
                      (uVar21,(float)iVar4 - (float)uVar13,plVar7,*(undefined8 *)(*plVar7 + 0x290));
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


