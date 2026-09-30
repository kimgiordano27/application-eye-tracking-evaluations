/*
FUNCTION_NAME: Virtence.OpenTypeCS.Font$$CharToGlyph
ENTRY_POINT: 02ddfb94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Virtence_OpenTypeCS_Font__CharToGlyph(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  if (*(long *)(param_1 + 0x1e0) == 0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(unsigned_long*,RoomLayoutInternal_tB8672A810ED6C912064506A9242EF42E5BA8BEC0*),10ul,24ul>_char_const____10ul__char_const____24ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((ulong *)"OVRPlugin",
                       (RoomLayoutInternal_tB8672A810ED6C912064506A9242EF42E5BA8BEC0 *)
                       "ovrp_GetSpaceRoomLayout");
    OVRP_1_72_0_ovrp_GetSpaceRoomLayout_m74FFDB53E8E58A2292641A22FFF666F22C6D5F7B::il2cppPInvokeFunc
         = (code *)(ulong)uVar1;
    if (OVRP_1_72_0_ovrp_GetSpaceRoomLayout_m74FFDB53E8E58A2292641A22FFF666F22C6D5F7B::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5d27);
    }
  }
  uVar2 = (*OVRP_1_72_0_ovrp_GetSpaceRoomLayout_m74FFDB53E8E58A2292641A22FFF666F22C6D5F7B::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
  return uVar2;
}


