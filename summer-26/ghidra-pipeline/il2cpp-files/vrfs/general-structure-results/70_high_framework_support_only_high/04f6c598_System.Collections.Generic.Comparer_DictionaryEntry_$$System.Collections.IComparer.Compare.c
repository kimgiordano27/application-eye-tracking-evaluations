/*
FUNCTION_NAME: System.Collections.Generic.Comparer<DictionaryEntry>$$System.Collections.IComparer.Compare
ENTRY_POINT: 04f6c598
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


void System_Collections_Generic_Comparer<DictionaryEntry>__System_Collections_IComparer_Compare
               (float param_1,undefined1 param_2 [16],float param_3,float param_4)

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
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float unaff_s11;
  double unaff_d12;
  float unaff_s13;
  float unaff_s14;
  double unaff_d15;
  double in_stack_000000b8;
  
  fVar9 = unaff_s8;
  if (unaff_s11 < unaff_s8) {
    fVar9 = unaff_s11;
  }
  fVar9 = fVar9 * 255.0;
  fVar14 = 0.0;
  if (unaff_s8 < 0.0) {
    fVar9 = 0.0;
  }
  dVar12 = modf((double)fVar9,&stack0x000000b8);
  if (0.0 <= fVar9) {
    if (dVar12 == unaff_d15) {
      fVar14 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c604;
    }
    fVar9 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar12 == unaff_d12) {
    fVar14 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c604:
    fVar9 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar9 = fVar14;
    }
  }
  else {
    fVar9 = (float)(int)(fVar9 + -0.5);
  }
  if (*(uint *)(unaff_x21 + 0x18) < 3) goto LAB_04f6cae4;
  *(uint *)(unaff_x21 + 0x120) =
       (int)unaff_s14 & 0xffU | ((int)unaff_s10 & 0xffU) << 8 |
       ((int)(float)(int)(unaff_s9 + param_1) & 0xffU) << 0x10 | (int)fVar9 << 0x18;
  lVar8 = *(long *)(unaff_x19 + 0x238);
  if (lVar8 == 0) goto LAB_04f6cae0;
  fVar10 = (float)FUN_04f62080();
  fVar9 = fVar10;
  if (unaff_s11 < fVar10) {
    fVar9 = unaff_s11;
  }
  fVar9 = fVar9 * 255.0;
  if (fVar10 < 0.0) {
    fVar9 = 0.0;
  }
                    /* try { // try from 04f6c6bc to 0506c6e3 has its CatchHandler @ 04f6c850 */
  dVar12 = modf((double)fVar9,&stack0x000000b8);
  if (0.0 <= fVar9) {
    if (dVar12 == unaff_d15) {
      fVar9 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c700;
    }
    fVar10 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar12 == unaff_d12) {
    fVar9 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c700:
    fVar10 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar10 = fVar9;
    }
  }
  else {
    fVar10 = (float)(int)(fVar9 + -0.5);
  }
  fVar9 = fVar14;
  if (unaff_s11 < fVar14) {
    fVar9 = unaff_s11;
  }
  fVar9 = fVar9 * 255.0;
  if (fVar14 < 0.0) {
    fVar9 = 0.0;
  }
  dVar12 = modf((double)fVar9,&stack0x000000b8);
  if (0.0 <= fVar9) {
    if (dVar12 == unaff_d15) {
      fVar9 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c78c;
    }
    fVar14 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar12 == unaff_d12) {
    fVar9 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c78c:
    fVar14 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar14 = fVar9;
    }
  }
  else {
    fVar14 = (float)(int)(fVar9 + -0.5);
  }
  fVar9 = param_3;
  if (unaff_s11 < param_3) {
    fVar9 = unaff_s11;
  }
  fVar9 = fVar9 * 255.0;
  if (param_3 < 0.0) {
    fVar9 = 0.0;
  }
  dVar12 = modf((double)fVar9,&stack0x000000b8);
  if (0.0 <= fVar9) {
    if (dVar12 == unaff_d15) {
      fVar9 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c818;
    }
    fVar15 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar12 == unaff_d12) {
    fVar9 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c818:
    fVar15 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar15 = fVar9;
    }
  }
  else {
    fVar15 = (float)(int)(fVar9 + -0.5);
  }
  fVar9 = param_4;
  if (unaff_s11 < param_4) {
    fVar9 = unaff_s11;
  }
  fVar9 = fVar9 * 255.0;
  if (param_4 < 0.0) {
    fVar9 = 0.0;
  }
  dVar12 = modf((double)fVar9,&stack0x000000b8);
  if (0.0 <= fVar9) {
    if (dVar12 == unaff_d15) {
      fVar9 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c8a4;
    }
    fVar11 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar12 == unaff_d12) {
    fVar9 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c8a4:
    fVar11 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar11 = fVar9;
    }
  }
  else {
    fVar11 = (float)(int)(fVar9 + -0.5);
  }
  if (*(uint *)(lVar8 + 0x18) < 4) {
LAB_04f6cae4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  *(uint *)(lVar8 + 0x18c) =
       (int)fVar10 & 0xffU | ((int)fVar14 & 0xffU) << 8 | ((int)fVar15 & 0xffU) << 0x10 |
       (int)fVar11 << 0x18;
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
            uVar13 = FUN_04f1c778(*(undefined4 *)(lVar7 + 0x20),uVar4,uVar5,lVar8,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar13 = FUN_036df8cc(uVar13,uVar4,uVar5,uVar3,0);
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
                        (uVar13,(float)iVar2 - (float)uVar4,plVar6,*(undefined8 *)(*plVar6 + 0x290))
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


