/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils.BlitMaterialParameters$$.ctor
ENTRY_POINT: 05ed0b34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 236
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05ed0e94) */
/* WARNING: Removing unreachable block (ram,0x05ed0e98) */
/* WARNING: Removing unreachable block (ram,0x05ed1020) */

void UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x940));
  FUN_02d965b8(Method_System_Nullable<ExpressionKind>_GetValueOrDefault__);
  FUN_02d965b8(Method_OVRResult<OVRColocationSession_Result>_get_Status__);
  FUN_02d965b8(Method_System_Nullable<FloatFormatHandling>__ctor__);
  FUN_02d965b8(
              Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
              );
  FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_From__);
  FUN_02d965b8(Method_System_Nullable<FloatFormatHandling>_get_HasValue__);
  FUN_02d965b8(
              Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
              );
  FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_get_Status__);
  FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_get_Success__);
  FUN_02d965b8(Method_System_Nullable<FloatParseHandling>_get_HasValue__);
  FUN_02d965b8(Method_System_Nullable<Formatting>__ctor__);
  FUN_02d965b8(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
  FUN_02d965b8(Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
  FUN_02d965b8(Method_System_Nullable<JsonPosition>_GetValueOrDefault__);
  FUN_02d965b8(PTR_DAT_069fb990);
  *(undefined1 *)(unaff_x21 + 0xeb1) = 1;
  lVar9 = *(long *)(unaff_x19 + 0x50);
  in_stack_000000d0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  unaff_x20[1] = 0;
  *unaff_x20 = 0;
  unaff_x20[3] = 0;
  unaff_x20[2] = 0;
  puVar1 = PTR_DAT_069fb990;
  in_stack_00000088 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000058 = 0;
  if (lVar9 == 0) goto LAB_05ed108c;
  if ((*(char *)(lVar9 + 0x30) == '\0') || (uVar10 = FUN_05e62820(lVar9,0), (uVar10 & 1) != 0)) {
    puVar6 = Method_System_Nullable<FloatFormatHandling>__ctor__;
    puVar5 = Method_System_Nullable<ExpressionKind>_GetValueOrDefault__;
    puVar4 = Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__;
    puVar3 = 
    Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__;
    puVar2 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__;
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05ed108c;
    FUN_04ff1ec4(&stack0x00000028,*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
    in_stack_00000088 = in_stack_00000030;
    in_stack_00000080 = in_stack_00000028;
    in_stack_00000098 = in_stack_00000040;
    in_stack_00000090 = in_stack_00000038;
    in_stack_000000a0 = in_stack_00000048;
    while (uVar10 = FUN_0525c4dc(&stack0x00000080,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04010c90(&stack0x00000028,in_stack_00000098,*(undefined8 *)puVar4);
      in_stack_00000060 = in_stack_00000028;
      in_stack_00000028 = 0;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000070 = in_stack_00000038;
      in_stack_00000030 = &stack0x00000060;
      while (uVar10 = FUN_05156804(&stack0x00000060,*(undefined8 *)puVar3),
            lVar9 = in_stack_00000070, (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_0634eb94(lVar9,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(char *)(lVar9 + 0x9b) != '\0') {
            FUN_05ece098();
          }
        }
      }
      FUN_05156800(in_stack_00000030,*(undefined8 *)puVar2);
      if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
    }
    FUN_0525c5fc(&stack0x00000080,*(undefined8 *)puVar5);
  }
  else {
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_05ed108c;
    FUN_04e93a24(&stack0x00000028,*(long *)(unaff_x19 + 0x18),
                 *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_From__);
    puVar3 = Method_OVRResult<OVRPlugin_Result>_From__;
    unaff_x20[1] = (long)in_stack_00000030;
    *unaff_x20 = in_stack_00000028;
    unaff_x20[3] = in_stack_00000040;
    unaff_x20[2] = in_stack_00000038;
    puVar2 = Method_System_Nullable<JsonPosition>_GetValueOrDefault__;
    in_stack_000000d0 = in_stack_00000048;
    in_stack_00000030 = (undefined8 *)&stack0x000000b0;
    in_stack_00000028 = 0;
    while (uVar10 = FUN_05232904(&stack0x000000b0,*(undefined8 *)puVar3), lVar8 = in_stack_000000c8,
          lVar7 = in_stack_000000c0, lVar9 = in_stack_00000028, (uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0634eb94(lVar7,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar7 + 0x9b) != '\0') {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0408f55c(lVar8,*(undefined8 *)puVar2);
          FUN_05ece2d8();
        }
      }
    }
    FUN_05232a24(in_stack_00000030,
                 *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar9);
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_05ed108c;
    FUN_04e93778(*(long *)(unaff_x19 + 0x18),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_04ff1c14(*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
    return;
  }
LAB_05ed108c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


