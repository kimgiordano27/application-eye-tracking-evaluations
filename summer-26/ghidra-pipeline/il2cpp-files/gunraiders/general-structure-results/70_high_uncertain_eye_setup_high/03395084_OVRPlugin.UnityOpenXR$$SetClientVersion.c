/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 03395084
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__SetClientVersion(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  __cxa_end_catch();
  lVar1 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03295500(0);
  uVar3 = (**(code **)(*unaff_x19 + 0x198))();
  uVar5 = *(undefined8 *)(unaff_x20 + 200);
  uVar4 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_GetPooled__);
  FUN_033704d4(uVar4,uVar2,uVar3,uVar5,0);
  uVar2 = FUN_0335d3b4();
  uVar3 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


