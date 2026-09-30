/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$Release
ENTRY_POINT: 077559c4
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


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__Release(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint in_w9;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  do {
    uVar3 = 0;
    do {
      if (in_w9 <= uVar3) {
LAB_07755af8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar4 = (long)(int)uVar3;
      lVar7 = *(long *)(param_1 + lVar4 * 8 + 0x20);
      if ((lVar7 == 0) || (lVar6 = *(long *)(param_2 + 0x70), lVar6 == 0)) goto LAB_07755af4;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_07755af8;
      lVar8 = *(long *)(param_2 + 0x78);
      if (lVar8 == 0) goto LAB_07755af4;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_07755af8;
      uVar5 = *(uint *)(lVar6 + lVar4 * 4 + 0x20);
      iVar2 = *(int *)(lVar8 + lVar4 * 4 + 0x20) + uVar5;
      if ((int)uVar5 < iVar2) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_07755af8;
        lVar7 = *(long *)(lVar7 + 0x10);
        puVar1 = (uint *)(unaff_x22 + lVar4 * 4 + 0x20);
        lVar6 = *(long *)(unaff_x21 + lVar4 * 8 + 0x20);
        lVar4 = (long)iVar2 - (long)(int)uVar5;
        puVar9 = (undefined4 *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
        do {
          if ((lVar6 == 0) || (unaff_x22 == 0)) goto LAB_07755af4;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_07755af8;
          if (lVar7 == 0) goto LAB_07755af4;
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_07755af8;
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 == 0) goto LAB_07755af4;
          if (*(uint *)(lVar8 + 0x18) <= *puVar1) goto LAB_07755af8;
          lVar4 = lVar4 + -1;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(lVar8 + (long)(int)*puVar1 * 4 + 0x20) = *puVar9;
          *puVar1 = *puVar1 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar4 != 0);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)in_w9);
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
          return;
        }
        param_2 = FUN_05badb74();
        if (param_2 == 0) goto LAB_07755af4;
      } while (*(char *)(param_2 + 0x68) == '\0');
      param_1 = *(long *)(unaff_x20 + 0x130);
      if (param_1 == 0) {
LAB_07755af4:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_w9 = *(uint *)(param_1 + 0x18);
    } while ((int)in_w9 < 1);
  } while( true );
}


