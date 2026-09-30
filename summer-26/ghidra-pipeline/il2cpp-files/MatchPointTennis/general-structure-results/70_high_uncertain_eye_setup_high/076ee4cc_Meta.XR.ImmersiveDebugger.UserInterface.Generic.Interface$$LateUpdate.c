/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$LateUpdate
ENTRY_POINT: 076ee4cc
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__LateUpdate(double param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x19;
  ulong uVar14;
  long *plVar15;
  undefined4 unaff_w22;
  ulong uVar16;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long *plVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  uint uStack0000000000000014;
  
  fVar23 = *(float *)(unaff_x19 + 0x28) + (float)param_1 + -8.0;
  uVar1 = 0x80000000;
  if (fVar23 != INFINITY) {
    uVar1 = (int)fVar23;
  }
  uVar2 = uVar1;
  if (0xf < (int)uVar1) {
    uVar2 = 0x10;
  }
  uStack0000000000000014 = uVar2;
  if ((int)uVar2 < 2) {
    uStack0000000000000014 = 1;
  }
  fVar20 = (float)FUN_09517a08(*(undefined4 *)(unaff_x19 + 0x20),0);
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  FUN_094e99bc(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5e0,0);
  puVar5 = PTR_DAT_09f2f608;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  fVar21 = fVar20 * *(float *)(unaff_x19 + 0x24) + DAT_01c7607c;
  FUN_094e9a74(fVar20 - fVar21,fVar21 + fVar21,0.25 / fVar21,0,*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)PTR_DAT_09f2f5f8,0);
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar13 = *(undefined8 *)puVar5;
    uVar22 = 0xbf000000;
    if (*(char *)(unaff_x19 + 0x31) == '\0') goto LAB_076ee5a0;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar13 = *(undefined8 *)puVar5;
LAB_076ee5a0:
    uVar22 = 0;
  }
  if (lVar9 != 0) {
    FUN_094e99bc(uVar22,lVar9,uVar13,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_094e99bc((fVar23 + 0.5) - (float)(int)uVar1,*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)PTR_DAT_09f2f5e8,0);
      puVar5 = PTR_DAT_09f1e548;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar23 = *(float *)(unaff_x19 + 0x2c);
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        FUN_094e99bc(fVar23,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5f0,0);
        plVar10 = (long *)FUN_0950b9c0(unaff_w22,unaff_w24,0,unaff_w23,0);
        uVar3 = *(undefined1 *)(unaff_x19 + 0x31);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar5);
        }
        puVar4 = PTR_DAT_09f1e538;
        FUN_094d4178(unaff_x26,plVar10,uVar13,uVar3,0);
        plVar18 = *(long **)(unaff_x19 + 0x48);
        uVar16 = 0;
        uVar14 = (ulong)uStack0000000000000014;
        lVar9 = 0x20;
        plVar17 = plVar10;
        do {
          if (plVar17 == (long *)0x0) goto LAB_076eeab4;
          iVar6 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
          iVar7 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          lVar11 = FUN_0950b9c0(iVar6 >> 1,iVar7 >> 1,0,unaff_w23,0);
          if (plVar18 == (long *)0x0) goto LAB_076eeab4;
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar12 == 0))
          goto LAB_076eeabc;
          if (*(uint *)(plVar18 + 3) <= uVar16) goto LAB_076eeab8;
          *(long *)((long)plVar18 + lVar9) = lVar11;
          thunk_FUN_044bb4b4((long *)((long)plVar18 + lVar9),lVar11);
          if (lVar9 == 0x20) {
            uVar22 = 2;
            if (*(char *)(unaff_x19 + 0x31) != '\0') {
              uVar22 = 3;
            }
          }
          else {
            uVar22 = 4;
          }
          lVar11 = *(long *)(unaff_x19 + 0x48);
          if (lVar11 == 0) goto LAB_076eeab4;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
          uVar13 = *(undefined8 *)(lVar11 + lVar9);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094d4178(plVar17,uVar13,uVar19,uVar22,0);
          plVar18 = *(long **)(unaff_x19 + 0x48);
          if (plVar18 == (long *)0x0) goto LAB_076eeab4;
          if (*(uint *)(plVar18 + 3) <= uVar16) goto LAB_076eeab8;
          plVar17 = *(long **)((long)plVar18 + lVar9);
          uVar16 = uVar16 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar14 != uVar16);
        if ((int)uVar2 < 2) {
LAB_076ee914:
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,unaff_x26,0);
            uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar22 = 7;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar22 = 8;
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_044a54b4(7);
            }
            FUN_094d4178(plVar17,unaff_x25,uVar13,uVar22,0);
            uVar16 = 0;
            lVar9 = 0x20;
            while (lVar11 = *(long *)(unaff_x19 + 0x48), lVar11 != 0) {
              if (*(uint *)(lVar11 + 0x18) <= uVar16) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar13 = *(undefined8 *)(lVar11 + lVar9);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar14 = FUN_09531730(uVar13,0,0);
              if ((uVar14 & 1) != 0) {
                lVar11 = *(long *)(unaff_x19 + 0x48);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar11 + lVar9),0);
              }
              lVar11 = *(long *)(unaff_x19 + 0x50);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
              uVar13 = *(undefined8 *)(lVar11 + lVar9);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar14 = FUN_09531730(uVar13,0,0);
              if ((uVar14 & 1) != 0) {
                lVar11 = *(long *)(unaff_x19 + 0x50);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar11 + lVar9),0);
              }
              lVar11 = *(long *)(unaff_x19 + 0x48);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
              *(undefined8 *)(lVar11 + lVar9) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + lVar9),0);
              lVar11 = *(long *)(unaff_x19 + 0x50);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_076eeab8;
              *(undefined8 *)(lVar11 + lVar9) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + lVar9),0);
              lVar9 = lVar9 + 8;
              uVar16 = uVar16 + 1;
              if (lVar9 == 0xa0) {
                FUN_0950a138(plVar10,0);
                return;
              }
            }
          }
        }
        else {
          uVar1 = uStack0000000000000014 - 2;
          do {
            if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_076eeab8;
            if (*(long *)(unaff_x19 + 0x40) == 0) break;
            uVar16 = (ulong)uVar1;
            plVar18 = (long *)plVar18[uVar16 + 4];
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar18,0);
            if (plVar18 == (long *)0x0) break;
            plVar15 = *(long **)(unaff_x19 + 0x50);
            uVar22 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
            uVar8 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
            lVar9 = FUN_0950b9c0(uVar22,uVar8,0,unaff_w23,0);
            if (plVar15 == (long *)0x0) break;
            if ((lVar9 != 0) &&
               (lVar11 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)) {
LAB_076eeabc:
              uVar13 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar13,0);
            }
            if (*(uint *)(plVar15 + 3) <= uVar1) goto LAB_076eeab8;
            plVar15[uVar16 + 4] = lVar9;
            thunk_FUN_044bb4b4(plVar15 + uVar16 + 4,lVar9);
            lVar9 = *(long *)(unaff_x19 + 0x50);
            uVar22 = 5;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar22 = 6;
            }
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_076eeab8;
            uVar13 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
            uVar19 = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094d4178(plVar17,uVar13,uVar19,uVar22,0);
            lVar9 = *(long *)(unaff_x19 + 0x50);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_076eeab8;
            plVar17 = *(long **)(lVar9 + uVar16 * 8 + 0x20);
            if ((int)uVar1 < 1) goto LAB_076ee914;
            plVar18 = *(long **)(unaff_x19 + 0x48);
            uVar1 = uVar1 - 1;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


