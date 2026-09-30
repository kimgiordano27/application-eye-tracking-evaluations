/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 0336c85c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (param_4 <= in_w8 - param_3) {
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar1 = thunk_FUN_01c496e0();
  uVar2 = thunk_FUN_01c273e8(UnityEngine_ResourceManagement_IUpdateReceiver_TypeInfo);
  FUN_03247e00(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


