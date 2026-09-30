/*
FUNCTION_NAME: UnityEngine.XR.Eyes$$TryGetRightEyePosition
ENTRY_POINT: 087b856c
PROGRAM: m3ar-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


long UnityEngine_XR_Eyes__TryGetRightEyePosition(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364(param_1);
    param_1 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3[1] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_0408f364(param_1);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
    FUN_0534c904(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015468,0);
    param_1 = *unaff_x25;
    *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = uVar1;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364(param_1);
    param_1 = *unaff_x25;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3[2] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_0408f364(param_1);
      puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
    FUN_0693d4ec(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015470,0);
    *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10) = uVar1;
  }
  FUN_0526a65c();
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) != 0) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      lVar2 = *unaff_x25;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *unaff_x25;
      }
      puVar3 = *(undefined8 **)(lVar2 + 0xb8);
      if (puVar3[3] == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar4 = *puVar3;
        uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
        FUN_0534c904(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015478,0);
        lVar2 = *unaff_x25;
        *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar1;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *unaff_x25;
      }
      puVar3 = *(undefined8 **)(lVar2 + 0xb8);
      if (puVar3[4] == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar4 = *puVar3;
        uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
        FUN_0693d4ec(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015480,0);
        *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x20) = uVar1;
      }
      FUN_0526a65c();
      if ((*(uint *)(param_2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(param_2 + 0x48) = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        *(undefined8 *)(param_2 + 0x50) = 0;
        lVar2 = *unaff_x25;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar2 = *unaff_x25;
        }
        puVar3 = *(undefined8 **)(lVar2 + 0xb8);
        if (puVar3[5] == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar4 = *puVar3;
          uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
          FUN_0534c904(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015488,0);
          lVar2 = *unaff_x25;
          *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28) = uVar1;
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar2 = *unaff_x25;
        }
        puVar3 = *(undefined8 **)(lVar2 + 0xb8);
        if (puVar3[6] == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar3 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar4 = *puVar3;
          uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
          FUN_0693d4ec(uVar1,uVar4,*(undefined8 *)PTR_DAT_09015490,0);
          *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x30) = uVar1;
        }
        FUN_0526a65c();
        if (2 < *(uint *)(param_2 + 0x18)) {
          *(undefined8 *)(param_2 + 0x68) = 0;
          *(undefined8 *)(param_2 + 0x60) = 0;
          *(undefined8 *)(param_2 + 0x78) = 0;
          *(undefined8 *)(param_2 + 0x70) = 0;
          return param_2;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


