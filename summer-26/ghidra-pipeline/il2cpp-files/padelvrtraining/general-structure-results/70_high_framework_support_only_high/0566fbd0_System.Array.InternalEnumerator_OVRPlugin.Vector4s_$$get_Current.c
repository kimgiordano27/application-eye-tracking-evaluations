/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 0566fbd0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fd28) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
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
  
  while ((param_1 & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fc48;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_0566fc48:
                    /* try { // try from 0566fc48 to 0576fc4b has its CatchHandler @ 0566fc54 */
                    /* try { // try from 0566fc4c to 0576fc77 has its CatchHandler @ 0566f9cc */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0566fc48 with catch @ 0566fc54
                        */
    (*(code *)*puVar7)(&stack0x00000060);
    uVar5 = in_stack_00000080;
    uVar4 = in_stack_00000078;
    uVar3 = in_stack_00000070;
    uVar2 = in_stack_00000068;
    uVar1 = in_stack_00000060;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0566fb84 with catch @ 0566fc58
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0566fad0 with catch @ 0566fc5c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0566fb10 with catch @ 0566fc60
                        */
                    /* try { // try from 0566fc78 to 0576fc7b has its CatchHandler @ 0566fc88 */
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000060 = uVar1;
    in_stack_00000068 = uVar2;
    in_stack_00000070 = uVar3;
    in_stack_00000078 = uVar4;
    in_stack_00000080 = uVar5;
                    /* catch() { ... } // from try @ 0566fc78 with catch @ 0566fc88 */
    FUN_0566f734();
    lVar6 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fbc4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_0566fbc4:
    param_1 = (*(code *)*puVar7)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0566fcfc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_0566fcfc:
    (*(code *)*puVar7)();
  }
  return;
}


