/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 060457f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 110
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar4 = FUN_071c24dc(param_4,param_5,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a21f90);
  FUN_06045bac();
  if (((unaff_x21 != 0) && (*(long *)(unaff_x19 + 0x1a8) != 0)) &&
     (FUN_06045c10(*(long *)(unaff_x19 + 0x1a8),*(undefined8 *)(unaff_x19 + 0x1b0),
                   *(undefined8 *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x21 + 0xd8),0,lVar5),
     lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x1c) == '\0') {
      if (*(long *)(unaff_x19 + 0x1a8) == 0) goto LAB_06045ad8;
      FUN_06045c10(*(long *)(unaff_x19 + 0x1a8),*(undefined8 *)(unaff_x19 + 0x1b0),
                   *(undefined8 *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x21 + 0xd8),1,lVar5);
      if (*(char *)(lVar5 + 0x1c) == '\0') {
        return;
      }
    }
    if (*(long *)(unaff_x19 + 0x1a8) != 0) {
      FUN_06045ce4(*(undefined4 *)(lVar5 + 0x28),*(long *)(unaff_x19 + 0x1a8),
                   *(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x1b8));
      puVar1 = PTR_DAT_07a208e0;
      lVar7 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar7 != 0) {
        uVar4 = 0;
        do {
          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar4) {
            uVar4 = FUN_060456b0();
            if ((uVar4 & 1) == 0) {
              FUN_0604611c();
            }
            else {
              if (DAT_07ed76b5 == '\0') {
                FUN_03642964(PTR_DAT_079f4dc0);
                DAT_07ed76b5 = '\x01';
              }
              uVar17 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
              *(undefined8 *)(unaff_x19 + 0x18c) =
                   **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
              *(undefined4 *)(unaff_x19 + 0x194) = uVar17;
              if (*(long *)(unaff_x19 + 0x150) == 0) break;
              FUN_071d05c8(*(long *)(unaff_x19 + 0x150),0);
              FUN_071aee04(0);
              uVar16 = FUN_071af638(0);
              *(undefined4 *)(unaff_x19 + 0x180) = uVar16;
              *(undefined4 *)(unaff_x19 + 0x184) = uVar17;
              *(undefined4 *)(unaff_x19 + 0x188) = param_3;
              *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
            }
            lVar5 = *(long *)(unaff_x19 + 0x170);
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
              return;
            }
            break;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_06045ba8:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(unaff_x19 + 200) == 0) break;
          param_3 = *(undefined4 *)(lVar5 + 0x18);
          lVar15 = *(long *)(lVar7 + uVar4 * 8 + 0x20);
          FUN_06045d94(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14));
          lVar7 = *(long *)(lVar5 + 0x20);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_06045ba8;
          if (*(char *)(lVar7 + uVar4 + 0x20) != '\0') {
            lVar7 = *(long *)(unaff_x19 + 0x1a0);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_06045ba8;
            lVar7 = *(long *)(lVar7 + uVar4 * 8 + 0x20);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0x10) == '\0') {
              plVar11 = *(long **)(unaff_x19 + 0x130);
              if (plVar11 == (long *)0x0) break;
              lVar8 = *plVar11;
              uVar12 = *(undefined8 *)(unaff_x19 + 0x1c0);
              lVar7 = *(long *)puVar1;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0604596c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30(plVar11,lVar7,0);
LAB_0604596c:
              iVar2 = (*(code *)*puVar6)(plVar11,puVar6[1]);
              plVar14 = *(long **)(unaff_x19 + 0x120);
              if (plVar14 == (long *)0x0) break;
              lVar8 = *plVar14;
              lVar7 = *(long *)puVar1;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto FUN_060459d0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30(plVar14,lVar7,0);
FUN_060459d0:
              iVar3 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              FUN_060f81f4(uVar12,plVar11,iVar2 != iVar3,0);
              if ((*(long *)(unaff_x19 + 200) == 0) || (*(long *)(unaff_x19 + 0x1a8) == 0)) break;
              param_3 = *(undefined4 *)(lVar5 + 0x18);
              uVar9 = FUN_06046024(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                                   *(long *)(unaff_x19 + 0x1a8),uVar4 & 0xffffffff,
                                   *(undefined8 *)(unaff_x19 + 0x1b0),
                                   *(undefined8 *)(unaff_x19 + 0x1c0),
                                   *(undefined8 *)(*(long *)(unaff_x19 + 200) + 0xd8));
              if ((uVar9 & 1) != 0) {
                if ((lVar15 == 0) || (lVar7 = *(long *)(lVar15 + 0x18), lVar7 == 0)) break;
                uVar9 = 0;
                while ((long)uVar9 < (long)(int)*(uint *)(lVar7 + 0x18)) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_06045ba8;
                  if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
                     (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar8 == 0))
                  goto LAB_06045ad8;
                  lVar13 = *(long *)(unaff_x19 + 0x1b0);
                  uVar17 = *(undefined4 *)(lVar7 + uVar9 * 4 + 0x20);
                  FUN_060f7948(&stack0x00000024,lVar8,uVar17,0);
                  if (lVar13 == 0) goto LAB_06045ad8;
                  FUN_060f7988(lVar13,uVar17);
                  lVar7 = *(long *)(lVar15 + 0x18);
                  uVar9 = uVar9 + 1;
                  if (lVar7 == 0) goto LAB_06045ad8;
                }
                if (*(long *)(unaff_x19 + 200) == 0) break;
                param_3 = *(undefined4 *)(lVar5 + 0x18);
                FUN_06045d94(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14));
              }
            }
          }
          lVar7 = *(long *)(unaff_x19 + 0x1a0);
          uVar4 = uVar4 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_06045ad8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


