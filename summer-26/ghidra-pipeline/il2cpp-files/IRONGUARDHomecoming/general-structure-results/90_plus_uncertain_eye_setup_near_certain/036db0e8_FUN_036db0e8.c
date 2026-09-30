/*
FUNCTION_NAME: FUN_036db0e8
ENTRY_POINT: 036db0e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x036db378) */
/* WARNING: Removing unreachable block (ram,0x036db3cc) */
/* WARNING: Removing unreachable block (ram,0x036db3ec) */

void FUN_036db0e8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04834302 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__1__
                      );
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
    DAT_04834302 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_036db3e8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_2[4] != 0) {
    lVar5 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar5 == 0) goto LAB_036db3e8;
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    goto LAB_036db3b4;
  }
  if ((param_2[5] == 0) || (lVar5 = *(long *)(param_2[5] + 0x10), lVar5 == 0)) goto LAB_036db3e8;
  iVar4 = FUN_02a854d0(lVar5,*(undefined8 *)
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__0__
                      );
  uVar8 = *(undefined8 *)
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
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036db274;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_036db274:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_036db398;
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_036db33c;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_036db324;
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036db2d0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_036db2d0:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = FUN_0340ebc0(uVar8,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)puVar2,0);
    } while( true );
  }
  uVar8 = FUN_03405678(uVar8,*(undefined8 *)
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass71_0_<DOBlendableColor>b__1__
                       ,0);
  goto LAB_036db398;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036db324:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
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
  uVar8 = FUN_03405678(*(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_<DOBlendableMoveBy>b__0__
                       ,uVar8,0);
LAB_036db3b4:
  FUN_036d9948(param_1,uVar8);
  return;
}


