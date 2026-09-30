/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 05db3ccc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  uint uVar2;
  uint unaff_w20;
  
  if (in_CY && !in_ZR) {
    if (unaff_w20 < 0x5ed0ea33) {
      if (unaff_w20 == 0x5e8953bd) {
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f78);
        FUN_05db7c58();
        return uVar1;
      }
      uVar2 = 0x5ed0ea32;
    }
    else {
      if (unaff_w20 == 0x60788c8b) {
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1f80);
        FUN_05db8c38();
        return uVar1;
      }
      uVar2 = 0x63dffc8e;
    }
  }
  else {
    if (unaff_w20 < 0x5842d211) {
      if (unaff_w20 != 0x58129c8e) {
        if (unaff_w20 != 0x5842d210) {
          return 0;
        }
        uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
        FUN_05db36e4();
        return uVar1;
      }
      goto LAB_05db40f0;
    }
    if (unaff_w20 == 0x58cbff2a) {
      uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1cc0);
      FUN_05db3374();
      return uVar1;
    }
    uVar2 = 0x5c95a4f3;
  }
  if (unaff_w20 != uVar2) {
    return 0;
  }
LAB_05db40f0:
  uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
  FUN_05db0920();
  return uVar1;
}


