/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsPcm
ENTRY_POINT: 03175330
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  long *plVar3;
  
  FUN_0395a20c(0x3f800000,param_1,0);
  FUN_0395a360(param_1,1,0);
  FUN_0395a294(param_1,0,0);
  FUN_0395a4a4(param_1,3,0);
  lVar1 = FUN_0391c27c(param_1,0);
  if (lVar1 != 0) {
    FUN_03929660();
    FUN_0391c27c(param_1,0);
    FUN_03136e6c();
    lVar1 = FUN_0391c2b8(param_1,0);
    if (lVar1 != 0) {
      FUN_0391fb70(lVar1,0,0);
      lVar1 = FUN_0391c2b8(param_1,0);
      if (lVar1 != 0) {
        FUN_0391fb2c(lVar1,*(undefined4 *)(unaff_x20 + 0x3c),0);
        plVar3 = *(long **)(unaff_x20 + 0x68);
        if (plVar3 != (long *)0x0) {
          lVar1 = thunk_FUN_01afa9e0(param_1,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar1 == 0) {
            uVar2 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar2,0);
          }
          if (unaff_w19 < *(uint *)(plVar3 + 3)) {
            plVar3[(long)(int)unaff_w19 + 4] = param_1;
            thunk_FUN_01b4f09c(plVar3 + (long)(int)unaff_w19 + 4,param_1);
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


