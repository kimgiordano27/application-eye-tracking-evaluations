/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 0564a0d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster
               (long *param_1,long param_2,undefined8 *param_3,uint param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar2 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    puVar3 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x18 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      local_50 = puVar3[2];
      uStack_58 = puVar3[1];
      local_60 = *puVar3;
      uStack_78 = param_3[1];
      local_80 = *param_3;
      local_70 = param_3[2];
      uVar1 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,&local_60,&local_80,*(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
      param_4 = param_4 + 1;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


