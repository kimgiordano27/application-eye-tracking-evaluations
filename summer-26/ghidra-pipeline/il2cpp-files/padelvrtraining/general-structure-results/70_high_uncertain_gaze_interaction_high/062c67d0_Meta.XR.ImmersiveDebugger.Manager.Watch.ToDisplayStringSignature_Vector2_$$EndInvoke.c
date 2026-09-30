/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 062c67d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke(void)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  code *pcVar6;
  long unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  thunk_FUN_03db619c();
  FUN_07186ef4();
  uVar2 = FUN_0719124c();
  if ((uVar2 & 1) != 0) {
    FUN_0719901c(0);
  }
  if ((*(uint *)(unaff_x23 + 0x18) < unaff_w21) ||
     (*(uint *)(unaff_x23 + 0x18) - unaff_w21 < unaff_w20)) {
    FUN_0719919c(0);
  }
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x22 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  uVar4 = (*pcVar6)(unaff_x23 + 0x20,unaff_w21,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  *unaff_x19 = uVar4;
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


