/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 01db27e8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2978) */
/* WARNING: Removing unreachable block (ram,0x01db27a8) */
/* WARNING: Removing unreachable block (ram,0x01db27d0) */
/* WARNING: Removing unreachable block (ram,0x01db28c0) */
/* WARNING: Removing unreachable block (ram,0x01db27e4) */
/* WARNING: Removing unreachable block (ram,0x01db2854) */

uint OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint in_w8;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w25;
  int iVar4;
  long lVar5;
  uint unaff_w26;
  long *unaff_x27;
  uint unaff_w28;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = unaff_w26 & unaff_w25;
  if (in_w8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  lVar5 = *(long *)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
  thunk_FUN_00ffe618();
  *unaff_x22 = lVar5;
  thunk_FUN_0106e12c();
  if (*unaff_x22 == 0) {
    iVar4 = 2;
  }
  else {
    lVar5 = *(long *)(unaff_x23 + 0x10);
    thunk_FUN_00ffe618();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *puVar3 = 0;
    thunk_FUN_0106e12c(puVar3,0);
    unaff_w28 = 1;
    iVar4 = 7;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dad12c();
  }
  if (iVar4 == 2) {
    iVar4 = *(int *)(unaff_x23 + 0x1c);
    thunk_FUN_00ffe618();
    iVar2 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_00ffe618();
    if (iVar4 < iVar2) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01daccc0();
      unaff_w28 = 0;
      *in_stack_00000000 = 1;
      goto LAB_01db2954;
    }
  }
  else if (iVar4 == 7) goto LAB_01db2954;
  unaff_w28 = 0;
LAB_01db2954:
  return unaff_w28 & 1;
}


