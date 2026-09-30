/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 025f7ba0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (ulong param_1,undefined8 *param_2,long param_3,undefined4 param_4,undefined1 param_5
               )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  uint uVar4;
  long unaff_x24;
  long unaff_x25;
  long *plVar5;
  long lVar6;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3514);
    *(undefined1 *)(unaff_x25 + 0x2a) = 1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    if (iVar1 < (int)plVar5[3]) {
      uVar4 = *(uint *)(param_2 + 4);
      *(uint *)(param_2 + 4) = uVar4 + 1;
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
        plVar5 = (long *)*param_2;
        if (plVar5 == (long *)0x0) goto LAB_025f7d44;
      }
      lVar6 = *(long *)(unaff_x24 + 0x20);
      lVar2 = plVar5[3];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ae9e74();
      }
      FUN_025f782c(param_2,(int)lVar2 << 1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x60));
      uVar4 = *(uint *)(param_2 + 4);
      plVar5 = (long *)*param_2;
      *(uint *)(param_2 + 4) = uVar4 + 1;
      if (plVar5 == (long *)0x0) goto LAB_025f7d44;
    }
    if ((param_3 != 0) &&
       (lVar2 = thunk_FUN_01afa9e0(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar3,0);
    }
    if (*(uint *)(plVar5 + 3) <= uVar4) {
LAB_025f7d48:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar6 = (long)(int)uVar4;
    plVar5[lVar6 + 4] = param_3;
    thunk_FUN_01b4f09c(plVar5 + lVar6 + 4,param_3);
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f7d48;
      *(undefined4 *)(lVar2 + lVar6 * 4 + 0x20) = param_4;
      lVar2 = param_2[2];
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f7d48;
        *(undefined1 *)(lVar2 + lVar6 + 0x20) = param_5;
        lVar2 = param_2[3];
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f7d48;
          *(undefined8 *)(lVar2 + lVar6 * 8 + 0x20) = unaff_x21;
          thunk_FUN_01b4f09c();
          lVar2 = param_2[5];
          FUN_03ad7678();
          if (lVar2 != 0) {
            FUN_026a7f84(lVar2,0,0,uVar4,*(undefined8 *)StringLiteral_3514);
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


