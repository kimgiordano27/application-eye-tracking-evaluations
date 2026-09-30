/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetRightMetaAimHandStatus
ENTRY_POINT: 06a13a00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_16;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06a13e6c) */
/* WARNING: Removing unreachable block (ram,0x06a13fa0) */
/* WARNING: Removing unreachable block (ram,0x06a13fb0) */
/* WARNING: Removing unreachable block (ram,0x06a13f80) */
/* WARNING: Removing unreachable block (ram,0x06a13c10) */
/* WARNING: Removing unreachable block (ram,0x06a13b68) */
/* WARNING: Removing unreachable block (ram,0x06a13f68) */
/* WARNING: Removing unreachable block (ram,0x06a13ca0) */
/* WARNING: Removing unreachable block (ram,0x06a13f58) */
/* WARNING: Removing unreachable block (ram,0x06a13f3c) */
/* WARNING: Removing unreachable block (ram,0x06a13cf8) */
/* WARNING: Removing unreachable block (ram,0x06a13f8c) */

void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetRightMetaAimHandStatus
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long unaff_x23;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined1 in_stack_00000018;
  undefined1 in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined1 in_stack_00000048;
  
  plVar5 = *(long **)(unaff_x23 + 0x4f0);
  if ((*(byte *)(unaff_x20 + 0x922) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b7128);
    thunk_FUN_032e1da0(PTR_DAT_0727c808);
    thunk_FUN_032e1da0(PTR_DAT_072b8090);
    thunk_FUN_032e1da0(PTR_DAT_072b8098);
    thunk_FUN_032e1da0(PTR_DAT_072b80a0);
    thunk_FUN_032e1da0(PTR_DAT_072b80a8);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Spline>_SetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>_Interp__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Tonemapper>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector2>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector3>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector4>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<VignetteMode>__ctor__
                      );
    *(undefined1 *)(unaff_x20 + 0x922) = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06bece64(uVar3,0,0);
  puVar1 = Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector2>__ctor__;
  if ((uVar2 & 1) == 0) {
    FUN_06a49394(&stack0x00000048,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Spline>_SetValue__,0
                );
    in_stack_00000038 = 0;
    FUN_06a49394(&stack0x00000038,*(undefined8 *)puVar1,0);
    in_stack_00000040 = in_stack_00000038;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06bcaf30(*(long *)(param_1 + 0x20),0);
    FUN_06a4939c(&stack0x00000040,0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a12b74();
    if (0 < extraout_w1) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06a12c04();
      if (0 < extraout_w1_00) {
        in_stack_00000030 = 0;
        FUN_06a49394(&stack0x00000030,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Tonemapper>__ctor__
                     ,0);
        in_stack_00000040 = in_stack_00000030;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar4 = *(long *)(param_1 + 0x20);
        auVar6 = FUN_06a12b74();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_03ad0190(lVar4,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b80a8);
        FUN_06a4939c(&stack0x00000040,0);
        in_stack_00000028 = 0;
        FUN_06a49394(&stack0x00000028,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>_Interp__
                     ,0);
        in_stack_00000040 = in_stack_00000028;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar4 = *(long *)(param_1 + 0x20);
        auVar6 = FUN_06a12c04();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_03acc778(lVar4,auVar6._0_8_,auVar6._8_8_,0,0,0,0,*(undefined8 *)PTR_DAT_072b8090);
        FUN_06a4939c(&stack0x00000040,0);
        in_stack_00000020 = 0;
        FUN_06a49394(&stack0x00000020,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>__ctor__
                     ,0);
        in_stack_00000040 = in_stack_00000020;
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06bcaf70(*(long *)(param_1 + 0x20),0);
        FUN_06a4939c(&stack0x00000040,0);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06a12bbc();
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06a12b74();
        if (extraout_w1_01 == extraout_w1_02) {
          in_stack_00000018 = 0;
          FUN_06a49394(&stack0x00000018,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<VignetteMode>__ctor__
                       ,0);
          in_stack_00000040 = in_stack_00000018;
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar4 = *(long *)(param_1 + 0x20);
          auVar6 = FUN_06a12bbc();
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_03acd334(lVar4,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b8098);
          FUN_06a4939c(&stack0x00000040,0);
        }
        else {
          in_stack_00000010 = 0;
          FUN_06a49394(&stack0x00000010,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector3>__ctor__
                       ,0);
          in_stack_00000040 = in_stack_00000010;
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06bcb06c(*(long *)(param_1 + 0x20),0);
          FUN_06a4939c(&stack0x00000040,0);
        }
      }
    }
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a12c4c();
    if (0 < extraout_w1_03) {
      in_stack_00000008 = 0;
      FUN_06a49394(&stack0x00000008,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector4>__ctor__,0
                  );
      in_stack_00000040 = in_stack_00000008;
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = *(long *)(param_1 + 0x20);
      auVar6 = FUN_06a12c4c();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_03acd69c(lVar4,0,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b80a0);
      FUN_06a4939c(&stack0x00000040,0);
    }
    lVar4 = FUN_03958adc(param_1,*(undefined8 *)PTR_DAT_0727c808);
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06be9890(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06bc69b8(lVar4,*(undefined8 *)(param_1 + 0x20),0);
    }
    lVar4 = FUN_03958adc(param_1,*(undefined8 *)PTR_DAT_072b7128);
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06be9890(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06c42c80(lVar4,*(undefined8 *)(param_1 + 0x20),0);
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_06a4939c(&stack0x00000048,0);
  }
  return;
}


