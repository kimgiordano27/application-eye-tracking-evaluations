/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 02fec604
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  unaff_x19[1] = param_1 + 1;
  *(undefined1 *)(param_2 + param_1) = 0x5b;
  plVar5 = *(long **)(unaff_x20 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  lVar2 = unaff_x19[1];
  pvVar1 = (void *)*unaff_x19;
  uVar4 = lVar2 + 1;
  if ((ulong)unaff_x19[2] < uVar4) {
    sVar3 = unaff_x19[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    unaff_x19[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *unaff_x19 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = unaff_x19[1];
    uVar4 = lVar2 + 1;
  }
  unaff_x19[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  plVar5 = *(long **)(unaff_x20 + 0x18);
  if (1 < *(byte *)(plVar5 + 1) - 0x51) {
    lVar2 = unaff_x19[1];
    pvVar1 = (void *)*unaff_x19;
    if ((ulong)unaff_x19[2] < lVar2 + 3U) {
      sVar3 = unaff_x19[2] * 2;
      uVar4 = lVar2 + 0x3e3;
      if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
        sVar3 = uVar4;
      }
      unaff_x19[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *unaff_x19 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = unaff_x19[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar2) = 0x3d20;
    plVar5 = *(long **)(unaff_x20 + 0x18);
    unaff_x19[1] = unaff_x19[1] + 3;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02fec7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}


