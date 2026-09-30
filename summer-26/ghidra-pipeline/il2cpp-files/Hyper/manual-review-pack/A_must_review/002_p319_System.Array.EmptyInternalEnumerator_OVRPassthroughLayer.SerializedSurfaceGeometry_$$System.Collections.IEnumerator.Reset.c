/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 087b0564
PROGRAM: Hyper-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x087b072c) */

void System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000058;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_087b059c;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_3,0);
LAB_087b059c:
      uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (in_stack_00000058 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000058;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_087b06c8;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
        ;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34(lVar3);
      }
      lVar4 = *in_stack_00000058;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_087b0620;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000058,lVar3,0);
LAB_087b0620:
      (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
      System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__MoveNext();
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      param_1 = *in_stack_00000058;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x21 = in_stack_00000058;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;

    System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
    :
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_087b06e4;
    }
  }
LAB_087b06c8:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000058,*(long *)PTR_DAT_0ac09b90,0);
LAB_087b06e4:
  (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
  return;
}


