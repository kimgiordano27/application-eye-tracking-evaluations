/*
FUNCTION_NAME: FUN_021f5008
ENTRY_POINT: 021f5008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_021f5008(long *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0378181d & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_0378181d = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if (lVar4 == *(long *)
                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
      iVar2 = FUN_015fd224(param_1,param_2,5,0);
      return (ulong)(iVar2 == 0);
    }
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 300);
    if ((bVar1 <= *(byte *)(lVar4 + 300)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__)) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = FUN_02020060(param_1,param_2,0);
      return uVar3;
    }
  }
  return 0;
}


