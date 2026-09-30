/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 02c42888
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_03a26096 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a26096 = 1;
  }
  FUN_02c108e4(param_1,0);
  puVar1 = PTR_DAT_037f45f0;
  if ((param_3 & 0xffffffbb) == 0) {
    if ((param_3 >> 2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if (DAT_03a25482 == '\0') {
        FUN_017fc350(PTR_DAT_037f45f0);
        DAT_03a25482 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar2 = *(long *)puVar1;
      }
      puVar3 = (undefined8 *)FUN_017fc368(lVar2);
      *(undefined8 *)(param_1 + 0x30) = *puVar3;
      thunk_FUN_0188fd20();
    }
    FUN_02c429a8(param_1,0,param_2,0,param_3,0x400,0);
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f86c0);
  uVar4 = thunk_FUN_01861bbc();
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c5d8);
  FUN_02b44e38(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c5e0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4,uVar5);
}


