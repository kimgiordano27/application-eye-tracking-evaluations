/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 03ccf8c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ccfa3c) */

uint System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03ccf904;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ccf904:
      uVar1 = (*(code *)*puVar2)();
      if ((uVar1 & 1) == 0) {
LAB_03ccf9b4:
        if (unaff_x19 == (long *)0x0) goto code_r0x03ccfa1c;
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_03ccf9f0;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03ccf9d8;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03ccf980;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ccf980:
      (*(code *)*puVar2)();
      uVar5 = FUN_03ccca58();
      if ((uVar5 & 1) == 0) goto LAB_03ccf9b4;
      param_1 = *unaff_x19;
      param_3 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03ccf9d8:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03ccfa0c;
    }
  }
LAB_03ccf9f0:
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ccfa0c:
  (*(code *)*puVar2)();
code_r0x03ccfa1c:
  return (uVar1 ^ 1) & 1;
}


