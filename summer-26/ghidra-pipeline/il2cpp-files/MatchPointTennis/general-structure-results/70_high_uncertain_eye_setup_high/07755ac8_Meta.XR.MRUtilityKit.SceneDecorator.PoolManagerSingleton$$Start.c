/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$Start
ENTRY_POINT: 07755ac8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__Start(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  while( true ) {
    unaff_w23 = unaff_w23 + 1;
    if (in_w8 <= unaff_w23) {
      return;
    }
    lVar4 = FUN_05badb74();
    if (lVar4 == 0) break;
    if (*(char *)(lVar4 + 0x68) != '\0') {
      lVar5 = *(long *)(unaff_x20 + 0x130);
      if (lVar5 == 0) break;
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        do {
          if (uVar3 <= uVar6) {
LAB_07755af8:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar7 = (long)(int)uVar6;
          lVar10 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
          if ((lVar10 == 0) || (lVar9 = *(long *)(lVar4 + 0x70), lVar9 == 0)) goto LAB_07755af4;
          if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_07755af8;
          lVar11 = *(long *)(lVar4 + 0x78);
          if (lVar11 == 0) goto LAB_07755af4;
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_07755af8;
          uVar8 = *(uint *)(lVar9 + lVar7 * 4 + 0x20);
          iVar2 = *(int *)(lVar11 + lVar7 * 4 + 0x20) + uVar8;
          if ((int)uVar8 < iVar2) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07755af8;
            lVar10 = *(long *)(lVar10 + 0x10);
            puVar1 = (uint *)(unaff_x22 + lVar7 * 4 + 0x20);
            lVar9 = *(long *)(unaff_x21 + lVar7 * 8 + 0x20);
            lVar7 = (long)iVar2 - (long)(int)uVar8;
            puVar12 = (undefined4 *)(lVar10 + (long)(int)uVar8 * 4 + 0x20);
            do {
              if ((lVar9 == 0) || (unaff_x22 == 0)) goto LAB_07755af4;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_07755af8;
              if (lVar10 == 0) goto LAB_07755af4;
              if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_07755af8;
              lVar11 = *(long *)(lVar9 + 0x10);
              if (lVar11 == 0) goto LAB_07755af4;
              if (*(uint *)(lVar11 + 0x18) <= *puVar1) goto LAB_07755af8;
              lVar7 = lVar7 + -1;
              uVar8 = uVar8 + 1;
              *(undefined4 *)(lVar11 + (long)(int)*puVar1 * 4 + 0x20) = *puVar12;
              *puVar1 = *puVar1 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar7 != 0);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar3);
      }
    }
    in_w8 = *(int *)(unaff_x19 + 0x18);
  }
LAB_07755af4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


