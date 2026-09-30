/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 045edf3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x045ee0f8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x21 + 0x8e8) = 1;
  uVar4 = (**(code **)(*unaff_x20 + 0x858))();
  if (((uVar4 & 1) == 0) || ((char)unaff_x20[0x83] != '\0')) {
    lVar9 = unaff_x20[0x7f];
    uVar12 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
    lVar1 = unaff_x20[0x80];
    uVar11 = *(undefined4 *)((long)unaff_x20 + 0x404);
    (**(code **)(*unaff_x20 + 0x898))();
    if ((char)unaff_x20[0x83] != '\0') {
      *(undefined1 *)(unaff_x20 + 0x83) = 0;
      (**(code **)(*unaff_x20 + 0x888))();
    }
    lVar5 = FUN_068c603c();
    if (lVar5 != 0) {
      lVar5 = unaff_x20[0x7f];
      uVar13 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
      lVar2 = unaff_x20[0x80];
      uVar14 = *(undefined4 *)((long)unaff_x20 + 0x404);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      puVar3 = PTR_DAT_06d01f60;
      plVar7 = (long *)FUN_04857988((int)lVar9,uVar12,(int)lVar1,uVar11,(int)lVar5,uVar13,(int)lVar2
                                    ,uVar14,*(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48))
      ;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_06874620(plVar7);
      (**(code **)(*unaff_x20 + 0x198))();
      lVar9 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_045ee0c4;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar3,0);
LAB_045ee0c4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  return;
}


