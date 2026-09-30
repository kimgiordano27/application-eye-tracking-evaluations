/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.PriorityHeap.LessOrEqual<object>$$BeginInvoke
ENTRY_POINT: 0227b7e4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Rendering_Universal_LibTessDotNet_PriorityHeap_LessOrEqual<object>__BeginInvoke
               (void)

{
  undefined8 uVar1;
  Il2CppClass *pIVar2;
  undefined8 *puVar3;
  long unaff_x29;
  
  *(ExceptionSupportStack<Il2CppObject*,1> **)(unaff_x29 + -0x1c0) =
       (ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x70);
  uVar1 = il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::top
                    ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x70));
  puVar3 = *(undefined8 **)(unaff_x29 + -0xf0);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
  *puVar3 = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x29 + -0xd8) = *puVar3;
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  uVar1 = il2cpp_codegen_object_new(pIVar2);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar1;
  *(undefined8 *)(unaff_x29 + -0x1c8) = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRPlugin_PinnedArray<Guid>__ctor__);
  InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668
            (*(undefined8 *)(unaff_x29 + -0x1c8),uVar1,*(undefined8 *)(unaff_x29 + -0xd8),0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            (*(ExceptionSupportStack<Il2CppObject*,1> **)(unaff_x29 + -0x1c0));
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception
            (*(Exception_t **)(unaff_x29 + -0xe0),
             *(MethodInfo **)(*(long *)(unaff_x29 + -0xf0) + 0x28));
}


