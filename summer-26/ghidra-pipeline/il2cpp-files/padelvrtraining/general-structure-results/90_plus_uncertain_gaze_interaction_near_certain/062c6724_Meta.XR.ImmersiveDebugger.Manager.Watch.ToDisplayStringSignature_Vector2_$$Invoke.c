/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 062c6724
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke(void)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  code *pcVar6;
  long unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  undefined8 uVar7;
  void *__s;
  long unaff_x27;
  long unaff_x29;
  
  __s = (void *)((long)unaff_x24 - in_x9);
  memset(__s,0,unaff_x25);
  if (unaff_x23 == 0) {
    if (unaff_w20 != 0 || unaff_w21 != 0) {
      FUN_0719919c(0);
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    memset(__s,0,unaff_x25);
    memcpy(unaff_x24,__s,unaff_x25);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar3 = FUN_03d2d4fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_03d9f2a8();
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c(lVar2);
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar7 = FUN_07186ef4(uVar7,0);
      uVar3 = FUN_0719124c(uVar4,uVar7,0);
      if ((uVar3 & 1) != 0) {
        FUN_0719901c(0);
      }
    }
    if ((*(uint *)(unaff_x23 + 0x18) < unaff_w21) ||
       (*(uint *)(unaff_x23 + 0x18) - unaff_w21 < unaff_w20)) {
      FUN_0719919c(0);
    }
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar2 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x22 + 0x20);
    }
    pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    uVar4 = (*pcVar6)(unaff_x23 + 0x20,unaff_w21,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
    *unaff_x19 = uVar4;
    *(uint *)(unaff_x19 + 1) = unaff_w20;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


