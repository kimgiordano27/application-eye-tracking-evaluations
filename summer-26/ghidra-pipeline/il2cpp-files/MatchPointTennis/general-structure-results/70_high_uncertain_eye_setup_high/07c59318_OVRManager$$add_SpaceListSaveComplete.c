/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 07c59318
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long in_x11;
  long unaff_x19;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_d3;
  undefined8 unaff_d10;
  float unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  ulong in_stack_00000030;
  float in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  in_stack_00000030 = in_stack_00000030 >> 0x20;
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar7 = (undefined8 *)FUN_044822ac();
      goto LAB_07c59348;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar7 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_07c59348:
                    /* try { // try from 07c59348 to 07d5936f has its CatchHandler @ 07c5969c */
  iVar6 = (*(code *)*puVar7)();
  fVar15 = -unaff_s11;
  if (iVar6 != 1) {
    fVar15 = unaff_s11;
  }
  uVar18 = 0xc28c0000;
  uVar10 = (ulong)(uint)(fVar15 + 360.0);
  fVar3 = fVar15 + 360.0;
  if (-70.0 <= fVar15) {
    fVar3 = fVar15;
  }
  *(float *)(unaff_x19 + 0x7c) = fVar3;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar16 = FUN_09539d64(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 07c593a4 to 07d593cb has its CatchHandler @ 07c59698 */
    uVar17 = FUN_09516c60(0);
                    /* try { // try from 07c593e0 to 07d593e7 has its CatchHandler @ 07c59688 */
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_09537b20(uVar16,uVar10,uVar18,uVar17,unaff_d10,in_stack_00000030,in_d3,&stack0x00000040,0);
    plVar12 = *(long **)(unaff_x19 + 0x48);
                    /* try { // try from 07c59400 to 07d59403 has its CatchHandler @ 07c5967c */
    *(undefined4 *)(unaff_x19 + 0x80) = unaff_s12;
    *(undefined4 *)(unaff_x19 + 0x84) = unaff_s13;
                    /* try { // try from 07c59404 to 07d5940f has its CatchHandler @ 07c5968c */
    *(undefined4 *)(unaff_x19 + 0x88) = unaff_s14;
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
    puVar4 = PTR_DAT_09f28c08;
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f28c08) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07c59468;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f28c08,0);
LAB_07c59468:
      uVar10 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if ((uVar10 & 1) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(byte *)(unaff_x19 + 0x71) ^ 1;
      }
      plVar12 = *(long **)(unaff_x19 + 0x48);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_07c59514;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar12,lVar8,0);
LAB_07c59514:
        bVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        puVar13 = (uint *)(unaff_x19 + 0x74);
        *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
        if ((uVar14 & 0.5 < (fStack0000000000000014 * in_stack_00000038 +
                            fStack0000000000000010 * fStack0000000000000024 +
                            in_stack_00000008._4_4_ * fStack0000000000000020) * 0.5 + 0.5 &
            *puVar13 >> 0x1f) == 0) {
          if ((int)*puVar13 < 0) {
            return;
          }
          plVar12 = *(long **)(unaff_x19 + 0x58);
          if (plVar12 != (long *)0x0) {
            lVar9 = *plVar12;
            lVar8 = *(long *)puVar4;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_07c595d8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac(plVar12,lVar8,0);
LAB_07c595d8:
            uVar10 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            if ((uVar10 & 1) != 0) {
              FUN_07c586d0();
              *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
              *(undefined1 *)(unaff_x19 + 0xb0) = 0;
              return;
            }
            uVar14 = *puVar13;
            if ((int)uVar14 < 0) {
              return;
            }
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              return;
            }
            lVar8 = *(long *)(unaff_x19 + 0x38);
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 <= uVar14) goto LAB_07c596cc;
              lVar9 = *(long *)(lVar8 + (ulong)uVar14 * 8 + 0x20);
              if (lVar9 != 0) {
                if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                  if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                    return;
                  }
                  uVar2 = uVar1 - 1;
                  if ((int)(uVar14 + 1) <= (int)uVar2) {
                    uVar2 = uVar14 + 1;
                  }
                  *puVar13 = uVar2;
                  if (uVar1 <= uVar2) goto LAB_07c596cc;
                  uVar10 = (ulong)(int)uVar2;
                }
                else {
                  if ((int)uVar14 < 2) {
                    uVar14 = 1;
                  }
                  uVar14 = uVar14 - 1;
                  *puVar13 = uVar14;
                  if (uVar1 <= uVar14) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  uVar10 = (ulong)uVar14;
                }
                if (*(long *)(lVar8 + uVar10 * 8 + 0x20) != 0) goto LAB_07c59568;
              }
            }
          }
        }
        else {
          lVar8 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
          if (lVar8 != 0) {
            if (*(char *)(lVar8 + 0x18) == '\0') {
              *puVar13 = 0xffffffff;
              return;
            }
LAB_07c59568:
            FUN_07c586d0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


