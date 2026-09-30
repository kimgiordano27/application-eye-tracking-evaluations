/*
FUNCTION_NAME: System.Collections.Generic.Comparer<DictionaryEntry>$$CreateComparer
ENTRY_POINT: 04f6c170
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Comparer<DictionaryEntry>__CreateComparer
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  long *unaff_x23;
  int unaff_w24;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s10;
  float fVar18;
  float unaff_s11;
  double unaff_d12;
  float unaff_s13;
  float unaff_s14;
  double unaff_d15;
  double in_stack_000000b8;
  
  fVar15 = param_3;
  fVar10 = param_4;
  dVar11 = modf((double)unaff_s14,&stack0x000000b8);
  if (0.0 <= unaff_s14) {
    if (dVar11 == unaff_d15) {
      fVar13 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c1c0;
    }
    fVar9 = (float)(int)(unaff_s14 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar13 = (float)in_stack_000000b8 + unaff_s13;
                    /* try { // try from 04f6c1a4 to 0506c207 has its CatchHandler @ 04f6c2fc */
LAB_04f6c1c0:
    fVar9 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar9 = fVar13;
    }
  }
  else {
    fVar9 = (float)(int)(unaff_s14 + -0.5);
  }
  fVar13 = unaff_s10;
  if (unaff_s11 < unaff_s10) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
  if (unaff_s10 < 0.0) {
    fVar13 = 0.0;
  }
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
      fVar13 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c24c;
    }
    fVar18 = (float)(int)(fVar13 + 0.5);
  }
  else {
                    /* try { // try from 04f6c218 to 0506c21f has its CatchHandler @ 04f6c2f4 */
    if (dVar11 == unaff_d12) {
      fVar13 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c24c:
      fVar18 = (float)in_stack_000000b8;
      if (((long)in_stack_000000b8 & 1U) != 0) {
        fVar18 = fVar13;
      }
    }
    else {
      fVar18 = (float)(int)(fVar13 + -0.5);
    }
  }
  fVar13 = param_3;
  if (unaff_s11 < param_3) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
  if (param_3 < 0.0) {
    fVar13 = 0.0;
  }
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
      fVar13 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c2d8;
    }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c218 with catch @ 04f6c2f4
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c164 with catch @ 04f6c2f8
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c1a4 with catch @ 04f6c2fc
                        */
    fVar17 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar13 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c2d8:
    fVar17 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar17 = fVar13;
    }
  }
  else {
                    /* try { // try from 04f6c2e4 to 0506c2e7 has its CatchHandler @ 04f6c2f0 */
                    /* try { // try from 04f6c2e8 to 0506c313 has its CatchHandler @ 04f6c060 */
    fVar17 = (float)(int)(fVar13 + -0.5);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c2e4 with catch @ 04f6c2f0
                        */
  }
  fVar13 = param_4;
  if (unaff_s11 < param_4) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
                    /* try { // try from 04f6c314 to 0506c317 has its CatchHandler @ 04f6c390 */
  fVar14 = 0.0;
  if (param_4 < 0.0) {
    fVar13 = 0.0;
  }
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
                    /* try { // try from 04f6c354 to 0506c37b has its CatchHandler @ 04f6c39c */
      fVar14 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c364;
    }
                    /* try { // try from 04f6c388 to 0506c38f has its CatchHandler @ 04f6c39c */
    fVar13 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar14 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c364:
    fVar13 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar13 = fVar14;
    }
  }
  else {
    fVar13 = (float)(int)(fVar13 + -0.5);
                    /* try { // try from 04f6c37c to 0506c387 has its CatchHandler @ 04f6c060 */
  }
                    /* catch() { ... } // from try @ 04f6c314 with catch @ 04f6c390 */
  if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_04f6cae4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f6c354 with catch @ 04f6c39c
                       catch(type#2 @ 00000000) { ... } // from try @ 04f6c388 with catch @ 04f6c39c
                        */
  *(uint *)(unaff_x21 + 0xb4) =
       (int)fVar9 & 0xffU | ((int)fVar18 & 0xffU) << 8 | ((int)fVar17 & 0xffU) << 0x10 |
       (int)fVar13 << 0x18;
  lVar8 = *(long *)(unaff_x19 + 0x238);
  if (lVar8 == 0) goto LAB_04f6cae0;
  fVar9 = (float)FUN_04f62080();
  fVar13 = fVar9;
  if (unaff_s11 < fVar9) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
  if (fVar9 < 0.0) {
    fVar13 = 0.0;
  }
  fVar9 = fVar15;
  fVar18 = fVar10;
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
      fVar13 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c460;
    }
    fVar17 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar13 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c460:
    fVar17 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar17 = fVar13;
    }
  }
  else {
    fVar17 = (float)(int)(fVar13 + -0.5);
  }
  fVar13 = fVar14;
  if (unaff_s11 < fVar14) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
  if (fVar14 < 0.0) {
    fVar13 = 0.0;
  }
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
      fVar13 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c4ec;
    }
    fVar14 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar13 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c4ec:
    fVar14 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar14 = fVar13;
    }
  }
  else {
    fVar14 = (float)(int)(fVar13 + -0.5);
  }
  fVar13 = fVar15;
  if (unaff_s11 < fVar15) {
    fVar13 = unaff_s11;
  }
  fVar13 = fVar13 * 255.0;
  if (fVar15 < 0.0) {
    fVar13 = 0.0;
  }
  dVar11 = modf((double)fVar13,&stack0x000000b8);
  if (0.0 <= fVar13) {
    if (dVar11 == unaff_d15) {
      fVar15 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c578;
    }
    fVar13 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar15 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c578:
    fVar13 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar13 = fVar15;
    }
  }
  else {
                    /* try { // try from 04f6c584 to 0506c6bb has its CatchHandler @ 04f6c584
                       catch() { ... } // from try @ 04f6c584 with catch @ 04f6c584
                       catch() { ... } // from try @ 04f6c778 with catch @ 04f6c584
                       catch() { ... } // from try @ 04f6c840 with catch @ 04f6c584
                       catch() { ... } // from try @ 04f6c8d4 with catch @ 04f6c584 */
    fVar13 = (float)(int)(fVar13 + -0.5);
  }
  fVar15 = fVar10;
  if (unaff_s11 < fVar10) {
    fVar15 = unaff_s11;
  }
  fVar15 = fVar15 * 255.0;
  fVar16 = 0.0;
  if (fVar10 < 0.0) {
    fVar15 = 0.0;
  }
  dVar11 = modf((double)fVar15,&stack0x000000b8);
  if (0.0 <= fVar15) {
    if (dVar11 == unaff_d15) {
      fVar16 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c604;
    }
    fVar15 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar16 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c604:
    fVar15 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar15 = fVar16;
    }
  }
  else {
    fVar15 = (float)(int)(fVar15 + -0.5);
  }
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_04f6cae4;
  *(uint *)(lVar8 + 0x120) =
       (int)fVar17 & 0xffU | ((int)fVar14 & 0xffU) << 8 | ((int)fVar13 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  lVar8 = *(long *)(unaff_x19 + 0x238);
  if (lVar8 == 0) goto LAB_04f6cae0;
  fVar10 = (float)FUN_04f62080();
  fVar15 = fVar10;
  if (unaff_s11 < fVar10) {
    fVar15 = unaff_s11;
  }
  fVar15 = fVar15 * 255.0;
  if (fVar10 < 0.0) {
    fVar15 = 0.0;
  }
  dVar11 = modf((double)fVar15,&stack0x000000b8);
  if (0.0 <= fVar15) {
    if (dVar11 == unaff_d15) {
      fVar15 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c700;
    }
    fVar10 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar15 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c700:
    fVar10 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar10 = fVar15;
    }
  }
  else {
    fVar10 = (float)(int)(fVar15 + -0.5);
  }
  fVar15 = fVar16;
  if (unaff_s11 < fVar16) {
    fVar15 = unaff_s11;
  }
  fVar15 = fVar15 * 255.0;
  if (fVar16 < 0.0) {
    fVar15 = 0.0;
  }
  dVar11 = modf((double)fVar15,&stack0x000000b8);
  if (0.0 <= fVar15) {
    if (dVar11 == unaff_d15) {
      fVar15 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c78c;
    }
    fVar13 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar15 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c78c:
    fVar13 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar13 = fVar15;
    }
  }
  else {
    fVar13 = (float)(int)(fVar15 + -0.5);
  }
  fVar15 = fVar9;
  if (unaff_s11 < fVar9) {
    fVar15 = unaff_s11;
  }
  fVar15 = fVar15 * 255.0;
  if (fVar9 < 0.0) {
    fVar15 = 0.0;
  }
  dVar11 = modf((double)fVar15,&stack0x000000b8);
  if (0.0 <= fVar15) {
    if (dVar11 == unaff_d15) {
      fVar15 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c818;
    }
    fVar9 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar15 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c818:
    fVar9 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar9 = fVar15;
    }
  }
  else {
    fVar9 = (float)(int)(fVar15 + -0.5);
  }
  fVar15 = fVar18;
  if (unaff_s11 < fVar18) {
    fVar15 = unaff_s11;
  }
  fVar15 = fVar15 * 255.0;
  if (fVar18 < 0.0) {
    fVar15 = 0.0;
  }
  dVar11 = modf((double)fVar15,&stack0x000000b8);
  if (0.0 <= fVar15) {
    if (dVar11 == unaff_d15) {
      fVar15 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c8a4;
    }
    fVar18 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar15 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c8a4:
    fVar18 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar18 = fVar15;
    }
  }
  else {
    fVar18 = (float)(int)(fVar15 + -0.5);
  }
  if (*(uint *)(lVar8 + 0x18) < 4) {
LAB_04f6cae4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  *(uint *)(lVar8 + 0x18c) =
       (int)fVar10 & 0xffU | ((int)fVar13 & 0xffU) << 8 | ((int)fVar9 & 0xffU) << 0x10 |
       (int)fVar18 << 0x18;
  if (unaff_x20 != 0) {
    FUN_0309de40();
    if ((*(char *)(unaff_x19 + 0x2a2) == '\0') && (unaff_w24 == *(int *)(unaff_x19 + 0x2a4))) {
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x2a2) = 0;
    *(int *)(unaff_x19 + 0x2a4) = unaff_w24;
    if ((*(long *)(unaff_x19 + 0x120) != 0) &&
       (lVar8 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar8 != 0)) {
      iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar8,0);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x120) == 0) ||
           (lVar8 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar8 == 0)) goto LAB_04f6cae0;
        uVar3 = FUN_036e1620(lVar8,0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x23);
        }
        uVar4 = FUN_051d94d4(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_051d85ec(0);
        }
      }
      if ((*(long *)(unaff_x19 + 0x240) != 0) &&
         (lVar8 = FUN_051e516c(*(long *)(unaff_x19 + 0x240),0), lVar8 != 0)) {
        lVar8 = FUN_051df7a8(lVar8,0);
        puVar1 = PTR_DAT_06e492b0;
        lVar7 = *(long *)(unaff_x19 + 0x238);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_04f6cae4;
          if (lVar8 != 0) {
            uVar4 = (ulong)*(uint *)(lVar7 + 0x24);
            uVar5 = (ulong)*(uint *)(lVar7 + 0x28);
            uVar12 = FUN_04f1c778(*(undefined4 *)(lVar7 + 0x20),uVar4,uVar5,lVar8,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar12 = FUN_036df8cc(uVar12,uVar4,uVar5,uVar3,0);
            iVar2 = FUN_04882fc0(0);
            uVar3 = FUN_04f609b4();
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x23);
            }
            uVar5 = FUN_051d2ac0(uVar3,0,0);
            if ((uVar5 & 1) != 0) {
              plVar6 = (long *)FUN_04f609b4();
              if (plVar6 == (long *)0x0) goto LAB_04f6cae0;
              (**(code **)(*plVar6 + 0x288))
                        (uVar12,(float)iVar2 - (float)uVar4,plVar6,*(undefined8 *)(*plVar6 + 0x290))
              ;
            }
            return;
          }
        }
      }
    }
  }
LAB_04f6cae0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


