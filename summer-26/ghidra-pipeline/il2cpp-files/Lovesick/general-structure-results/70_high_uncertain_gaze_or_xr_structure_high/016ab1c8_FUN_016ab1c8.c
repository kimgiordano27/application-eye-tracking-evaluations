/*
FUNCTION_NAME: FUN_016ab1c8
ENTRY_POINT: 016ab1c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_016ab1c8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if ((DAT_037785fb & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_037785fb = 1;
  }
  uVar1 = FUN_017b4f64(param_1,**(undefined8 **)(*(long *)puVar5 + 0xb8),0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00dc2390(param_1,param_2);
    if (lVar2 != 0) {
      return;
    }
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = PTR_DAT_033f64c8;
  }
  else {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = PTR_DAT_033ef998;
  }
  uVar4 = thunk_FUN_00d48444(puVar5);
  FUN_016f2f28(uVar3,uVar4,0);
  uVar4 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_53_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar4);
}


