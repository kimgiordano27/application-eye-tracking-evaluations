/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 06da7c80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar8;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar9;
  uint unaff_w26;
  long in_stack_00000008;
  
  *(uint *)(unaff_x23 + (ulong)unaff_w20 * 4 + 0x20) = in_w8;
  if (((int)in_w8 < unaff_w24) ||
     (uVar4 = (uint)(short)((short)(unaff_w20 - 1) + (short)((int)(unaff_w20 - 1) / 3) * -3),
     (int)uVar4 < 0)) {
LAB_06da7ed4:
    lVar3 = *(long *)(unaff_x19 + 0x158);
    if (lVar3 != 0) {
      uVar9 = (long)unaff_w24;
      while( true ) {
        if (uVar9 == 0xc) {
          if (*(uint *)(lVar3 + 0x18) < 0xe) goto LAB_06da8184;
          uVar9 = 0;
          goto LAB_06da8044;
        }
        if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar9 + 1) ||
           (*(uint *)(lVar3 + 0x18) <= (uint)uVar9)) goto LAB_06da8184;
        if (unaff_x23 == 0) break;
        uVar8 = 0;
        do {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_06da8184;
          if ((long)*(int *)(unaff_x23 + 0x20 + uVar8 * 4) < (long)uVar9) {
            lVar3 = *(long *)(unaff_x19 + 0x180);
            if (lVar3 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06da8184;
            lVar3 = *(long *)(lVar3 + 0x28);
            if (lVar3 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_06da8184;
            lVar3 = *(long *)(lVar3 + uVar8 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_06da8184;
            if (*(int *)(lVar3 + uVar9 * 4 + 0x20) == 7) goto LAB_06da7f88;
            if ((unaff_x22 & 1) == 0) {
              FUN_06da8f08();
            }
            else {
              lVar3 = *(long *)(unaff_x19 + 0xf8);
              if (lVar3 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_06da8184;
              lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_06da8024;
              if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06da8184;
              FUN_06da8d60();
            }
          }
          else {
LAB_06da7f88:
            if ((unaff_w21 >> 1 & 1) == 0) {
              FUN_06da8cc0();
            }
            else {
              FUN_06da8bb4();
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
        lVar3 = *(long *)(unaff_x19 + 0x158);
        uVar9 = uVar9 + 1;
        if (lVar3 == 0) break;
      }
    }
  }
  else if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= uVar4) goto LAB_06da8184;
      puVar5 = (uint *)(unaff_x23 + (ulong)uVar4 * 4 + 0x20);
      if (*puVar5 == 0xffffffff) {
        lVar3 = *(long *)(unaff_x19 + 0x158);
        if (lVar3 == 0) break;
        if ((*(uint *)(lVar3 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar3 + 0x18) <= in_w8))
        goto LAB_06da8184;
        iVar2 = *(int *)(lVar3 + 0x20 + (long)(int)in_w8 * 4);
        iVar7 = *(int *)(lVar3 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar2;
        uVar6 = iVar2 * 3 + iVar7 * (uVar4 + 1);
        do {
          iVar7 = iVar7 + -1;
          uVar6 = uVar6 - 1;
          if (iVar7 < -1) goto LAB_06da7ea0;
          lVar3 = *(long *)(unaff_x19 + 0x188);
          if (lVar3 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06da8184;
          lVar3 = *(long *)(lVar3 + 0x28);
          if (lVar3 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_06da8184;
        } while (*(float *)(lVar3 + (long)(int)uVar6 * 4 + 0x20) == 0.0);
        *puVar5 = in_w8;
LAB_06da7ea0:
        in_w8 = in_w8 - (uVar4 == 0);
      }
      else if (*(int *)(unaff_x23 + 0x20) != -1) {
        if (uVar1 < 2) goto LAB_06da8184;
        if (*(int *)(unaff_x23 + 0x24) != -1) {
          if (uVar1 < 3) goto LAB_06da8184;
          if (*(int *)(unaff_x23 + 0x28) != -1) goto LAB_06da7ed4;
        }
      }
      if (((int)in_w8 < unaff_w24) || (uVar4 = (int)(uVar4 - 1) % 3, (int)uVar4 < 0))
      goto LAB_06da7ed4;
    } while( true );
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar3 = *(long *)(unaff_x19 + 0x180);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar3 = *(long *)(lVar3 + 0x28);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) <= uVar9) goto LAB_06da8184;
  lVar3 = *(long *)(lVar3 + uVar9 * 8 + 0x20);
  if (lVar3 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar3 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar3 + 0x4c) == 7) {
    if ((unaff_w21 >> 1 & 1) == 0) {
      FUN_06da8cc0();
    }
    else {
      FUN_06da8bb4();
    }
  }
  else if ((unaff_x22 & 1) == 0) {
    FUN_06da8f08();
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0xf8);
    if (lVar3 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar3 = *(long *)(lVar3 + in_stack_00000008 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_06da8024;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar9 = uVar9 + 1;
  if (uVar9 == 3) {
    return;
  }
  goto LAB_06da8044;
}


