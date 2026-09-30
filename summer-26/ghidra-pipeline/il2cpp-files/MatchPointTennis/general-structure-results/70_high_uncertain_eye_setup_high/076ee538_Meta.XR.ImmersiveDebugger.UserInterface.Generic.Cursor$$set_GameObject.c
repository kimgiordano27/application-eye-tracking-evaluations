/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$set_GameObject
ENTRY_POINT: 076ee538
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__set_GameObject
               (undefined8 *param_1,float param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x19;
  int unaff_w20;
  long *plVar14;
  undefined4 unaff_w22;
  ulong uVar15;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long *plVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar17;
  int unaff_w27;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float unaff_s9;
  undefined8 in_stack_00000010;
  
  FUN_094e99bc(param_3,*param_1);
  puVar4 = PTR_DAT_09f2f608;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_076eeab4;
  fVar19 = param_2 * *(float *)(unaff_x19 + 0x24) + DAT_01c7607c;
  FUN_094e9a74(param_2 - fVar19,fVar19 + fVar19,0.25 / fVar19,0,*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)PTR_DAT_09f2f5f8,0);
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar13 = *(undefined8 *)puVar4;
    uVar20 = 0xbf000000;
    if (*(char *)(unaff_x19 + 0x31) == '\0') goto LAB_076ee5a0;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar13 = *(undefined8 *)puVar4;
LAB_076ee5a0:
    uVar20 = 0;
  }
  if (lVar8 != 0) {
    FUN_094e99bc(uVar20,lVar8,uVar13,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_094e99bc((unaff_s9 + 0.5) - (float)unaff_w20,*(long *)(unaff_x19 + 0x40),
                   *(undefined8 *)PTR_DAT_09f2f5e8,0);
      puVar4 = PTR_DAT_09f1e548;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar19 = *(float *)(unaff_x19 + 0x2c);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        FUN_094e99bc(fVar19,*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f5f0,0);
        plVar9 = (long *)FUN_0950b9c0(unaff_w22,unaff_w24,0,unaff_w23,0);
        uVar1 = *(undefined1 *)(unaff_x19 + 0x31);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar4);
        }
        puVar3 = PTR_DAT_09f1e538;
        FUN_094d4178(unaff_x26,plVar9,uVar13,uVar1,0);
        plVar17 = *(long **)(unaff_x19 + 0x48);
        uVar15 = 0;
        lVar8 = 0x20;
        plVar16 = plVar9;
        do {
          if (plVar16 == (long *)0x0) goto LAB_076eeab4;
          iVar5 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
          iVar6 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          lVar10 = FUN_0950b9c0(iVar5 >> 1,iVar6 >> 1,0,unaff_w23,0);
          if (plVar17 == (long *)0x0) goto LAB_076eeab4;
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0))
          goto LAB_076eeabc;
          if (*(uint *)(plVar17 + 3) <= uVar15) goto LAB_076eeab8;
          *(long *)((long)plVar17 + lVar8) = lVar10;
          thunk_FUN_044bb4b4((long *)((long)plVar17 + lVar8),lVar10);
          if (lVar8 == 0x20) {
            uVar20 = 2;
            if (*(char *)(unaff_x19 + 0x31) != '\0') {
              uVar20 = 3;
            }
          }
          else {
            uVar20 = 4;
          }
          lVar10 = *(long *)(unaff_x19 + 0x48);
          if (lVar10 == 0) goto LAB_076eeab4;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
          uVar13 = *(undefined8 *)(lVar10 + lVar8);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x40);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094d4178(plVar16,uVar13,uVar18,uVar20,0);
          plVar17 = *(long **)(unaff_x19 + 0x48);
          if (plVar17 == (long *)0x0) goto LAB_076eeab4;
          if (*(uint *)(plVar17 + 3) <= uVar15) goto LAB_076eeab8;
          plVar16 = *(long **)((long)plVar17 + lVar8);
          uVar15 = uVar15 + 1;
          lVar8 = lVar8 + 8;
        } while (in_stack_00000010._4_4_ != uVar15);
        if (unaff_w27 < 2) {
LAB_076ee914:
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,unaff_x26,0);
            uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar20 = 7;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar20 = 8;
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_044a54b4(7);
            }
            FUN_094d4178(plVar16,unaff_x25,uVar13,uVar20,0);
            uVar15 = 0;
            lVar8 = 0x20;
            while (lVar10 = *(long *)(unaff_x19 + 0x48), lVar10 != 0) {
              if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_076eeab8:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar13 = *(undefined8 *)(lVar10 + lVar8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar12 = FUN_09531730(uVar13,0,0);
              if ((uVar12 & 1) != 0) {
                lVar10 = *(long *)(unaff_x19 + 0x48);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar10 + lVar8),0);
              }
              lVar10 = *(long *)(unaff_x19 + 0x50);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
              uVar13 = *(undefined8 *)(lVar10 + lVar8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar12 = FUN_09531730(uVar13,0,0);
              if ((uVar12 & 1) != 0) {
                lVar10 = *(long *)(unaff_x19 + 0x50);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
                FUN_0950a138(*(undefined8 *)(lVar10 + lVar8),0);
              }
              lVar10 = *(long *)(unaff_x19 + 0x48);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
              *(undefined8 *)(lVar10 + lVar8) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar10 + lVar8),0);
              lVar10 = *(long *)(unaff_x19 + 0x50);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_076eeab8;
              *(undefined8 *)(lVar10 + lVar8) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar10 + lVar8),0);
              lVar8 = lVar8 + 8;
              uVar15 = uVar15 + 1;
              if (lVar8 == 0xa0) {
                FUN_0950a138(plVar9,0);
                return;
              }
            }
          }
        }
        else {
          uVar2 = in_stack_00000010._4_4_ - 2;
          do {
            if (*(uint *)(plVar17 + 3) <= uVar2) goto LAB_076eeab8;
            if (*(long *)(unaff_x19 + 0x40) == 0) break;
            uVar15 = (ulong)uVar2;
            plVar17 = (long *)plVar17[uVar15 + 4];
            FUN_094e9b40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f2f600,plVar17,0);
            if (plVar17 == (long *)0x0) break;
            plVar14 = *(long **)(unaff_x19 + 0x50);
            uVar20 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            uVar7 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
            lVar8 = FUN_0950b9c0(uVar20,uVar7,0,unaff_w23,0);
            if (plVar14 == (long *)0x0) break;
            if ((lVar8 != 0) &&
               (lVar10 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
LAB_076eeabc:
              uVar13 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar13,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar2) goto LAB_076eeab8;
            plVar14[uVar15 + 4] = lVar8;
            thunk_FUN_044bb4b4(plVar14 + uVar15 + 4,lVar8);
            lVar8 = *(long *)(unaff_x19 + 0x50);
            uVar20 = 5;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              uVar20 = 6;
            }
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_076eeab8;
            uVar13 = *(undefined8 *)(lVar8 + uVar15 * 8 + 0x20);
            uVar18 = *(undefined8 *)(unaff_x19 + 0x40);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094d4178(plVar16,uVar13,uVar18,uVar20,0);
            lVar8 = *(long *)(unaff_x19 + 0x50);
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_076eeab8;
            plVar16 = *(long **)(lVar8 + uVar15 * 8 + 0x20);
            if ((int)uVar2 < 1) goto LAB_076ee914;
            plVar17 = *(long **)(unaff_x19 + 0x48);
            uVar2 = uVar2 - 1;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
  }
LAB_076eeab4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


