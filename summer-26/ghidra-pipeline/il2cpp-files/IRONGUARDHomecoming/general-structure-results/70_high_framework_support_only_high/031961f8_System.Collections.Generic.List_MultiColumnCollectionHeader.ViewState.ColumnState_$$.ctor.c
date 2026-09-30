/*
FUNCTION_NAME: System.Collections.Generic.List<MultiColumnCollectionHeader.ViewState.ColumnState>$$.ctor
ENTRY_POINT: 031961f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03196490) */

void System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  uint uVar7;
  long *plVar8;
  long unaff_x29;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03196250;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03196250:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_03196444;
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_0319641c;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_031962c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_031962c8:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(plVar8 + 3)) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))();
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      plVar8 = *(long **)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
      memcpy(unaff_x23,unaff_x24,unaff_x22);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
      memcpy(unaff_x23,unaff_x24,unaff_x22);
    }
                    /* try { // try from 0319636c to 032963b7 has its CatchHandler @ 0319636c
                       catch() { ... } // from try @ 0319636c with catch @ 0319636c
                       catch() { ... } // from try @ 03196438 with catch @ 0319636c
                       catch() { ... } // from try @ 03196468 with catch @ 0319636c
                       catch() { ... } // from try @ 031964e8 with catch @ 0319636c */
    if (*(uint *)(plVar8 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    memcpy((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar7 + 0x20),
           unaff_x23,unaff_x22);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
                    /* try { // try from 031963b8 to 03296437 has its CatchHandler @ 03196438 */
    if (*(uint *)(plVar8 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    FUN_01f087b0(lVar3,(long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar7 + 0x20);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03196438;
    }
  }
LAB_0319641c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03196438:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031963b8 with catch @ 03196438
                       try { // try from 03196438 to 0329644f has its CatchHandler @ 0319636c */
  (*(code *)*puVar2)();
LAB_03196444:
                    /* try { // try from 03196450 to 03296467 has its CatchHandler @ 031964e0 */
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* try { // try from 03196468 to 032964cf has its CatchHandler @ 0319636c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


