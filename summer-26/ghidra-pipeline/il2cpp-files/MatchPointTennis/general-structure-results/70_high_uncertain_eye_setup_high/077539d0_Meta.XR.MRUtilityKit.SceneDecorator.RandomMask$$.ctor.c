/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.RandomMask$$.ctor
ENTRY_POINT: 077539d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_RandomMask___ctor(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x9;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  
  while (unaff_x22 != 0) {
    uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (0 < (long)(uVar4 << 0x20)) {
      lVar6 = (long)(int)*(uint *)(unaff_x22 + 0x18);
      piVar8 = (int *)(unaff_x22 + 0x20);
      do {
        if (uVar4 == 0) goto LAB_07753b38;
        lVar6 = lVar6 + -1;
        uVar4 = uVar4 - 1;
        *piVar8 = *piVar8 + unaff_w19;
        piVar8 = piVar8 + 1;
      } while (lVar6 != 0);
    }
    do {
      if (*(char *)(unaff_x20 + 0x69) != '\0') {
        if (unaff_x22 == 0) goto LAB_07753b14;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (0 < (int)uVar2) {
          uVar5 = 1;
          do {
            if ((uVar2 <= uVar5 - 1) || (uVar2 <= uVar5)) goto LAB_07753b38;
            lVar6 = unaff_x22 + (long)(int)uVar5 * 4;
            puVar9 = (undefined4 *)(unaff_x22 + (long)(int)(uVar5 - 1) * 4 + 0x20);
            uVar3 = *puVar9;
            iVar1 = uVar5 + 2;
            uVar5 = uVar5 + 3;
            *puVar9 = *(undefined4 *)(lVar6 + 0x20);
            *(undefined4 *)(lVar6 + 0x20) = uVar3;
          } while (iVar1 < (int)uVar2);
        }
      }
      lVar6 = *(long *)(unaff_x20 + 0x80);
      if (lVar6 == 0) goto LAB_07753b14;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w24) {
LAB_07753b38:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar7 = *(long *)(unaff_x21 + 0x130);
      if (lVar7 == 0) goto LAB_07753b14;
      uVar2 = *(uint *)(lVar6 + in_x9 * 4 + 0x20);
      lVar6 = (long)(int)uVar2;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_07753b38;
      lVar7 = *(long *)(lVar7 + lVar6 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_07753b14;
      if ((uint)param_1 <= uVar2) goto LAB_07753b38;
      if (unaff_x22 == 0) goto LAB_07753b14;
      piVar8 = (int *)(unaff_x23 + lVar6 * 4 + 0x20);
      FUN_07a61200(unaff_x22,*(undefined8 *)(lVar7 + 0x10),*piVar8,0);
      lVar7 = *(long *)(unaff_x20 + 0x78);
      if (lVar7 == 0) goto LAB_07753b14;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_07753b38;
      lVar7 = lVar7 + lVar6 * 4;
      iVar1 = *(int *)(unaff_x22 + 0x18);
      *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + iVar1;
      param_1 = *(undefined8 *)(unaff_x23 + 0x18);
      if ((uint)param_1 <= uVar2) goto LAB_07753b38;
      unaff_w24 = unaff_w24 + 1;
      *piVar8 = *piVar8 + iVar1;
      lVar6 = *(long *)(unaff_x20 + 0xd0);
      if (lVar6 == 0) goto LAB_07753b14;
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)unaff_w24) {
        return;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w24) goto LAB_07753b38;
      in_x9 = (long)(int)unaff_w24;
      lVar6 = *(long *)(lVar6 + in_x9 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_07753b14;
      unaff_x22 = *(long *)(lVar6 + 0x10);
    } while (unaff_w19 == 0);
  }
LAB_07753b14:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


