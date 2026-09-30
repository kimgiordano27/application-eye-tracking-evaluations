/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$<Write>b__94_0
ENTRY_POINT: 032925dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03292718) */
/* WARNING: Removing unreachable block (ram,0x03292714) */
/* WARNING: Removing unreachable block (ram,0x0329275c) */

void Meta_WitAi_WitRequest__<Write>b__94_0(code *param_1)

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
  undefined8 in_stack_00000030;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
                    /* try { // try from 032925e8 to 033925eb has its CatchHandler @ 03292618 */
                    /* try { // try from 032925ec to 033925ef has its CatchHandler @ 0329260c */
                    /* try { // try from 032925f0 to 033925f3 has its CatchHandler @ 03292618 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 032925f4 to 033925f7 has its CatchHandler @ 032922ec */
                    /* try { // try from 032925f8 to 033925fb has its CatchHandler @ 03292604 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 032925fc to 03392633 has its CatchHandler @ 032922ec */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* catch() { ... } // from try @ 032925f8 with catch @ 03292604 */
    }
                    /* catch() { ... } // from try @ 032924f8 with catch @ 03292608 */
    lVar4 = *unaff_x23;
                    /* catch() { ... } // from try @ 032925ec with catch @ 0329260c */
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 0329255c with catch @ 03292610 */
    if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 0329241c with catch @ 03292614 */
                    /* catch() { ... } // from try @ 032925e8 with catch @ 03292618
                       catch() { ... } // from try @ 032925f0 with catch @ 03292618 */
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0329245c with catch @ 0329261c */
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0329258c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0329258c:
    (*(code *)*puVar2)(&stack0x00000020);
    FUN_03292018();
    lVar3 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_032925d8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_032925d8:
    param_1 = (code *)*puVar2;
  }
                    /* try { // try from 032926a4 to 033926af has its CatchHandler @ 032922ec */
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
                    /* try { // try from 032926b0 to 033926b7 has its CatchHandler @ 032926b8 */
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 0329267c with catch @ 032926b8
                       catch() { ... } // from try @ 032926b0 with catch @ 032926b8 */
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_032926fc;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_032926fc:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


