/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01f14ff0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  thunk_FUN_01afaadc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74(lVar2);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_01f15090;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01f15090:
  (*(code *)*puVar1)();
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  thunk_FUN_01afaadc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74(lVar2);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_01f1513c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01f1513c:
  (*(code *)*puVar1)();
  thunk_FUN_01afaadc(*(undefined8 *)
                      Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
  FUN_02fd7524();
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74(lVar2);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_01f151dc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01f151dc:
                    /* WARNING: Could not recover jumptable at 0x01f151f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


