/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 05161b74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStart(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_06b79e60 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782438);
    DAT_06b79e60 = 1;
  }
  if (param_2 == (long *)0x0) {
    FUN_05161af4(param_1);
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782438 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782438))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_2);
    }
    lVar2 = FUN_05161af4(param_1);
    if (lVar2 != 0) {
      FUN_0552bb34(lVar2,param_2[2],0);
      *(undefined8 *)(param_1 + 0x20) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


