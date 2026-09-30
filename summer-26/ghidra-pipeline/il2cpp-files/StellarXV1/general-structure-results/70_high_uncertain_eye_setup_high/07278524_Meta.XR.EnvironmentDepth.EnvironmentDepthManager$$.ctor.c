/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$.ctor
ENTRY_POINT: 07278524
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager___ctor(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int in_w8;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  uint in_w13;
  int *piVar14;
  uint uVar15;
  uint unaff_w21;
  uint unaff_w22;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x07278524:
  if (unaff_w22 < in_w13) {
    if (in_x11 == 0) goto LAB_072787dc;
    uVar16 = unaff_w29 + 1;
    uVar7 = *(uint *)(in_x11 + 0x18);
    uVar17 = uVar16 + *(int *)(in_x12 + (long)(int)unaff_w22 * 4);
    if ((((uVar17 < uVar7) && (unaff_w21 < in_w13)) &&
        (uVar15 = uVar16 + *(int *)(in_x12 + (long)(int)unaff_w21 * 4), uVar15 < uVar7)) &&
       (((uint)in_x10 < in_w13 && (uVar3 = uVar16 + *(int *)(in_x12 + in_x10 * 4), uVar3 < uVar7))))
    {
      bVar9 = *(byte *)(in_x11 + (int)uVar17 + 0x20);
      bVar10 = *(byte *)(in_x11 + (int)uVar15 + 0x20);
      bVar11 = *(byte *)(in_x11 + (int)uVar3 + 0x20);
      bVar12 = bVar9;
      if (bVar9 <= bVar10) {
        bVar12 = bVar10;
      }
      if (bVar10 <= bVar9) {
        bVar9 = bVar10;
      }
      if (bVar11 <= bVar12) {
        bVar12 = bVar11;
      }
      uVar3 = unaff_w21;
      uVar17 = unaff_w22;
      uVar18 = unaff_w21;
      uVar15 = unaff_w22;
      if (bVar9 <= bVar12) {
        bVar9 = bVar12;
      }
      do {
        if ((int)uVar17 <= (int)uVar3) {
          uVar5 = uVar15;
          if (uVar15 <= in_w13) {
            uVar5 = in_w13;
          }
          do {
            uVar6 = uVar17;
            if (uVar17 <= in_w13) {
              uVar6 = in_w13;
            }
            while( true ) {
              if (uVar6 == uVar17) goto LAB_072787d8;
              piVar14 = (int *)(in_x9 + (long)(int)uVar17 * 4 + 0x20);
              iVar8 = *piVar14;
              uVar4 = uVar16 + iVar8;
              if (uVar7 <= uVar4) goto LAB_072787d8;
              bVar12 = *(byte *)(in_x11 + (int)uVar4 + 0x20);
              if (bVar12 == bVar9) break;
              if ((bVar9 <= bVar12) || (uVar17 = uVar17 + 1, (int)uVar3 < (int)uVar17))
              goto joined_r0x072785c8;
            }
            if (uVar15 == uVar5) goto LAB_072787d8;
            lVar2 = in_x9 + (long)(int)uVar15 * 4;
            uVar17 = uVar17 + 1;
            uVar15 = uVar15 + 1;
            *piVar14 = *(int *)(lVar2 + 0x20);
            *(int *)(lVar2 + 0x20) = iVar8;
          } while ((int)uVar17 <= (int)uVar3);
        }
joined_r0x072785c8:
        if ((int)uVar3 < (int)uVar17) {
          if ((int)uVar18 < (int)uVar15) {
            *unaff_x26 = unaff_w22;
            unaff_x26[1] = unaff_w21;
            unaff_x26[2] = uVar16;
            if (in_w8 < 0x14) goto LAB_072784d4;
            bVar1 = 9 < (int)unaff_w29;
            unaff_w29 = uVar16;
            if (bVar1) goto LAB_072784d4;
            goto LAB_0727851c;
          }
          iVar8 = uVar15 - unaff_w22;
          if ((int)(uVar17 - uVar15) <= (int)(uVar15 - unaff_w22)) {
            iVar8 = uVar17 - uVar15;
          }
          FUN_0727839c(param_1,unaff_w22,uVar17 - iVar8);
          iVar13 = uVar18 - uVar3;
          iVar8 = unaff_w21 - uVar18;
          if (iVar13 <= (int)(unaff_w21 - uVar18)) {
            iVar8 = iVar13;
          }
          FUN_0727839c(in_stack_00000018,uVar17,(unaff_w21 - iVar8) + 1);
          uVar7 = *(uint *)(in_stack_00000010 + 0x18);
          if (uVar7 <= unaff_w28) break;
          iVar8 = (unaff_w22 - uVar15) + uVar17;
          unaff_x26[2] = unaff_w29;
          *unaff_x26 = unaff_w22;
          unaff_x26[1] = iVar8 - 1;
          if (uVar7 <= unaff_w27) break;
          piVar14 = (int *)(in_stack_00000008 + (ulong)unaff_w27 * 0xc);
          *piVar14 = iVar8;
          piVar14[1] = unaff_w21 - iVar13;
          piVar14[2] = uVar16;
          if (uVar7 <= unaff_w27 + 1) break;
          piVar14 = (int *)(in_stack_00000008 + (ulong)(unaff_w27 + 1) * 0xc);
          *piVar14 = (unaff_w21 - iVar13) + 1;
          piVar14[1] = unaff_w21;
          piVar14[2] = unaff_w29;
          unaff_w27 = unaff_w27 + 2;
          goto LAB_072787ac;
        }
        if (in_w13 <= uVar3) break;
        piVar14 = (int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20);
        iVar8 = *piVar14;
        if (uVar7 <= uVar16 + iVar8) break;
        bVar12 = *(byte *)(in_x11 + (int)(uVar16 + iVar8) + 0x20);
        if (bVar12 == bVar9) {
          if (in_w13 <= uVar18) break;
          lVar2 = in_x9 + (long)(int)uVar18 * 4;
          uVar3 = uVar3 - 1;
          uVar18 = uVar18 - 1;
          *piVar14 = *(int *)(lVar2 + 0x20);
          *(int *)(lVar2 + 0x20) = iVar8;
          goto joined_r0x072785c8;
        }
        if (bVar9 <= bVar12) {
          uVar3 = uVar3 - 1;
          goto joined_r0x072785c8;
        }
        if (in_w13 <= uVar17) break;
        lVar2 = in_x9 + (long)(int)uVar17 * 4;
        iVar13 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar8;
        *piVar14 = iVar13;
        uVar3 = uVar3 - 1;
        uVar17 = uVar17 + 1;
      } while( true );
    }
  }
LAB_072787d8:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
LAB_072787ac:
  if ((int)unaff_w27 < 1) {
    return;
  }
  if (999 < unaff_w27) {
                    /* WARNING: Subroutine does not return */
    FUN_07277358();
  }
  unaff_w28 = unaff_w27 - 1;
  if (*(uint *)(in_stack_00000010 + 0x18) <= unaff_w28) goto LAB_072787d8;
  unaff_x26 = (uint *)(in_stack_00000008 + (ulong)unaff_w28 * 0xc);
  unaff_w22 = *unaff_x26;
  unaff_w21 = unaff_x26[1];
  unaff_w29 = unaff_x26[2];
  in_w8 = unaff_w21 - unaff_w22;
  param_1 = in_stack_00000018;
  uVar16 = unaff_w29;
  if (in_w8 < 0x14 || 10 < (int)unaff_w29) {
LAB_072784d4:
    FUN_07277db4(param_1,unaff_w22,unaff_w21,uVar16);
    unaff_w27 = unaff_w28;
    if ((*(int *)(in_stack_00000018 + 200) < *(int *)(in_stack_00000018 + 0xc4)) &&
       (*(char *)(in_stack_00000018 + 0xcc) != '\0')) {
      return;
    }
    goto LAB_072787ac;
  }
  in_x9 = *(long *)(in_stack_00000018 + 0x98);
  in_x11 = *(long *)(in_stack_00000018 + 0x88);
  in_x10 = (long)((ulong)(unaff_w21 + unaff_w22) << 0x20) >> 0x21;
  in_x12 = in_x9 + 0x20;
LAB_0727851c:
  if (in_x9 == 0) {
LAB_072787dc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_w13 = *(uint *)(in_x9 + 0x18);
  goto code_r0x07278524;
}


