/*
FUNCTION_NAME: FUN_03691a90
ENTRY_POINT: 03691a90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03691a90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_04833ec9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_57__);
    DAT_04833ec9 = 1;
  }
  plVar4 = (long *)(param_1 + 0xa8);
  lVar2 = FUN_035afcfc(*plVar4,param_2,0);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_57__;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_57__;
    lVar3 = thunk_FUN_01f116d0(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01f116d0(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_03691b24;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_03691b24:
  thunk_FUN_01f51358(plVar4,lVar3);
  return;
}


