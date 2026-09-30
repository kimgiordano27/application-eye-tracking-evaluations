/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-double>>
ENTRY_POINT: 02bc24b4
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


void System_Array__InternalArray__get_Item<KeyValuePair<object,_double>>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  float unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float in_s3;
  float fVar24;
  float unaff_s11;
  int unaff_s12;
  float fVar25;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  double in_stack_00000028;
  
  if (param_1 != 0) {
                    /* try { // try from 02bc24b8 to 02cc2503 has its CatchHandler @ 02bc2540 */
    fVar14 = (float)FUN_0309d274(param_1,0);
    puVar3 = PTR_DAT_06e492b0;
    puVar2 = PTR_DAT_06da0418;
    puVar1 = PTR_DAT_06d9fd78;
    lVar12 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar12 != 0) {
      uVar23 = (ulong)(uint)(float)unaff_s12;
      fVar19 = unaff_w23 / unaff_s11;
      fVar20 = (float)(int)((ulong)param_2 >> 0x20);
      uVar8 = (ulong)(uint)fVar20;
      uVar13 = 0;
      lVar11 = 0x48;
                    /* try { // try from 02bc2518 to 02cc2523 has its CatchHandler @ 02bc2530 */
      do {
        fVar25 = (float)uVar23;
        fVar22 = (float)uVar8;
                    /* try { // try from 02bc2524 to 02cc252f has its CatchHandler @ 02bc2540 */
        iVar4 = (int)*(undefined8 *)(lVar12 + 0x18);
        if ((long)iVar4 <= (long)uVar13) {
          if (iVar4 == 0) goto LAB_02bc2ac0;
          *(undefined4 *)(lVar12 + 0x28) = 0;
          fVar14 = fVar19 - fVar20 / fVar14;
          *(float *)(lVar12 + 0x20) = in_stack_00000008._4_4_;
          *(float *)(lVar12 + 0x24) = fVar14;
          lVar12 = *(long *)(unaff_x19 + 0x1a0);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_02bc2ac0;
            *(undefined4 *)(lVar12 + 0x94) = 0;
            fVar20 = in_stack_00000008._4_4_ + (float)unaff_s12;
            *(float *)(lVar12 + 0x8c) = fVar20;
            *(float *)(lVar12 + 0x90) = fVar14;
            lVar12 = *(long *)(unaff_x19 + 0x1a0);
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_02bc2ac0;
              *(float *)(lVar12 + 0xf8) = fVar20;
              *(float *)(lVar12 + 0xfc) = fVar19;
              *(undefined4 *)(lVar12 + 0x100) = 0;
              lVar12 = *(long *)(unaff_x19 + 0x1a0);
              if (lVar12 != 0) {
                if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_02bc2ac0;
                *(float *)(lVar12 + 0x164) = in_stack_00000008._4_4_;
                *(float *)(lVar12 + 0x168) = fVar19;
                *(undefined4 *)(lVar12 + 0x16c) = 0;
                if (*(char *)(unaff_x24 + 0x89c) == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06e4d340);
                  *(undefined1 *)(unaff_x24 + 0x89c) = 1;
                }
                fStack0000000000000010 = fStack0000000000000010 - **(float **)(*unaff_x25 + 0xb8);
                fStack0000000000000014 =
                     fStack0000000000000014 - (*(float **)(*unaff_x25 + 0xb8))[1];
                if (fStack0000000000000010 * fStack0000000000000010 +
                    fStack0000000000000014 * fStack0000000000000014 < DAT_0534bf7c)
                goto LAB_02bc28c0;
                if (*(long *)(unaff_x19 + 0x1a0) != 0) {
                  uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
                  if ((int)uVar5 < 1) goto LAB_02bc28c0;
                  uVar10 = 0;
                  goto LAB_02bc28ac;
                }
              }
            }
          }
          break;
        }
                    /* catch() { ... } // from try @ 02bc246c with catch @ 02bc2530
                       catch() { ... } // from try @ 02bc2518 with catch @ 02bc2530
                       try { // try from 02bc2530 to 02cc255f has its CatchHandler @ 02bc2410 */
        fVar15 = (float)FUN_02bbb550();
                    /* catch() { ... } // from try @ 02bc24b8 with catch @ 02bc2540
                       catch() { ... } // from try @ 02bc2524 with catch @ 02bc2540 */
        fVar21 = fVar15;
        if (1.0 < fVar15) {
          fVar21 = 1.0;
        }
        uVar23 = 0x437f0000;
        fVar21 = fVar21 * 255.0;
        if (fVar15 < 0.0) {
          fVar21 = 0.0;
        }
        fVar15 = in_s3;
        dVar17 = modf((double)fVar21,&stack0x00000028);
        if (0.0 <= fVar21) {
          if (dVar17 == 0.5) {
            fVar21 = (float)in_stack_00000028 + 1.0;
            goto LAB_02bc25a4;
          }
          fVar24 = (float)(int)(fVar21 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar21 = (float)in_stack_00000028 + -1.0;
LAB_02bc25a4:
          fVar24 = (float)in_stack_00000028;
          if (((long)in_stack_00000028 & 1U) != 0) {
            fVar24 = fVar21;
          }
        }
        else {
          fVar24 = (float)(int)(fVar21 + -0.5);
        }
        fVar21 = fVar22;
        if (1.0 < fVar22) {
          fVar21 = 1.0;
        }
        fVar21 = fVar21 * 255.0;
        if (fVar22 < 0.0) {
          fVar21 = 0.0;
        }
        dVar17 = modf((double)fVar21,&stack0x00000028);
        if (0.0 <= fVar21) {
          if (dVar17 == 0.5) {
            fVar22 = (float)in_stack_00000028 + 1.0;
            goto FUN_02bc262c;
          }
          fVar21 = (float)(int)(fVar21 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar22 = (float)in_stack_00000028 + -1.0;
FUN_02bc262c:
          fVar21 = (float)in_stack_00000028;
          if (((long)in_stack_00000028 & 1U) != 0) {
            fVar21 = fVar22;
          }
        }
        else {
          fVar21 = (float)(int)(fVar21 + -0.5);
        }
        fVar22 = fVar25;
        if (1.0 < fVar25) {
          fVar22 = 1.0;
        }
        fVar22 = fVar22 * 255.0;
        if (fVar25 < 0.0) {
          fVar22 = 0.0;
        }
        dVar17 = modf((double)fVar22,&stack0x00000028);
        if (0.0 <= fVar22) {
          if (dVar17 == 0.5) {
            fVar22 = (float)in_stack_00000028 + 1.0;
            goto System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>;
          }
          fVar25 = (float)(int)(fVar22 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar22 = (float)in_stack_00000028 + -1.0;
System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>:
          fVar25 = (float)in_stack_00000028;
          if (((long)in_stack_00000028 & 1U) != 0) {
            fVar25 = fVar22;
          }
        }
        else {
          fVar25 = (float)(int)(fVar22 + -0.5);
        }
        fVar22 = in_s3;
        if (1.0 < in_s3) {
          fVar22 = 1.0;
        }
        uVar8 = 0x437f0000;
        fVar22 = fVar22 * 255.0;
        if (in_s3 < 0.0) {
          fVar22 = 0.0;
        }
        dVar17 = modf((double)fVar22,&stack0x00000028);
        if (0.0 <= fVar22) {
          if (dVar17 == 0.5) {
            fVar22 = (float)in_stack_00000028 + 1.0;
            goto LAB_02bc273c;
          }
          fVar16 = (float)(int)(fVar22 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar22 = (float)in_stack_00000028 + -1.0;
LAB_02bc273c:
          uVar8 = (ulong)(uint)fVar22;
          fVar16 = (float)in_stack_00000028;
          if (((long)in_stack_00000028 & 1U) != 0) {
            fVar16 = fVar22;
          }
        }
        else {
          fVar16 = (float)(int)(fVar22 + -0.5);
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_02bc2ac0;
        *(uint *)(lVar12 + lVar11) =
             (int)fVar24 & 0xffU | ((int)fVar21 & 0xffU) << 8 | ((int)fVar25 & 0xffU) << 0x10 |
             (int)fVar16 << 0x18;
        lVar12 = *(long *)(unaff_x19 + 0x1a0);
        lVar11 = lVar11 + 0x6c;
        uVar13 = uVar13 + 1;
        in_s3 = fVar15;
      } while (lVar12 != 0);
    }
  }
  goto LAB_02bc27c8;
  while (uVar10 = uVar10 + 1, (int)uVar10 < (int)uVar5) {
LAB_02bc28ac:
    if (uVar5 <= uVar10) goto LAB_02bc2ac0;
  }
LAB_02bc28c0:
  if (unaff_x20 == 0) goto LAB_02bc27c8;
  FUN_0309de40();
  iVar4 = FUN_04882fc0(0);
  if ((*(long *)(unaff_x19 + 0x100) == 0) ||
     (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0)) goto LAB_02bc27c8;
  uVar5 = FUN_036e1214(lVar12,0);
  if (0 < (int)uVar5) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar12 = *(long *)puVar2;
    }
    lVar11 = **(long **)(lVar12 + 0xb8);
    if (lVar11 == 0) goto LAB_02bc27c8;
    if ((int)uVar5 < *(int *)(lVar11 + 0x18)) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar11 == 0) goto LAB_02bc27c8;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_02bc2ac0;
      lVar12 = *(long *)(lVar11 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_02bc27c8;
      iVar4 = FUN_051d0f1c(lVar12,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x100) != 0) &&
     (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 != 0)) {
    iVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar12 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0)) goto LAB_02bc27c8;
      uVar7 = FUN_036e1620(lVar12,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
       (lVar12 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar12 != 0)) {
      lVar12 = FUN_051df7a8(lVar12,0);
      lVar11 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (lVar12 != 0) {
          uVar13 = (ulong)*(uint *)(lVar11 + 0x24);
          uVar8 = (ulong)*(uint *)(lVar11 + 0x28);
          uVar18 = FUN_04f1c778(*(undefined4 *)(lVar11 + 0x20),uVar13,uVar8,lVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar18 = FUN_036df8cc(uVar18,uVar13,uVar8,uVar7,0);
          uVar7 = FUN_02bba0b8();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar1);
          }
          uVar8 = FUN_051d2ac0(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            plVar9 = (long *)FUN_02bba0b8();
            if (plVar9 == (long *)0x0) goto LAB_02bc27c8;
            (**(code **)(*plVar9 + 0x288))
                      (uVar18,(float)iVar4 - (float)uVar13,plVar9,*(undefined8 *)(*plVar9 + 0x290));
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


