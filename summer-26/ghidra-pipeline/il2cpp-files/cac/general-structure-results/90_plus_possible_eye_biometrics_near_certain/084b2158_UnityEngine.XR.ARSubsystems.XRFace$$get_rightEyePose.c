/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose
ENTRY_POINT: 084b2158
PROGRAM: cac-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_rightEyePose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_04873ebc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x2e] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d138);
    FUN_0505d5e4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbb0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x170,uVar2);
  }
  FUN_04874ed4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x2f] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d200);
    FUN_0505d1ac(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbb8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x178,uVar2);
  }
  FUN_048741f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x30] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d000);
    FUN_0505d698(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbc0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x180,uVar2);
  }
  FUN_0487520c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x31] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cfe0);
    FUN_0505d260(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbc8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x188,uVar2);
  }
  FUN_0487452c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x32] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d030);
    FUN_0505d530(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbd0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_03f86000(lVar1 + 400,uVar2);
  }
  FUN_04874b9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x33] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0d0);
    FUN_0505cedc(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbe0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x198,uVar2);
  }
  FUN_0487384c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x34] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d208);
    FUN_0505cf90(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbe8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1a0,uVar2);
  }
  FUN_04873b84();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x35] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d308);
    FUN_05062dd4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbf0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1a8,uVar2);
  }
  FUN_0487d93c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x36] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d1a8);
    FUN_0506320c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fbf8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1b0,uVar2);
  }
  FUN_0487ec8c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x37] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0b0);
    FUN_05062ff0(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc00,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1b8,uVar2);
  }
  FUN_0487e2e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x38] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0d8);
    FUN_05063374(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc08,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1c0,uVar2);
  }
  FUN_0487f2fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x39] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cfc0);
    FUN_050630a4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc10,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1c8,uVar2);
  }
  FUN_0487e61c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3a] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d210);
    FUN_05063428(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc18,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1d0,uVar2);
  }
  FUN_0487f634();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3b] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d050);
    FUN_05063158(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc20,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1d8,uVar2);
  }
  FUN_0487e954();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3c] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d130);
    FUN_050634dc(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc28,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1e0,uVar2);
  }
  Unity_Collections_FixedString__Format<__Il2CppFullySharedGenericStructType>();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3d] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cfd0);
    FUN_050632c0(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc38,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1e8,uVar2);
  }
  FUN_0487efc4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3e] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d238);
    FUN_05062e88(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc40,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1f0,uVar2);
  }
  FUN_0487dc74();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x3f] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d1c0);
    FUN_05062f3c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc48,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x1f8,uVar2);
  }
  FUN_0487dfac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x40] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d048);
    FUN_0505d968(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc50,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x200) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x200,uVar2);
  }
  FUN_04875544();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x41] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0a8);
    FUN_0505de54(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc58,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x208) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x208,uVar2);
  }
  FUN_04876894();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x42] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d268);
    FUN_0505db84(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc60,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x210,uVar2);
  }
  FUN_04875eec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x43] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0f0);
    FUN_0505dfbc(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc68,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x218,uVar2);
  }
  FUN_04876f04();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x44] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d188);
    FUN_0505dc38(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc70,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x220,uVar2);
  }
  FUN_04876224();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x45] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d010);
    FUN_0505e070(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc78,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x228,uVar2);
  }
  FUN_0487723c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x46] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d148);
    FUN_0505dcec(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc80,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x230,uVar2);
  }
  FUN_0487655c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x47] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d300);
    FUN_0505df08(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc90,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x238) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x238,uVar2);
  }
  FUN_04876bcc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x48] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0f8);
    FUN_0505da1c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fc98,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x240,uVar2);
  }
  FUN_0487587c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x49] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d058);
    FUN_0505dad0(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fca0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x248,uVar2);
  }
  FUN_04875bb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4a] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d250);
    FUN_05063590(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fca8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x250,uVar2);
  }
  FUN_0487fca4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4b] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d070);
    FUN_05063be4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcb0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 600) = uVar2;
    thunk_FUN_03f86000(lVar1 + 600,uVar2);
  }
  FUN_0488132c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4c] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2c8);
    FUN_05063c98(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcb8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x260) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x260,uVar2);
  }
  FUN_04881664();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4d] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d190);
    FUN_05063d4c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcc0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x268,uVar2);
  }
  FUN_0488199c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4e] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d088);
    FUN_05063b30(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcc8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x270) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x270,uVar2);
  }
  FUN_04880ff4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x4f] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d240);
    FUN_05063644(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcd0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x278) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x278,uVar2);
  }
  FUN_0487ffdc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x50] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0e8);
    FUN_050636f8(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcd8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x280) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x280,uVar2);
  }
  FUN_04880314();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x51] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d090);
    FUN_05061824(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fce8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x288) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x288,uVar2);
  }
  FUN_048795a4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x52] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d260);
    FUN_05061c5c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcf0,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x290) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x290,uVar2);
  }
  FUN_0487a5bc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x53] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2d0);
    FUN_0506198c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fcf8,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x298) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x298,uVar2);
  }
  FUN_04879c14();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x54] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2f0);
    FUN_05061f2c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd00,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2a0,uVar2);
  }
  FUN_0487ac2c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x55] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d220);
    FUN_05061af4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd08,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2a8,uVar2);
  }
  FUN_04879f4c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x56] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0c8);
    FUN_05061fe0(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd10,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2b0,uVar2);
  }
  FUN_0487af64();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x57] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cfb8);
    FUN_05061ba8(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd18,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2b8,uVar2);
  }
  FUN_0487a284();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x58] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d170);
    FUN_05062094(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd20,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2c0,uVar2);
  }
  FUN_0487b29c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x59] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d118);
    Unity_Services_CloudSave_Internal_Http_HttpException<object>___ctor
              (uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd28,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2c8,uVar2);
  }
  FUN_0487a8f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5a] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2c0);
    FUN_050618d8(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd30,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2d0,uVar2);
  }
  FUN_048798dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5b] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2b0);
    FUN_0505b6f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd40,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2d8,uVar2);
  }
  FUN_0486d7bc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5c] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2a0);
    FUN_0505ba78(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd48,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2e0,uVar2);
  }
  FUN_0486e7d4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5d] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d168);
    FUN_0505b85c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd50,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2e8,uVar2);
  }
  FUN_0486de2c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5e] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d080);
    FUN_0505bb2c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd58,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2f0,uVar2);
  }
  FUN_0486eb0c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x5f] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cff8);
    FUN_0505b910(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd60,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x2f8,uVar2);
  }
  FUN_0486e164();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x60] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d218);
    FUN_0505bbe0(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd68,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x300) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x300,uVar2);
  }
  FUN_0486ee44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x61] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d110);
    FUN_0505b9c4(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd70,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x308) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x308,uVar2);
  }
  FUN_0486e49c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x62] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d0b8);
    FUN_0505bc94(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd78,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x310) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x310,uVar2);
  }
  FUN_0486f17c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[99] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d098);
    FUN_0505b7a8(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd80,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x318,uVar2);
  }
  FUN_0486daf4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[100] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d258);
    FUN_0505bdfc(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fd88,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 800) = uVar2;
    thunk_FUN_03f86000(lVar1 + 800,uVar2);
  }
  FUN_0486f4b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x65] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d108);
    FUN_0505c234(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa38,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x328) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x328,uVar2);
  }
  FUN_048704cc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x66] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918cfc8);
    FUN_0505c018(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa40,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x330) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x330,uVar2);
  }
  FUN_0486fb24();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x67] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d1c8);
    FUN_0505c39c(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa48,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x338) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x338,uVar2);
  }
  FUN_04870b3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x68] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d280);
    FUN_0505c0cc(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa50,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x340) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x340,uVar2);
  }
  FUN_0486fe5c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x69] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d2b8);
    FUN_0505c450(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa58,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x348) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x348,uVar2);
  }
  FUN_04870e74();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x6a] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d1f8);
    FUN_0505c180(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa60,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x350) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x350,uVar2);
  }
  FUN_04870194();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x6b] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d288);
    FUN_0505c504(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa68,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x358) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x358,uVar2);
  }
  FUN_048711ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x6c] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d270);
    FUN_0505c2e8(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa70,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x360) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x360,uVar2);
  }
  FUN_04870804();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[0x6d] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0918d160);
    FUN_0505bf64(uVar2,uVar4,*(undefined8 *)PTR_DAT_0918fa78,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x368) = uVar2;
    thunk_FUN_03f86000(lVar1 + 0x368,uVar2);
  }
  FUN_0486f7ec();
  return;
}


