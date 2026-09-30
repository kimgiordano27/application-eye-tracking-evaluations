/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 05f7fe70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *in_x9;
  undefined4 *puVar3;
  undefined4 *in_x10;
  undefined4 *puVar4;
  undefined4 *in_x11;
  undefined4 *puVar5;
  long unaff_x19;
  
  if (param_2 != 0) {
    thunk_FUN_06e01bd0(*param_1,*in_x9,*in_x10,*in_x11,param_2,*(undefined4 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_05f9468c(*(long *)(unaff_x19 + 0x30),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2) {
          puVar2 = (undefined4 *)(unaff_x19 + 0x6c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x70);
          puVar4 = (undefined4 *)(unaff_x19 + 0x74);
          puVar5 = (undefined4 *)(unaff_x19 + 0x78);
        }
        else {
          puVar2 = (undefined4 *)(unaff_x19 + 0x4c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x50);
          puVar4 = (undefined4 *)(unaff_x19 + 0x54);
          puVar5 = (undefined4 *)(unaff_x19 + 0x58);
        }
        if (lVar1 != 0) {
          thunk_FUN_06e01bd0(*puVar2,*puVar3,*puVar4,*puVar5,lVar1,*(undefined4 *)(unaff_x19 + 0x84)
                             ,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


