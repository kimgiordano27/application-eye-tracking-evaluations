/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 019509f0
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__Insert<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int in_w8;
  int unaff_w19;
  long *unaff_x20;
  long lVar6;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
    param_1 = *unaff_x20;
  }
  puVar2 = PTR_DAT_037f3410;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (lVar6 != 0) {
                    /* try { // try from 01950a10 to 01a50a47 has its CatchHandler @ 01950a10
                       catch() { ... } // from try @ 01950a10 with catch @ 01950a10
                       catch() { ... } // from try @ 01950a50 with catch @ 01950a10 */
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    (**(code **)(lVar6 + 0x18))
              (*(undefined8 *)(lVar6 + 0x40),
               *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x74) == unaff_w19,
               *(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = PTR_DAT_037f58b8;
  puVar3 = PTR_DAT_037f58b0;
  puVar1 = (undefined8 *)PTR_DAT_037f57b8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar6 = *(long *)puVar2;
  }
  if (*(int *)(*(long *)(lVar6 + 0xb8) + 0x74) != unaff_w19) {
    puVar1 = (undefined8 *)puVar3;
  }
  uVar5 = FUN_02a43498(*(undefined8 *)puVar4,*puVar1,0);
  FUN_0190a1d4(uVar5,0);
  return;
}


