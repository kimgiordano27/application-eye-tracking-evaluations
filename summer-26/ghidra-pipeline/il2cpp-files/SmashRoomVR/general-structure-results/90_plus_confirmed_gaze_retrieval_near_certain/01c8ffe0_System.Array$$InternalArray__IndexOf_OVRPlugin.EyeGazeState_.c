/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01c8ffe0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 161
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 in_w8;
  int in_w9;
  long unaff_x19;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  
  *(undefined4 *)(unaff_x24 + (long)in_w9 * 4 + 0x20) = in_w8;
  if (unaff_w25 + 2U < *(uint *)(unaff_x24 + 0x18)) {
                    /* try { // try from 01c8fff8 to 01d90113 has its CatchHandler @ 01c901a0 */
    *(undefined4 *)(unaff_x24 + (long)(int)(unaff_w25 + 2U) * 4 + 0x20) = in_w8;
    if (unaff_w25 + 3U < *(uint *)(unaff_x24 + 0x18)) {
      *(undefined4 *)(unaff_x24 + (long)(int)(unaff_w25 + 3U) * 4 + 0x20) = in_w8;
      if ((unaff_x22 != 0) && (plVar3 = *(long **)(unaff_x22 + 0x20), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x7f8))(plVar3,0x10,*(undefined8 *)(*plVar3 + 0x800));
        iVar1 = *(int *)(unaff_x19 + 0x30) + 1;
        iVar2 = 0;
        if (unaff_w23 != 0) {
          iVar2 = iVar1 / unaff_w23;
        }
        *(int *)(unaff_x19 + 0x30) = iVar1 - iVar2 * unaff_w23;
        uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                  );
        FUN_03924d70(DAT_00b55428,uVar4,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar4);
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


