/*
FUNCTION_NAME: UniGLTF.VertexColorUtility$$MaterialUseVertexColor
ENTRY_POINT: 02f98078
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 UniGLTF_VertexColorUtility__MaterialUseVertexColor(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  
  OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if ((unaff_w22 == 0xc) || (unaff_w22 == 0)) {
    lVar1 = FUN_02f97598();
    if (lVar1 != 0) {
      FUN_02f97598();
      FUN_025d8778();
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_02f98184:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar1 = FUN_02f96db4();
    if (lVar1 != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_02f98184;
      FUN_02f96db4();
      FUN_025d8778();
    }
    FUN_025cee48();
    FUN_025d5d20();
    uVar2 = (**(code **)(*unaff_x20 + 0x168))();
    unaff_x23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d142e8);
    FUN_02f79074(unaff_x23,uVar2,0);
  }
  return unaff_x23;
}


