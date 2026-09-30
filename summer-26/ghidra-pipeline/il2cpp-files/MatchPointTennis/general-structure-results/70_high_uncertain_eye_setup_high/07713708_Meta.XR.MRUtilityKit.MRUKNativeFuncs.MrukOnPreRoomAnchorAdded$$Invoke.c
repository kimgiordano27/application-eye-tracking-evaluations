/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnPreRoomAnchorAdded$$Invoke
ENTRY_POINT: 07713708
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnPreRoomAnchorAdded__Invoke
                 (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  ulong unaff_x22;
  long *plVar17;
  uint uVar18;
  undefined8 uVar19;
  long *unaff_x24;
  ulong uVar20;
  long *plVar21;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while (lVar7 = FUN_0775e914(param_1,param_2), lVar7 != 0) {
    uVar12 = *(ulong *)(lVar7 + 0x18);
    if (uVar12 == 0) {
      uStack0000000000000028 = (undefined4)unaff_x22;
      uVar16 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000028);
      puVar10 = (undefined8 *)PTR_DAT_09f309b8;
LAB_07713bf8:
      uVar16 = FUN_078ab14c(*puVar10,uVar16,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c6b48(uVar16,0);
      return (long *)0x0;
    }
    if (0 < (int)uVar12) {
      uVar20 = 0;
      do {
        if ((uVar12 & 0xffffffff) <= uVar20) goto LAB_07713c64;
        if (unaff_x20 == 0) goto LAB_07713c60;
        uVar12 = System_Array_InternalEnumerator<KVPair<ConnectionToken,_ConnectionId>>__System_Collections_IEnumerator_get_Current
                           ();
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_07713c64;
          FUN_05672a08();
        }
        uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    puVar3 = PTR_DAT_09f30990;
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      if (unaff_x20 != 0) {
        lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eb68,*(undefined4 *)(unaff_x20 + 0x20));
        FUN_05674054();
        uVar16 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar16 = FUN_07a4ce38(uVar16,0);
        plVar8 = (long *)FUN_0952de4c(uVar16,0);
        puVar3 = PTR_DAT_09f30970;
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_09f30998 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_09f30998)) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4();
          }
        }
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30988);
        FUN_05bad610(lVar9,*(undefined8 *)puVar3);
        puVar5 = PTR_DAT_09f30960;
        puVar4 = PTR_DAT_09f30900;
        puVar3 = PTR_DAT_09f1e7e8;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) goto LAB_077139a0;
          uVar12 = 0;
          uVar20 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          goto LAB_0771388c;
        }
      }
      break;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_07713c64;
    puVar10 = (undefined8 *)(unaff_x19 + unaff_x22 * 8 + 0x20);
    uVar16 = *puVar10;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar12 = FUN_0952c404(uVar16,0,0);
    if ((uVar12 & 1) != 0) {
      uStack000000000000002c = (undefined4)unaff_x22;
      uVar16 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                  (long)&stack0x00000028 + 4);
      puVar10 = (undefined8 *)PTR_DAT_09f309b0;
      goto LAB_07713bf8;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_07713c64;
    param_1 = *puVar10;
    param_2 = 0;
  }
  goto LAB_07713c60;
  while( true ) {
    uVar16 = *(undefined8 *)(lVar7 + 0x20 + uVar12 * 8);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar20 = FUN_09531730(uVar16,0,0);
    if ((uVar20 & 1) != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_07713c64;
      uVar19 = *(undefined8 *)(lVar7 + 0x20 + uVar12 * 8);
      uVar16 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
      FUN_07712c50(0,0,0x3f800000,0x3f800000,0,0,0x3f800000,0x3f800000,uVar16,uVar19,1,0,
                   *(undefined8 *)puVar3);
      if (lVar9 == 0) goto LAB_07713c60;
      uVar20 = FUN_05bae1d4(lVar9,uVar16,*(undefined8 *)puVar5);
      if ((uVar20 & 1) == 0) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)PTR_DAT_09f30958;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07713c60;
        uVar18 = *(uint *)(lVar9 + 0x18);
        if (uVar18 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar18 + 1;
          puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
          *puVar10 = uVar16;
          thunk_FUN_044bb4b4(puVar10,uVar16);
        }
        else {
          FUN_05bade44(lVar9,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
    uVar12 = uVar12 + 1;
    if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar12) break;
LAB_0771388c:
    if (uVar20 <= uVar12) goto LAB_07713c64;
  }
LAB_077139a0:
  if ((lVar9 != 0) &&
     (lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,*(undefined4 *)(lVar9 + 0x18)),
     plVar8 != (long *)0x0)) {
    plVar17 = plVar8 + 5;
    *plVar17 = lVar13;
    thunk_FUN_044bb4b4(plVar17,lVar13);
    puVar6 = PTR_DAT_09f30980;
    puVar5 = PTR_DAT_09f1f078;
    puVar4 = PTR_DAT_09f1f070;
    puVar3 = PTR_DAT_09f1f030;
    if (0 < *(int *)(lVar9 + 0x18)) {
      plVar21 = (long *)*plVar17;
      uVar18 = 0;
      lVar13 = 0x20;
      do {
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
        FUN_07711f2c();
        if (plVar21 == (long *)0x0) goto LAB_07713c60;
        if ((lVar14 != 0) &&
           (lVar11 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar21 + 0x40)), lVar11 == 0)) {
          uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar16,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar18) {
LAB_07713c64:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(long *)((long)plVar21 + lVar13) = lVar14;
        thunk_FUN_044bb4b4((long *)((long)plVar21 + lVar13),lVar14);
        lVar14 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
        FUN_05bad610(lVar14,*(undefined8 *)puVar5);
        lVar11 = FUN_05badb74(lVar9,uVar18,*(undefined8 *)puVar6);
        if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_07713c60;
        uVar16 = *(undefined8 *)(lVar11 + 0x10);
        lVar11 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar3;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_07713c60;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar14,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *plVar17;
        if (lVar11 == 0) goto LAB_07713c60;
        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_07713c64;
        if (*(long *)(lVar11 + lVar13) == 0) goto LAB_07713c60;
        plVar21 = (long *)(*(long *)(lVar11 + lVar13) + 0x20);
        *plVar21 = lVar14;
        thunk_FUN_044bb4b4(plVar21,lVar14);
        lVar14 = *plVar17;
        if (lVar14 == 0) goto LAB_07713c60;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07713c64;
        lVar11 = *(long *)(lVar14 + lVar13);
        lVar14 = FUN_05badb74(lVar9,uVar18,*(undefined8 *)puVar6);
        if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_07713c60;
        puVar10 = (undefined8 *)(lVar11 + 0x10);
        *puVar10 = *(undefined8 *)(lVar14 + 0x10);
        thunk_FUN_044bb4b4(puVar10);
        plVar21 = (long *)*plVar17;
        if (plVar21 == (long *)0x0) goto LAB_07713c60;
        if (*(uint *)(plVar21 + 3) <= uVar18) goto LAB_07713c64;
        if (*(long *)((long)plVar21 + lVar13) == 0) goto LAB_07713c60;
        *(undefined1 *)(*(long *)((long)plVar21 + lVar13) + 0x18) = 0;
        uVar18 = uVar18 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar18 < *(int *)(lVar9 + 0x18));
    }
    puVar3 = PTR_DAT_09f30968;
    *(bool *)(plVar8 + 7) = *(int *)(lVar7 + 0x18) != 1;
    lVar7 = FUN_05baf9bc(lVar9,*(undefined8 *)puVar3);
    plVar8[4] = lVar7;
    thunk_FUN_044bb4b4();
    return plVar8;
  }
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


