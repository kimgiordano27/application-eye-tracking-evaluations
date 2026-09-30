/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<ONSPPropagationGeometry.TerrainMaterial>$$PickPivotAndPartition
ENTRY_POINT: 031524d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031526b0) */

void System_Collections_Generic_ArraySortHelper<ONSPPropagationGeometry_TerrainMaterial>__PickPivotAndPartition
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined1 auVar8 [16];
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03152524;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03152524:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_0315265c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
                    /* try { // try from 03152598 to 032525bf has its CatchHandler @ 03152748 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0315259c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0315259c:
    auVar8 = (*(code *)*puVar2)();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 031525d8 to 0325263b has its CatchHandler @ 0315274c */
      FUN_03150da4();
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      lVar3 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * 0x10;
    *(undefined1 (*) [16])(lVar3 + 0x20) = auVar8;
    thunk_FUN_01f51358(lVar3 + 0x28,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
                    /* try { // try from 03152670 to 03252733 has its CatchHandler @ 03152294 */
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03152678;
    }
  }
LAB_0315265c:
                    /* try { // try from 03152660 to 0325266f has its CatchHandler @ 03152744 */
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03152678:
  (*(code *)*puVar2)();
  return;
}


