/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IList.Contains
ENTRY_POINT: 030f69b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x030f6afc) */
/* WARNING: Removing unreachable block (ram,0x030f6af8) */
/* WARNING: Removing unreachable block (ram,0x030f6b40) */

void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IList_Contains
               (long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
code_r0x030f69b8:
                    /* try { // try from 030f69b8 to 031f6b67 has its CatchHandler @ 030f69b8
                       catch() { ... } // from try @ 030f69b8 with catch @ 030f69b8
                       catch() { ... } // from try @ 030f6bf0 with catch @ 030f69b8
                       catch() { ... } // from try @ 030f6c04 with catch @ 030f69b8
                       catch() { ... } // from try @ 030f6c40 with catch @ 030f69b8
                       catch() { ... } // from try @ 030f6c7c with catch @ 030f69b8 */
  puVar2 = (undefined8 *)(param_1 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto 
          System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__Contains;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__Contains:
    (*(code *)*puVar2)(&stack0x00000030);
    FUN_030f640c();
    param_1 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          param_1 = param_1 + (long)*piVar5 * 0x10;
          goto code_r0x030f69b8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
  }
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_030f6ae0;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_030f6ae0:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


