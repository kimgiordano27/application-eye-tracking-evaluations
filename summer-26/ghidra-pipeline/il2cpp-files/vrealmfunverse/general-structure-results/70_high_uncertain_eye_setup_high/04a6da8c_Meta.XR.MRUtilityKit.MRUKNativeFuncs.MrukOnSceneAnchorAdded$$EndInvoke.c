/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorAdded$$EndInvoke
ENTRY_POINT: 04a6da8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorAdded__EndInvoke
               (undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorAdded__BeginInvoke
            (param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
  if (param_2 < 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar1 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_06320a00);
    FUN_04cf60a0(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar1,param_4);
  }
  if (param_2 != 0) {
    FUN_04a6fb30(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70)
                );
    return;
  }
  return;
}


