/*
FUNCTION_NAME: OVRManager$$.ctor
ENTRY_POINT: 033702fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager___ctor(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  uVar2 = FUN_039c320c();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar4 = (long *)FUN_039cd330();
    if ((plVar4 == (long *)0x0) || (uVar2 = FUN_039c3170(), (uVar2 & 1) == 0)) {
      puVar1 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      lVar5 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) != unaff_x21) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar2 = FUN_032ea6e0();
        if ((((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*unaff_x20 + 0x3c8))(), (uVar2 & 1) == 0))
           && (uVar2 = FUN_032eb3c4(), (uVar2 & 1) == 0)) {
          *unaff_x19 = 0;
          return 3;
        }
        *unaff_x19 = 0;
        return 2;
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_03370750();
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 0;
        return 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_033707ec(0);
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,0);
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,0);
  }
  *unaff_x19 = uVar3;
  return 0;
}


