/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils.<>c$$<AddBlitPass>b__20_0
ENTRY_POINT: 05ed0eb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05ed1020) */
/* WARNING: Removing unreachable block (ram,0x05ed1090) */

void UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_<>c__<AddBlitPass>b__20_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  
  puVar2 = Method_OVRResult<OVRPlugin_Result>_From__;
  unaff_x20[1] = in_stack_00000030;
  *unaff_x20 = in_stack_00000028;
  unaff_x20[3] = in_stack_00000040;
  unaff_x20[2] = in_stack_00000038;
  puVar1 = Method_System_Nullable<JsonPosition>_GetValueOrDefault__;
  uStack00000000000000d0 = in_stack_00000048;
  while (uVar5 = FUN_05232904(&stack0x000000b0,*(undefined8 *)puVar2), lVar4 = in_stack_000000c8,
        lVar3 = in_stack_000000c0, (uVar5 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0634eb94(lVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(lVar3 + 0x9b) != '\0') {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0408f55c(lVar4,*(undefined8 *)puVar1);
        FUN_05ece2d8();
      }
    }
  }
  FUN_05232a24(&stack0x000000b0,
               *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_get_Status__);
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_04e93778(*(long *)(unaff_x19 + 0x18),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_04ff1c14(*(long *)(unaff_x19 + 0x10),
                   *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


