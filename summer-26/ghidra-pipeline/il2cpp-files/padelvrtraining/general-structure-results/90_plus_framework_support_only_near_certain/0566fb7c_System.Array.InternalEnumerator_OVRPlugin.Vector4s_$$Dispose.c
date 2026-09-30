/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0566fb7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fd28) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  do {
    uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fbc4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_0566fbc4:
    uVar9 = (*(code *)*puVar6)();
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
    }
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fc48;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_0566fc48:
    (*(code *)*puVar6)(&stack0x00000060);
    uVar5 = in_stack_00000080;
    uVar4 = in_stack_00000078;
    uVar3 = in_stack_00000070;
    uVar2 = in_stack_00000068;
    uVar1 = in_stack_00000060;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000060 = uVar1;
    in_stack_00000068 = uVar2;
    in_stack_00000070 = uVar3;
    in_stack_00000078 = uVar4;
    in_stack_00000080 = uVar5;
    FUN_0566f734();
    param_1 = *unaff_x19;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fcfc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_0566fcfc:
    (*(code *)*puVar6)();
  }
  return;
}


