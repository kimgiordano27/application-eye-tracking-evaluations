/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnPreRoomAnchorAdded$$BeginInvoke
ENTRY_POINT: 0771371c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnPreRoomAnchorAdded__BeginInvoke(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  long unaff_x21;
  ulong unaff_x22;
  long *plVar17;
  uint uVar18;
  undefined8 uVar19;
  long *unaff_x24;
  ulong uVar20;
  long *plVar21;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    if (0 < (int)param_1) {
      uVar20 = 0;
      do {
        if ((param_1 & 0xffffffff) <= uVar20) goto LAB_07713c64;
        if (unaff_x20 == 0) goto LAB_07713c60;
        uVar7 = System_Array_InternalEnumerator<KVPair<ConnectionToken,_ConnectionId>>__System_Collections_IEnumerator_get_Current
                          ();
        if ((uVar7 & 1) == 0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar20) goto LAB_07713c64;
          FUN_05672a08();
        }
        param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)*(uint *)(unaff_x21 + 0x18));
    }
    puVar3 = PTR_DAT_09f30990;
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x22) break;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_07713c64;
    puVar11 = (undefined8 *)(unaff_x19 + unaff_x22 * 8 + 0x20);
    uVar16 = *puVar11;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar20 = FUN_0952c404(uVar16,0,0);
    if ((uVar20 & 1) != 0) {
      uStack000000000000002c = (int)unaff_x22;
      uVar16 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                  (long)&stack0x00000028 + 4);
      puVar11 = (undefined8 *)PTR_DAT_09f309b0;
      goto LAB_07713bf8;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_07713c64;
    unaff_x21 = FUN_0775e914(*puVar11,0);
    if (unaff_x21 == 0) goto LAB_07713c60;
    param_1 = *(ulong *)(unaff_x21 + 0x18);
    if (param_1 == 0) {
      uStack0000000000000028 = (int)unaff_x22;
      uVar16 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000028);
      puVar11 = (undefined8 *)PTR_DAT_09f309b8;
LAB_07713bf8:
      uVar16 = FUN_078ab14c(*puVar11,uVar16,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c6b48(uVar16,0);
      return (long *)0x0;
    }
  }
  if (unaff_x20 != 0) {
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eb68,*(undefined4 *)(unaff_x20 + 0x20));
    FUN_05674054();
    uVar16 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar16 = FUN_07a4ce38(uVar16,0);
    plVar9 = (long *)FUN_0952de4c(uVar16,0);
    puVar3 = PTR_DAT_09f30970;
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f30998 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f30998))
      {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
    }
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30988);
    FUN_05bad610(lVar10,*(undefined8 *)puVar3);
    puVar5 = PTR_DAT_09f30960;
    puVar4 = PTR_DAT_09f30900;
    puVar3 = PTR_DAT_09f1e7e8;
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar20 = 0;
        uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar20) goto LAB_07713c64;
          uVar16 = *(undefined8 *)(lVar8 + 0x20 + uVar20 * 8);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar7 = FUN_09531730(uVar16,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(uint *)(lVar8 + 0x18) <= uVar20) goto LAB_07713c64;
            uVar19 = *(undefined8 *)(lVar8 + 0x20 + uVar20 * 8);
            uVar16 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
            FUN_07712c50(0,0,0x3f800000,0x3f800000,0,0,0x3f800000,0x3f800000,uVar16,uVar19,1,0,
                         *(undefined8 *)puVar3);
            if (lVar10 == 0) goto LAB_07713c60;
            uVar7 = FUN_05bae1d4(lVar10,uVar16,*(undefined8 *)puVar5);
            if ((uVar7 & 1) == 0) {
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)PTR_DAT_09f30958;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_07713c60;
              uVar18 = *(uint *)(lVar10 + 0x18);
              if (uVar18 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar18 + 1;
                puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
                *puVar11 = uVar16;
                thunk_FUN_044bb4b4(puVar11,uVar16);
              }
              else {
                FUN_05bade44(lVar10,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if ((lVar10 != 0) &&
         (lVar13 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,*(undefined4 *)(lVar10 + 0x18)),
         plVar9 != (long *)0x0)) {
        plVar17 = plVar9 + 5;
        *plVar17 = lVar13;
        thunk_FUN_044bb4b4(plVar17,lVar13);
        puVar6 = PTR_DAT_09f30980;
        puVar5 = PTR_DAT_09f1f078;
        puVar4 = PTR_DAT_09f1f070;
        puVar3 = PTR_DAT_09f1f030;
        if (0 < *(int *)(lVar10 + 0x18)) {
          plVar21 = (long *)*plVar17;
          uVar18 = 0;
          lVar13 = 0x20;
          do {
            lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
            FUN_07711f2c();
            if (plVar21 == (long *)0x0) goto LAB_07713c60;
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar21 + 0x40)), lVar12 == 0))
            {
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
            lVar12 = FUN_05badb74(lVar10,uVar18,*(undefined8 *)puVar6);
            if ((lVar12 == 0) || (lVar14 == 0)) goto LAB_07713c60;
            uVar16 = *(undefined8 *)(lVar12 + 0x10);
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar15 = *(long *)puVar3;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_07713c60;
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
              thunk_FUN_044bb4b4();
            }
            else {
              FUN_05bade44(lVar14,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *plVar17;
            if (lVar12 == 0) goto LAB_07713c60;
            if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_07713c64;
            if (*(long *)(lVar12 + lVar13) == 0) goto LAB_07713c60;
            plVar21 = (long *)(*(long *)(lVar12 + lVar13) + 0x20);
            *plVar21 = lVar14;
            thunk_FUN_044bb4b4(plVar21,lVar14);
            lVar14 = *plVar17;
            if (lVar14 == 0) goto LAB_07713c60;
            if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07713c64;
            lVar12 = *(long *)(lVar14 + lVar13);
            lVar14 = FUN_05badb74(lVar10,uVar18,*(undefined8 *)puVar6);
            if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_07713c60;
            puVar11 = (undefined8 *)(lVar12 + 0x10);
            *puVar11 = *(undefined8 *)(lVar14 + 0x10);
            thunk_FUN_044bb4b4(puVar11);
            plVar21 = (long *)*plVar17;
            if (plVar21 == (long *)0x0) goto LAB_07713c60;
            if (*(uint *)(plVar21 + 3) <= uVar18) goto LAB_07713c64;
            if (*(long *)((long)plVar21 + lVar13) == 0) goto LAB_07713c60;
            *(undefined1 *)(*(long *)((long)plVar21 + lVar13) + 0x18) = 0;
            uVar18 = uVar18 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar18 < *(int *)(lVar10 + 0x18));
        }
        puVar3 = PTR_DAT_09f30968;
        *(bool *)(plVar9 + 7) = *(int *)(lVar8 + 0x18) != 1;
        lVar8 = FUN_05baf9bc(lVar10,*(undefined8 *)puVar3);
        plVar9[4] = lVar8;
        thunk_FUN_044bb4b4();
        return plVar9;
      }
    }
  }
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


