/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<FingerFeatureStateProvider.FingerStateThresholds>$$DownHeap
ENTRY_POINT: 0313a920
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0313ab1c) */

void System_Collections_Generic_ArraySortHelper<FingerFeatureStateProvider_FingerStateThresholds>__DownHeap
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = (undefined8 *)FUN_01ecb238();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* try { // try from 0313a938 to 0323a943 has its CatchHandler @ 0313aa14 */
                    /* try { // try from 0313a944 to 0323aa03 has its CatchHandler @ 0313a580 */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0313a9a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0313a9a4:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_0313aac8;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0313aa04 with catch @ 0313aa10
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0313a938 with catch @ 0313aa14
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0313a880 with catch @ 0313aa18
                        */
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0313aa1c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 0313aa04 to 0323aa07 has its CatchHandler @ 0313aa10 */
                    /* try { // try from 0313aa08 to 0323aa33 has its CatchHandler @ 0313a580 */
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_0313aa1c:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0313a8c0 with catch @ 0313aa1c
                        */
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar6 = *(long *)(unaff_x21 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = *(uint *)(unaff_x21 + 0x18);
                    /* try { // try from 0313aa34 to 0323aa37 has its CatchHandler @ 0313aa4c */
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
                    /* catch() { ... } // from try @ 0313aa34 with catch @ 0313aa4c */
      FUN_03139308();
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20) = uVar5;
                    /* try { // try from 0313aa8c to 0323aab3 has its CatchHandler @ 0313aac8 */
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
                    /* try { // try from 0313aac0 to 0323aac7 has its CatchHandler @ 0313aac8 */
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
                    /* try { // try from 0313aab4 to 0323aabf has its CatchHandler @ 0313a580 */
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0313aae4;
    }
  }
LAB_0313aac8:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313aa8c with catch @ 0313aac8
                       catch(type#2 @ 00000000) { ... } // from try @ 0313aac0 with catch @ 0313aac8
                        */
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0313aae4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


