/*
FUNCTION_NAME: FUN_02607d44
ENTRY_POINT: 02607d44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_02607d44(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((DAT_037833bd & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    DAT_037833bd = 1;
  }
  local_20 = 0;
  uStack_18 = 0;
  uVar2 = FUN_0269e56c(0);
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
  ;
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_010f7d38(*(undefined8 *)puVar1);
    if (lVar4 == 0) {
      uVar2 = UnityEngine_TextCore_Text_TextGenerator__GenerateText(0x21,&local_20);
                    /* try { // try from 02607dd0 to 02707df7 has its CatchHandler @ 02607f38 */
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_02607e98(local_20,uStack_18);
      }
    }
    else {
      uVar3 = FUN_02607df0();
    }
  }
  return uVar3;
}


