/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass.<>c$$<RenderDoFGaussian>b__136_0
ENTRY_POINT: 05a3c5bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderDoFGaussian>b__136_0
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long unaff_x19;
  uint uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar11;
  long unaff_x25;
  long *plVar12;
  undefined8 unaff_x26;
  float fVar13;
  double dVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 uStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000350;
  undefined4 in_stack_00000354;
  undefined4 in_stack_00000358;
  undefined4 in_stack_0000035c;
  undefined4 in_stack_00000364;
  undefined4 in_stack_00000368;
  undefined4 in_stack_0000036c;
  undefined4 in_stack_00000370;
  undefined4 in_stack_00000374;
  float in_stack_00000378;
  undefined4 in_stack_0000037c;
  float in_stack_00000380;
  float in_stack_00000384;
  float in_stack_00000388;
  undefined4 in_stack_0000038c;
  undefined4 in_stack_00000390;
  float in_stack_00000394;
  float in_stack_00000398;
  undefined4 in_stack_0000039c;
  undefined8 in_stack_000003a0;
  byte in_stack_000003a8;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                );
    *(undefined1 *)(unaff_x25 + 0x216) = 1;
  }
  fVar13 = powf(unaff_s8,0.25);
  if (unaff_x19 != 0) {
    FUN_06090bec(0,0,param_2,param_3);
    if ((in_stack_000003a8 & 1) != 0) {
      FUN_06091440(0,0,0,0x3f800000);
    }
    puVar8 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
    ;
    puVar7 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
    ;
    puVar6 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
    ;
    puVar4 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puVar5 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__;
    fVar16 = (float)param_3;
    if (param_4 != 0) {
      fStack0000000000000024 = in_stack_00000388 / 90.0;
      fVar15 = (float)param_2;
      fStack000000000000002c = 1.0 / in_stack_00000398;
      fStack000000000000001c = fVar15 * DAT_01208594 * in_stack_00000384 * 10.0;
      uStack0000000000000014 = in_stack_0000036c;
      uStack0000000000000034 = in_stack_0000037c;
      uStack000000000000003c = in_stack_00000390;
      uStack0000000000000054 = unaff_s13;
      uStack0000000000000064 = unaff_s11;
      FUN_06038110(param_4,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                   ,0);
      FUN_06038110(param_4,*(undefined8 *)puVar6,0);
      uStack000000000000007c = FUN_06038110(param_4,*(undefined8 *)puVar4,0);
      uVar9 = FUN_06038110(param_4,*(undefined8 *)puVar8,0);
      FUN_06038110(param_4,*(undefined8 *)puVar7,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar5);
      }
      plVar12 = (long *)PTR_DAT_06767d28;
      FUN_06088f24(&stack0x00000280);
      FUN_0609adc4();
      FUN_06088f24(&stack0x00000280,unaff_x21,0);
      FUN_0609adc4();
      FUN_06091af8(in_stack_00000350,in_stack_00000354,in_stack_00000358,in_stack_0000035c);
      FUN_06091af8(fVar13,in_stack_00000364,in_stack_00000368,uStack0000000000000014);
      FUN_06091af8(in_stack_00000370,in_stack_00000374,in_stack_00000378 / 20.0,
                   uStack0000000000000034);
      FUN_06091af8(in_stack_00000380,fStack000000000000001c,fStack0000000000000024,in_stack_0000038c
                  );
      FUN_06091af8(uStack000000000000003c,(fVar15 / fVar16) * (1.0 / in_stack_00000394),
                   fStack000000000000002c,in_stack_0000039c);
      UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_10
                (unaff_s14,uStack0000000000000054,unaff_s12,uStack0000000000000064);
      if (0.0 < in_stack_00000380) {
        FUN_06088f24(&stack0x000001f8);
        if (*(int *)(*plVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05a5bb74();
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
            == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05a56870();
        if (fVar16 <= fVar15) {
          fVar16 = fVar15;
        }
        if (DAT_06b81263 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b81263 = '\x01';
        }
        puVar4 = PTR_DAT_0675e6d8;
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        dVar14 = (double)FUN_05007ed4((double)fVar16,0x4000000000000000,0);
        if (DAT_06b72bd9 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72bd9 = '\x01';
        }
        uStack0000000000000064 = uVar9;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = 0;
        iVar11 = -0x80000000;
        if ((float)(int)dVar14 != INFINITY) {
          iVar11 = (int)dVar14;
        }
        do {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar1 = uVar10 & 1;
          FUN_06091988();
          uVar2 = unaff_x22;
          uVar3 = unaff_x23;
          if (uVar1 != 0) {
            uVar2 = unaff_x23;
            uVar3 = unaff_x22;
          }
          FUN_06088f24(&stack0x00000280,uVar3,0);
          FUN_0609adc4();
          FUN_06088f24(&stack0x000001f8,uVar2,0);
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a5bb74();
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
              == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a56870();
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar11);
        iVar11 = 0;
        do {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_06091988();
          uVar2 = unaff_x22;
          uVar3 = unaff_x23;
          if (((uVar10 & 1) + iVar11 & 1) != 0) {
            uVar2 = unaff_x23;
            uVar3 = unaff_x22;
          }
          FUN_06088f24(&stack0x00000280,uVar3,0);
          FUN_0609adc4();
          FUN_06088f24(&stack0x000001f8,uVar2,0);
          plVar12 = (long *)PTR_DAT_06767d28;
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a5bb74();
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
              == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a56870();
          iVar11 = iVar11 + 1;
        } while (((uVar10 & 1) - (uVar1 ^ 3)) + iVar11 != 0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06088f24(&stack0x00000280,uVar2,0);
        FUN_0609adc4();
      }
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a57de4();
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) ==
          0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a56870();
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a4812c(&stack0x00000280,in_stack_000003a0,0);
      FUN_0609adc4();
      FUN_06088f24(&stack0x00000280,unaff_x26,0);
      FUN_05a5bb74();
      FUN_05a56870();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


