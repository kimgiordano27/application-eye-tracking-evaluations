/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Rectf>$$MoveNext
ENTRY_POINT: 025f7ee0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Rectf>__MoveNext(long param_1)

{
  bool in_ZR;
  bool in_CY;
  undefined8 *puVar1;
  long *unaff_x19;
  undefined4 unaff_w20;
  long lVar2;
  long unaff_x23;
  long lVar3;
  uint unaff_w24;
  long unaff_x25;
  
  if (!in_CY || in_ZR) goto LAB_025f7fd4;
  *(undefined8 *)(param_1 + unaff_x23 * 8 + 0x20) = *(undefined8 *)(param_1 + unaff_x25 * 8 + 0x20);
  thunk_FUN_01b4f09c();
  lVar3 = unaff_x19[5];
  FUN_03ad7678();
  if (lVar3 != 0) {
    FUN_026a7f70(lVar3,0,0,unaff_w20,*(undefined8 *)StringLiteral_3516);
    lVar3 = *unaff_x19;
    if (lVar3 != 0) {
      if (unaff_w24 < *(uint *)(lVar3 + 0x18)) {
        lVar2 = (long)(int)unaff_w24;
        puVar1 = (undefined8 *)(lVar3 + lVar2 * 8 + 0x20);
        *puVar1 = 0;
        thunk_FUN_01b4f09c(puVar1,0);
        lVar3 = unaff_x19[1];
        if (lVar3 == 0) goto LAB_025f7fd8;
        if (unaff_w24 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + lVar2 * 4 + 0x20) = 0;
          lVar3 = unaff_x19[2];
          if (lVar3 == 0) goto LAB_025f7fd8;
          if (unaff_w24 < *(uint *)(lVar3 + 0x18)) {
            *(undefined1 *)(lVar3 + lVar2 + 0x20) = 0;
            lVar3 = unaff_x19[3];
            if (lVar3 == 0) goto LAB_025f7fd8;
            if (unaff_w24 < *(uint *)(lVar3 + 0x18)) {
              puVar1 = (undefined8 *)(lVar3 + lVar2 * 8 + 0x20);
              *puVar1 = 0;
              thunk_FUN_01b4f09c(puVar1,0);
              return;
            }
          }
        }
      }
LAB_025f7fd4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
LAB_025f7fd8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


