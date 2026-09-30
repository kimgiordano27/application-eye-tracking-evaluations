/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 04192184
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_ToDisplayStringsDelegate(void)

{
  undefined *puVar1;
  bool in_ZR;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  lVar3 = thunk_FUN_02cea9e8();
  puVar1 = PTR_DAT_065e0620;
  in_stack_00000028 = *(undefined8 *)(lVar3 + 0x10);
  in_stack_00000020 = *(undefined8 *)(lVar3 + 8);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065e0620) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_041921fc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_041921fc:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x10);
    in_stack_00000010 = *(undefined8 *)(unaff_x21 + 8);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978(lVar3);
    }
    thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041922c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_041922c0:
    (*(code *)*puVar4)();
  }
  return;
}


