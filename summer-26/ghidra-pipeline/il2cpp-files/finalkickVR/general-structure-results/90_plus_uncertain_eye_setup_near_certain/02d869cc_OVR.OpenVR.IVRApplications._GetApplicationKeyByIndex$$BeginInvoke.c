/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByIndex$$BeginInvoke
ENTRY_POINT: 02d869cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex__BeginInvoke(void)

{
  long lVar1;
  OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *pOVar2;
  long unaff_x29;
  MethodInfo *in_stack_00000008;
  undefined8 *in_stack_00000018;
  OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *in_stack_00000030;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline
            (in_stack_00000030,in_stack_00000008);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  lVar1 = OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                    ((MethodInfo *)0x0);
  if (lVar1 == 0) {
    pOVar2 = (OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_1__);
    OVRBoundary__ctor_m31595FDCF7D3AC48703766DB883781D480F6092D(pOVar2);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline
              (pOVar2,(MethodInfo *)0x0);
  }
  OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F
            (*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


