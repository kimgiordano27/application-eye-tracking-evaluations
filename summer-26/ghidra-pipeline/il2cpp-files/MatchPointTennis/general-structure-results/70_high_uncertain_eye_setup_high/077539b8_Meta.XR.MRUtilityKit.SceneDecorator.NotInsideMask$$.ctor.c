/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.NotInsideMask$$.ctor
ENTRY_POINT: 077539b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_NotInsideMask___ctor(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x10;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  
  do {
    lVar4 = *(long *)(in_x10 + (long)(int)unaff_w24 * 8 + 0x20);
    if (lVar4 == 0) {
LAB_07753b14:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (unaff_w19 != 0) {
      if (lVar4 == 0) goto LAB_07753b14;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if (0 < (long)(uVar5 << 0x20)) {
        lVar7 = (long)(int)*(uint *)(lVar4 + 0x18);
        piVar9 = (int *)(lVar4 + 0x20);
        do {
          if (uVar5 == 0) goto LAB_07753b38;
          lVar7 = lVar7 + -1;
          uVar5 = uVar5 - 1;
          *piVar9 = *piVar9 + unaff_w19;
          piVar9 = piVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    if (*(char *)(unaff_x20 + 0x69) != '\0') {
      if (lVar4 == 0) goto LAB_07753b14;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar2) {
        uVar6 = 1;
        do {
          if ((uVar2 <= uVar6 - 1) || (uVar2 <= uVar6)) goto LAB_07753b38;
          lVar7 = lVar4 + (long)(int)uVar6 * 4;
          puVar10 = (undefined4 *)(lVar4 + (long)(int)(uVar6 - 1) * 4 + 0x20);
          uVar3 = *puVar10;
          iVar1 = uVar6 + 2;
          uVar6 = uVar6 + 3;
          *puVar10 = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)(lVar7 + 0x20) = uVar3;
        } while (iVar1 < (int)uVar2);
      }
    }
    lVar7 = *(long *)(unaff_x20 + 0x80);
    if (lVar7 == 0) goto LAB_07753b14;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w24) break;
    lVar8 = *(long *)(unaff_x21 + 0x130);
    if (lVar8 == 0) goto LAB_07753b14;
    uVar2 = *(uint *)(lVar7 + (long)(int)unaff_w24 * 4 + 0x20);
    lVar7 = (long)(int)uVar2;
    if (*(uint *)(lVar8 + 0x18) <= uVar2) break;
    lVar8 = *(long *)(lVar8 + lVar7 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_07753b14;
    if ((uint)param_1 <= uVar2) break;
    if (lVar4 == 0) goto LAB_07753b14;
    piVar9 = (int *)(unaff_x23 + lVar7 * 4 + 0x20);
    FUN_07a61200(lVar4,*(undefined8 *)(lVar8 + 0x10),*piVar9,0);
    lVar8 = *(long *)(unaff_x20 + 0x78);
    if (lVar8 == 0) goto LAB_07753b14;
    if (*(uint *)(lVar8 + 0x18) <= uVar2) break;
    lVar8 = lVar8 + lVar7 * 4;
    iVar1 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar1;
    param_1 = *(undefined8 *)(unaff_x23 + 0x18);
    if ((uint)param_1 <= uVar2) break;
    unaff_w24 = unaff_w24 + 1;
    *piVar9 = *piVar9 + iVar1;
    in_x10 = *(long *)(unaff_x20 + 0xd0);
    if (in_x10 == 0) goto LAB_07753b14;
    if ((int)*(uint *)(in_x10 + 0x18) <= (int)unaff_w24) {
      return;
    }
  } while (unaff_w24 < *(uint *)(in_x10 + 0x18));
LAB_07753b38:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


