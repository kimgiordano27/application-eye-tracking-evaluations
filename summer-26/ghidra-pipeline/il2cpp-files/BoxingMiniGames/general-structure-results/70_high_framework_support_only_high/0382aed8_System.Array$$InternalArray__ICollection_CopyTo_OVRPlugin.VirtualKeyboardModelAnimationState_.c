/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0382aed8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0382afdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x20;
  char cStack000000000000001c;
  undefined8 uStack0000000000000028;
  
  *(undefined1 *)(unaff_x19 + 0x5b1) = 1;
  lVar1 = *unaff_x20;
  uStack0000000000000028 = 0;
  cStack000000000000001c = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar1 = *unaff_x20;
  }
  if (0 < **(int **)(lVar1 + 0xb8)) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar1 = *unaff_x20;
    }
    plVar2 = (long *)FUN_0364297c(lVar1);
    if (*plVar2 != 0) {
      lVar1 = *unaff_x20;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar1 = *unaff_x20;
      }
      puVar3 = (undefined8 *)FUN_0364297c(lVar1);
      uVar5 = *puVar3;
      puVar3 = (undefined8 *)FUN_0364297c(*unaff_x20);
      *puVar3 = 0;
      uVar4 = FUN_0364297c(*unaff_x20);
      thunk_FUN_036b7ad0(uVar4,0);
      cStack000000000000001c = '\0';
      uStack0000000000000028 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
      FUN_05e7c56c(uStack0000000000000028,&stack0x0000001c,0);
      lVar1 = *unaff_x20;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar1 = *unaff_x20;
      }
      **(int **)(lVar1 + 0xb8) = **(int **)(lVar1 + 0xb8) + -1;
      if (cStack000000000000001c == '\0') {
        return uVar5;
      }
      thunk_FUN_036509ac(uStack0000000000000028,0);
      return uVar5;
    }
  }
  return 0;
}


