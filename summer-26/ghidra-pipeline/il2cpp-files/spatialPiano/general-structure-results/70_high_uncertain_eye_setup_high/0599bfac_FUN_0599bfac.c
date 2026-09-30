/*
FUNCTION_NAME: FUN_0599bfac
ENTRY_POINT: 0599bfac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0599bfac(uint param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_06bc1b06 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_Clear__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Count__
                );
                    /* try { // try from 0599bff4 to 05a9bfff has its CatchHandler @ 0599c0a0 */
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Item__
                );
                    /* try { // try from 0599c000 to 05a9c0b7 has its CatchHandler @ 0599bf50 */
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    DAT_06bc1b06 = 1;
  }
  puVar1 = (undefined8 *)
           Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_Add__
  ;
  if (param_1 < 7) {
    puVar1 = (undefined8 *)(&PTR_DAT_0646ca40)[param_1];
  }
  return *puVar1;
}


