/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs._TestUuidMarshallingDelegate$$Invoke
ENTRY_POINT: 07716dd4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs__TestUuidMarshallingDelegate__Invoke
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  uVar1 = FUN_09531730(param_1,param_2,0);
  if ((uVar1 & 1) != 0) {
    return unaff_x20;
  }
  lVar2 = FUN_095258d0();
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_0953ac24(lVar2,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x22);
    }
    uVar1 = FUN_09531730(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = FUN_095259a0();
    if ((lVar2 != 0) && (lVar2 = FUN_0952a094(lVar2,0), lVar2 != 0)) {
      uVar3 = thunk_FUN_0953ac24(lVar2,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x22);
      }
      uVar1 = FUN_09531730(uVar3,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = FUN_095258d0();
      if ((lVar2 != 0) && (lVar2 = thunk_FUN_0953ac24(lVar2,0), lVar2 != 0)) {
        uVar3 = FUN_04c6bfdc(lVar2,*unaff_x21);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


