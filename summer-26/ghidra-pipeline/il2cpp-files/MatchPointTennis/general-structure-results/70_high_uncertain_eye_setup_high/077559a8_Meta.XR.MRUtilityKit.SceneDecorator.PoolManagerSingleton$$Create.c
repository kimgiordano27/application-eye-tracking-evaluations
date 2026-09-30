/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$Create
ENTRY_POINT: 077559a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__Create(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  do {
    if (*(char *)(param_1 + 0x68) != '\0') {
      lVar4 = *(long *)(unaff_x20 + 0x130);
      if (lVar4 == 0) break;
      uVar3 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (uVar3 <= uVar5) {
LAB_07755af8:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar6 = (long)(int)uVar5;
          lVar9 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar8 = *(long *)(param_1 + 0x70), lVar8 == 0)) goto LAB_07755af4;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_07755af8;
          lVar10 = *(long *)(param_1 + 0x78);
          if (lVar10 == 0) goto LAB_07755af4;
          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_07755af8;
          uVar7 = *(uint *)(lVar8 + lVar6 * 4 + 0x20);
          iVar2 = *(int *)(lVar10 + lVar6 * 4 + 0x20) + uVar7;
          if ((int)uVar7 < iVar2) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_07755af8;
            lVar9 = *(long *)(lVar9 + 0x10);
            puVar1 = (uint *)(unaff_x22 + lVar6 * 4 + 0x20);
            lVar8 = *(long *)(unaff_x21 + lVar6 * 8 + 0x20);
            lVar6 = (long)iVar2 - (long)(int)uVar7;
            puVar11 = (undefined4 *)(lVar9 + (long)(int)uVar7 * 4 + 0x20);
            do {
              if ((lVar8 == 0) || (unaff_x22 == 0)) goto LAB_07755af4;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_07755af8;
              if (lVar9 == 0) goto LAB_07755af4;
              if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_07755af8;
              lVar10 = *(long *)(lVar8 + 0x10);
              if (lVar10 == 0) goto LAB_07755af4;
              if (*(uint *)(lVar10 + 0x18) <= *puVar1) goto LAB_07755af8;
              lVar6 = lVar6 + -1;
              uVar7 = uVar7 + 1;
              *(undefined4 *)(lVar10 + (long)(int)*puVar1 * 4 + 0x20) = *puVar11;
              *puVar1 = *puVar1 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar6 != 0);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar3);
      }
    }
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
      return;
    }
    param_1 = FUN_05badb74();
  } while (param_1 != 0);
LAB_07755af4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


