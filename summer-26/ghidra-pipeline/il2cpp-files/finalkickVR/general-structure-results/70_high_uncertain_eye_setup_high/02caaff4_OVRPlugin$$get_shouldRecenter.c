/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 02caaff4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_shouldRecenter(ulong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  long unaff_x29;
  ulong *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined4 uStack000000000000001c;
  byte bStack000000000000002f;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__31_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__8_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__);
    OVRLipSyncContextMorphTarget_Start_m00BCB9D9C90145E2284740D791D2282DE620C640::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(unaff_x29 + -0x18),0);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    uVar2 = Component_GetComponent_TisOVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C_m476438F7CEECEB7F44A92340A2A00EB95E867CC7
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)(unaff_x29 + -8),
                       *(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__31_System_Collections_IEnumerator_Reset__
                      );
    *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58) = *(undefined8 *)(unaff_x29 + -0x28);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -8) + 0x58),*(void **)(unaff_x29 + -0x28));
    uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    bStack000000000000002f = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar2,0);
    bStack000000000000002f = bStack000000000000002f & 1;
    if (bStack000000000000002f == 0) {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      uStack000000000000001c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar3);
      OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC
                (pvVar3,uStack000000000000001c,0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__,
                 0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__8_System_Collections_IEnumerator_Reset__
               ,0);
  }
  return;
}


