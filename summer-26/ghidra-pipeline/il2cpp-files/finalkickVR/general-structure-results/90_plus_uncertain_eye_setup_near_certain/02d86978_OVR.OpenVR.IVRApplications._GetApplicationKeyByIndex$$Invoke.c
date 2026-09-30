/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByIndex$$Invoke
ENTRY_POINT: 02d86978
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex__Invoke(void)

{
  undefined8 uVar1;
  OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *pOVar2;
  long lVar3;
  OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *pOVar4;
  long unaff_x29;
  MethodInfo *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  OVRManager_set_display_mAD68A004132C01084A443254AC164FD31BCDFE6B_inline
            (*(OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27 **)(unaff_x29 + -0x20),
             in_stack_00000010);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  uVar1 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline((MethodInfo *)0x0)
  ;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    pOVar2 = (OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_museoTrofeo_<ActivarSonidosCopa>d__38_System_Collections_IEnumerator_Reset__
                       );
    OVRTracker__ctor_m283EF4D30717FA44ECFD8C6D31C15E31DBA3D2CD(pOVar2);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline
              (pOVar2,(MethodInfo *)0x0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  lVar3 = OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                    ((MethodInfo *)0x0);
  if (lVar3 == 0) {
    pOVar4 = (OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_1__);
    OVRBoundary__ctor_m31595FDCF7D3AC48703766DB883781D480F6092D(pOVar4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline
              (pOVar4,(MethodInfo *)0x0);
  }
  OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F
            (*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


