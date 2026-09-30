/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 02cb5374
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(void)

{
  long unaff_x29;
  undefined4 uStack000000000000006c;
  
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -8);
  NullCheck(*(void **)(unaff_x29 + -0x70));
  VirtualActionInvoker1<Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9*>::Invoke
            (4,*(Il2CppObject **)(unaff_x29 + -0x70),
             *(Message_t5E5BB1D7C1870D878913D21BAA1AFD1EC65431D9 **)(unaff_x29 + -0x78));
  uStack000000000000006c = 3;
  il2cpp::utils::
  FinallyHelper<Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A::$_6,false>::
  ~FinallyHelper((FinallyHelper<Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A::__6,false>
                  *)(unaff_x29 + -0x60));
  return;
}


