/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 05f7fd88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(undefined1 param_1 [16],undefined4 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_2;
  lVar1 = FUN_06e5502c();
  if (lVar1 != 0) {
    FUN_06e6a5c4(lVar1,0);
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
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
            thunk_FUN_06e01bd0(*puVar2,*puVar3,*puVar4,*puVar5,lVar1,
                               *(undefined4 *)(unaff_x19 + 0x80),0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


