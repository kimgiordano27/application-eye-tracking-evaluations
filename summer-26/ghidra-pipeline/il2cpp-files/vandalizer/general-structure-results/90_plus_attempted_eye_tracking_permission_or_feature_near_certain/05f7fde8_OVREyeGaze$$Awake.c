/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 05f7fde8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (unaff_x20 != 0) {
    FUN_06e6b2fc();
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_05f9468c(*(long *)(unaff_x19 + 0x30),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2) {
          puVar2 = (undefined4 *)(unaff_x19 + 0x5c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x60);
          puVar4 = (undefined4 *)(unaff_x19 + 100);
          puVar5 = (undefined4 *)(unaff_x19 + 0x68);
        }
        else {
          puVar2 = (undefined4 *)(unaff_x19 + 0x3c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x40);
          puVar4 = (undefined4 *)(unaff_x19 + 0x44);
          puVar5 = (undefined4 *)(unaff_x19 + 0x48);
        }
        if (lVar1 != 0) {
          thunk_FUN_06e01bd0(*puVar2,*puVar3,*puVar4,*puVar5,lVar1,*(undefined4 *)(unaff_x19 + 0x80)
                             ,0);
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
                thunk_FUN_06e01bd0(*puVar2,*puVar3,*puVar4,*puVar5,lVar1,
                                   *(undefined4 *)(unaff_x19 + 0x84),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


