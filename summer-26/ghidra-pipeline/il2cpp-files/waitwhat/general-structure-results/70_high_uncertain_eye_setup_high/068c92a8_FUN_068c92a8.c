/*
FUNCTION_NAME: FUN_068c92a8
ENTRY_POINT: 068c92a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068c92a8(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_0755920d & 1) == 0) {
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_0755920d = 1;
  }
  FUN_068b4be4(param_1,param_2,0);
  if (param_2 != 0) {
    uVar2 = FUN_068515f0(param_2,0);
    uVar3 = (**(code **)(*param_1 + 0x778))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x780));
    if (((uVar3 & 1) != 0) && (plVar4 = (long *)FUN_068515f0(param_2,0), plVar4 != (long *)0x0)) {
      bVar1 = *(byte *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRPlugin_LayerLayout_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x068c9380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x7b8))(param_1,plVar4,*(undefined8 *)(*param_1 + 0x7c0));
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


