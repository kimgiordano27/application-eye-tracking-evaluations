/*
FUNCTION_NAME: RequestPermissions$$Microphone_PermissionCallbacks_PermissionDenied
ENTRY_POINT: 07d3fc68
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions__Microphone_PermissionCallbacks_PermissionDenied(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x21);
                    /* try { // try from 07d3fcf0 to 07e3fcf7 has its CatchHandler @ 07d3fec8 */
    if ((param_1 & 1) == 0) goto LAB_07d3fcf4;
LAB_07d3fc7c:
    if (*(char *)(unaff_x22 + 0xe7b) == '\0') {
      FUN_04447ba8(PTR_DAT_09f36318);
      *(undefined1 *)(unaff_x22 + 0xe7b) = 1;
    }
    lVar2 = *unaff_x21;
                    /* try { // try from 07d3fc9c to 07e3fcc3 has its CatchHandler @ 07d3fecc */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *unaff_x21;
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) || (*(long *)(**(long **)(lVar2 + 0xb8) + 0x100) == 0))
    goto LAB_07d3fdd4;
    uVar3 = FUN_05bae1d4();
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 07d3fce0 to 07e3fce3 has its CatchHandler @ 07d3fe9c */
      return;
    }
                    /* try { // try from 07d3fd0c to 07e3fd13 has its CatchHandler @ 07d3feb4 */
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (*(char *)(unaff_x22 + 0xe7b) == '\0') {
                    /* try { // try from 07d3fd28 to 07e3fd2f has its CatchHandler @ 07d3fec0 */
      FUN_04447ba8(PTR_DAT_09f36318);
                    /* try { // try from 07d3fd30 to 07e3fd3b has its CatchHandler @ 07d3feb0 */
      *(undefined1 *)(unaff_x22 + 0xe7b) = 1;
    }
    lVar2 = *unaff_x21;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *unaff_x21;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07d3fdd4;
    lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x100);
  }
  else {
    if ((param_1 & 1) != 0) goto LAB_07d3fc7c;
LAB_07d3fcf4:
    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = unaff_x19;
        thunk_FUN_044bb4b4(puVar5);
        return;
      }
      FUN_05bade44();
      return;
    }
  }
LAB_07d3fdd4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


