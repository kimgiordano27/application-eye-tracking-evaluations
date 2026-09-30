/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_disconnect_t_sessiongroup_handle_set
ENTRY_POINT: 078b3230
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_sessiongroup_handle_set
               (void)

{
  long lVar1;
  long unaff_x19;
  
  if (unaff_x19 != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x40) + 0x18) < 1)) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849b608);
      FUN_05f9f7c4(lVar1,*(undefined8 *)PTR_DAT_0849b610);
      if (lVar1 == 0) goto LAB_078b32ac;
      FUN_05fa0540(lVar1,*(undefined8 *)
                          System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo,
                   *(undefined8 *)(unaff_x19 + 0x40),
                   *(undefined8 *)System_Collections_Generic_List<SelectedObject>_TypeInfo);
    }
    return lVar1;
  }
LAB_078b32ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


