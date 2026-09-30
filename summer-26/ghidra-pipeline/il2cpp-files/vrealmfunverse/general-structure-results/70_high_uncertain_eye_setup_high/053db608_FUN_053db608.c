/*
FUNCTION_NAME: FUN_053db608
ENTRY_POINT: 053db608
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool FUN_053db608(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_06322478;
  if ((DAT_066d0a00 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_Posef_TypeInfo);
                    /* try { // try from 053db640 to 054db72b has its CatchHandler @ 053db640
                       catch() { ... } // from try @ 053db640 with catch @ 053db640
                       catch() { ... } // from try @ 053db7a4 with catch @ 053db640
                       catch() { ... } // from try @ 053db808 with catch @ 053db640
                       catch() { ... } // from try @ 053db844 with catch @ 053db640 */
    FUN_02b3c81c(PTR_DAT_06322478);
    DAT_066d0a00 = 1;
  }
  *param_2 = 0;
  thunk_FUN_02bb0e9c(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_053da99c();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = (**(code **)(*param_1 + 0x218))(param_1,uVar2,0,*(undefined8 *)(*param_1 + 0x220));
  puVar1 = OVRPlugin_Posef_TypeInfo;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
    if ((int)*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar4 = *(long **)(lVar3 + 0x20);
    if (plVar4 == (long *)0x0) {
      *param_2 = 0;
    }
    else {
      lVar3 = *(long *)OVRPlugin_Posef_TypeInfo;
      if (*plVar4 != lVar3) {
LAB_053db6d8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar4,lVar3);
      }
      *param_2 = (long)plVar4;
      lVar3 = *(long *)puVar1;
      if (*plVar4 != lVar3) goto LAB_053db6d8;
    }
    thunk_FUN_02bb0e9c(param_2);
  }
  return *param_2 != 0;
}


