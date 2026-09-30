/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$Initialize
ENTRY_POINT: 07278f28
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


void Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry__Initialize
               (long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long in_x5;
  uint uVar7;
  uint in_w9;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint in_w10;
  uint uVar11;
  ulong in_x11;
  long in_x12;
  uint uVar12;
  uint in_w13;
  uint in_w14;
  long in_x15;
  ulong uVar13;
  long in_x16;
  uint in_w17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar14;
  ulong unaff_x23;
  long unaff_x24;
  uint unaff_w27;
  long in_stack_00000008;
  
  while (uVar11 = *(uint *)(unaff_x21 + param_2 * 4 + 0x20), uVar11 < in_w17) {
    *(int *)(in_x16 + (long)(int)uVar11 * 4 + 0x20) = param_3;
    *(int *)(unaff_x24 + param_2 * 4) = *(int *)(unaff_x24 + param_2 * 4) + 1;
    do {
      in_w14 = in_w14 + 1;
      if ((int)(*(uint *)(in_x12 + (long)(int)in_w13 * 4) & 0xffdfffff) <= (int)in_w14) {
        do {
          lVar9 = 0;
          do {
            uVar11 = unaff_w27 + (int)lVar9;
            if (in_w10 <= uVar11) goto LAB_07279024;
            lVar9 = lVar9 + 0x100;
            *(uint *)(in_x12 + (long)(int)uVar11 * 4) =
                 *(uint *)(in_x12 + (long)(int)uVar11 * 4) | 0x200000;
          } while (lVar9 != 0x10000);
          unaff_x23 = unaff_x23 + 1;
          if (unaff_x23 == 0x100) {
            return;
          }
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_07279024;
          lVar9 = 0;
          unaff_w27 = *(uint *)(unaff_x20 + unaff_x23 * 4 + 0x20);
          uVar11 = unaff_w27 * 0x100;
          uVar8 = (ulong)(int)uVar11;
          uVar13 = (uVar8 >> 8) << 10 | 0x20;
          do {
            uVar14 = uVar11 + (int)lVar9;
            uVar10 = (uint)*(undefined8 *)(param_1 + 0x18);
            if (uVar10 <= uVar14) goto LAB_07279024;
            uVar2 = *(uint *)(param_1 + uVar13 + lVar9 * 4);
            if ((uVar2 >> 0x15 & 1) == 0) {
              uVar7 = uVar11 + (int)lVar9 + 1;
              if (uVar10 <= uVar7) goto LAB_07279024;
              if ((((int)uVar2 <
                    (int)((*(uint *)(param_1 + (long)(int)uVar7 * 4 + 0x20) & 0xffdfffff) - 1)) &&
                  (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                  *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
                 (*(char *)(unaff_x19 + 0xcc) != '\0')) {
                return;
              }
              param_1 = *(long *)(unaff_x19 + 0xa8);
              if (param_1 == 0) goto LAB_07279028;
              uVar10 = (uint)*(undefined8 *)(param_1 + 0x18);
              if (uVar10 <= uVar14) goto LAB_07279024;
              lVar6 = param_1 + uVar13;
              *(uint *)(lVar6 + lVar9 * 4) = *(uint *)(lVar6 + lVar9 * 4) | 0x200000;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x100);
          in_w9 = *(uint *)(in_stack_00000008 + 0x18);
          if (in_w9 <= unaff_w27) goto LAB_07279024;
          *(undefined1 *)(in_stack_00000008 + (int)unaff_w27 + 0x20) = 1;
          if (unaff_x23 != 0xff) {
            if ((uVar10 <= uVar11) || (uVar10 <= uVar11 + 0x100)) goto LAB_07279024;
            uVar7 = *(uint *)(param_1 + uVar8 * 4 + 0x20) & 0xffdfffff;
            uVar14 = (*(uint *)(param_1 + (long)(int)(uVar11 + 0x100) * 4 + 0x20) & 0xffdfffff) -
                     uVar7;
            uVar2 = 0;
            do {
              uVar12 = uVar2;
              uVar2 = uVar12 + 1;
            } while (0xfffe < (int)uVar14 >> (uVar12 & 0x1f));
            if (0 < (int)uVar14) {
              lVar9 = *(long *)(unaff_x19 + 0x98);
              if (lVar9 == 0) goto LAB_07279028;
              uVar13 = 0;
              uVar2 = 0;
              if (uVar7 <= *(uint *)(lVar9 + 0x18)) {
                uVar2 = *(uint *)(lVar9 + 0x18) - uVar7;
              }
              do {
                if (uVar2 == uVar13) goto LAB_07279024;
                lVar6 = *(long *)(unaff_x19 + 0x90);
                if (lVar6 == 0) goto LAB_07279028;
                uVar1 = *(uint *)(lVar6 + 0x18);
                uVar4 = *(uint *)(lVar9 + (long)(int)(uVar7 + (uint)uVar13) * 4 + 0x20);
                if (uVar1 <= uVar4) goto LAB_07279024;
                uVar5 = (uint)uVar13 >> (ulong)(uVar12 & 0x1f);
                *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
                if ((int)uVar4 < 0x14) {
                  uVar4 = uVar4 + *(int *)(unaff_x19 + 0x30) + 1;
                  if (uVar1 <= uVar4) goto LAB_07279024;
                  *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar5;
                }
                uVar13 = uVar13 + 1;
              } while (uVar14 != uVar13);
            }
            if (0xffff < (int)(uVar14 - 1) >> (uVar12 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
              FUN_07277358();
            }
            if (param_1 == 0) goto LAB_07279028;
          }
          uVar13 = 0;
          uVar14 = unaff_w27;
          do {
            if (uVar10 <= uVar14) goto LAB_07279024;
            if (unaff_x21 == 0) goto LAB_07279028;
            in_x11 = (ulong)*(uint *)(unaff_x21 + 0x18);
            if (in_x11 <= uVar13) goto LAB_07279024;
            lVar9 = (long)(int)uVar14;
            uVar14 = uVar14 + 0x100;
            *(uint *)(unaff_x24 + uVar13 * 4) = *(uint *)(param_1 + lVar9 * 4 + 0x20) & 0xffdfffff;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x100);
          if (param_1 == 0) goto LAB_07279028;
          in_w10 = *(uint *)(param_1 + 0x18);
          if ((in_w10 <= uVar11) || (in_w13 = uVar11 + 0x100, in_w10 <= in_w13)) goto LAB_07279024;
          in_x12 = param_1 + 0x20;
          in_w14 = *(uint *)(in_x12 + uVar8 * 4) & 0xffdfffff;
        } while ((int)(*(uint *)(in_x12 + (long)(int)in_w13 * 4) & 0xffdfffff) <= (int)in_w14);
        in_x15 = *(long *)(unaff_x19 + 0x88);
        in_x16 = *(long *)(unaff_x19 + 0x98);
        in_x5 = in_stack_00000008;
      }
      if (in_x16 == 0) {
LAB_07279028:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_w17 = *(uint *)(in_x16 + 0x18);
      if (in_w17 <= in_w14) goto LAB_07279024;
      if (in_x15 == 0) goto LAB_07279028;
      uVar11 = *(uint *)(in_x16 + (long)(int)in_w14 * 4 + 0x20);
      if (*(uint *)(in_x15 + 0x18) <= uVar11) goto LAB_07279024;
      bVar3 = *(byte *)(in_x15 + (int)uVar11 + 0x20);
      param_2 = (ulong)bVar3;
      if (in_w9 <= bVar3) goto LAB_07279024;
    } while (*(char *)(in_x5 + param_2 + 0x20) != '\0');
    if ((uint)in_x11 <= (uint)bVar3) break;
    if (uVar11 == 0) {
      param_3 = *(int *)(unaff_x19 + 0x30);
    }
    else {
      param_3 = uVar11 - 1;
    }
  }
LAB_07279024:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


