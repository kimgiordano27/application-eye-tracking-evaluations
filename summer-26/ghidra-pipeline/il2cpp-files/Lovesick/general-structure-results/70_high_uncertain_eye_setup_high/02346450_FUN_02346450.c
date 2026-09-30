/*
FUNCTION_NAME: FUN_02346450
ENTRY_POINT: 02346450
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02346450(long param_1,long *param_2)

{
  byte bVar1;
  
  if ((DAT_03781d12 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                      );
    DAT_03781d12 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                     + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
       )) {
      *(long *)(param_1 + 0x10) = param_2[2];
      *(int *)(param_1 + 0x18) = (int)param_2[3];
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
      *(int *)(param_1 + 0x20) = (int)param_2[4];
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
      *(int *)(param_1 + 0x28) = (int)param_2[5];
    }
  }
  return;
}


