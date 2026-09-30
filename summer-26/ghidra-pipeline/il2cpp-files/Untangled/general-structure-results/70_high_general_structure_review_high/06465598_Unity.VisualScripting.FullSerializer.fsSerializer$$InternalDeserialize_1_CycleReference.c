/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$InternalDeserialize_1_CycleReference
ENTRY_POINT: 06465598
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__InternalDeserialize_1_CycleReference
               (long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x23;
  
                    /* try { // try from 06465598 to 0656559b has its CatchHandler @ 06466824 */
  if ((*(byte *)(unaff_x23 + 0xab5) & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Vector3>_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0xab5) = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x518))
                             (param_1,param_3,*(undefined8 *)(*param_1 + 0x520));
  puVar1 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar2;
                    /* try { // try from 064655fc to 06565603 has its CatchHandler @ 06466838 */
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo) {
                    /* try { // try from 0646563c to 0656569f has its CatchHandler @ 0646513c */
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_06465648;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 06465620 to 0656563b has its CatchHandler @ 064669e0 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02eea86c(plVar2,*(long *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo,1);
LAB_06465648:
  (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* try { // try from 064656a0 to 065656a7 has its CatchHandler @ 0646694c */
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_064656a8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*(long *)puVar1,0xb);
LAB_064656a8:
  (*(code *)*puVar3)(plVar2,param_4,puVar3[1]);
                    /* try { // try from 064656bc to 065656bf has its CatchHandler @ 06466860 */
                    /* try { // try from 064656c0 to 0656571b has its CatchHandler @ 0646513c */
  lVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x4c0));
  if (lVar5 != 0) {
    uVar8 = *(undefined8 *)System_Collections_Generic_HashSet<Vector3>_TypeInfo;
    lVar4 = thunk_FUN_02ef170c(lVar5,uVar8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar5,uVar8);
    }
  }
  return;
}


