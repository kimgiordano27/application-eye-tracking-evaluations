/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 02ef8dbc
PROGRAM: simulator-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_01d263a8();
  lVar2 = FUN_02931fd8();
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x23 + 0xc0) = 0;
  }
  else {
    uVar6 = *unaff_x22;
    lVar3 = thunk_FUN_018af234(lVar2,uVar6);
    if (lVar3 == 0) goto LAB_02ef8e7c;
    *(long *)(unaff_x23 + 0xc0) = lVar3;
    uVar6 = *unaff_x22;
    lVar3 = thunk_FUN_018af234(lVar2,uVar6);
    if (lVar3 == 0) goto LAB_02ef8e7c;
  }
  lVar3 = *(long *)(unaff_x19 + 0x78);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 200);
    uVar6 = thunk_FUN_018af330(*unaff_x22);
    FUN_01d263a8();
    lVar2 = FUN_02931fd8(uVar5,uVar6,0);
    if (lVar2 == 0) {
      *(undefined8 *)(lVar3 + 200) = 0;
    }
    else {
      uVar6 = *unaff_x22;
      lVar4 = thunk_FUN_018af234(lVar2,uVar6);
      if (lVar4 == 0) {
LAB_02ef8e7c:
                    /* WARNING: Subroutine does not return */
        FUN_018c4e7c(lVar2,uVar6);
      }
      *(long *)(lVar3 + 200) = lVar4;
      uVar6 = *unaff_x22;
      lVar3 = thunk_FUN_018af234(lVar2,uVar6);
      if (lVar3 == 0) goto LAB_02ef8e7c;
    }
    puVar1 = PTR_DAT_034c6598;
    lVar2 = *(long *)(unaff_x19 + 0x78);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0xb8);
      uVar6 = thunk_FUN_018af330(*(undefined8 *)PTR_DAT_034c6598);
      FUN_01d2b160();
      lVar3 = FUN_02931fd8(uVar5,uVar6,0);
      if (lVar3 == 0) {
        *(undefined8 *)(lVar2 + 0xb8) = 0;
        return;
      }
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_018af234(lVar3,uVar6);
      if (lVar4 != 0) {
        *(long *)(lVar2 + 0xb8) = lVar4;
        uVar6 = *(undefined8 *)puVar1;
        lVar2 = thunk_FUN_018af234(lVar3,uVar6);
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_018c4e7c(lVar3,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


