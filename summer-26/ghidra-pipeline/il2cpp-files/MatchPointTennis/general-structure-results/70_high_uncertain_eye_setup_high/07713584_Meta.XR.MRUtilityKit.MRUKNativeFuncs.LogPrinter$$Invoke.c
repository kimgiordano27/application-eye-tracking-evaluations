/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.LogPrinter$$Invoke
ENTRY_POINT: 07713584
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


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_LogPrinter__Invoke(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *unaff_x23;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x30));
  FUN_04447ba8(PTR_DAT_09f30958);
  FUN_04447ba8(PTR_DAT_09f30960);
  FUN_04447ba8(PTR_DAT_09f30968);
  FUN_04447ba8(PTR_DAT_09f30970);
  FUN_04447ba8(PTR_DAT_09f1f078);
  FUN_04447ba8(PTR_DAT_09f30978);
  FUN_04447ba8(PTR_DAT_09f30980);
  FUN_04447ba8(PTR_DAT_09f1f070);
  FUN_04447ba8(PTR_DAT_09f30988);
  FUN_04447ba8(PTR_DAT_09f30990);
  FUN_04447ba8(PTR_DAT_09f30998);
  FUN_04447ba8(PTR_DAT_09f30900);
  FUN_04447ba8(PTR_DAT_09f309a0);
  FUN_04447ba8(PTR_DAT_09f309a8);
  FUN_04447ba8(PTR_DAT_09f1eb68);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f1e7e8);
  FUN_04447ba8(PTR_DAT_09f309b0);
  FUN_04447ba8(PTR_DAT_09f309b8);
  *(undefined1 *)(unaff_x22 + 0x117) = 1;
  lVar7 = thunk_FUN_0448520c(*unaff_x23);
  FUN_0567192c();
  puVar5 = PTR_DAT_09f30940;
  puVar4 = PTR_DAT_09f30898;
  puVar3 = PTR_DAT_09f1e538;
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar16 = 0;
      uVar11 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar16) goto LAB_07713c64;
        puVar20 = (undefined8 *)(unaff_x19 + uVar16 * 8 + 0x20);
        uVar15 = *puVar20;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar11 = FUN_0952c404(uVar15,0,0);
        if ((uVar11 & 1) != 0) {
          uStack000000000000002c = (int)uVar16;
          uVar15 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                      (long)&stack0x00000028 + 4);
          puVar20 = (undefined8 *)PTR_DAT_09f309b0;
LAB_07713bf8:
          uVar15 = FUN_078ab14c(*puVar20,uVar15,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c6b48(uVar15,0);
          return (long *)0x0;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar16) goto LAB_07713c64;
        lVar8 = FUN_0775e914(*puVar20,0);
        if (lVar8 == 0) goto LAB_07713c60;
        uVar11 = *(ulong *)(lVar8 + 0x18);
        if (uVar11 == 0) {
          uStack0000000000000028 = (int)uVar16;
          uVar15 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000028);
          puVar20 = (undefined8 *)PTR_DAT_09f309b8;
          goto LAB_07713bf8;
        }
        if (0 < (int)uVar11) {
          uVar21 = 0;
          do {
            if ((uVar11 & 0xffffffff) <= uVar21) goto LAB_07713c64;
            if (lVar7 == 0) goto LAB_07713c60;
            uVar11 = System_Array_InternalEnumerator<KVPair<ConnectionToken,_ConnectionId>>__System_Collections_IEnumerator_get_Current
                               (lVar7,*(undefined8 *)(lVar8 + 0x20 + uVar21 * 8),
                                *(undefined8 *)puVar5);
            if ((uVar11 & 1) == 0) {
              if (*(uint *)(lVar8 + 0x18) <= uVar21) goto LAB_07713c64;
              FUN_05672a08(lVar7,*(undefined8 *)(lVar8 + 0x20 + uVar21 * 8),*(undefined8 *)puVar4);
            }
            uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((long)uVar21 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        uVar11 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    puVar5 = PTR_DAT_09f30990;
    puVar4 = PTR_DAT_09f30948;
    if (lVar7 != 0) {
      lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eb68,*(undefined4 *)(lVar7 + 0x20));
      FUN_05674054(lVar7,lVar8,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar15 = FUN_07a4ce38(uVar15,0);
      plVar9 = (long *)FUN_0952de4c(uVar15,0);
      puVar4 = PTR_DAT_09f30970;
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f30998 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f30998
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4();
        }
      }
      lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30988);
      FUN_05bad610(lVar7,*(undefined8 *)puVar4);
      puVar6 = PTR_DAT_09f30960;
      puVar5 = PTR_DAT_09f30900;
      puVar4 = PTR_DAT_09f1e7e8;
      if (lVar8 != 0) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar16 = 0;
          uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar16) goto LAB_07713c64;
            uVar15 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar11 = FUN_09531730(uVar15,0,0);
            if ((uVar11 & 1) != 0) {
              if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_07713c64;
              uVar19 = *(undefined8 *)(lVar8 + 0x20 + uVar16 * 8);
              uVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
              FUN_07712c50(0,0,0x3f800000,0x3f800000,0,0,0x3f800000,0x3f800000,uVar15,uVar19,1,0,
                           *(undefined8 *)puVar4);
              if (lVar7 == 0) goto LAB_07713c60;
              uVar11 = FUN_05bae1d4(lVar7,uVar15,*(undefined8 *)puVar6);
              if ((uVar11 & 1) == 0) {
                lVar12 = *(long *)(lVar7 + 0x10);
                lVar13 = *(long *)PTR_DAT_09f30958;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_07713c60;
                uVar18 = *(uint *)(lVar7 + 0x18);
                if (uVar18 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar18 + 1;
                  puVar20 = (undefined8 *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
                  *puVar20 = uVar15;
                  thunk_FUN_044bb4b4(puVar20,uVar15);
                }
                else {
                  FUN_05bade44(lVar7,uVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar16 = uVar16 + 1;
          } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        if ((lVar7 != 0) &&
           (lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,*(undefined4 *)(lVar7 + 0x18)),
           plVar9 != (long *)0x0)) {
          plVar17 = plVar9 + 5;
          *plVar17 = lVar12;
          thunk_FUN_044bb4b4(plVar17,lVar12);
          puVar6 = PTR_DAT_09f30980;
          puVar5 = PTR_DAT_09f1f078;
          puVar4 = PTR_DAT_09f1f070;
          puVar3 = PTR_DAT_09f1f030;
          if (0 < *(int *)(lVar7 + 0x18)) {
            plVar22 = (long *)*plVar17;
            uVar18 = 0;
            lVar12 = 0x20;
            do {
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
              FUN_07711f2c();
              if (plVar22 == (long *)0x0) goto LAB_07713c60;
              if ((lVar13 != 0) &&
                 (lVar10 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar10 == 0)
                 ) {
                uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar15,0);
              }
              if (*(uint *)(plVar22 + 3) <= uVar18) {
LAB_07713c64:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              *(long *)((long)plVar22 + lVar12) = lVar13;
              thunk_FUN_044bb4b4((long *)((long)plVar22 + lVar12),lVar13);
              lVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
              FUN_05bad610(lVar13,*(undefined8 *)puVar5);
              lVar10 = FUN_05badb74(lVar7,uVar18,*(undefined8 *)puVar6);
              if ((lVar10 == 0) || (lVar13 == 0)) goto LAB_07713c60;
              uVar15 = *(undefined8 *)(lVar10 + 0x10);
              lVar10 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)puVar3;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_07713c60;
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                thunk_FUN_044bb4b4();
              }
              else {
                FUN_05bade44(lVar13,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *plVar17;
              if (lVar10 == 0) goto LAB_07713c60;
              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_07713c64;
              if (*(long *)(lVar10 + lVar12) == 0) goto LAB_07713c60;
              plVar22 = (long *)(*(long *)(lVar10 + lVar12) + 0x20);
              *plVar22 = lVar13;
              thunk_FUN_044bb4b4(plVar22,lVar13);
              lVar13 = *plVar17;
              if (lVar13 == 0) goto LAB_07713c60;
              if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_07713c64;
              lVar10 = *(long *)(lVar13 + lVar12);
              lVar13 = FUN_05badb74(lVar7,uVar18,*(undefined8 *)puVar6);
              if ((lVar13 == 0) || (lVar10 == 0)) goto LAB_07713c60;
              puVar20 = (undefined8 *)(lVar10 + 0x10);
              *puVar20 = *(undefined8 *)(lVar13 + 0x10);
              thunk_FUN_044bb4b4(puVar20);
              plVar22 = (long *)*plVar17;
              if (plVar22 == (long *)0x0) goto LAB_07713c60;
              if (*(uint *)(plVar22 + 3) <= uVar18) goto LAB_07713c64;
              if (*(long *)((long)plVar22 + lVar12) == 0) goto LAB_07713c60;
              *(undefined1 *)(*(long *)((long)plVar22 + lVar12) + 0x18) = 0;
              uVar18 = uVar18 + 1;
              lVar12 = lVar12 + 8;
            } while ((int)uVar18 < *(int *)(lVar7 + 0x18));
          }
          puVar3 = PTR_DAT_09f30968;
          *(bool *)(plVar9 + 7) = *(int *)(lVar8 + 0x18) != 1;
          lVar7 = FUN_05baf9bc(lVar7,*(undefined8 *)puVar3);
          plVar9[4] = lVar7;
          thunk_FUN_044bb4b4();
          return plVar9;
        }
      }
    }
  }
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


