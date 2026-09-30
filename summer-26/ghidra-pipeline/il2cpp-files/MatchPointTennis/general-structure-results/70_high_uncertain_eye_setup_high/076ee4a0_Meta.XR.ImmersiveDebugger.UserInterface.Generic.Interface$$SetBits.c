/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$SetBits
ENTRY_POINT: 076ee4a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__SetBits(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x19;
  ulong uVar15;
  long *plVar16;
  undefined4 unaff_w22;
  ulong uVar17;
  undefined4 unaff_w23;
  int unaff_w24;
  long *plVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  uint uStack0000000000000014;
  
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  dVar23 = (double)FUN_07a3ef90((double)unaff_w24,0x4000000000000000,0);
  fVar24 = *(float *)(unaff_x19 + 0x28) + (float)dVar23 + -8.0;
  uVar1 = 0x80000000;
  if (fVar24 != INFINITY) {
    uVar1 = (int)fVar24;
  }
  uVar2 = uVar1;
  if (0xf < (int)uVar1) {
    uVar2 = 0x10;
  }
  uStack0000000000000014 = uVar2;
  if ((int)uVar2 < 2) {
    uStack0000000000000014 = 1;
  }
  fVar21 = (float)FUN_09517a08(*(undefined4 *)(unaff_x19 + 0x20),0);
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  FUN_094e99bc(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5e0,0);
  puVar5 = PTR_DAT_09f2f608;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  fVar22 = fVar21 * *(float *)(unaff_x19 + 0x24) + DAT_01c7607c;
  FUN_094e9a74(fVar21 - fVar22,fVar22 + fVar22,0.25 / fVar22,0,*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)PTR_DAT_09f2f5f8,0);
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    lVar10 = *(long *)(unaff_x19 + 0x40);
    uVar14 = *(undefined8 *)puVar5;
    uVar8 = 0xbf000000;
    if (*(char *)(unaff_x19 + 0x31) == '\0') goto LAB_076ee5a0;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x40);
    uVar14 = *(undefined8 *)puVar5;
LAB_076ee5a0:
    uVar8 = 0;
  }
  if (lVar10 != 0) {
    FUN_094e99bc(uVar8,lVar10,uVar14,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_094e99bc((fVar24 + 0.5) - (float)(int)uVar1,*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)PTR_DAT_09f2f5e8,0);
      puVar5 = PTR_DAT_09f1e548;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar24 = *(float *)(unaff_x19 + 0x2c);
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        FUN_094e99bc(fVar24,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5f0,0);
        plVar11 = (long *)FUN_0950b9c0(unaff_w22,unaff_w24,0,unaff_w23,0);
        uVar3 = *(undefined1 *)(unaff_x19 + 0x31);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar5);
        }
        puVar4 = PTR_DAT_09f1e538;
        FUN_094d4178(unaff_x26,plVar11,uVar14,uVar3,0);
        plVar19 = *(long **)(unaff_x19 + 0x48);
        uVar17 = 0;
        uVar15 = (ulong)uStack0000000000000014;
        lVar10 = 0x20;
        plVar18 = plVar11;
        do {
          if (plVar18 == (long *)0x0) goto LAB_076eeab4;
          iVar6 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          iVar7 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          lVar12 = FUN_0950b9c0(iVar6 >> 1,iVar7 >> 1,0,unaff_w23,0);
          if (plVar19 == (long *)0x0) goto LAB_076eeab4;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
          goto LAB_076eeabc;
          if (*(uint *)(plVar19 + 3) <= uVar17) goto LAB_076eeab8;
          *(long *)((long)plVar19 + lVar10) = lVar12;
          thunk_FUN_044bb4b4((long *)((long)plVar19 + lVar10),lVar12);
          if (lVar10 == 0x20) {
            uVar8 = 2;
            if (*(char *)(unaff_x19 + 0x31) != '\0') {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 4;
          }
          lVar12 = *(long *)(unaff_x19 + 0x48);
          if (lVar12 == 0) goto LAB_076eeab4;
          if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
          uVar14 = *(undefined8 *)(lVar12 + lVar10);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094d4178(plVar18,uVar14,uVar20,uVar8,0);
          plVar19 = *(long **)(unaff_x19 + 0x48);
          if (plVar19 == (long *)0x0) goto LAB_076eeab4;
          if (*(uint *)(plVar19 + 3) <= uVar17) goto LAB_076eeab8;
          plVar18 = *(long **)((long)plVar19 + lVar10);
          uVar17 = uVar17 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar15 != uVar17);
        if ((int)uVar2 < 2) {
LAB_076ee914:
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,unaff_x26,0);
            uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar8 = 7;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar8 = 8;
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_044a54b4(7);
            }
            FUN_094d4178(plVar18,unaff_x25,uVar14,uVar8,0);
            uVar17 = 0;
            lVar10 = 0x20;
            while (lVar12 = *(long *)(unaff_x19 + 0x48), lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) <= uVar17) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar14 = *(undefined8 *)(lVar12 + lVar10);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar15 = FUN_09531730(uVar14,0,0);
              if ((uVar15 & 1) != 0) {
                lVar12 = *(long *)(unaff_x19 + 0x48);
                if (lVar12 == 0) break;
                if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar12 + lVar10),0);
              }
              lVar12 = *(long *)(unaff_x19 + 0x50);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
              uVar14 = *(undefined8 *)(lVar12 + lVar10);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar15 = FUN_09531730(uVar14,0,0);
              if ((uVar15 & 1) != 0) {
                lVar12 = *(long *)(unaff_x19 + 0x50);
                if (lVar12 == 0) break;
                if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar12 + lVar10),0);
              }
              lVar12 = *(long *)(unaff_x19 + 0x48);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
              *(undefined8 *)(lVar12 + lVar10) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + lVar10),0);
              lVar12 = *(long *)(unaff_x19 + 0x50);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_076eeab8;
              *(undefined8 *)(lVar12 + lVar10) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + lVar10),0);
              lVar10 = lVar10 + 8;
              uVar17 = uVar17 + 1;
              if (lVar10 == 0xa0) {
                FUN_0950a138(plVar11,0);
                return;
              }
            }
          }
        }
        else {
          uVar1 = uStack0000000000000014 - 2;
          do {
            if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_076eeab8;
            if (*(long *)(unaff_x19 + 0x40) == 0) break;
            uVar17 = (ulong)uVar1;
            plVar19 = (long *)plVar19[uVar17 + 4];
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar19,0);
            if (plVar19 == (long *)0x0) break;
            plVar16 = *(long **)(unaff_x19 + 0x50);
            uVar8 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
            uVar9 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
            lVar10 = FUN_0950b9c0(uVar8,uVar9,0,unaff_w23,0);
            if (plVar16 == (long *)0x0) break;
            if ((lVar10 != 0) &&
               (lVar12 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
            {
LAB_076eeabc:
              uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar14,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_076eeab8;
            plVar16[uVar17 + 4] = lVar10;
            thunk_FUN_044bb4b4(plVar16 + uVar17 + 4,lVar10);
            lVar10 = *(long *)(unaff_x19 + 0x50);
            uVar8 = 5;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar8 = 6;
            }
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_076eeab8;
            uVar14 = *(undefined8 *)(lVar10 + uVar17 * 8 + 0x20);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094d4178(plVar18,uVar14,uVar20,uVar8,0);
            lVar10 = *(long *)(unaff_x19 + 0x50);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_076eeab8;
            plVar18 = *(long **)(lVar10 + uVar17 * 8 + 0x20);
            if ((int)uVar1 < 1) goto LAB_076ee914;
            plVar19 = *(long **)(unaff_x19 + 0x48);
            uVar1 = uVar1 - 1;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


