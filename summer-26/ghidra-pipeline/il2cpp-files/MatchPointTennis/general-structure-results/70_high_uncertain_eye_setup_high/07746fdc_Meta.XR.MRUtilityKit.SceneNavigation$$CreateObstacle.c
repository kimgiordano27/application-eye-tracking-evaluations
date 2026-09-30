/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$CreateObstacle
ENTRY_POINT: 07746fdc
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


void Meta_XR_MRUtilityKit_SceneNavigation__CreateObstacle(long param_1,long param_2)

{
  int iVar1;
  uint in_w9;
  uint uVar2;
  long in_x10;
  uint in_w11;
  long in_x12;
  long lVar3;
  uint *in_x13;
  long in_x14;
  undefined4 *puVar4;
  long in_x16;
  long lVar5;
  long in_x17;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  do {
    lVar5 = in_x17 - in_x16;
    puVar4 = (undefined4 *)(in_x12 + in_x16 * 4 + 0x20);
    do {
      if ((in_x14 == 0) || (unaff_x22 == 0)) goto LAB_07747084;
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)in_x10) goto LAB_07747088;
      if (in_x12 == 0) goto LAB_07747084;
      if (*(uint *)(in_x12 + 0x18) <= in_w11) goto LAB_07747088;
      lVar6 = *(long *)(in_x14 + 0x10);
      if (lVar6 == 0) goto LAB_07747084;
      if (*(uint *)(lVar6 + 0x18) <= *in_x13) goto LAB_07747088;
      lVar5 = lVar5 + -1;
      in_w11 = in_w11 + 1;
      *(undefined4 *)(lVar6 + (long)(int)*in_x13 * 4 + 0x20) = *puVar4;
      *in_x13 = *in_x13 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    do {
      uVar2 = (int)in_x10 + 1;
      if ((int)in_w9 <= (int)uVar2) {
        do {
          do {
            unaff_w23 = unaff_w23 + 1;
            if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
              return;
            }
            param_2 = FUN_05badb74();
            if (param_2 == 0) goto LAB_07747084;
          } while (*(char *)(param_2 + 0x68) == '\0');
          param_1 = *(long *)(unaff_x20 + 0x78);
          if (param_1 == 0) goto LAB_07747084;
          in_w9 = *(uint *)(param_1 + 0x18);
        } while ((int)in_w9 < 1);
        uVar2 = 0;
      }
      if (in_w9 <= uVar2) goto LAB_07747088;
      in_x10 = (long)(int)uVar2;
      lVar5 = *(long *)(param_1 + in_x10 * 8 + 0x20);
      if ((lVar5 == 0) || (lVar6 = *(long *)(param_2 + 0x70), lVar6 == 0)) {
LAB_07747084:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07747088;
      lVar3 = *(long *)(param_2 + 0x78);
      if (lVar3 == 0) goto LAB_07747084;
      if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_07747088;
      in_w11 = *(uint *)(lVar6 + in_x10 * 4 + 0x20);
      iVar1 = *(int *)(lVar3 + in_x10 * 4 + 0x20) + in_w11;
    } while (iVar1 <= (int)in_w11);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) {
LAB_07747088:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    in_x12 = *(long *)(lVar5 + 0x10);
    in_x17 = (long)iVar1;
    in_x13 = (uint *)(unaff_x22 + in_x10 * 4 + 0x20);
    in_x14 = *(long *)(unaff_x21 + in_x10 * 8 + 0x20);
    in_x16 = (long)(int)in_w11;
  } while( true );
}


