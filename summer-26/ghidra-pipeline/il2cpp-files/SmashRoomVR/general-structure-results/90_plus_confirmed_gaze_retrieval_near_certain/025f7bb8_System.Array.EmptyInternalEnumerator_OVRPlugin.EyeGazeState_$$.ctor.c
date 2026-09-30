/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 025f7bb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined1 unaff_w23;
  uint uVar3;
  long unaff_x24;
  long unaff_x25;
  long lVar4;
  long lVar5;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x840));
  *(undefined1 *)(unaff_x25 + 0x2a) = 1;
  lVar1 = unaff_x22[4];
  if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar4 = *unaff_x22;
  if (lVar4 != 0) {
    if ((int)lVar1 < *(int *)(lVar4 + 0x18)) {
      uVar3 = *(uint *)(unaff_x22 + 4);
      *(uint *)(unaff_x22 + 4) = uVar3 + 1;
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
        if (*unaff_x22 == 0) goto LAB_025f7d44;
      }
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_025f782c();
      uVar3 = *(uint *)(unaff_x22 + 4);
      lVar4 = *unaff_x22;
      *(uint *)(unaff_x22 + 4) = uVar3 + 1;
      if (lVar4 == 0) goto LAB_025f7d44;
    }
    if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_01afa9e0(), lVar1 == 0)) {
      uVar2 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar2,0);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
LAB_025f7d48:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar5 = (long)(int)uVar3;
    *(long *)(lVar4 + lVar5 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01b4f09c();
    lVar1 = unaff_x22[1];
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f7d48;
      *(undefined4 *)(lVar1 + lVar5 * 4 + 0x20) = unaff_w19;
      lVar1 = unaff_x22[2];
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f7d48;
        *(undefined1 *)(lVar1 + lVar5 + 0x20) = unaff_w23;
        lVar1 = unaff_x22[3];
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f7d48;
          *(undefined8 *)(lVar1 + lVar5 * 8 + 0x20) = unaff_x21;
          thunk_FUN_01b4f09c();
          lVar1 = unaff_x22[5];
          FUN_03ad7678();
          if (lVar1 != 0) {
            FUN_026a7f84(lVar1,0,0,uVar3,*(undefined8 *)StringLiteral_3514);
            return;
          }
        }
      }
    }
  }
LAB_025f7d44:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


