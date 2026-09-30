/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 07c5940c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceListSaveComplete(undefined1 param_1 [16])

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000038;
  
  *(long *)(unaff_x19 + 0x94) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x8c) = param_1._0_8_;
  puVar3 = PTR_DAT_09f28c08;
                    /* try { // try from 07c59410 to 07d59413 has its CatchHandler @ 07c59694 */
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 07c59428 to 07d5942f has its CatchHandler @ 07c59680 */
    if (uVar8 != 0) {
                    /* try { // try from 07c59430 to 07d594e7 has its CatchHandler @ 07c5917c */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f28c08) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07c59468;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac();
LAB_07c59468:
    uVar8 = (*(code *)*puVar5)();
    if ((uVar8 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(byte *)(unaff_x19 + 0x71) ^ 1;
    }
    plVar10 = *(long **)(unaff_x19 + 0x48);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 07c594e8 to 07d5950f has its CatchHandler @ 07c59684 */
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07c59514;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar10,lVar6,0);
LAB_07c59514:
      bVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      puVar11 = (uint *)(unaff_x19 + 0x74);
      *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
      if ((uVar12 & 0.5 < (fStack0000000000000014 * in_stack_00000038 +
                          fStack0000000000000010 * fStack0000000000000024 +
                          in_stack_00000008._4_4_ * fStack0000000000000020) * 0.5 + 0.5 &
          *puVar11 >> 0x1f) == 0) {
        if ((int)*puVar11 < 0) {
          return;
        }
        plVar10 = *(long **)(unaff_x19 + 0x58);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          lVar6 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07c595d8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar10,lVar6,0);
LAB_07c595d8:
          uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
          if ((uVar8 & 1) != 0) {
            FUN_07c586d0();
            *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
            *(undefined1 *)(unaff_x19 + 0xb0) = 0;
            return;
          }
          uVar12 = *puVar11;
          if ((int)uVar12 < 0) {
            return;
          }
          if (*(char *)(unaff_x19 + 0xb0) != '\0') {
            return;
          }
          lVar6 = *(long *)(unaff_x19 + 0x38);
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 <= uVar12) goto LAB_07c596cc;
            lVar7 = *(long *)(lVar6 + (ulong)uVar12 * 8 + 0x20);
            if (lVar7 != 0) {
              if (*(float *)(lVar7 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar7 + 0x14)) {
                  return;
                }
                uVar2 = uVar1 - 1;
                if ((int)(uVar12 + 1) <= (int)uVar2) {
                  uVar2 = uVar12 + 1;
                }
                *puVar11 = uVar2;
                if (uVar1 <= uVar2) goto LAB_07c596cc;
                uVar8 = (ulong)(int)uVar2;
              }
              else {
                if ((int)uVar12 < 2) {
                  uVar12 = 1;
                }
                uVar12 = uVar12 - 1;
                *puVar11 = uVar12;
                if (uVar1 <= uVar12) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                uVar8 = (ulong)uVar12;
              }
              if (*(long *)(lVar6 + uVar8 * 8 + 0x20) != 0) goto LAB_07c59568;
            }
          }
        }
      }
      else {
        lVar6 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0x18) == '\0') {
            *puVar11 = 0xffffffff;
            return;
          }
LAB_07c59568:
          FUN_07c586d0();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


