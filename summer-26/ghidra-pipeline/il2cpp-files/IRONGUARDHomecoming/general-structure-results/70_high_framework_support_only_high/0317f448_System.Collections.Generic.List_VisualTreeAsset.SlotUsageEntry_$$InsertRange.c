/*
FUNCTION_NAME: System.Collections.Generic.List<VisualTreeAsset.SlotUsageEntry>$$InsertRange
ENTRY_POINT: 0317f448
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0317f6b0) */

void System_Collections_Generic_List<VisualTreeAsset_SlotUsageEntry>__InsertRange
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar10;
  undefined8 uVar11;
  
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
                    /* try { // try from 0317f468 to 0327f48f has its CatchHandler @ 0317f62c */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0317f4c0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
                    /* try { // try from 0317f4a8 to 0327f507 has its CatchHandler @ 0317f630 */
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0317f4c0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          uVar11 = param_2;
          goto LAB_0317f530;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
    uVar11 = param_2;
LAB_0317f530:
                    /* try { // try from 0317f538 to 0327f53f has its CatchHandler @ 0317f61c */
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f578 with catch @ 0317f624
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f5fc with catch @ 0317f628
                       catch(type#1 @ 042b3198) { ... } // from try @ 0317f604 with catch @ 0317f628
                        */
      if (plVar4 == (long *)0x0) {
        return;
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f468 with catch @ 0317f62c
                        */
      lVar5 = *plVar4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f4a8 with catch @ 0317f630
                        */
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_0317f65c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 0317f578 to 0327f57f has its CatchHandler @ 0317f624 */
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0317f5a8;
        }
                    /* try { // try from 0317f580 to 0327f5fb has its CatchHandler @ 0317f354 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_0317f5a8:
    uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    param_2 = uVar11;
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_0317de30();
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
                    /* try { // try from 0317f5fc to 0327f5ff has its CatchHandler @ 0317f628 */
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
                    /* try { // try from 0317f604 to 0327f607 has its CatchHandler @ 0317f628 */
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    }
                    /* try { // try from 0317f608 to 0327f60b has its CatchHandler @ 0317f354 */
                    /* try { // try from 0317f60c to 0327f60f has its CatchHandler @ 0317f618 */
                    /* try { // try from 0317f610 to 0327f647 has its CatchHandler @ 0317f354 */
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f60c with catch @ 0317f618
                        */
    lVar5 = lVar5 + (long)(int)uVar7 * 8;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f538 with catch @ 0317f61c
                        */
    *(undefined4 *)(lVar5 + 0x20) = uVar10;
    *(int *)(lVar5 + 0x24) = (int)uVar11;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317f600 with catch @ 0317f620
                        */
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0317f648 with catch @ 0317f658 */
    if (uVar8 == 0) break;
                    /* try { // try from 0317f648 to 0327f64b has its CatchHandler @ 0317f658 */
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0317f678;
    }
  }
LAB_0317f65c:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0317f678:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
                    /* try { // try from 0317f690 to 0327f6b7 has its CatchHandler @ 0317f6cc */
  return;
}


