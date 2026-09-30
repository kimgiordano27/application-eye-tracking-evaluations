/*
FUNCTION_NAME: OVRManager$$OnDisable
ENTRY_POINT: 02c8d30c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 OVRManager__OnDisable(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 in_w8;
  long unaff_x29;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000020;
  
  *(undefined1 *)(unaff_x29 + -9) = in_w8;
  *(undefined8 *)(unaff_x29 + -0x18) = in_x3;
  uStack0000000000000020 = in_x4;
  if (FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8
      ::il2cppPInvokeFunc == (code *)0x0) {
    uStack000000000000001c = 0x14;
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int,int,int,int*),15ul,51ul>_char_const____15ul__char_const____51ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa2959a,0x9c4cf1,0,(int *)0x2);
    FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8
    ::il2cppPInvokeFunc = (code *)(ulong)uVar1;
                    /* try { // try from 02c8d358 to 02d8d49b has its CatchHandler @ 02c8d4b4 */
    if (FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8
        ::il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Interaction__6.cpp"
                    ,0x4d9a);
    }
  }
  iStack0000000000000018 = 0;
  uVar2 = (*FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8
            ::il2cppPInvokeFunc)
                    (*(undefined4 *)(unaff_x29 + -4),*(undefined4 *)(unaff_x29 + -8),
                     *(byte *)(unaff_x29 + -9) & 1,&stack0x00000018);
  *(bool *)*(undefined8 *)(unaff_x29 + -0x18) = iStack0000000000000018 != 0;
  return uVar2;
}


