/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$UpdateCulling
ENTRY_POINT: 076ee390
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__UpdateCulling(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar19;
  long *plVar20;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *plVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e6b8);
    FUN_04447ba8(PTR_DAT_09f1e548);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f2f5e0);
    FUN_04447ba8(PTR_DAT_09f2f5e8);
    FUN_04447ba8(PTR_DAT_09f2f5f0);
    FUN_04447ba8(PTR_DAT_09f2f5f8);
    FUN_04447ba8(PTR_DAT_09f2f600);
    FUN_04447ba8(PTR_DAT_09f2f608);
    *(undefined1 *)(unaff_x20 + 0xecd) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar11 = FUN_094bce98(0);
  if (unaff_x26 == (long *)0x0) goto LAB_076eeab4;
  iVar7 = (**(code **)(*unaff_x26 + 0x188))();
  iVar8 = (**(code **)(*unaff_x26 + 0x1a8))();
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 >> 1;
  }
  uVar18 = 7;
  if ((uVar11 & 1) == 0) {
    uVar18 = 9;
  }
  if (DAT_0a522ecf == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a522ecf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  dVar25 = (double)FUN_07a3ef90((double)iVar8,0x4000000000000000,0);
  fVar26 = *(float *)(unaff_x19 + 0x28) + (float)dVar25 + -8.0;
  uVar1 = 0x80000000;
  if (fVar26 != INFINITY) {
    uVar1 = (int)fVar26;
  }
  uVar2 = uVar1;
  if (0xf < (int)uVar1) {
    uVar2 = 0x10;
  }
  uVar3 = uVar2;
  if ((int)uVar2 < 2) {
    uVar3 = 1;
  }
  fVar23 = (float)FUN_09517a08(*(undefined4 *)(unaff_x19 + 0x20),0);
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  FUN_094e99bc(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5e0,0);
  puVar6 = PTR_DAT_09f2f608;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  fVar24 = fVar23 * *(float *)(unaff_x19 + 0x24) + DAT_01c7607c;
  FUN_094e9a74(fVar23 - fVar24,fVar24 + fVar24,0.25 / fVar24,0,*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)PTR_DAT_09f2f5f8,0);
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    lVar12 = *(long *)(unaff_x19 + 0x40);
    uVar17 = *(undefined8 *)puVar6;
    uVar9 = 0xbf000000;
    if (*(char *)(unaff_x19 + 0x31) == '\0') goto LAB_076ee5a0;
  }
  else {
    lVar12 = *(long *)(unaff_x19 + 0x40);
    uVar17 = *(undefined8 *)puVar6;
LAB_076ee5a0:
    uVar9 = 0;
  }
  if (lVar12 != 0) {
    FUN_094e99bc(uVar9,lVar12,uVar17,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_094e99bc((fVar26 + 0.5) - (float)(int)uVar1,*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)PTR_DAT_09f2f5e8,0);
      puVar6 = PTR_DAT_09f1e548;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar26 = *(float *)(unaff_x19 + 0x2c);
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        FUN_094e99bc(fVar26,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5f0,0);
        plVar13 = (long *)FUN_0950b9c0(iVar7,iVar8,0,uVar18,0);
        uVar4 = *(undefined1 *)(unaff_x19 + 0x31);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar6);
        }
        puVar5 = PTR_DAT_09f1e538;
        FUN_094d4178(unaff_x26,plVar13,uVar17,uVar4,0);
        plVar21 = *(long **)(unaff_x19 + 0x48);
        uVar11 = 0;
        lVar12 = 0x20;
        plVar20 = plVar13;
        do {
          if (plVar20 == (long *)0x0) goto LAB_076eeab4;
          iVar7 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
          iVar8 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          if (iVar8 < 0) {
            iVar8 = iVar8 + 1;
          }
          lVar14 = FUN_0950b9c0(iVar7 >> 1,iVar8 >> 1,0,uVar18,0);
          if (plVar21 == (long *)0x0) goto LAB_076eeab4;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar21 + 0x40)), lVar15 == 0))
          goto LAB_076eeabc;
          if (*(uint *)(plVar21 + 3) <= uVar11) goto LAB_076eeab8;
          *(long *)((long)plVar21 + lVar12) = lVar14;
          thunk_FUN_044bb4b4((long *)((long)plVar21 + lVar12),lVar14);
          if (lVar12 == 0x20) {
            uVar9 = 2;
            if (*(char *)(unaff_x19 + 0x31) != '\0') {
              uVar9 = 3;
            }
          }
          else {
            uVar9 = 4;
          }
          lVar14 = *(long *)(unaff_x19 + 0x48);
          if (lVar14 == 0) goto LAB_076eeab4;
          if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
          uVar17 = *(undefined8 *)(lVar14 + lVar12);
          uVar22 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094d4178(plVar20,uVar17,uVar22,uVar9,0);
          plVar21 = *(long **)(unaff_x19 + 0x48);
          if (plVar21 == (long *)0x0) goto LAB_076eeab4;
          if (*(uint *)(plVar21 + 3) <= uVar11) goto LAB_076eeab8;
          plVar20 = *(long **)((long)plVar21 + lVar12);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 8;
        } while (uVar3 != uVar11);
        if ((int)uVar2 < 2) {
LAB_076ee914:
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,unaff_x26,0);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar18 = 7;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar18 = 8;
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_044a54b4(7);
            }
            FUN_094d4178(plVar20,unaff_x25,uVar17,uVar18,0);
            uVar11 = 0;
            lVar12 = 0x20;
            while (lVar14 = *(long *)(unaff_x19 + 0x48), lVar14 != 0) {
              if (*(uint *)(lVar14 + 0x18) <= uVar11) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar17 = *(undefined8 *)(lVar14 + lVar12);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar16 = FUN_09531730(uVar17,0,0);
              if ((uVar16 & 1) != 0) {
                lVar14 = *(long *)(unaff_x19 + 0x48);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar14 + lVar12),0);
              }
              lVar14 = *(long *)(unaff_x19 + 0x50);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
              uVar17 = *(undefined8 *)(lVar14 + lVar12);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar16 = FUN_09531730(uVar17,0,0);
              if ((uVar16 & 1) != 0) {
                lVar14 = *(long *)(unaff_x19 + 0x50);
                if (lVar14 == 0) break;
                if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar14 + lVar12),0);
              }
              lVar14 = *(long *)(unaff_x19 + 0x48);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
              *(undefined8 *)(lVar14 + lVar12) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + lVar12),0);
              lVar14 = *(long *)(unaff_x19 + 0x50);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_076eeab8;
              *(undefined8 *)(lVar14 + lVar12) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + lVar12),0);
              lVar12 = lVar12 + 8;
              uVar11 = uVar11 + 1;
              if (lVar12 == 0xa0) {
                FUN_0950a138(plVar13,0);
                return;
              }
            }
          }
        }
        else {
          uVar1 = uVar3 - 2;
          do {
            if (*(uint *)(plVar21 + 3) <= uVar1) goto LAB_076eeab8;
            if (*(long *)(unaff_x19 + 0x40) == 0) break;
            uVar11 = (ulong)uVar1;
            plVar21 = (long *)plVar21[uVar11 + 4];
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar21,0);
            if (plVar21 == (long *)0x0) break;
            plVar19 = *(long **)(unaff_x19 + 0x50);
            uVar9 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
            uVar10 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
            lVar12 = FUN_0950b9c0(uVar9,uVar10,0,uVar18,0);
            if (plVar19 == (long *)0x0) break;
            if ((lVar12 != 0) &&
               (lVar14 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar19 + 0x40)), lVar14 == 0))
            {
LAB_076eeabc:
              uVar17 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar17,0);
            }
            if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_076eeab8;
            plVar19[uVar11 + 4] = lVar12;
            thunk_FUN_044bb4b4(plVar19 + uVar11 + 4,lVar12);
            lVar12 = *(long *)(unaff_x19 + 0x50);
            uVar9 = 5;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar9 = 6;
            }
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_076eeab8;
            uVar17 = *(undefined8 *)(lVar12 + uVar11 * 8 + 0x20);
            uVar22 = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094d4178(plVar20,uVar17,uVar22,uVar9,0);
            lVar12 = *(long *)(unaff_x19 + 0x50);
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_076eeab8;
            plVar20 = *(long **)(lVar12 + uVar11 * 8 + 0x20);
            if ((int)uVar1 < 1) goto LAB_076ee914;
            plVar21 = *(long **)(unaff_x19 + 0x48);
            uVar1 = uVar1 - 1;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


