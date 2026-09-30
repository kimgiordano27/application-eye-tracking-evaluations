/*
FUNCTION_NAME: System.Linq.Expressions.Strings$$UnaryOperatorNotDefined
ENTRY_POINT: 02e55918
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Linq_Expressions_Strings__UnaryOperatorNotDefined(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  ulong *in_stack_00000018;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xa28));
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
  OVRRuntimeController_Start_m409EC529686C3A57F3AADF4BB56E36789BA7F3E8::s_Il2CppMethodInitialized =
       1;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20);
  if (*(int *)(unaff_x29 + -0x14) == 1) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined8 *)(unaff_x29 + -0x20) = *puVar2;
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40) = *(undefined8 *)(unaff_x29 + -0x20);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -8) + 0x40),*(void **)(unaff_x29 + -0x20));
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x24) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20);
    if (*(int *)(unaff_x29 + -0x24) == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar3 + 8);
      *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40) = *(undefined8 *)(unaff_x29 + -0x30);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -8) + 0x40),*(void **)(unaff_x29 + -0x30));
    }
  }
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40);
  bVar1 = OVRRuntimeController_IsModelSupported_m7C7DCC822D4289955E679DA53DE682601CD27353
                    (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x38),0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  *(byte *)(*(long *)(unaff_x29 + -8) + 0x48) = *(byte *)(unaff_x29 + -0x39) & 1;
  *(byte *)(unaff_x29 + -0x3a) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x48) & 1;
  if ((*(byte *)(unaff_x29 + -0x3a) & 1) != 0) {
    uVar4 = OVRRuntimeController_UpdateControllerModel_mEAE1CDE7A068662E65647C9E50C161D55086AA9A
                      (*(undefined8 *)(unaff_x29 + -8));
    MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812
              (*(undefined8 *)(unaff_x29 + -8),uVar4,0);
  }
  uVar4 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar4,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_781);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar4,0);
  uVar4 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar4,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_782,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar4,0);
  return;
}


