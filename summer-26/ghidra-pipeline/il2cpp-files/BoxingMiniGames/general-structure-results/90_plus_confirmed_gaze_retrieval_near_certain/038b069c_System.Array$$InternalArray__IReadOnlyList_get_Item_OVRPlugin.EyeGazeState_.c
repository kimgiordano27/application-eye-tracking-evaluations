/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 038b069c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(void)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  pvVar1 = *(void **)(unaff_x29 + -0x68);
  if (-1 < unaff_w25) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x24,pvVar1,*(size_t *)(unaff_x29 + -0x88));
  iVar2 = *(int *)(*(long *)(unaff_x29 + -0x80) + 0x28);
  pvVar1 = *(void **)(unaff_x29 + -0x60);
  if (-1 < iVar2) {
    pvVar1 = (void *)(unaff_x29 + -0x50);
  }
  memcpy(unaff_x26,pvVar1,*(size_t *)(unaff_x29 + -0x78));
  if (-1 < unaff_w22) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  puVar4 = *(undefined8 **)(unaff_x27 + 0x20);
  if (-1 < unaff_w28) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  uVar3 = *puVar4;
  if (-1 < unaff_w25) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  if (-1 < iVar2) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x26;
  pcVar5 = (code *)puVar4[2];
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x21;
  (*pcVar5)(uVar3,puVar4,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
  if (unaff_x23 == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(unaff_x23 + 0x20) = *(undefined8 *)(unaff_x29 + -0x10);
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x23 + 0x20));
    if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return *(undefined8 *)(unaff_x29 + -0x90);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


