/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeSceneData.SerializableBoundItem>$$get_Current
ENTRY_POINT: 02b596b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02b59808) */

void System_Array_EmptyInternalEnumerator<ProbeVolumeSceneData_SerializableBoundItem>__get_Current
               (code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
                    /* try { // try from 02b596c4 to 02c596c7 has its CatchHandler @ 02b59848 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
                    /* try { // try from 02b596e4 to 02c596e7 has its CatchHandler @ 02b59844 */
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b59664;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02b59664:
    (*(code *)*puVar2)();
    FUN_02b5a5ac();
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<ProbeVolumeSceneData_SerializableBoundItem>__MoveNext
          ;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
System_Array_EmptyInternalEnumerator<ProbeVolumeSceneData_SerializableBoundItem>__MoveNext:
    param_1 = (code *)*puVar2;
  }
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 02b59774 to 02c59777 has its CatchHandler @ 02b59858 */
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 02b59798 to 02c597b7 has its CatchHandler @ 02b59830 */
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 02b597b8 to 02c597df has its CatchHandler @ 02b59648 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b597c4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02b597c4:
    (*(code *)*puVar2)();
  }
  return;
}


