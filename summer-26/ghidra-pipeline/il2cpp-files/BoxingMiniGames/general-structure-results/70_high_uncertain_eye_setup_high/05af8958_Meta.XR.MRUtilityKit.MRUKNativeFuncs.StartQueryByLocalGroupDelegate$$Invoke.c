/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.StartQueryByLocalGroupDelegate$$Invoke
ENTRY_POINT: 05af8958
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_StartQueryByLocalGroupDelegate__Invoke
               (long *param_1,long param_2,void *param_3,uint param_4,int param_5)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [96];
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    __src = (void *)(param_2 + (long)(int)param_4 * 0x60 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar3 = *param_1;
      pcVar4 = *(code **)(lVar3 + 0x1b8);
      memcpy(auStack_b0,__src,0x60);
      memcpy(auStack_110,param_3,0x60);
      uVar1 = (*pcVar4)(param_1,auStack_b0,auStack_110,*(undefined8 *)(lVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar2 = lVar2 + -1;
      __src = (void *)((long)__src + 0x60);
      param_4 = param_4 + 1;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


