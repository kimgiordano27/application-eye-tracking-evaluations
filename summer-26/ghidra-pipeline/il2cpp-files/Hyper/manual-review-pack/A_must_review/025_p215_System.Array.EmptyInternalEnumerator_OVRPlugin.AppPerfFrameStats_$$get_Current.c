/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 087b0654
PROGRAM: Hyper-libil2cpp.so
SCORE: 138
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x087b072c) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_x9;
  int *piVar5;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000040;
  long *in_stack_00000058;
  
  do {
    uStack0000000000000040 = in_x9;
    System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__MoveNext();
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *in_stack_00000058;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_087b059c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000058,*unaff_x22,0);
LAB_087b059c:
    uVar4 = (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000058;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_087b06c8;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34(lVar2);
    }
    lVar3 = *in_stack_00000058;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_087b0620;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000058,lVar2,0);
LAB_087b0620:
    (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
    in_x9 = *(undefined8 *)(unaff_x23 + 0x14);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_087b06e4;
    }
  }
LAB_087b06c8:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000058,*(long *)PTR_DAT_0ac09b90,0);
LAB_087b06e4:
  (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
  return;
}


