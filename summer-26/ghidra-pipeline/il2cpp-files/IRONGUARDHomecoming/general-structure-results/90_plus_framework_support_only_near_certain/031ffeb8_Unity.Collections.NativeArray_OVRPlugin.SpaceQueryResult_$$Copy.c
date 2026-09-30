/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 031ffeb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x031ffff4) */
/* WARNING: Removing unreachable block (ram,0x031ffff0) */
/* WARNING: Removing unreachable block (ram,0x03200038) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(code *param_1)

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
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  
                    /* try { // try from 031ffeb8 to 032ffedb has its CatchHandler @ 031ffd3c */
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 031ffedc to 032ffef3 has its CatchHandler @ 031fff8c */
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
                    /* try { // try from 031ffef4 to 032fff07 has its CatchHandler @ 031ffd3c */
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
                    /* try { // try from 031fff20 to 032fff7b has its CatchHandler @ 031ffd3c */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031ffe68;
        }
        uVar1 = uVar1 - 1;
                    /* try { // try from 031fff08 to 032fff1f has its CatchHandler @ 031fff8c */
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031ffe68:
    (*(code *)*puVar2)(&stack0x00000020);
    FUN_031ff904();
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031ffeb4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031ffeb4:
    param_1 = (code *)*puVar2;
  }
                    /* try { // try from 031fff7c to 032fff8b has its CatchHandler @ 031fff8c */
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
                    /* catch() { ... } // from try @ 031ffea0 with catch @ 031fff8c
                       catch() { ... } // from try @ 031ffedc with catch @ 031fff8c
                       catch() { ... } // from try @ 031fff08 with catch @ 031fff8c
                       catch() { ... } // from try @ 031fff7c with catch @ 031fff8c */
                    /* try { // try from 031fff90 to 032fff93 has its CatchHandler @ 031fff9c */
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 031fff94 to 032fff9f has its CatchHandler @ 031ffd3c */
    if (uVar1 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031fff90 with catch @ 031fff9c
                        */
                    /* catch() { ... } // from try @ 03200028 with catch @ 031fffa0
                       catch() { ... } // from try @ 03200074 with catch @ 031fffa0
                       catch() { ... } // from try @ 032000a0 with catch @ 031fffa0
                       catch() { ... } // from try @ 03200114 with catch @ 031fffa0 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031fffd8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031fffd8:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


