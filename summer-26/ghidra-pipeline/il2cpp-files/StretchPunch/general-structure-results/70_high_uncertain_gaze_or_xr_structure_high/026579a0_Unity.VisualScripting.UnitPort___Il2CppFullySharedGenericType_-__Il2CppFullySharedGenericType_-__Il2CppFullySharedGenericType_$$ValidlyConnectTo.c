/*
FUNCTION_NAME: Unity.VisualScripting.UnitPort<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$ValidlyConnectTo
ENTRY_POINT: 026579a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8
Unity_VisualScripting_UnitPort<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ValidlyConnectTo
          (ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    in_stack_00000008 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2254);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (in_stack_00000008,*(undefined8 *)StringLiteral_2253);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (lVar1 == 0) goto LAB_02657b00;
    FUN_02b23db4(lVar1,**(undefined8 **)(lVar2 + 0xb8),in_stack_00000008,
                 *(undefined8 *)StringLiteral_2250);
  }
  if (in_stack_00000008 != 0) {
    FUN_02f17d24();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    return **(undefined8 **)(lVar1 + 0xb8);
  }
LAB_02657b00:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


