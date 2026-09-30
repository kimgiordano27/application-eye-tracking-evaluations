/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 02cabb30
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


void OVRPlugin__set_ipd(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  long unaff_x29;
  ulong *in_stack_00000008;
  ulong *in_stack_00000010;
  byte bStack000000000000001f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__31_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_OnAfterUpdate__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_OnComplete__
            );
  OVRLipSyncContextTextureFlip_Start_m43F5ED5A31A8CB1CCB609A0E87938878ABC2D56A::
  s_Il2CppMethodInitialized = 1;
  uVar3 = Component_GetComponent_TisOVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C_m476438F7CEECEB7F44A92340A2A00EB95E867CC7
                    (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)(unaff_x29 + -8),
                     *(MethodInfo **)
                      Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__31_System_Collections_IEnumerator_Reset__
                    );
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38) = *(undefined8 *)(unaff_x29 + -0x18);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0x38),*(void **)(unaff_x29 + -0x18));
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
    uVar1 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pvVar4);
    OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC(pvVar4,uVar1,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_OnComplete__
               ,0);
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bStack000000000000001f = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_OnAfterUpdate__
               ,0);
  }
  return;
}


