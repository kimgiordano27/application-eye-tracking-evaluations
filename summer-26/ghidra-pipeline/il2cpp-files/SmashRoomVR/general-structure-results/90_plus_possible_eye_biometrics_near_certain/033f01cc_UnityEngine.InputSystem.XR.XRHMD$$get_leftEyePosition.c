/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition
ENTRY_POINT: 033f01cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f01f8) */

undefined4 UnityEngine_InputSystem_XR_XRHMD__get_leftEyePosition(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 unaff_w20;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = param_1;
  plVar2 = (long *)thunk_FUN_01afa9e0();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x033f0188;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*unaff_x24,0);
code_r0x033f0188:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  uVar1 = uStack0000000000000008;
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160();
  }
  if (unaff_w22 != 1) {
    if (in_stack_00000018._4_1_ != '\0') {
      thunk_FUN_01b18c7c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(uVar1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar4 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_01b18c7c();
  }
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(lVar4);
  }
  return unaff_w20;
}


