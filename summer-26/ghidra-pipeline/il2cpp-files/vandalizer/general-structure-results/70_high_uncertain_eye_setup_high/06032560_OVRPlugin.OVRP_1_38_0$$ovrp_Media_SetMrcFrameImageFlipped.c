/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 06032560
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  while( true ) {
    FUN_06ee4e9c(param_1,param_2,param_3);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) break;
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
      do {
        unaff_w20 = unaff_w26;
        if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
          return;
        }
        unaff_w26 = unaff_w20 + 1;
        unaff_w21 = unaff_w26;
      } while (*(int *)(lVar1 + 0x18) <= unaff_w26);
    }
    lVar1 = FUN_047af170(lVar1,unaff_w20,*unaff_x24);
    if ((lVar1 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
    param_1 = *(undefined8 *)(lVar1 + 0x20);
    lVar1 = FUN_047af170(*(long *)(unaff_x19 + 0x68),unaff_w21,*unaff_x24);
    if (lVar1 == 0) break;
    param_2 = *(undefined8 *)(lVar1 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
    }
    param_3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


