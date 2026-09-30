/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 03696114
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Media__GetMrcInputVideoBufferType(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  plVar1 = (long *)(unaff_x19 + 0x170);
  lVar3 = FUN_035afcfc();
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


