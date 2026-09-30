/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetDrawCount
ENTRY_POINT: 03166ac4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03166d9c) */

void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetDrawCount
               (ulong param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
    *(undefined1 *)(unaff_x22 + 0x9fa) = 1;
  }
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar6 = *param_3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03166b74;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(param_3,lVar5,0);
LAB_03166b74:
  puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
  plVar4 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
  puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03166be8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar2,0);
LAB_03166be8:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_03166d44;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03166c60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar5,0);
LAB_03166c60:
    (*(code *)*puVar3)(&stack0x00000030,plVar4,puVar3[1]);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000088 = in_stack_00000058;
    in_stack_00000080 = in_stack_00000050;
    lVar5 = *(long *)(param_2 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar7 = *(uint *)(param_2 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_03165324(param_2,uVar7 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78));
      lVar5 = *(long *)(param_2 + 0x10);
      uVar7 = *(uint *)(param_2 + 0x18);
    }
    *(uint *)(param_2 + 0x18) = uVar7 + 1;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 0x30;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar5 + 0x48) = in_stack_00000088;
    *(undefined8 *)(lVar5 + 0x40) = in_stack_00000080;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000060;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03166d60;
    }
  }
LAB_03166d44:
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar1,0);
LAB_03166d60:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


