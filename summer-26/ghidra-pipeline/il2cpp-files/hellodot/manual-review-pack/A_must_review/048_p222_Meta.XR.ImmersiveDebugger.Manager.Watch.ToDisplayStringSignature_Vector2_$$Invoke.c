/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 03f9d930
PROGRAM: hellodot-libil2cpp.so
SCORE: 146
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f9dac8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke
               (undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  
  do {
    uVar4 = thunk_FUN_02cea4e8(param_1);
    plVar5 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uVar4 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,uVar4,uVar6,*(undefined8 *)PTR_DAT_065dff28
                         ,0);
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05eb364c(uVar4,0);
    while( true ) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
      if ((uVar2 & 1) == 0) {
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar9 = *(long *)(lVar10 + 0xc0);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02ce0978();
          lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_02ce855c(lVar9,*(undefined8 *)(lVar10 + 0xf0),*(undefined8 *)(unaff_x29 + -0x38));
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
      uVar4 = *puVar7;
      *(void **)(unaff_x29 + -0x20) = unaff_x28;
      (*(code *)puVar7[2])(uVar4);
      memcpy(unaff_x25,unaff_x28,unaff_x23);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar7 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x80) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x26;
      }
      puVar8 = *(undefined8 **)(lVar9 + 0xd8);
      uVar4 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
      (*(code *)puVar8[2])(uVar4);
      cVar1 = *(char *)(unaff_x29 + -0xc);
      memcpy(unaff_x28,unaff_x25,unaff_x23);
      if (cVar1 != '\0') break;
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(*(void **)(unaff_x29 + -0x28),pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar7 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x80) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x26;
      }
      puVar8 = *(undefined8 **)(lVar9 + 0xe0);
      puVar11 = *(undefined8 **)(unaff_x29 + -0x28);
      uVar4 = *puVar8;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x90) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
      (*(code *)puVar8[2])(uVar4);
    }
    pvVar3 = (void *)thunk_FUN_02cd0998();
    memcpy(unaff_x26,pvVar3,unaff_x24);
    param_1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
  } while( true );
}


