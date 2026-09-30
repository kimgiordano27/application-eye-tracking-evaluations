/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 02caae28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__get_hasInputFocus
          (ulong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  List_1_t5C46430C98B2AC26AABA6793A7383DBFFE71E557 *pLVar4;
  List_1_t5C46430C98B2AC26AABA6793A7383DBFFE71E557 *pLVar5;
  long unaff_x29;
  float fVar6;
  ulong *puStack0000000000000008;
  int iStack0000000000000024;
  float fStack000000000000003c;
  
  *(undefined8 *)(unaff_x29 + -8) = param_3;
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  puStack0000000000000008 = param_1;
  if ((OVRLipSyncSequence_GetFrameAtTime_mDC0ED3C51DCB005CBF622102FEB1C8BA2BECB340::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(param_1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue__);
    OVRLipSyncSequence_GetFrameAtTime_mDC0ED3C51DCB005CBF622102FEB1C8BA2BECB340::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0xc);
  *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20);
  if (*(float *)(unaff_x29 + -0x28) < *(float *)(unaff_x29 + -0x2c)) {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x18);
    NullCheck(*(void **)(unaff_x29 + -0x38));
    uVar1 = List_1_get_Count_m9CCC183C3751EB3C90FA181F5D95CB3A74B896FC_inline
                      (*(List_1_t5C46430C98B2AC26AABA6793A7383DBFFE71E557 **)(unaff_x29 + -0x38),
                       (MethodInfo *)*puStack0000000000000008);
    *(undefined4 *)(unaff_x29 + -0x3c) = uVar1;
    if (0 < *(int *)(unaff_x29 + -0x3c)) {
      fStack000000000000003c = *(float *)(*(long *)(unaff_x29 + -8) + 0x20);
      *(float *)(unaff_x29 + -0x24) = *(float *)(unaff_x29 + -0xc) / fStack000000000000003c;
      pLVar4 = *(List_1_t5C46430C98B2AC26AABA6793A7383DBFFE71E557 **)
                (*(long *)(unaff_x29 + -8) + 0x18);
      pLVar5 = *(List_1_t5C46430C98B2AC26AABA6793A7383DBFFE71E557 **)
                (*(long *)(unaff_x29 + -8) + 0x18);
      NullCheck(pLVar5);
      iStack0000000000000024 =
           List_1_get_Count_m9CCC183C3751EB3C90FA181F5D95CB3A74B896FC_inline
                     (pLVar5,(MethodInfo *)*puStack0000000000000008);
      fVar6 = *(float *)(unaff_x29 + -0x24);
      NullCheck(pLVar4);
      fVar6 = (float)il2cpp_codegen_multiply<float,float>((float)iStack0000000000000024,fVar6);
      iVar2 = il2cpp_codegen_cast_double_to_int<int>((double)fVar6);
      uVar3 = List_1_get_Item_m8C07683F63D25EC2B9FBC03235298EAB5748C3EC
                        (pLVar4,iVar2,
                         *(MethodInfo **)
                          Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue__);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


