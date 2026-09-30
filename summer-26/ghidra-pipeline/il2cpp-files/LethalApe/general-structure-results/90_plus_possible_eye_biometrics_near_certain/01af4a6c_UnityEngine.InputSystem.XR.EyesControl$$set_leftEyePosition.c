/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 01af4a6c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01af4a94) */

void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)thunk_FUN_00a05b84();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_02c0e8f0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x01af4a24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0099eb60(plVar1,*(long *)PTR_DAT_02c0e8f0,0);
code_r0x01af4a24:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_009e8248();
  }
  if (unaff_w24 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_00a236e8();
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar3 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00a236e8();
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_009e8248(lVar3);
  }
  return;
}


