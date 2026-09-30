/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-Guid>>
ENTRY_POINT: 02bc2558
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


void System_Array__InternalArray__get_Item<KeyValuePair<object,_Guid>>
               (double param_1,undefined1 param_2 [16],ulong param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  float unaff_w29;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float unaff_s8;
  double unaff_d9;
  float unaff_s10;
  float fVar17;
  ulong unaff_d12;
  float fVar18;
  ulong unaff_d13;
  double unaff_d14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  double in_stack_00000028;
  
  do {
    uVar15 = param_3;
    fVar16 = param_4;
                    /* try { // try from 02bc2560 to 02cc2577 has its CatchHandler @ 02bc25fc */
    dVar12 = modf(param_1,&stack0x00000028);
    if (0.0 <= unaff_s10) {
                    /* try { // try from 02bc258c to 02cc25a3 has its CatchHandler @ 02bc25ec */
      if (dVar12 == unaff_d14) {
        fVar14 = (float)in_stack_00000028 + unaff_s8;
        goto LAB_02bc25a4;
      }
                    /* try { // try from 02bc25c0 to 02cc25d3 has its CatchHandler @ 02bc2410 */
      fVar10 = (float)(int)(unaff_s10 + 0.5);
    }
    else if (dVar12 == unaff_d9) {
      fVar14 = (float)in_stack_00000028 + -1.0;
LAB_02bc25a4:
                    /* try { // try from 02bc257c to 02cc257f has its CatchHandler @ 02bc25e8 */
                    /* try { // try from 02bc25a4 to 02cc25bf has its CatchHandler @ 02bc25f0 */
      fVar10 = (float)in_stack_00000028;
      if (((long)in_stack_00000028 & 1U) != 0) {
        fVar10 = fVar14;
      }
    }
    else {
      fVar10 = (float)(int)(unaff_s10 + -0.5);
    }
    fVar18 = (float)unaff_d13;
    fVar14 = fVar18;
    if (unaff_s8 < fVar18) {
      fVar14 = unaff_s8;
    }
                    /* try { // try from 02bc25d4 to 02cc25e3 has its CatchHandler @ 02bc25fc */
    fVar14 = fVar14 * unaff_w29;
    if (fVar18 < 0.0) {
      fVar14 = unaff_s15;
    }
                    /* catch() { ... } // from try @ 02bc257c with catch @ 02bc25e8 */
    dVar12 = modf((double)fVar14,&stack0x00000028);
                    /* catch() { ... } // from try @ 02bc258c with catch @ 02bc25ec */
                    /* catch() { ... } // from try @ 02bc25a4 with catch @ 02bc25f0 */
    if (0.0 <= fVar14) {
      if (dVar12 == unaff_d14) {
        fVar14 = (float)in_stack_00000028 + unaff_s8;
        goto FUN_02bc262c;
      }
      fVar18 = (float)(int)(fVar14 + 0.5);
    }
    else if (dVar12 == unaff_d9) {
                    /* try { // try from 02bc2608 to 02cc261b has its CatchHandler @ 02bc2410 */
      fVar14 = (float)in_stack_00000028 + -1.0;
FUN_02bc262c:
                    /* try { // try from 02bc2604 to 02cc2607 has its CatchHandler @ 02bc26bc */
      fVar18 = (float)in_stack_00000028;
      if (((long)in_stack_00000028 & 1U) != 0) {
        fVar18 = fVar14;
      }
    }
    else {
      fVar18 = (float)(int)(fVar14 + -0.5);
    }
    fVar17 = (float)unaff_d12;
    fVar14 = fVar17;
    if (unaff_s8 < fVar17) {
      fVar14 = unaff_s8;
    }
    fVar14 = fVar14 * unaff_w29;
    if (fVar17 < 0.0) {
      fVar14 = unaff_s15;
    }
    dVar12 = modf((double)fVar14,&stack0x00000028);
    if (0.0 <= fVar14) {
      if (dVar12 == unaff_d14) {
        fVar14 = (float)in_stack_00000028 + unaff_s8;
        goto System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>;
      }
      fVar17 = (float)(int)(fVar14 + 0.5);
    }
    else if (dVar12 == unaff_d9) {
      fVar14 = (float)in_stack_00000028 + -1.0;
System_Array__InternalArray__get_Item<KeyValuePair<object,_Int32Enum>>:
      fVar17 = (float)in_stack_00000028;
      if (((long)in_stack_00000028 & 1U) != 0) {
        fVar17 = fVar14;
      }
    }
    else {
      fVar17 = (float)(int)(fVar14 + -0.5);
    }
    fVar14 = param_4;
    if (unaff_s8 < param_4) {
      fVar14 = unaff_s8;
    }
    unaff_d13 = (ulong)(uint)unaff_w29;
    fVar14 = fVar14 * unaff_w29;
    if (param_4 < 0.0) {
      fVar14 = unaff_s15;
    }
    dVar12 = modf((double)fVar14,&stack0x00000028);
    if (0.0 <= fVar14) {
      if (dVar12 == unaff_d14) {
        fVar14 = (float)in_stack_00000028 + unaff_s8;
        goto LAB_02bc273c;
      }
      fVar11 = (float)(int)(fVar14 + 0.5);
    }
    else if (dVar12 == unaff_d9) {
      fVar14 = (float)in_stack_00000028 + -1.0;
LAB_02bc273c:
      unaff_d13 = (ulong)(uint)fVar14;
      fVar11 = (float)in_stack_00000028;
      if (((long)in_stack_00000028 & 1U) != 0) {
        fVar11 = fVar14;
      }
    }
    else {
      fVar11 = (float)(int)(fVar14 + -0.5);
    }
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_x28) goto LAB_02bc2ac0;
    *(uint *)(unaff_x27 + unaff_x21) =
         (int)fVar10 & 0xffU | ((int)fVar18 & 0xffU) << 8 | ((int)fVar17 & 0xffU) << 0x10 |
         (int)fVar11 << 0x18;
    unaff_x27 = *(long *)(unaff_x19 + 0x1a0);
    unaff_x21 = unaff_x21 + 0x6c;
    unaff_x28 = unaff_x28 + 1;
    if (unaff_x27 == 0) goto LAB_02bc27c8;
    iVar1 = (int)*(undefined8 *)(unaff_x27 + 0x18);
    if ((long)iVar1 <= (long)unaff_x28) break;
    fVar10 = (float)FUN_02bbb550();
    fVar14 = fVar10;
    if (unaff_s8 < fVar10) {
      fVar14 = unaff_s8;
    }
    unaff_s10 = fVar14 * unaff_w29;
    if (fVar10 < 0.0) {
      unaff_s10 = unaff_s15;
    }
    param_1 = (double)unaff_s10;
    param_3 = (ulong)(uint)unaff_w29;
    param_4 = fVar16;
    unaff_d12 = uVar15;
  } while( true );
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_x27 + 0x28) = 0;
    *(float *)(unaff_x27 + 0x20) = fStack000000000000000c;
    *(float *)(unaff_x27 + 0x24) = fStack0000000000000008 - fStack0000000000000000;
    lVar7 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_02bc2ac0;
      *(undefined4 *)(lVar7 + 0x94) = 0;
      *(float *)(lVar7 + 0x8c) = fStack000000000000000c + fStack0000000000000004;
      *(float *)(lVar7 + 0x90) = fStack0000000000000008 - fStack0000000000000000;
      lVar7 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_02bc2ac0;
        *(float *)(lVar7 + 0xf8) = fStack000000000000000c + fStack0000000000000004;
        *(float *)(lVar7 + 0xfc) = fStack0000000000000008;
        *(undefined4 *)(lVar7 + 0x100) = 0;
        lVar7 = *(long *)(unaff_x19 + 0x1a0);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_02bc2ac0;
          *(float *)(lVar7 + 0x164) = fStack000000000000000c;
          *(float *)(lVar7 + 0x168) = fStack0000000000000008;
          *(undefined4 *)(lVar7 + 0x16c) = 0;
          if (*(char *)(unaff_x24 + 0x89c) == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e4d340);
            *(undefined1 *)(unaff_x24 + 0x89c) = 1;
          }
          fStack0000000000000010 = fStack0000000000000010 - **(float **)(*unaff_x25 + 0xb8);
          fStack0000000000000014 = fStack0000000000000014 - (*(float **)(*unaff_x25 + 0xb8))[1];
          if (DAT_0534bf7c <=
              fStack0000000000000010 * fStack0000000000000010 +
              fStack0000000000000014 * fStack0000000000000014) {
            if (*(long *)(unaff_x19 + 0x1a0) == 0) goto LAB_02bc27c8;
            uVar2 = *(uint *)(*(long *)(unaff_x19 + 0x1a0) + 0x18);
            if (0 < (int)uVar2) {
              uVar9 = 0;
              do {
                if (uVar2 <= uVar9) goto LAB_02bc2ac0;
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar2);
            }
          }
          if (unaff_x20 != 0) {
            FUN_0309de40();
            iVar1 = FUN_04882fc0(0);
            if ((*(long *)(unaff_x19 + 0x100) != 0) &&
               (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 != 0)) {
              uVar2 = FUN_036e1214(lVar7,0);
              if (0 < (int)uVar2) {
                lVar7 = *unaff_x26;
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar7 = *unaff_x26;
                }
                lVar8 = **(long **)(lVar7 + 0xb8);
                if (lVar8 == 0) goto LAB_02bc27c8;
                if ((int)uVar2 < *(int *)(lVar8 + 0x18)) {
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar8 = **(long **)(*unaff_x26 + 0xb8);
                    if (lVar8 == 0) goto LAB_02bc27c8;
                  }
                  if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_02bc2ac0;
                  lVar7 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                  if (lVar7 == 0) goto LAB_02bc27c8;
                  iVar1 = FUN_051d0f1c(lVar7,0);
                }
              }
              if ((*(long *)(unaff_x19 + 0x100) != 0) &&
                 (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 != 0)) {
                iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
                if (iVar3 == 0) {
                  uVar4 = 0;
                }
                else {
                  if ((*(long *)(unaff_x19 + 0x100) == 0) ||
                     (lVar7 = FUN_0366303c(*(long *)(unaff_x19 + 0x100),0), lVar7 == 0))
                  goto LAB_02bc27c8;
                  uVar4 = FUN_036e1620(lVar7,0);
                }
                if ((*(long *)(unaff_x19 + 0x1b0) != 0) &&
                   (lVar7 = FUN_051e516c(*(long *)(unaff_x19 + 0x1b0),0), lVar7 != 0)) {
                  lVar7 = FUN_051df7a8(lVar7,0);
                  lVar8 = *(long *)(unaff_x19 + 0x1a0);
                  if (lVar8 != 0) {
                    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_02bc2ac0;
                    if (lVar7 != 0) {
                      uVar15 = (ulong)*(uint *)(lVar8 + 0x24);
                      uVar5 = (ulong)*(uint *)(lVar8 + 0x28);
                      uVar13 = FUN_04f1c778(*(undefined4 *)(lVar8 + 0x20),uVar15,uVar5,lVar7,0);
                      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                        thunk_FUN_016466fc();
                      }
                      uVar13 = FUN_036df8cc(uVar13,uVar15,uVar5,uVar4,0);
                      uVar4 = FUN_02bba0b8();
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_016466fc(*unaff_x22);
                      }
                      uVar5 = FUN_051d2ac0(uVar4,0,0);
                      if ((uVar5 & 1) != 0) {
                        plVar6 = (long *)FUN_02bba0b8();
                        if (plVar6 == (long *)0x0) goto LAB_02bc27c8;
                        (**(code **)(*plVar6 + 0x288))
                                  (uVar13,(float)iVar1 - (float)uVar15,plVar6,
                                   *(undefined8 *)(*plVar6 + 0x290));
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_02bc27c8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_02bc2ac0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


