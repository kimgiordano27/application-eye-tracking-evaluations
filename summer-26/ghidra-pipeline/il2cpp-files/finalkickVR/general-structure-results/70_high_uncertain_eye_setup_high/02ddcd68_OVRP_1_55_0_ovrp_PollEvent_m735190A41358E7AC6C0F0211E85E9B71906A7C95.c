/*
FUNCTION_NAME: OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95
ENTRY_POINT: 02ddcd68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95
          (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined4 local_ff4;
  undefined1 *local_ff0;
  undefined4 local_fe4;
  undefined8 local_fe0;
  undefined8 *local_fd8;
  undefined1 auStack_fd0 [4008];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_fe0 = param_2;
  local_fd8 = param_1;
  if (OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95::il2cppPInvokeFunc ==
      (code *)0x0) {
    local_fe4 = 8;
    uVar2 = __il2cpp_codegen_resolve_pinvoke<int(*)(EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_pinvoke*),10ul,15ul>_char_const____10ul__char_const____15ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_pinvoke
                        *)"OVRPlugin");
    OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95::il2cppPInvokeFunc =
         (code *)(ulong)uVar2;
    if (OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95::il2cppPInvokeFunc ==
        (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x55a9);
    }
  }
  local_ff0 = (undefined1 *)0x0;
  memset(auStack_fd0,0,0xfa4);
  EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshal_pinvoke(local_fd8,auStack_fd0);
  local_ff0 = auStack_fd0;
  local_ff4 = (*OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95::
                il2cppPInvokeFunc)(auStack_fd0);
  uStack_1000 = 0;
  local_1008 = 0;
  EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshal_pinvoke_back
            (local_ff0,&local_1008);
  EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshal_pinvoke_cleanup(local_ff0);
  local_fd8[1] = uStack_1000;
  *local_fd8 = local_1008;
  Il2CppCodeGenWriteBarrier((void **)(local_fd8 + 1),(void *)0x0);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1);
  }
  return local_ff4;
}


