/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetConnectedControllers
ENTRY_POINT: 0369cfa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetConnectedControllers(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  *(undefined1 *)(unaff_x21 + 0xf39) = in_w8;
  plVar4 = (long *)(unaff_x19 + 0x68);
  lVar2 = FUN_035afb04(*plVar4);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_53__;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_53__;
    lVar3 = thunk_FUN_01f116d0(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01f116d0(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_0369d004;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_0369d004:
  thunk_FUN_01f51358(plVar4,lVar3);
  return;
}


