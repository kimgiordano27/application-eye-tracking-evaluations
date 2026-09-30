/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SimplexNoiseMask$$SampleMask
ENTRY_POINT: 077539f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SimplexNoiseMask__SampleMask(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long in_x9;
  ulong in_x10;
  long lVar4;
  uint uVar5;
  long in_x11;
  long lVar6;
  int *piVar7;
  int *in_x12;
  int in_w13;
  undefined4 *puVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  
  do {
    in_x11 = in_x11 + -1;
    in_x10 = in_x10 - 1;
    piVar7 = in_x12 + 1;
    *in_x12 = in_w13 + unaff_w19;
    if (in_x11 == 0) {
      do {
        do {
          if (*(char *)(unaff_x20 + 0x69) != '\0') {
            if (unaff_x22 == 0) goto LAB_07753b14;
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            if (0 < (int)uVar2) {
              uVar5 = 1;
              do {
                if ((uVar2 <= uVar5 - 1) || (uVar2 <= uVar5)) goto LAB_07753b38;
                lVar4 = unaff_x22 + (long)(int)uVar5 * 4;
                puVar8 = (undefined4 *)(unaff_x22 + (long)(int)(uVar5 - 1) * 4 + 0x20);
                uVar3 = *puVar8;
                iVar1 = uVar5 + 2;
                uVar5 = uVar5 + 3;
                *puVar8 = *(undefined4 *)(lVar4 + 0x20);
                *(undefined4 *)(lVar4 + 0x20) = uVar3;
              } while (iVar1 < (int)uVar2);
            }
          }
          lVar4 = *(long *)(unaff_x20 + 0x80);
          if (lVar4 == 0) {
LAB_07753b14:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_w24) goto LAB_07753b38;
          lVar6 = *(long *)(unaff_x21 + 0x130);
          if (lVar6 == 0) goto LAB_07753b14;
          uVar2 = *(uint *)(lVar4 + in_x9 * 4 + 0x20);
          lVar4 = (long)(int)uVar2;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07753b38;
          lVar6 = *(long *)(lVar6 + lVar4 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_07753b14;
          if ((uint)param_1 <= uVar2) goto LAB_07753b38;
          if (unaff_x22 == 0) goto LAB_07753b14;
          piVar7 = (int *)(unaff_x23 + lVar4 * 4 + 0x20);
          FUN_07a61200(unaff_x22,*(undefined8 *)(lVar6 + 0x10),*piVar7,0);
          lVar6 = *(long *)(unaff_x20 + 0x78);
          if (lVar6 == 0) goto LAB_07753b14;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07753b38;
          lVar6 = lVar6 + lVar4 * 4;
          iVar1 = *(int *)(unaff_x22 + 0x18);
          *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + iVar1;
          param_1 = *(undefined8 *)(unaff_x23 + 0x18);
          if ((uint)param_1 <= uVar2) goto LAB_07753b38;
          unaff_w24 = unaff_w24 + 1;
          *piVar7 = *piVar7 + iVar1;
          lVar4 = *(long *)(unaff_x20 + 0xd0);
          if (lVar4 == 0) goto LAB_07753b14;
          if ((int)*(uint *)(lVar4 + 0x18) <= (int)unaff_w24) {
            return;
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_w24) goto LAB_07753b38;
          in_x9 = (long)(int)unaff_w24;
          lVar4 = *(long *)(lVar4 + in_x9 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_07753b14;
          unaff_x22 = *(long *)(lVar4 + 0x10);
        } while (unaff_w19 == 0);
        if (unaff_x22 == 0) goto LAB_07753b14;
        in_x10 = (ulong)*(uint *)(unaff_x22 + 0x18);
      } while ((long)(in_x10 << 0x20) < 1);
      in_x11 = (long)(int)*(uint *)(unaff_x22 + 0x18);
      piVar7 = (int *)(unaff_x22 + 0x20);
    }
    if (in_x10 == 0) {
LAB_07753b38:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    in_w13 = *piVar7;
    in_x12 = piVar7;
  } while( true );
}


