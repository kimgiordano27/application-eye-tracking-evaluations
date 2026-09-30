/*
FUNCTION_NAME: FUN_036960d4
ENTRY_POINT: 036960d4
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


void FUN_036960d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_04833ef0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    DAT_04833ef0 = 1;
  }
  plVar1 = (long *)(param_1 + 0x170);
  lVar3 = FUN_035afcfc(*(undefined8 *)(param_1 + 0x170),param_2,0);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_53__;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_53__;
    lVar4 = thunk_FUN_01f116d0(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_01f116d0(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_0369616c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_0369616c:
  thunk_FUN_01f51358(plVar1,lVar4);
  return;
}


