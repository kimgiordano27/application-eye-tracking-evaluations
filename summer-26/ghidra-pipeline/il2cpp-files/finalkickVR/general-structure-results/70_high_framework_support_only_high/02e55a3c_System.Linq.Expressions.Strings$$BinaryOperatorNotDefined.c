/*
FUNCTION_NAME: System.Linq.Expressions.Strings$$BinaryOperatorNotDefined
ENTRY_POINT: 02e55a3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Linq_Expressions_Strings__BinaryOperatorNotDefined(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 *in_stack_00000010;
  
  uStack0000000000000008 = 0;
  uVar1 = OVRRuntimeController_UpdateControllerModel_mEAE1CDE7A068662E65647C9E50C161D55086AA9A
                    (*(undefined8 *)(unaff_x29 + -8));
  MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812
            (*(undefined8 *)(unaff_x29 + -8),uVar1,uStack0000000000000008);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_781);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar1,0);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_782,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar1,0);
  return;
}


