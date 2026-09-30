/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 0316661c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
code_r0x0316661c:
  if (unaff_x21 < (long)param_1) goto LAB_031665bc;
  do {
    iVar3 = (int)param_1;
    uVar6 = (uint)unaff_x21;
    if ((int)uVar6 < iVar3) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_031666b8;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_031666bc;
      lVar5 = lVar4 + (long)(int)uVar6 * (long)unaff_w22;
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      uVar11 = *(undefined8 *)(lVar5 + 0x28);
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(lVar4 + 0x18) <= unaff_w23) goto LAB_031666bc;
      lVar4 = lVar4 + (long)(int)unaff_w23 * (long)unaff_w22;
      unaff_w23 = unaff_w23 + 1;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(lVar4 + 0x30) = uVar9;
      *(undefined8 *)(lVar4 + 0x48) = uVar8;
      *(undefined8 *)(lVar4 + 0x40) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar11;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
    }
    if (iVar3 <= (int)uVar6) {
      *(uint *)(unaff_x19 + 0x18) = unaff_w23;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - unaff_w23;
    }
    unaff_x24 = (long)(int)uVar6 * (long)unaff_w22 + 0x20;
    unaff_x21 = (long)(int)uVar6;
LAB_031665bc:
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_031666b8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x21) {
LAB_031666bc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_031666b8;
    in_stack_00000060 = *puVar1;
    in_stack_00000068 = puVar1[1];
    in_stack_00000070 = puVar1[2];
    in_stack_00000078 = puVar1[3];
    in_stack_00000080 = puVar1[4];
    in_stack_00000088 = puVar1[5];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
  unaff_x21 = unaff_x21 + 1;
  unaff_x24 = unaff_x24 + 0x30;
  goto code_r0x0316661c;
}


