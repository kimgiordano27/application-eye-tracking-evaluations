/*
FUNCTION_NAME: FUN_05e60328
ENTRY_POINT: 05e60328
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e60328(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((DAT_066dc64b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(UnityEngine_UIElements_IPointerOrMouseEvent_TypeInfo);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_63__);
    DAT_066dc64b = 1;
  }
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),param_3,param_2,*(undefined8 *)(param_1 + 0x28));
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x10) != 0) {
        uVar1 = FUN_04c0af28(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_63__,param_1,
                             *(undefined8 *)UnityEngine_UIElements_IPointerOrMouseEvent_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c41e34(uVar1,0);
        FUN_05f4ded4(param_3,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


