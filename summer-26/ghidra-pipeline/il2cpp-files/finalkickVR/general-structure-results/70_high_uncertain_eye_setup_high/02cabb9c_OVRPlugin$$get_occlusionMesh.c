/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 02cabb9c
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


void OVRPlugin__get_occlusionMesh(void **param_1)

{
  undefined4 uVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack000000000000001f;
  
  Il2CppCodeGenWriteBarrier(param_1,*(void **)(unaff_x29 + -0x18));
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
    uVar1 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pvVar3);
    OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC(pvVar3,uVar1,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_OnComplete__
               ,0);
  }
  uVar4 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bStack000000000000001f = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar4,0);
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


