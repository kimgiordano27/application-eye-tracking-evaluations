/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0511a3bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_Collections_IEnumerable_GetEnumerator
          (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_02f08768(UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var);
  FUN_02f08768(UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var);
  FUN_02f08768(Unity_AppUI_UI_Heading_UxmlSerializedData_var);
  *(undefined1 *)(unaff_x20 + 0xe1f) = 1;
  if ((int)unaff_w19 < 0x2ee1) {
    puVar2 = (undefined8 *)
             Oculus_Interaction_HandGrab_Recorder_HandGrabPoseLiveRecorder_RecorderStep_var;
    if (((unaff_w19 != 0x4b0) &&
        (puVar2 = (undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
        , unaff_w19 != 0x4b1)) &&
       (puVar2 = (undefined8 *)Unity_AppUI_UI_Heading_UxmlSerializedData_var, unaff_w19 != 12000))
    goto LAB_0511a46c;
  }
  else if (unaff_w19 >> 5 < 0x275) {
    puVar2 = (undefined8 *)UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var;
    if ((unaff_w19 != 0x2ee1) &&
       (puVar2 = (undefined8 *)
                 Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabInteractableData_var,
       unaff_w19 != 0x4e9f)) goto LAB_0511a46c;
  }
  else {
    puVar2 = (undefined8 *)Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabPoseData_var;
    if ((unaff_w19 != 65000) &&
       (puVar2 = (undefined8 *)
                 UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var,
       unaff_w19 != 0xfde9)) {
LAB_0511a46c:
      if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = FUN_050656a0(0);
      uVar1 = FUN_050d2d8c(&stack0x0000000c,uVar1,0);
      return uVar1;
    }
  }
  return *puVar2;
}


