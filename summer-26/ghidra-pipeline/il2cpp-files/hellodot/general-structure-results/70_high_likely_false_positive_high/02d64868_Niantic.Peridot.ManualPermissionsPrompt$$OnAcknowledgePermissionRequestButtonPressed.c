/*
FUNCTION_NAME: Niantic.Peridot.ManualPermissionsPrompt$$OnAcknowledgePermissionRequestButtonPressed
ENTRY_POINT: 02d64868
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Niantic_Peridot_ManualPermissionsPrompt__OnAcknowledgePermissionRequestButtonPressed
               (undefined8 param_1,ulong param_2,long param_3,long param_4,size_t param_5,
               long param_6,long param_7)

{
  ulong uVar1;
  size_t __n;
  bool in_CY;
  wchar_t *__s1;
  ulong *unaff_x19;
  wchar_t *__s2;
  ulong unaff_x27;
  
  if (!in_CY) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if ((*unaff_x19 & 1) == 0) {
    __s2 = (wchar_t *)((long)unaff_x19 + 4);
  }
  else {
    __s2 = (wchar_t *)unaff_x19[2];
  }
  if (param_2 < 0x1fffffffffffffe7) {
    uVar1 = param_2 << 1;
    if (param_2 << 1 <= param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    unaff_x27 = 5;
    if (4 < uVar1) {
      unaff_x27 = uVar1 + 4 & 0xfffffffffffffffc;
    }
    if (unaff_x27 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02c778b0("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  __s1 = operator_new(unaff_x27 << 2);
  if (param_5 != 0) {
    wmemcpy(__s1,__s2,param_5);
  }
  __n = (param_4 - param_6) - param_5;
  if (__n != 0) {
    wmemcpy(__s1 + param_5 + param_7,__s2 + param_5 + param_6,__n);
  }
  if (param_2 != 4) {
    operator_delete(__s2);
  }
  unaff_x19[2] = (ulong)__s1;
  *unaff_x19 = unaff_x27 | 1;
  return;
}


