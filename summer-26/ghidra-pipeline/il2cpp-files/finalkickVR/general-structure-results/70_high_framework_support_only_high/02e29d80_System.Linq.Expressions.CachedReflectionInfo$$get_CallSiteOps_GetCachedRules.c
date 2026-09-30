/*
FUNCTION_NAME: System.Linq.Expressions.CachedReflectionInfo$$get_CallSiteOps_GetCachedRules
ENTRY_POINT: 02e29d80
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_Linq_Expressions_CachedReflectionInfo__get_CallSiteOps_GetCachedRules(void)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000050;
  
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(in_stack_00000050,in_w8 & 1);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_455,
             in_stack_00000010);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B
            (uVar1,in_stack_00000010);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_456,
             in_stack_00000010);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar1,in_stack_00000010);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x90) = 1;
  return;
}


