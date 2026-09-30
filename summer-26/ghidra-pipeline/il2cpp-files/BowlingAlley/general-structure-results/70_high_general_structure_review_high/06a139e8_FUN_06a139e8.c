/*
FUNCTION_NAME: FUN_06a139e8
ENTRY_POINT: 06a139e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
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

void FUN_06a139e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e2922 & 1) == 0) {
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
    DAT_076e2922 = 1;
  }
  local_38[0] = 0;
  local_40[0] = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_06bece64(uVar4,0,0);
  puVar2 = Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector2>__ctor__;
  if ((uVar3 & 1) == 0) {
    FUN_06a49394(local_38,*(undefined8 *)
                           Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Spline>_SetValue__
                 ,0);
    local_48[0] = 0;
    FUN_06a49394(local_48,*(undefined8 *)puVar2,0);
    local_40[0] = local_48[0];
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06bcaf30(*(long *)(param_1 + 0x20),0);
    FUN_06a4939c(local_40,0);
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
        local_50[0] = 0;
        FUN_06a49394(local_50,*(undefined8 *)
                               Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Tonemapper>__ctor__
                     ,0);
        local_40[0] = local_50[0];
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = *(long *)(param_1 + 0x20);
        auVar6 = FUN_06a12b74();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_03ad0190(lVar5,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b80a8);
        FUN_06a4939c(local_40,0);
        local_58[0] = 0;
        FUN_06a49394(local_58,*(undefined8 *)
                               Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>_Interp__
                     ,0);
        local_40[0] = local_58[0];
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = *(long *)(param_1 + 0x20);
        auVar6 = FUN_06a12c04();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_03acc778(lVar5,auVar6._0_8_,auVar6._8_8_,0,0,0,0,*(undefined8 *)PTR_DAT_072b8090);
        FUN_06a4939c(local_40,0);
        local_60[0] = 0;
        FUN_06a49394(local_60,*(undefined8 *)
                               Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Texture>__ctor__
                     ,0);
        local_40[0] = local_60[0];
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06bcaf70(*(long *)(param_1 + 0x20),0);
        FUN_06a4939c(local_40,0);
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
          local_68[0] = 0;
          FUN_06a49394(local_68,*(undefined8 *)
                                 Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<VignetteMode>__ctor__
                       ,0);
          local_40[0] = local_68[0];
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar5 = *(long *)(param_1 + 0x20);
          auVar6 = FUN_06a12bbc();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_03acd334(lVar5,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b8098);
          FUN_06a4939c(local_40,0);
        }
        else {
          local_70[0] = 0;
          FUN_06a49394(local_70,*(undefined8 *)
                                 Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector3>__ctor__
                       ,0);
          local_40[0] = local_70[0];
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06bcb06c(*(long *)(param_1 + 0x20),0);
          FUN_06a4939c(local_40,0);
        }
      }
    }
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06a12c4c();
    if (0 < extraout_w1_03) {
      local_78[0] = 0;
      FUN_06a49394(local_78,*(undefined8 *)
                             Method_UnityEngine_Rendering_PostProcessing_ParameterOverride<Vector4>__ctor__
                   ,0);
      local_40[0] = local_78[0];
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar5 = *(long *)(param_1 + 0x20);
      auVar6 = FUN_06a12c4c();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_03acd69c(lVar5,0,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_072b80a0);
      FUN_06a4939c(local_40,0);
    }
    lVar5 = FUN_03958adc(param_1,*(undefined8 *)PTR_DAT_0727c808);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_06be9890(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06bc69b8(lVar5,*(undefined8 *)(param_1 + 0x20),0);
    }
    lVar5 = FUN_03958adc(param_1,*(undefined8 *)PTR_DAT_072b7128);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_06be9890(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06c42c80(lVar5,*(undefined8 *)(param_1 + 0x20),0);
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_06a4939c(local_38,0);
  }
  return;
}


