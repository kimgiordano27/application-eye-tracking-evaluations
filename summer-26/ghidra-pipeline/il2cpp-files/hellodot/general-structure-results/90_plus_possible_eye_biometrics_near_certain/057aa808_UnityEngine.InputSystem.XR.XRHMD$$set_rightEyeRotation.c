/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation
ENTRY_POINT: 057aa808
PROGRAM: hellodot-libil2cpp.so
SCORE: 145
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


uint UnityEngine_InputSystem_XR_XRHMD__set_rightEyeRotation
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto UnityEngine_InputSystem_XR_XRHMD__set_centerEyeRotation;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
UnityEngine_InputSystem_XR_XRHMD__set_centerEyeRotation:
  uVar3 = (*(code *)*puVar2)();
  uVar4 = FUN_04eb4980(uVar3,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar6 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_057aa8a8;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_057aa8a8:
  plVar5 = (long *)(*(code *)*puVar2)();
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_057aa908;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x24,0);
LAB_057aa908:
    plVar5 = (long *)(*(code *)*puVar2)(plVar5,1,puVar2[1]);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_057aa96c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x23,0);
LAB_057aa96c:
      uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      uVar3 = FUN_04eb50d4(uVar3,0);
      FUN_05ee2158(uVar3,0);
      uVar1 = FUN_05ee246c();
      return ~uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


