/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 02cab1a0
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


void OVRPlugin__get_eyeDepth(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C *pOVar3;
  void *pvVar4;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  undefined8 *in_stack_00000020;
  undefined4 uStack000000000000002c;
  int iStack000000000000003c;
  int iStack000000000000004c;
  
  uStack0000000000000018 = 0;
  OVRLipSyncContextMorphTarget_Update_m98306988F30B6A67A7FC811B4FC045636ABB5CDA::
  s_Il2CppMethodInitialized = in_w8;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                    (*(undefined8 *)(unaff_x29 + -0x20),uStack0000000000000018);
  *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                      (*(undefined8 *)(unaff_x29 + -0x30),0);
    *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(*(void **)(unaff_x29 + -0x40));
      uVar2 = OVRLipSyncContextBase_GetCurrentPhonemeFrame_m127A12A7BACF1AA262993583031CA6F83D4A5241_inline
                        (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
                          (unaff_x29 + -0x40),(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x48) = uVar2;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x48);
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x18);
      if (*(long *)(unaff_x29 + -0x50) != 0) {
        OVRLipSyncContextMorphTarget_SetVisemeToMorphTarget_m94F3445300EF9A8E7397FE446CE37C8CF60E1A6A
                  (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x18));
        OVRLipSyncContextMorphTarget_SetLaughterToMorphTarget_m30A3E5438BD0DFFF1DFED309B160FDAC40823D21
                  (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x18),0);
      }
      OVRLipSyncContextMorphTarget_CheckForKeys_mEFBE74C5D8D347F5C84FF0009E4AFB4BAE120857
                (*(undefined8 *)(unaff_x29 + -8));
      iStack000000000000004c = *(int *)(*(long *)(unaff_x29 + -8) + 0x50);
      pOVar3 = *(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
                (*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pOVar3);
      iStack000000000000003c =
           OVRLipSyncContextBase_get_Smoothing_mBFAC8B1ADE67B5A7FC8161E148A80E2326C8863E_inline
                     (pOVar3,(MethodInfo *)0x0);
      if (iStack000000000000004c != iStack000000000000003c) {
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
        uStack000000000000002c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x50);
        NullCheck(pvVar4);
        OVRLipSyncContextBase_set_Smoothing_mF36E6D20D1DCCA3486C70236664D9FD4E594DFCC
                  (pvVar4,uStack000000000000002c,0);
      }
    }
  }
  return;
}


