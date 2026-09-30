/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 067c4a40
PROGRAM: vandalizer-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xf8));
  *(undefined1 *)(unaff_x27 + 0xb43) = 1;
  uVar1 = thunk_FUN_0322f148(*unaff_x28);
  FUN_04684afc(uVar1,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x20),uVar1);
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  FUN_06e72c84(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x28),uVar1);
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  FUN_06e72c84(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x30),uVar1);
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  FUN_06e72c84(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x38),uVar1);
  uVar1 = thunk_FUN_0322f148(*unaff_x26);
  FUN_0468a350(uVar1,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x50),uVar1);
  uVar1 = thunk_FUN_0322f148(*unaff_x24);
  FUN_047aec0c(uVar1,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x58),uVar1);
  *(undefined4 *)(unaff_x19 + 100) = 1;
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *unaff_x23;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *unaff_x23;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0761e108);
    FUN_0520ccd4(lVar4,uVar1,*(undefined8 *)PTR_DAT_0761fea8,0);
    plVar3 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_0329bf60(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x68) = lVar4;
  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x68),lVar4);
  uVar1 = thunk_FUN_0322f148(*unaff_x22);
  FUN_06e72c84(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  thunk_FUN_0329bf60(unaff_x19 + 0x160,uVar1);
  thunk_FUN_06e54964();
  return;
}


