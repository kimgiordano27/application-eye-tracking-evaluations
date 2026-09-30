/*
FUNCTION_NAME: OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E
ENTRY_POINT: 02de04a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E
          (String_t *param_1,undefined4 param_2,void **param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  void *local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  void *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  void **local_88;
  undefined4 local_7c;
  String_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_90 = param_4;
  local_88 = param_3;
  local_7c = param_2;
  local_78 = param_1;
  if (OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E::
      il2cppPInvokeFunc == (code *)0x0) {
    local_94 = 0x14;
    uVar2 = __il2cpp_codegen_resolve_pinvoke<int(*)(char*,int,RenderModelPropertiesInternal_t8DABC81856F5126FDCF95DF73D82885CEDC5BD22_marshaled_pinvoke*),10ul,31ul>_char_const____10ul__char_const____31ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ("OVRPlugin",0xa5a5e6,
                       (RenderModelPropertiesInternal_t8DABC81856F5126FDCF95DF73D82885CEDC5BD22_marshaled_pinvoke
                        *)0x1);
    OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E::
    il2cppPInvokeFunc = (code *)(ulong)uVar2;
    if (OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5e56);
    }
  }
  local_a0 = (void *)0x0;
  local_a0 = (void *)il2cpp_codegen_marshal_string(local_78);
  uStack_28 = 0;
  local_30 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_a8 = &local_70;
  local_ac = (*OVRP_1_74_0_ovrp_GetRenderModelProperties2_m5130D55440A03F23FF5F6B38634EF551D39C3F1E
               ::il2cppPInvokeFunc)(local_a0,local_7c,local_a8);
  il2cpp_codegen_marshal_free(local_a0);
  local_a0 = (void *)0x0;
  local_b8 = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_c8 = (void *)0x0;
  RenderModelPropertiesInternal_t8DABC81856F5126FDCF95DF73D82885CEDC5BD22_marshal_pinvoke_back
            (local_a8,&local_c8);
  local_88[2] = local_b8;
  local_88[1] = pvStack_c0;
  *local_88 = local_c8;
  Il2CppCodeGenWriteBarrier(local_88,(void *)0x0);
  RenderModelPropertiesInternal_t8DABC81856F5126FDCF95DF73D82885CEDC5BD22_marshal_pinvoke_cleanup
            (local_a8);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1);
  }
  return local_ac;
}


