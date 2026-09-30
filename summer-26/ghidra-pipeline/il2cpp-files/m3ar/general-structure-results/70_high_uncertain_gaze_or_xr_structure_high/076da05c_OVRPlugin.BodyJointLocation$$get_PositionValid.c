/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionValid
ENTRY_POINT: 076da05c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_BodyJointLocation__get_PositionValid(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar2 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  lVar3 = thunk_FUN_0406deb8(uVar2);
  FUN_06f7f9b4(lVar3,*unaff_x20);
  puVar1 = PTR_DAT_08fae160;
  if (lVar3 != 0) {
    FUN_06f806d0(0,lVar3,0,*(undefined8 *)PTR_DAT_08fae160);
    FUN_06f806d0(0,lVar3,1,*(undefined8 *)puVar1);
    FUN_06f806d0(0,lVar3,2,*(undefined8 *)puVar1);
    FUN_06f806d0(0,lVar3,3,*(undefined8 *)puVar1);
    FUN_06f806d0(0,lVar3,4,*(undefined8 *)puVar1);
    FUN_06f806d0(0,lVar3,5,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0x30) = lVar3;
    thunk_FUN_085843b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


