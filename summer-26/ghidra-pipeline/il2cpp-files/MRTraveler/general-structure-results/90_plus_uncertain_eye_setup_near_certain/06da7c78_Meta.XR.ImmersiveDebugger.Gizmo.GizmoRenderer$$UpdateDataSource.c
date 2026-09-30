/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$UpdateDataSource
ENTRY_POINT: 06da7c78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__UpdateDataSource(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long in_x10;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar10;
  uint unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar11;
  uint unaff_w26;
  long in_stack_00000008;
  
  bVar3 = *(byte *)(param_1 + in_x10 + 0x20);
  uVar4 = (uint)bVar3;
  *(uint *)(unaff_x23 + (ulong)unaff_w20 * 4 + 0x20) = (uint)bVar3;
  if (((int)(uint)bVar3 < unaff_w24) ||
     (uVar6 = (uint)(short)((short)(unaff_w20 - 1) + (short)((int)(unaff_w20 - 1) / 3) * -3),
     (int)uVar6 < 0)) {
LAB_06da7ed4:
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 != 0) {
      uVar11 = (long)unaff_w24;
      while( true ) {
        if (uVar11 == 0xc) {
          if (*(uint *)(lVar5 + 0x18) < 0xe) goto LAB_06da8184;
          uVar11 = 0;
          goto LAB_06da8044;
        }
        if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar11 + 1) ||
           (*(uint *)(lVar5 + 0x18) <= (uint)uVar11)) goto LAB_06da8184;
        if (unaff_x23 == 0) break;
        uVar10 = 0;
        do {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_06da8184;
          if ((long)*(int *)(unaff_x23 + 0x20 + uVar10 * 4) < (long)uVar11) {
            lVar5 = *(long *)(unaff_x19 + 0x180);
            if (lVar5 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da8184;
            lVar5 = *(long *)(lVar5 + 0x28);
            if (lVar5 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_06da8184;
            lVar5 = *(long *)(lVar5 + uVar10 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_06da8024;
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar11) goto LAB_06da8184;
            if (*(int *)(lVar5 + uVar11 * 4 + 0x20) == 7) goto LAB_06da7f88;
            if ((unaff_x22 & 1) == 0) {
              FUN_06da8f08();
            }
            else {
              lVar5 = *(long *)(unaff_x19 + 0xf8);
              if (lVar5 == 0) goto LAB_06da8024;
              if (*(uint *)(lVar5 + 0x18) <= unaff_w26) goto LAB_06da8184;
              lVar5 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
              if (lVar5 == 0) goto LAB_06da8024;
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da8184;
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
          uVar10 = uVar10 + 1;
        } while (uVar10 != 3);
        lVar5 = *(long *)(unaff_x19 + 0x158);
        uVar11 = uVar11 + 1;
        if (lVar5 == 0) break;
      }
    }
  }
  else if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= uVar6) goto LAB_06da8184;
      puVar7 = (uint *)(unaff_x23 + (ulong)uVar6 * 4 + 0x20);
      if (*puVar7 == 0xffffffff) {
        lVar5 = *(long *)(unaff_x19 + 0x158);
        if (lVar5 == 0) break;
        if ((*(uint *)(lVar5 + 0x18) <= uVar4 + 1) || (*(uint *)(lVar5 + 0x18) <= uVar4))
        goto LAB_06da8184;
        iVar2 = *(int *)(lVar5 + 0x20 + (long)(int)uVar4 * 4);
        iVar9 = *(int *)(lVar5 + 0x20 + (long)(int)(uVar4 + 1) * 4) - iVar2;
        uVar8 = iVar2 * 3 + iVar9 * (uVar6 + 1);
        do {
          iVar9 = iVar9 + -1;
          uVar8 = uVar8 - 1;
          if (iVar9 < -1) goto LAB_06da7ea0;
          lVar5 = *(long *)(unaff_x19 + 0x188);
          if (lVar5 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da8184;
          lVar5 = *(long *)(lVar5 + 0x28);
          if (lVar5 == 0) goto LAB_06da8024;
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_06da8184;
        } while (*(float *)(lVar5 + (long)(int)uVar8 * 4 + 0x20) == 0.0);
        *puVar7 = uVar4;
LAB_06da7ea0:
        uVar4 = uVar4 - (uVar6 == 0);
      }
      else if (*(int *)(unaff_x23 + 0x20) != -1) {
        if (uVar1 < 2) goto LAB_06da8184;
        if (*(int *)(unaff_x23 + 0x24) != -1) {
          if (uVar1 < 3) goto LAB_06da8184;
          if (*(int *)(unaff_x23 + 0x28) != -1) goto LAB_06da7ed4;
        }
      }
      if (((int)uVar4 < unaff_w24) || (uVar6 = (int)(uVar6 - 1) % 3, (int)uVar6 < 0))
      goto LAB_06da7ed4;
    } while( true );
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06da8044:
  lVar5 = *(long *)(unaff_x19 + 0x180);
  if (lVar5 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar5 + 0x18) < 2) {
LAB_06da8184:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  if (lVar5 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_06da8184;
  lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
  if (lVar5 == 0) goto LAB_06da8024;
  if (*(uint *)(lVar5 + 0x18) < 0xc) goto LAB_06da8184;
  if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_06da8024;
  if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xc) goto LAB_06da8184;
  if (*(int *)(lVar5 + 0x4c) == 7) {
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
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    if (lVar5 == 0) goto LAB_06da8024;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w26) goto LAB_06da8184;
    lVar5 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_06da8024;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06da8184;
    FUN_06da8d60();
  }
  uVar11 = uVar11 + 1;
  if (uVar11 == 3) {
    return;
  }
  goto LAB_06da8044;
}


