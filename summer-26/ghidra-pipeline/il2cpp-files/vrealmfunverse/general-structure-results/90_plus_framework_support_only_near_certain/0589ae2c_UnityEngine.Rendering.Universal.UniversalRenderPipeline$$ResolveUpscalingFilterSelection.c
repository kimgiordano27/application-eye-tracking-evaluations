/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline$$ResolveUpscalingFilterSelection
ENTRY_POINT: 0589ae2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Rendering_Universal_UniversalRenderPipeline__ResolveUpscalingFilterSelection(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000060;
  ulong in_stack_00000068;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_System_Nullable<InputDeviceMatcher>_get_HasValue__);
  FUN_02b3c81c(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
  FUN_02b3c81c(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
  FUN_02b3c81c(Method_System_Nullable<InputDeviceMatcher>_get_Value__);
  FUN_02b3c81c(PTR_DAT_06320cb0);
  *(undefined1 *)(unaff_x22 + 0x142) = 1;
  lVar9 = *(long *)(unaff_x19 + 0x50);
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000060 = 0;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar7 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
    puVar6 = Method_System_Nullable<Vector2>_GetValueOrDefault__;
    puVar5 = Method_System_Nullable<Vector2>__ctor__;
    puVar4 = Method_System_Nullable<InputDeviceMatcher>__ctor__;
    puVar3 = Method_System_Nullable<InputControlScheme>_get_Value__;
    puVar2 = PTR_DAT_06320cb0;
    if (unaff_x21 != 0) {
      FUN_038145fc(&stack0x00000030);
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000048;
      _iStack0000000000000060 = in_stack_00000040;
      while( true ) {
        do {
          while( true ) {
            uVar8 = FUN_04738328(&stack0x00000050,*(undefined8 *)puVar4);
            if ((uVar8 & 1) == 0) {
              FUN_04738324(&stack0x00000050,*(undefined8 *)puVar3);
              if ((unaff_x20 & 1) != 0) {
                uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05cc9df8(&stack0x00000078,uVar12,0);
              }
              return;
            }
            uVar8 = in_stack_00000068 & 0xffffffff;
            if (iStack0000000000000060 != 1) break;
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(0,uVar8);
            }
            lVar9 = FUN_0463e17c(*(long *)(unaff_x19 + 0x20),uVar8,*(undefined8 *)puVar5);
            *(undefined1 *)(lVar9 + 0x18) = 1;
          }
        } while (iStack0000000000000060 != 0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4(0,uVar8);
        }
        lVar9 = FUN_0463f048(*(long *)(unaff_x19 + 0x18),uVar8,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05cc95ac(&stack0x00000030,&stack0x00000078,lVar9,0);
        *(undefined8 *)(lVar9 + 0x138) = in_stack_00000038;
        *(undefined8 *)(lVar9 + 0x130) = in_stack_00000030;
        *(undefined8 *)(lVar9 + 0x140) = in_stack_00000040;
        lVar9 = *(long *)(unaff_x19 + 0x50);
        if (lVar9 == 0) break;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar7;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000038;
          *(undefined8 *)(lVar10 + 0x20) = in_stack_00000030;
          *(undefined8 *)(lVar10 + 0x30) = in_stack_00000040;
        }
        else {
          FUN_03810e84(lVar9,&stack0x00000030,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


