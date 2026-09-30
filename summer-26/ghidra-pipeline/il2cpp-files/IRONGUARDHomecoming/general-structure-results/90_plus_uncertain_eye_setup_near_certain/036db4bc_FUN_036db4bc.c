/*
FUNCTION_NAME: FUN_036db4bc
ENTRY_POINT: 036db4bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x036db754) */

void FUN_036db4bc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  
  if ((DAT_04834303 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__0__
                      );
                    /* try { // try from 036db4e8 to 037db4ef has its CatchHandler @ 036db560 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036db46c with catch @ 036db4f0
                       try { // try from 036db4f0 to 037db51b has its CatchHandler @ 036db42c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036db464 with catch @ 036db4fc
                        */
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__1__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036db448 with catch @ 036db500
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
                    /* try { // try from 036db51c to 037db51f has its CatchHandler @ 036db558 */
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass74_0_<DOBlendableRotateBy>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass74_0_<DOBlendableRotateBy>b__1__
                      );
    DAT_04834303 = 1;
  }
                    /* try { // try from 036db538 to 037db557 has its CatchHandler @ 036db5cc */
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_036d9948(param_1,*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass74_0_<DOBlendableRotateBy>b__1__
                  );
      return;
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar5 = (long *)FUN_02a856dc(*(long *)(param_2 + 0x28),
                                    *(undefined8 *)
                                     Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__0__
                                   );
      puVar4 = 
      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__1__;
      puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar5;
                    /* try { // try from 036db5a4 to 037db5ab has its CatchHandler @ 036db5cc */
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
                    /* try { // try from 036db5ac to 037db5c3 has its CatchHandler @ 036db42c */
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    /* try { // try from 036db5e4 to 037db5ef has its CatchHandler @ 036db634 */
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036db5e8;
            }
            uVar10 = uVar10 - 1;
                    /* try { // try from 036db5c4 to 037db5cb has its CatchHandler @ 036db5cc */
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036db538 with catch @ 036db5cc
                       catch(type#2 @ 00000000) { ... } // from try @ 036db5a4 with catch @ 036db5cc
                       catch(type#2 @ 00000000) { ... } // from try @ 036db5c4 with catch @ 036db5cc
                        */
                    /* catch() { ... } // from try @ 036db5f0 with catch @ 036db5d0
                       catch() { ... } // from try @ 036db678 with catch @ 036db5d0 */
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_036db5e8:
                    /* try { // try from 036db5f0 to 037db64b has its CatchHandler @ 036db5d0 */
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_036db704;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_036db6ec;
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036db644;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036db5e4 with catch @ 036db634
                        */
LAB_036db644:
                    /* try { // try from 036db64c to 037db64f has its CatchHandler @ 036db660 */
        lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036db724 with catch @ 036db744
                       catch(type#2 @ 00000000) { ... } // from try @ 036db73c with catch @ 036db744
                        */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(param_1 + 0x50);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* catch() { ... } // from try @ 036db64c with catch @ 036db660 */
        uVar8 = *(undefined8 *)(lVar9 + 0x10);
        lVar9 = *(long *)(lVar7 + 0x10);
                    /* try { // try from 036db66c to 037db677 has its CatchHandler @ 036db68c */
        lVar11 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    /* try { // try from 036db678 to 037db683 has its CatchHandler @ 036db5d0 */
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 036db684 to 037db68b has its CatchHandler @ 036db68c */
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036db66c with catch @ 036db68c
                       catch(type#2 @ 00000000) { ... } // from try @ 036db684 with catch @ 036db68c
                        */
                    /* catch() { ... } // from try @ 036db6bc with catch @ 036db690
                       catch() { ... } // from try @ 036db730 with catch @ 036db690 */
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar8;
          thunk_FUN_01f51358(puVar6);
                    /* try { // try from 036db6a4 to 037db6bb has its CatchHandler @ 036db6f0 */
        }
        else {
          FUN_030f2bb4(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 036db6bc to 037db707 has its CatchHandler @ 036db690 */
        FUN_036db818(param_1);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_036db6ec:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036db6a4 with catch @ 036db6f0
                        */
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 036db708 with catch @ 036db718 */
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036db720;
    }
  }
LAB_036db704:
                    /* try { // try from 036db708 to 037db70b has its CatchHandler @ 036db718 */
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_036db720:
                    /* try { // try from 036db724 to 037db72f has its CatchHandler @ 036db744 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 036db730 to 037db73b has its CatchHandler @ 036db690 */
                    /* try { // try from 036db73c to 037db743 has its CatchHandler @ 036db744 */
  return;
}


