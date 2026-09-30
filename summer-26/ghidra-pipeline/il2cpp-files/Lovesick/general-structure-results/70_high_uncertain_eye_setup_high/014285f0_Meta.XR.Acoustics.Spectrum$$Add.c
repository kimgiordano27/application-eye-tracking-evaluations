/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum$$Add
ENTRY_POINT: 014285f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum__Add(ulong param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong in_x9;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  uint uVar11;
  
  do {
    if (unaff_x20 == 0) goto LAB_014287b8;
    if (param_1 == in_x9) goto LAB_014287dc;
    lVar9 = *(long *)(unaff_x20 + 0x70);
    if (lVar9 == 0) goto LAB_014287b8;
    if (*(uint *)(lVar9 + 0x18) <= in_x9) goto LAB_014287dc;
    lVar8 = in_x9 * 4;
    lVar5 = in_x9 * 4;
    in_x9 = in_x9 + 1;
    *(undefined4 *)(lVar9 + lVar5 + 0x20) = *(undefined4 *)(unaff_x23 + 0x20 + lVar8);
  } while ((long)in_x9 < (long)(int)param_1);
  if ((unaff_x20 != 0) && (lVar9 = *(long *)(unaff_x20 + 0xd0), lVar9 != 0)) {
    uVar11 = 0;
    do {
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar11) {
        return;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar9 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar9 == 0) break;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (unaff_w19 != 0) {
        if (lVar9 == 0) break;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (0 < (long)((ulong)uVar3 << 0x20)) {
          uVar7 = 0;
          do {
            if (uVar3 == uVar7) goto LAB_014287dc;
            *(int *)(lVar9 + 0x20 + uVar7 * 4) = *(int *)(lVar9 + 0x20 + uVar7 * 4) + unaff_w19;
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)uVar3);
        }
      }
      if (*(char *)(unaff_x20 + 0x69) != '\0') {
        if (lVar9 == 0) break;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar3) {
          uVar6 = 1;
          do {
            if ((uVar3 <= uVar6 - 1) || (uVar3 <= uVar6)) goto LAB_014287dc;
            lVar5 = lVar9 + (long)(int)uVar6 * 4;
            puVar10 = (undefined4 *)(lVar9 + (long)(int)(uVar6 - 1) * 4 + 0x20);
            uVar4 = *puVar10;
            iVar1 = uVar6 + 2;
            uVar6 = uVar6 + 3;
            *puVar10 = *(undefined4 *)(lVar5 + 0x20);
            *(undefined4 *)(lVar5 + 0x20) = uVar4;
          } while (iVar1 < (int)uVar3);
        }
      }
      lVar5 = *(long *)(unaff_x20 + 0x80);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_014287dc;
      lVar8 = *(long *)(unaff_x21 + 0x130);
      if (lVar8 == 0) break;
      uVar3 = *(uint *)(lVar5 + (long)(int)uVar11 * 4 + 0x20);
      lVar5 = (long)(int)uVar3;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_014287dc;
      lVar8 = *(long *)(lVar8 + lVar5 * 8 + 0x20);
      if (lVar8 == 0) break;
      if ((uint)param_1 <= uVar3) goto LAB_014287dc;
      if (lVar9 == 0) break;
      piVar2 = (int *)(unaff_x23 + lVar5 * 4 + 0x20);
      FUN_017953b8(lVar9,*(undefined8 *)(lVar8 + 0x10),*piVar2,0);
      lVar8 = *(long *)(unaff_x20 + 0x78);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_014287dc;
      lVar8 = lVar8 + lVar5 * 4;
      iVar1 = *(int *)(lVar9 + 0x18);
      *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar1;
      param_1 = *(ulong *)(unaff_x23 + 0x18);
      if ((uint)param_1 <= uVar3) goto LAB_014287dc;
      uVar11 = uVar11 + 1;
      *piVar2 = *piVar2 + iVar1;
      lVar9 = *(long *)(unaff_x20 + 0xd0);
    } while (lVar9 != 0);
  }
LAB_014287b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


