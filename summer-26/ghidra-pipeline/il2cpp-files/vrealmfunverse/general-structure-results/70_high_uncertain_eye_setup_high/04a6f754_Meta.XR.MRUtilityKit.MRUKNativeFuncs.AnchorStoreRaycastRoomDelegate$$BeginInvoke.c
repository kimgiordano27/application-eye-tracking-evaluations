/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$BeginInvoke
ENTRY_POINT: 04a6f754
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__BeginInvoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)(param_1 + 0x48));
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar2 = thunk_FUN_02b79644();
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_0631cbc8);
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322bb0);
  System_Threading_Tasks_Task__get_CompletedTask(uVar2,uVar3,uVar1,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2);
}


