/*
FUNCTION_NAME: OVRManager$$set_vsyncCount
ENTRY_POINT: 03666b7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_vsyncCount(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = FUN_02b6b4d8(param_2,param_3,*param_1);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_<>c_<_ctor>b__5_0__);
    FUN_034f6754(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_<>c_<_ctor>b__6_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03666c38();
  if (unaff_x19 != 0) {
    FUN_04074284();
    lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    if (lVar4 != 0) {
      FUN_02b6b2e4(lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


