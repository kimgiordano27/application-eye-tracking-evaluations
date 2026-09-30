/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$BeginInvoke
ENTRY_POINT: 03f9d944
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

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__BeginInvoke
               (long *param_1)

{
  char cVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
                    /* try { // try from 03f9d970 to 0409d993 has its CatchHandler @ 03f9da00 */
    uVar4 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,unaff_x27,uVar4,
                         *(undefined8 *)PTR_DAT_065dff28,0);
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05eb364c(uVar4,0);
    while( true ) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
      if ((uVar2 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar7 = *(long *)(lVar8 + 0xc0);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02ce0978();
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_02ce855c(lVar7,*(undefined8 *)(lVar8 + 0xf0),*(undefined8 *)(unaff_x29 + -0x38));
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
      uVar4 = *puVar5;
      *(void **)(unaff_x29 + -0x20) = unaff_x28;
      (*(code *)puVar5[2])(uVar4);
      memcpy(unaff_x25,unaff_x28,unaff_x23);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar5 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x80) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x26;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xd8);
      uVar4 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      (*(code *)puVar6[2])(uVar4);
      cVar1 = *(char *)(unaff_x29 + -0xc);
      memcpy(unaff_x28,unaff_x25,unaff_x23);
      if (cVar1 != '\0') break;
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(*(void **)(unaff_x29 + -0x28),pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar5 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x80) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x26;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xe0);
      puVar9 = *(undefined8 **)(unaff_x29 + -0x28);
      uVar4 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x90) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      (*(code *)puVar6[2])(uVar4);
    }
    pvVar3 = (void *)thunk_FUN_02cd0998();
    memcpy(unaff_x26,pvVar3,unaff_x24);
    unaff_x27 = thunk_FUN_02cea4e8(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    param_1 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
  } while( true );
}


