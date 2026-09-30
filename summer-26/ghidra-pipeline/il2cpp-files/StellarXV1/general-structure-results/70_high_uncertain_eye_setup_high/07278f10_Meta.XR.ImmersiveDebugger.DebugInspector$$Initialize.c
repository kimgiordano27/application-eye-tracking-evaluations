/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$Initialize
ENTRY_POINT: 07278f10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__Initialize
               (long param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint in_w9;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint in_w10;
  uint uVar12;
  ulong in_x11;
  long in_x12;
  uint uVar13;
  uint in_w13;
  uint in_w14;
  long in_x15;
  ulong uVar14;
  long in_x16;
  uint in_w17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar15;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w27;
  long in_stack_00000008;
  
  do {
    if (*(char *)(param_4 + 0x20) == '\0') {
      if ((uint)in_x11 <= (uint)param_2) {
LAB_07279024:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if ((int)param_3 == 0) {
        iVar6 = *(int *)(unaff_x19 + 0x30);
      }
      else {
        iVar6 = (int)param_3 + -1;
      }
      uVar12 = *(uint *)(unaff_x21 + param_2 * 4 + 0x20);
      if (in_w17 <= uVar12) goto LAB_07279024;
      *(int *)(in_x16 + (long)(int)uVar12 * 4 + 0x20) = iVar6;
      *(int *)(unaff_x24 + param_2 * 4) = *(int *)(unaff_x24 + param_2 * 4) + 1;
    }
    in_w14 = in_w14 + 1;
    if ((int)(*(uint *)(in_x12 + (long)(int)in_w13 * 4) & 0xffdfffff) <= (int)in_w14) {
      do {
        lVar10 = 0;
        do {
          uVar12 = unaff_w27 + (int)lVar10;
          if (in_w10 <= uVar12) goto LAB_07279024;
          lVar10 = lVar10 + 0x100;
          *(uint *)(in_x12 + (long)(int)uVar12 * 4) =
               *(uint *)(in_x12 + (long)(int)uVar12 * 4) | 0x200000;
        } while (lVar10 != 0x10000);
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == 0x100) {
          return;
        }
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_07279024;
        lVar10 = 0;
        unaff_w27 = *(uint *)(unaff_x20 + unaff_x23 * 4 + 0x20);
        uVar12 = unaff_w27 * 0x100;
        uVar9 = (ulong)(int)uVar12;
        uVar14 = (uVar9 >> 8) << 10 | 0x20;
        do {
          uVar15 = uVar12 + (int)lVar10;
          uVar11 = (uint)*(undefined8 *)(param_1 + 0x18);
          if (uVar11 <= uVar15) goto LAB_07279024;
          uVar2 = *(uint *)(param_1 + uVar14 + lVar10 * 4);
          if ((uVar2 >> 0x15 & 1) == 0) {
            uVar8 = uVar12 + (int)lVar10 + 1;
            if (uVar11 <= uVar8) goto LAB_07279024;
            if ((((int)uVar2 <
                  (int)((*(uint *)(param_1 + (long)(int)uVar8 * 4 + 0x20) & 0xffdfffff) - 1)) &&
                (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
               (*(char *)(unaff_x19 + 0xcc) != '\0')) {
              return;
            }
            param_1 = *(long *)(unaff_x19 + 0xa8);
            if (param_1 == 0) goto LAB_07279028;
            uVar11 = (uint)*(undefined8 *)(param_1 + 0x18);
            if (uVar11 <= uVar15) goto LAB_07279024;
            lVar7 = param_1 + uVar14;
            *(uint *)(lVar7 + lVar10 * 4) = *(uint *)(lVar7 + lVar10 * 4) | 0x200000;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x100);
        in_w9 = *(uint *)(in_stack_00000008 + 0x18);
        if (in_w9 <= unaff_w27) goto LAB_07279024;
        *(undefined1 *)(in_stack_00000008 + (int)unaff_w27 + 0x20) = 1;
        if (unaff_x23 != 0xff) {
          if ((uVar11 <= uVar12) || (uVar11 <= uVar12 + 0x100)) goto LAB_07279024;
          uVar8 = *(uint *)(param_1 + uVar9 * 4 + 0x20) & 0xffdfffff;
          uVar15 = (*(uint *)(param_1 + (long)(int)(uVar12 + 0x100) * 4 + 0x20) & 0xffdfffff) -
                   uVar8;
          uVar2 = 0;
          do {
            uVar13 = uVar2;
            uVar2 = uVar13 + 1;
          } while (0xfffe < (int)uVar15 >> (uVar13 & 0x1f));
          if (0 < (int)uVar15) {
            lVar10 = *(long *)(unaff_x19 + 0x98);
            if (lVar10 == 0) goto LAB_07279028;
            uVar14 = 0;
            uVar2 = 0;
            if (uVar8 <= *(uint *)(lVar10 + 0x18)) {
              uVar2 = *(uint *)(lVar10 + 0x18) - uVar8;
            }
            do {
              if (uVar2 == uVar14) goto LAB_07279024;
              lVar7 = *(long *)(unaff_x19 + 0x90);
              if (lVar7 == 0) goto LAB_07279028;
              uVar1 = *(uint *)(lVar7 + 0x18);
              uVar4 = *(uint *)(lVar10 + (long)(int)(uVar8 + (uint)uVar14) * 4 + 0x20);
              if (uVar1 <= uVar4) goto LAB_07279024;
              uVar5 = (uint)uVar14 >> (ulong)(uVar13 & 0x1f);
              *(uint *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
              if ((int)uVar4 < 0x14) {
                uVar4 = uVar4 + *(int *)(unaff_x19 + 0x30) + 1;
                if (uVar1 <= uVar4) goto LAB_07279024;
                *(uint *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
              }
              uVar14 = uVar14 + 1;
            } while (uVar15 != uVar14);
          }
          if (0xffff < (int)(uVar15 - 1) >> (uVar13 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
            FUN_07277358();
          }
          if (param_1 == 0) goto LAB_07279028;
        }
        uVar14 = 0;
        uVar15 = unaff_w27;
        do {
          if (uVar11 <= uVar15) goto LAB_07279024;
          if (unaff_x21 == 0) goto LAB_07279028;
          in_x11 = (ulong)*(uint *)(unaff_x21 + 0x18);
          if (in_x11 <= uVar14) goto LAB_07279024;
          lVar10 = (long)(int)uVar15;
          uVar15 = uVar15 + 0x100;
          *(uint *)(unaff_x24 + uVar14 * 4) = *(uint *)(param_1 + lVar10 * 4 + 0x20) & 0xffdfffff;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x100);
        if (param_1 == 0) goto LAB_07279028;
        in_w10 = *(uint *)(param_1 + 0x18);
        if ((in_w10 <= uVar12) || (in_w13 = uVar12 + 0x100, in_w10 <= in_w13)) goto LAB_07279024;
        in_x12 = param_1 + 0x20;
        in_w14 = *(uint *)(in_x12 + uVar9 * 4) & 0xffdfffff;
      } while ((int)(*(uint *)(in_x12 + (long)(int)in_w13 * 4) & 0xffdfffff) <= (int)in_w14);
      in_x15 = *(long *)(unaff_x19 + 0x88);
      in_x16 = *(long *)(unaff_x19 + 0x98);
      param_7 = in_stack_00000008;
    }
    if (in_x16 == 0) {
LAB_07279028:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_w17 = *(uint *)(in_x16 + 0x18);
    if (in_w17 <= in_w14) goto LAB_07279024;
    if (in_x15 == 0) goto LAB_07279028;
    uVar12 = *(uint *)(in_x16 + (long)(int)in_w14 * 4 + 0x20);
    param_3 = (long)(int)uVar12;
    if ((*(uint *)(in_x15 + 0x18) <= uVar12) ||
       (bVar3 = *(byte *)(in_x15 + param_3 + 0x20), param_2 = (ulong)bVar3, in_w9 <= bVar3))
    goto LAB_07279024;
    param_4 = param_7 + param_2;
  } while( true );
}


