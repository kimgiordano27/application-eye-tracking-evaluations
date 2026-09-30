/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02538c34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x02538808) */
/* WARNING: Removing unreachable block (ram,0x02538c88) */

void Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingSupported(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x23;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float in_s3;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  if (param_2 != 1) {
    FUN_012b5264(&stack0x00000100,*unaff_x23);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  FUN_012b5264(&stack0x00000100,*unaff_x23);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar7);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  uVar5 = (ulong)uVar1;
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < (int)uVar1)) {
    uVar2 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset_set_shadowCascadeOption__
                         ,uVar5);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    in_stack_000000e8 = FUN_026eabb0(*(long *)(unaff_x19 + 0x20),0);
    FUN_026eb130(&stack0x00000058,&stack0x000000e8,0);
    in_stack_000000b8 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_000000c8 = in_stack_00000070;
    in_stack_000000c0 = in_stack_00000068;
    in_stack_000000d8 = in_stack_00000080;
    in_stack_000000d0 = in_stack_00000078;
    in_stack_000000e0 = in_stack_00000088;
    uVar17 = in_stack_00000078;
    in_stack_000000b0 = uVar2;
    fVar9 = (float)FUN_026eb7f4(&stack0x000000b0,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      in_stack_000000e8 = FUN_026eabb0(*(long *)(unaff_x19 + 0x20),0);
      FUN_026eb08c(&stack0x00000058,&stack0x000000e8,0);
      in_stack_00000098 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
      in_stack_00000090 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000a8 = in_stack_00000070;
      in_stack_000000a0 = in_stack_00000068;
      uVar10 = FUN_026eb7d8(&stack0x00000090,0);
      if (0 < (int)uVar1) {
        fVar19 = fVar9;
        if (1.0 < fVar9) {
          fVar19 = 1.0;
        }
        fVar19 = fVar19 * 255.0;
        if (fVar9 < 0.0) {
          fVar19 = 0.0;
        }
        fVar11 = (float)uVar2;
        fVar9 = fVar11;
        if (1.0 < fVar11) {
          fVar9 = 1.0;
        }
        fVar13 = (float)uVar17;
        fVar20 = fVar13;
        if (1.0 < fVar13) {
          fVar20 = 1.0;
        }
        fVar9 = fVar9 * 255.0;
        fVar20 = fVar20 * 255.0;
        fVar18 = in_s3 * 255.0;
        if (fVar11 < 0.0) {
          fVar9 = 0.0;
        }
        if (fVar13 < 0.0) {
          fVar20 = 0.0;
        }
        if (in_s3 < 0.0) {
          fVar18 = 0.0;
        }
        uVar6 = 0;
        lVar7 = 0x20;
        do {
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) goto LAB_02538c14;
          dVar12 = modf((double)fVar19,(double *)&stack0x00000058);
          if (0.0 <= fVar19) {
            fVar11 = (float)(int)(fVar19 + 0.5);
            if (dVar12 == 0.5) {
              fVar11 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar13 = fVar11 + 1.0;
              goto LAB_02538918;
            }
          }
          else {
            fVar11 = (float)(int)(fVar19 + -0.5);
            if (dVar12 == -0.5) {
              fVar11 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar13 = fVar11 + -1.0;
LAB_02538918:
              if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0)
              {
                fVar11 = fVar13;
              }
            }
          }
          dVar12 = modf((double)fVar9,(double *)&stack0x00000058);
          if (0.0 <= fVar9) {
            fVar13 = (float)(int)(fVar9 + 0.5);
            if (dVar12 == 0.5) {
              fVar13 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar14 = fVar13 + 1.0;
              goto LAB_0253897c;
            }
          }
          else {
            fVar13 = (float)(int)(fVar9 + -0.5);
            if (dVar12 == -0.5) {
              fVar13 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar14 = fVar13 + -1.0;
LAB_0253897c:
              if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0)
              {
                fVar13 = fVar14;
              }
            }
          }
          dVar12 = modf((double)fVar20,(double *)&stack0x00000058);
          if (0.0 <= fVar20) {
            fVar14 = (float)(int)(fVar20 + 0.5);
            if (dVar12 == 0.5) {
              fVar14 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar15 = fVar14 + 1.0;
              goto LAB_025389e0;
            }
          }
          else {
            fVar14 = (float)(int)(fVar20 + -0.5);
            if (dVar12 == -0.5) {
              fVar14 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar15 = fVar14 + -1.0;
LAB_025389e0:
              if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0)
              {
                fVar14 = fVar15;
              }
            }
          }
          dVar12 = modf((double)fVar18,(double *)&stack0x00000058);
          if (0.0 <= fVar18) {
            fVar15 = (float)(int)(fVar18 + 0.5);
            if (dVar12 == 0.5) {
              fVar15 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar16 = fVar15 + 1.0;
              goto LAB_02538a44;
            }
          }
          else {
            fVar15 = (float)(int)(fVar18 + -0.5);
            if (dVar12 == -0.5) {
              fVar15 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
              fVar16 = fVar15 + -1.0;
LAB_02538a44:
              if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0)
              {
                fVar15 = fVar16;
              }
            }
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_02538c18;
          FUN_026ead7c(lVar8 + lVar7,
                       (int)fVar11 & 0xffU | ((int)fVar13 & 0xffU) << 8 |
                       ((int)fVar14 & 0xffU) << 0x10 | (int)fVar15 << 0x18,0);
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) goto LAB_02538c14;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_02538c18;
          FUN_026ead18(uVar10,lVar8 + lVar7,0);
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) goto LAB_02538c14;
          FUN_0132138c();
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_02538c18;
          UnityEngine_UIElements_RadioButtonGroup__RadioButtonValueChangedCallback
                    (uStack0000000000000058,uStack000000000000005c,uStack0000000000000060,
                     lVar8 + lVar7,0);
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) goto LAB_02538c14;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_02538c18;
          FUN_026eb814(0x3f800000,lVar8 + lVar7,0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x84;
        } while (uVar5 != uVar6);
      }
      uVar6 = (ulong)*(uint *)(unaff_x19 + 0x30);
      if ((int)uVar1 < (int)*(uint *)(unaff_x19 + 0x30)) {
        lVar7 = (long)(int)uVar1;
        lVar8 = lVar7 * 0x84 + 0x20;
        do {
          lVar4 = *(long *)(unaff_x19 + 0x28);
          if (lVar4 == 0) goto LAB_02538c14;
          if (*(uint *)(lVar4 + 0x18) <= (uint)lVar7) {
LAB_02538c18:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_026eb814(0xbf800000,lVar4 + lVar8,0);
          uVar6 = (ulong)*(int *)(unaff_x19 + 0x30);
          lVar7 = lVar7 + 1;
          lVar8 = lVar8 + 0x84;
        } while (lVar7 < (long)uVar6);
      }
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_017724a8(uVar5,uVar6 & 0xffffffff,0);
      if (lVar7 != 0) {
        FUN_026ea628(lVar7,uVar2,uVar10,0);
        *(uint *)(unaff_x19 + 0x30) = uVar1;
        return;
      }
    }
  }
LAB_02538c14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


