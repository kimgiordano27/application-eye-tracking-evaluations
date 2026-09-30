/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 02ca69d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRPermissionsRequester__ShouldRequestPermission(void)

{
  OVRTouchpadCallback_1_t8B540C26D4DDEC11FA00E22654E29323269B4E06 *pOVar1;
  long unaff_x29;
  float fStack000000000000001c;
  float fStack000000000000003c;
  float fStack000000000000004c;
  
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -8);
  Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline
            (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 **)(unaff_x29 + -0x48),
             (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -8);
  *(undefined4 *)(unaff_x29 + -0x54) = **(undefined4 **)(unaff_x29 + -0x50);
  fStack000000000000004c = *(float *)(*(long *)(unaff_x29 + -8) + 4);
  if (ABS(fStack000000000000004c) < ABS(*(float *)(unaff_x29 + -0x54))) {
    fStack000000000000003c = **(float **)(unaff_x29 + -8);
    if (0.0 < fStack000000000000003c) {
      pOVar1 = *(OVRTouchpadCallback_1_t8B540C26D4DDEC11FA00E22654E29323269B4E06 **)
                (unaff_x29 + -0x18);
      NullCheck(pOVar1);
      OVRTouchpadCallback_1_Invoke_m7DB788A2A0945867A95B876BA2FF55C6B221DA58_inline
                (pOVar1,2,(MethodInfo *)0x0);
    }
    else {
      pOVar1 = *(OVRTouchpadCallback_1_t8B540C26D4DDEC11FA00E22654E29323269B4E06 **)
                (unaff_x29 + -0x18);
      NullCheck(pOVar1);
      OVRTouchpadCallback_1_Invoke_m7DB788A2A0945867A95B876BA2FF55C6B221DA58_inline
                (pOVar1,3,(MethodInfo *)0x0);
    }
  }
  else {
    fStack000000000000001c = *(float *)(*(long *)(unaff_x29 + -8) + 4);
    if (0.0 < fStack000000000000001c) {
      pOVar1 = *(OVRTouchpadCallback_1_t8B540C26D4DDEC11FA00E22654E29323269B4E06 **)
                (unaff_x29 + -0x18);
      NullCheck(pOVar1);
      OVRTouchpadCallback_1_Invoke_m7DB788A2A0945867A95B876BA2FF55C6B221DA58_inline
                (pOVar1,5,(MethodInfo *)0x0);
    }
    else {
      pOVar1 = *(OVRTouchpadCallback_1_t8B540C26D4DDEC11FA00E22654E29323269B4E06 **)
                (unaff_x29 + -0x18);
      NullCheck(pOVar1);
      OVRTouchpadCallback_1_Invoke_m7DB788A2A0945867A95B876BA2FF55C6B221DA58_inline
                (pOVar1,4,(MethodInfo *)0x0);
    }
  }
  return;
}


