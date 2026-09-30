/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$.cctor
ENTRY_POINT: 06970b84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0___cctor(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  
  while( true ) {
    lVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (lVar1 == 0) break;
    FUN_04de82e0(lVar1,unaff_w21,*unaff_x22);
    FUN_06971364();
    plVar2 = *(long **)(unaff_x20 + 0xe0);
    unaff_w21 = unaff_w21 + 1;
    if (plVar2 == (long *)0x0) break;
    lVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
      return;
    }
    plVar2 = *(long **)(unaff_x20 + 0xe0);
    if (plVar2 == (long *)0x0) break;
    lVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (((lVar1 == 0) || (lVar1 = FUN_04de82e0(lVar1,unaff_w21,*unaff_x22), lVar1 == 0)) ||
       (plVar2 = (long *)thunk_FUN_03a9a6e8(lVar1,0), plVar2 == (long *)0x0)) break;
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    FUN_0697110c();
    param_1 = *(long **)(unaff_x20 + 0xe0);
    if (param_1 == (long *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


