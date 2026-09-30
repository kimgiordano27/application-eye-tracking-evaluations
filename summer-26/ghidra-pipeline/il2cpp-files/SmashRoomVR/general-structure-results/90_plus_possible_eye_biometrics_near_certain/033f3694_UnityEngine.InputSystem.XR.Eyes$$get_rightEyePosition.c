/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition
ENTRY_POINT: 033f3694
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__get_rightEyePosition(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  __cxa_end_catch();
  plVar2 = (long *)thunk_FUN_01afa9e0();
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_033f35c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*unaff_x25,0);
LAB_033f35c0:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  puVar1 = PTR_DAT_03d8f008;
  if (unaff_x23 == 0) {
    if (*(char *)(unaff_x21 + 0x28) == '\0') {
      uVar4 = **(undefined8 **)(*unaff_x24 + 0xb8);
    }
    else {
      in_stack_00000008._4_4_ = 1;
      uVar4 = FUN_02ff8bfc(0);
      uVar4 = FUN_0303dfa8((long)&stack0x00000008 + 4,uVar4,0);
      uVar4 = FUN_02edd6e8(*(undefined8 *)puVar1,uVar4,0);
    }
    *unaff_x19 = uVar4;
    thunk_FUN_01b4f09c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


