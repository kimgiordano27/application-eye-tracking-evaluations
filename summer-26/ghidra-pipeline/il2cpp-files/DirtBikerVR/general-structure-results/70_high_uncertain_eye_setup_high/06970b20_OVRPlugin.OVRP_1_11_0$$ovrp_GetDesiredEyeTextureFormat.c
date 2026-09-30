/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_GetDesiredEyeTextureFormat
ENTRY_POINT: 06970b20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0__ovrp_GetDesiredEyeTextureFormat(void)

{
  long *plVar1;
  long lVar2;
  int in_w8;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  
  while( true ) {
    if (in_w8 <= unaff_w21) {
      return;
    }
    plVar1 = *(long **)(unaff_x20 + 0xe0);
    if (plVar1 == (long *)0x0) break;
    lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (((lVar2 == 0) || (lVar2 = FUN_04de82e0(lVar2,unaff_w21,*unaff_x22), lVar2 == 0)) ||
       (plVar1 = (long *)thunk_FUN_03a9a6e8(lVar2,0), plVar1 == (long *)0x0)) break;
    (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    FUN_0697110c();
    plVar1 = *(long **)(unaff_x20 + 0xe0);
    if (plVar1 == (long *)0x0) break;
    lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (lVar2 == 0) break;
    FUN_04de82e0(lVar2,unaff_w21,*unaff_x22);
    FUN_06971364();
    plVar1 = *(long **)(unaff_x20 + 0xe0);
    unaff_w21 = unaff_w21 + 1;
    if (plVar1 == (long *)0x0) break;
    lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (lVar2 == 0) break;
    in_w8 = *(int *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


