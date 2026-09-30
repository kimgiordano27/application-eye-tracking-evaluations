/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthUtils$$CalculateDepthCameraMatrices
ENTRY_POINT: 072787a8
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthUtils__CalculateDepthCameraMatrices
               (int *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long in_x13;
  long in_x14;
  ulong in_x15;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint unaff_w28;
  uint unaff_w29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x072787a8:
  param_1[2] = unaff_w29;
  while( true ) {
    if ((int)unaff_w28 < 1) {
      return;
    }
    if (999 < unaff_w28) {
                    /* WARNING: Subroutine does not return */
      FUN_07277358();
    }
    uVar17 = unaff_w28 - 1;
    if (*(uint *)(in_x13 + 0x18) <= uVar17) goto LAB_072787d8;
    puVar26 = (uint *)(in_x14 + (ulong)uVar17 * (in_x15 & 0xffffffff));
    uVar8 = *puVar26;
    uVar9 = puVar26[1];
    uVar23 = puVar26[2];
    in_x13 = in_stack_00000010;
    in_x14 = in_stack_00000008;
    if (0x13 < (int)(uVar9 - uVar8) && (int)uVar23 < 0xb) break;
LAB_072784d4:
    FUN_07277db4(param_2,uVar8,uVar9,uVar23);
    unaff_w28 = uVar17;
    if (*(int *)(in_stack_00000018 + 200) < *(int *)(in_stack_00000018 + 0xc4)) {
      in_x15 = 0xc;
      param_2 = in_stack_00000018;
      if (*(char *)(in_stack_00000018 + 0xcc) != '\0') {
        return;
      }
    }
    else {
      in_x15 = 0xc;
      param_2 = in_stack_00000018;
    }
  }
  lVar19 = *(long *)(param_2 + 0x98);
  lVar20 = *(long *)(param_2 + 0x88);
  lVar3 = lVar19 + 0x20;
  unaff_w29 = uVar23;
LAB_0727851c:
  if (lVar19 == 0) {
LAB_072787dc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar10 = *(uint *)(lVar19 + 0x18);
  if (uVar8 < uVar10) {
    if (lVar20 == 0) goto LAB_072787dc;
    uVar23 = unaff_w29 + 1;
    uVar11 = *(uint *)(lVar20 + 0x18);
    uVar24 = uVar23 + *(int *)(lVar3 + (long)(int)uVar8 * 4);
    if ((((uVar24 < uVar11) && (uVar9 < uVar10)) &&
        (uVar22 = uVar23 + *(int *)(lVar3 + (long)(int)uVar9 * 4), uVar22 < uVar11)) &&
       (((uint)((int)(uVar9 + uVar8) >> 1) < uVar10 &&
        (uVar4 = uVar23 + *(int *)(lVar3 + ((long)((ulong)(uVar9 + uVar8) << 0x20) >> 0x21) * 4),
        uVar4 < uVar11)))) {
      bVar13 = *(byte *)(lVar20 + (int)uVar24 + 0x20);
      bVar14 = *(byte *)(lVar20 + (int)uVar22 + 0x20);
      bVar15 = *(byte *)(lVar20 + (int)uVar4 + 0x20);
      bVar16 = bVar13;
      if (bVar13 <= bVar14) {
        bVar16 = bVar14;
      }
      if (bVar14 <= bVar13) {
        bVar13 = bVar14;
      }
      if (bVar15 <= bVar16) {
        bVar16 = bVar15;
      }
      uVar4 = uVar9;
      uVar24 = uVar8;
      uVar25 = uVar9;
      uVar22 = uVar8;
      if (bVar13 <= bVar16) {
        bVar13 = bVar16;
      }
      do {
        if ((int)uVar24 <= (int)uVar4) {
          uVar6 = uVar22;
          if (uVar22 <= uVar10) {
            uVar6 = uVar10;
          }
          do {
            uVar7 = uVar24;
            if (uVar24 <= uVar10) {
              uVar7 = uVar10;
            }
            while( true ) {
              if (uVar7 == uVar24) goto LAB_072787d8;
              piVar21 = (int *)(lVar19 + (long)(int)uVar24 * 4 + 0x20);
              iVar12 = *piVar21;
              uVar5 = uVar23 + iVar12;
              if (uVar11 <= uVar5) goto LAB_072787d8;
              bVar16 = *(byte *)(lVar20 + (int)uVar5 + 0x20);
              if (bVar16 == bVar13) break;
              if ((bVar13 <= bVar16) || (uVar24 = uVar24 + 1, (int)uVar4 < (int)uVar24))
              goto joined_r0x072785c8;
            }
            if (uVar22 == uVar6) goto LAB_072787d8;
            lVar2 = lVar19 + (long)(int)uVar22 * 4;
            uVar24 = uVar24 + 1;
            uVar22 = uVar22 + 1;
            *piVar21 = *(int *)(lVar2 + 0x20);
            *(int *)(lVar2 + 0x20) = iVar12;
          } while ((int)uVar24 <= (int)uVar4);
        }
joined_r0x072785c8:
        if ((int)uVar4 < (int)uVar24) {
          if ((int)uVar25 < (int)uVar22) {
            *puVar26 = uVar8;
            puVar26[1] = uVar9;
            puVar26[2] = uVar23;
            if (((int)(uVar9 - uVar8) < 0x14) ||
               (bVar1 = 9 < (int)unaff_w29, unaff_w29 = uVar23, bVar1)) goto LAB_072784d4;
            goto LAB_0727851c;
          }
          iVar12 = uVar22 - uVar8;
          if ((int)(uVar24 - uVar22) <= (int)(uVar22 - uVar8)) {
            iVar12 = uVar24 - uVar22;
          }
          FUN_0727839c(param_2,uVar8,uVar24 - iVar12);
          iVar18 = uVar25 - uVar4;
          iVar12 = uVar9 - uVar25;
          if (iVar18 <= (int)(uVar9 - uVar25)) {
            iVar12 = iVar18;
          }
          FUN_0727839c(in_stack_00000018,uVar24,(uVar9 - iVar12) + 1);
          uVar10 = *(uint *)(in_stack_00000010 + 0x18);
          if (uVar10 <= uVar17) break;
          iVar12 = (uVar8 - uVar22) + uVar24;
          in_x15 = 0xc;
          puVar26[2] = unaff_w29;
          *puVar26 = uVar8;
          puVar26[1] = iVar12 - 1;
          if (uVar10 <= unaff_w28) break;
          piVar21 = (int *)(in_stack_00000008 + (ulong)unaff_w28 * 0xc);
          *piVar21 = iVar12;
          piVar21[1] = uVar9 - iVar18;
          piVar21[2] = uVar23;
          if (uVar10 <= unaff_w28 + 1) break;
          param_1 = (int *)(in_stack_00000008 + (ulong)(unaff_w28 + 1) * 0xc);
          unaff_w28 = unaff_w28 + 2;
          *param_1 = (uVar9 - iVar18) + 1;
          param_1[1] = uVar9;
          param_2 = in_stack_00000018;
          goto code_r0x072787a8;
        }
        if (uVar10 <= uVar4) break;
        piVar21 = (int *)(lVar19 + (long)(int)uVar4 * 4 + 0x20);
        iVar12 = *piVar21;
        if (uVar11 <= uVar23 + iVar12) break;
        bVar16 = *(byte *)(lVar20 + (int)(uVar23 + iVar12) + 0x20);
        if (bVar16 == bVar13) {
          if (uVar10 <= uVar25) break;
          lVar2 = lVar19 + (long)(int)uVar25 * 4;
          uVar4 = uVar4 - 1;
          uVar25 = uVar25 - 1;
          *piVar21 = *(int *)(lVar2 + 0x20);
          *(int *)(lVar2 + 0x20) = iVar12;
          goto joined_r0x072785c8;
        }
        if (bVar13 <= bVar16) {
          uVar4 = uVar4 - 1;
          goto joined_r0x072785c8;
        }
        if (uVar10 <= uVar24) break;
        lVar2 = lVar19 + (long)(int)uVar24 * 4;
        iVar18 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar12;
        *piVar21 = iVar18;
        uVar4 = uVar4 - 1;
        uVar24 = uVar24 + 1;
      } while( true );
    }
  }
LAB_072787d8:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


