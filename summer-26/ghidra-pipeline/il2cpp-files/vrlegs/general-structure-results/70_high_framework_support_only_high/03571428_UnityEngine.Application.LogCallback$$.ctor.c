/*
FUNCTION_NAME: UnityEngine.Application.LogCallback$$.ctor
ENTRY_POINT: 03571428
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long UnityEngine_Application_LogCallback___ctor(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  int unaff_w25;
  long unaff_x26;
  undefined4 unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(param_1);
      param_1 = *(long *)OVRPlugin_Size3f_TypeInfo;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    if (lVar1 == 0) goto UnityEngine_Application_LogCallback__Invoke;
                    /* try { // try from 03571458 to 036716d3 has its CatchHandler @ 03571458
                       catch() { ... } // from try @ 03571458 with catch @ 03571458
                       catch() { ... } // from try @ 03571788 with catch @ 03571458
                       catch() { ... } // from try @ 035718b4 with catch @ 03571458
                       catch() { ... } // from try @ 0357194c with catch @ 03571458 */
    uStack0000000000000008 = unaff_w27;
    uVar2 = FUN_021e5f08(lVar1,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x1c0) == 0) {
UnityEngine_Application_LogCallback__Invoke:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uStack0000000000000008 = unaff_w27;
      FUN_021e5f08(*(long *)(unaff_x22 + 0x1c0),&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90);
      if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar1 = FUN_03571120(unaff_w23,unaff_x26,1,unaff_w21,unaff_w20);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    do {
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w28 == unaff_w25) {
        return 0;
      }
      FUN_02215a88();
      unaff_x26 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar2 = FUN_036d35a8(unaff_x26,0,0);
    } while ((uVar2 & 1) != 0);
    if (unaff_x26 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    unaff_w27 = FUN_0355ea04(unaff_x26,0);
    param_1 = *(long *)OVRPlugin_Size3f_TypeInfo;
  } while( true );
}


