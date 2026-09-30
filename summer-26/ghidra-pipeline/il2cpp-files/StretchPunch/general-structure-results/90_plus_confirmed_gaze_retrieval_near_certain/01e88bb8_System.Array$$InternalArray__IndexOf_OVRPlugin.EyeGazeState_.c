/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01e88bb8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x21;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  *(undefined1 *)(unaff_x19 + 0x50) = in_w8;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uVar5 = FUN_03d7eda4(*(long *)(unaff_x19 + 0x48),0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar8 = param_2;
      uVar9 = param_3;
      uVar6 = FUN_03d7f21c(*(long *)(unaff_x19 + 0x48),0);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x34);
      FUN_03d750c4(*(undefined4 *)(unaff_x19 + 0x30),0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x21);
      }
      uVar1 = FUN_03dbeee0(uVar5,param_2,param_3,uVar6,uVar8,uVar9,uVar10);
      uVar10 = (undefined4)param_3;
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_01e868d0();
        if (lVar2 == 0) goto LAB_01e88cb8;
        fVar3 = (float)FUN_01e87000();
        fVar7 = *(float *)(unaff_x19 + 0x2c);
        if (fVar7 < fVar3) {
          if (*(char *)(unaff_x19 + 0x51) != '\0') {
            return;
          }
          uVar4 = FUN_03dc1ba4();
          *(undefined4 *)(unaff_x19 + 0x60) = uVar4;
          *(float *)(unaff_x19 + 100) = fVar7;
          *(undefined4 *)(unaff_x19 + 0x68) = uVar10;
          *(undefined1 *)(unaff_x19 + 0x51) = 1;
          return;
        }
      }
      *(undefined1 *)(unaff_x19 + 0x51) = 0;
      return;
    }
  }
LAB_01e88cb8:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


