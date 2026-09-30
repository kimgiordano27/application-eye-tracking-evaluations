/*
FUNCTION_NAME: FUN_0164f044
ENTRY_POINT: 0164f044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0164f164) */

long * FUN_0164f044(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char local_24 [4];
  
  puVar2 = System_Func<STMVoiceData,_string>_TypeInfo;
                    /* try { // try from 0164f050 to 0174f05f has its CatchHandler @ 0164f0ec */
  if ((DAT_037782d3 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_65__);
                    /* try { // try from 0164f074 to 0174f07b has its CatchHandler @ 0164f0f0 */
    thunk_FUN_00d48444(System_Func<STMVoiceData,_string>_TypeInfo);
    DAT_037782d3 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24[0] = '\0';
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar2;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x40);
  local_24[0] = '\0';
  FUN_017d75a8(uVar5,local_24,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar2;
  }
  plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x308))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x310));
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_65__ + 300);
    if (bVar1 <= *(byte *)(*plVar4 + 300)) {
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_65__) {
        plVar4 = (long *)0x0;
      }
      goto LAB_0164f138;
    }
  }
  plVar4 = (long *)0x0;
LAB_0164f138:
  if (local_24[0] != '\0') {
    thunk_FUN_00d56f10(uVar5,0);
  }
  return plVar4;
}


