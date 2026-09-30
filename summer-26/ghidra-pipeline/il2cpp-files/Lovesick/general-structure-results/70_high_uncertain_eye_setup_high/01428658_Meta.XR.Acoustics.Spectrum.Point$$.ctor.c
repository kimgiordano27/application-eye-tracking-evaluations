/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum.Point$$.ctor
ENTRY_POINT: 01428658
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum_Point___ctor(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  long in_x9;
  long in_x10;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  
  while (lVar5 = *(long *)(in_x10 + in_x9 * 8 + 0x20), lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if (unaff_w19 != 0) {
      if (lVar5 == 0) break;
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (0 < (long)((ulong)uVar3 << 0x20)) {
        uVar8 = 0;
        do {
          if (uVar3 == uVar8) goto LAB_014287dc;
          *(int *)(lVar5 + 0x20 + uVar8 * 4) = *(int *)(lVar5 + 0x20 + uVar8 * 4) + unaff_w19;
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)uVar3);
      }
    }
    if (*(char *)(unaff_x20 + 0x69) != '\0') {
      if (lVar5 == 0) break;
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar3) {
        uVar7 = 1;
        do {
          if ((uVar3 <= uVar7 - 1) || (uVar3 <= uVar7)) goto LAB_014287dc;
          lVar6 = lVar5 + (long)(int)uVar7 * 4;
          puVar10 = (undefined4 *)(lVar5 + (long)(int)(uVar7 - 1) * 4 + 0x20);
          uVar4 = *puVar10;
          iVar1 = uVar7 + 2;
          uVar7 = uVar7 + 3;
          *puVar10 = *(undefined4 *)(lVar6 + 0x20);
          *(undefined4 *)(lVar6 + 0x20) = uVar4;
        } while (iVar1 < (int)uVar3);
      }
    }
    lVar6 = *(long *)(unaff_x20 + 0x80);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w24) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar9 = *(long *)(unaff_x21 + 0x130);
    if (lVar9 == 0) break;
    uVar3 = *(uint *)(lVar6 + in_x9 * 4 + 0x20);
    lVar6 = (long)(int)uVar3;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_014287dc;
    lVar9 = *(long *)(lVar9 + lVar6 * 8 + 0x20);
    if (lVar9 == 0) break;
    if ((uint)param_1 <= uVar3) goto LAB_014287dc;
    if (lVar5 == 0) break;
    piVar2 = (int *)(unaff_x23 + lVar6 * 4 + 0x20);
    FUN_017953b8(lVar5,*(undefined8 *)(lVar9 + 0x10),*piVar2,0);
    lVar9 = *(long *)(unaff_x20 + 0x78);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_014287dc;
    lVar9 = lVar9 + lVar6 * 4;
    iVar1 = *(int *)(lVar5 + 0x18);
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + iVar1;
    param_1 = *(undefined8 *)(unaff_x23 + 0x18);
    if ((uint)param_1 <= uVar3) goto LAB_014287dc;
    unaff_w24 = unaff_w24 + 1;
    *piVar2 = *piVar2 + iVar1;
    in_x10 = *(long *)(unaff_x20 + 0xd0);
    if (in_x10 == 0) break;
    if ((int)*(uint *)(in_x10 + 0x18) <= (int)unaff_w24) {
      return;
    }
    if (*(uint *)(in_x10 + 0x18) <= unaff_w24) goto LAB_014287dc;
    in_x9 = (long)(int)unaff_w24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


