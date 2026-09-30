/*
FUNCTION_NAME: FUN_05c4b994
ENTRY_POINT: 05c4b994
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05c4b994(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar1 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                              );
    FUN_05453f78(uVar1,uVar2,0);
    uVar2 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar1,uVar2);
  }
  FUN_05d01104(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_05c41ab4(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),0);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05c41e1c(*(long *)(param_1 + 0x18),param_2,0);
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    FUN_05d01104(0);
    return;
  }
  uVar1 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                            );
  uVar1 = FUN_0534f2b4(uVar1,0);
  thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
  uVar2 = thunk_FUN_02dd3144();
  FUN_054e8008(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar1);
}


