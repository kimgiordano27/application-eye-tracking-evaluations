/*
FUNCTION_NAME: OVRHand$$OVRSkeleton.IOVRSkeletonDataProvider.get_enabled
ENTRY_POINT: 036db10c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x036db378) */
/* WARNING: Removing unreachable block (ram,0x036db3cc) */
/* WARNING: Removing unreachable block (ram,0x036db3ec) */

void OVRHand__OVRSkeleton_IOVRSkeletonDataProvider_get_enabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  
  thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__1__)
  ;
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__0__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__1__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass71_0_<DOBlendableColor>b__0__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass71_0_<DOBlendableColor>b__1__
                    );
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_<DOBlendableMoveBy>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_<DOBlendableMoveBy>b__1__
                    );
  *(undefined1 *)(unaff_x21 + 0x302) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_036db3e8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x20[4] != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x178))();
    if (lVar5 == 0) goto LAB_036db3e8;
    goto LAB_036db3b4;
  }
  if ((unaff_x20[5] == 0) || (lVar5 = *(long *)(unaff_x20[5] + 0x10), lVar5 == 0))
  goto LAB_036db3e8;
  iVar4 = FUN_02a854d0(lVar5,*(undefined8 *)
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__0__
                      );
  uVar10 = *(undefined8 *)
            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_<DOBlendableMoveBy>b__1__;
  if (0 < iVar4) {
    plVar6 = (long *)FUN_02a856dc(lVar5,*(undefined8 *)
                                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__1__
                                 );
    puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__1__;
    puVar2 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_036db274;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_036db274:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_036db398;
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_036db33c;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_036db324;
      }
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_036db2d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_036db2d0:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_0340ebc0(uVar10,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)puVar2,0);
    } while( true );
  }
  uVar10 = FUN_03405678(uVar10,*(undefined8 *)
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass71_0_<DOBlendableColor>b__1__
                        ,0);
  goto LAB_036db398;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_036db324:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_036db360;
    }
  }
LAB_036db33c:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_036db360:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_036db398:
  FUN_03405678(*(undefined8 *)
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_<DOBlendableMoveBy>b__0__
               ,uVar10,0);
LAB_036db3b4:
  FUN_036d9948();
  return;
}


