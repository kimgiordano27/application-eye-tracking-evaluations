/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$AddEnumerable
ENTRY_POINT: 044aff8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__AddEnumerable
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_044affe4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_044affe4:
    (*(code *)*puVar1)();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fc8594();
  }
  if (unaff_w24 != 5) {
    if (unaff_w24 != 0) {
      return;
    }
    System_Collections_Generic_List<OVRRaycaster_RaycastHit>__System_Collections_Generic_ICollection<T>_get_IsReadOnly
              ();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


