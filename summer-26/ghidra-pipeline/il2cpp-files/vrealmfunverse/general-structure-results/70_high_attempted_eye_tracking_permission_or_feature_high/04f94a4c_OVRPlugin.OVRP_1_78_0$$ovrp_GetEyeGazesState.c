/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 04f94a4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x23;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_s3;
  
  FUN_02b3c81c(PTR_DAT_06312438);
  *(undefined1 *)(unaff_x23 + 0x7c6) = 1;
  cVar1 = DAT_066c1da1;
  puVar2 = PTR_DAT_06312438;
  puVar4 = *(undefined8 **)(*unaff_x20 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06312438 + 0xb8) + 0x38);
  *puVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06312438 + 0xb8) + 0x30);
  *(undefined4 *)(puVar4 + 1) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1da1 = '\x01';
  }
  cVar1 = DAT_066c77c7;
  lVar3 = *(long *)puVar2;
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x44);
  *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar6 + 0x14) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c77c7 = '\x01';
  }
  cVar1 = DAT_066c1d9f;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x54);
  *(undefined4 *)(lVar6 + 0x20) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1d9f = '\x01';
  }
  cVar1 = DAT_066c1f0a;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x50);
  *(undefined8 *)(lVar6 + 0x24) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x48);
  *(undefined4 *)(lVar6 + 0x2c) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1f0a = '\x01';
  }
  cVar1 = DAT_066c1caa;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x24);
  *(undefined4 *)(lVar6 + 0x38) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1caa = '\x01';
  }
  cVar1 = DAT_066c1da1;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  *(undefined4 *)(lVar6 + 0x44) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1da1 = '\x01';
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  cVar1 = *(char *)(unaff_x23 + 0x7c6);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x44);
  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar6 + 0x50) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    *(undefined1 *)(unaff_x23 + 0x7c6) = 1;
  }
  cVar1 = DAT_066c1d9f;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x38);
  *(undefined8 *)(lVar6 + 0x54) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  *(undefined4 *)(lVar6 + 0x5c) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1d9f = '\x01';
  }
  cVar1 = DAT_066c77c7;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x50);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x48);
  *(undefined4 *)(lVar6 + 0x68) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c77c7 = '\x01';
  }
  cVar1 = DAT_066c1caa;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar6 + 0x6c) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x54);
  *(undefined4 *)(lVar6 + 0x74) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1caa = '\x01';
  }
  cVar1 = DAT_066c1f0a;
  lVar6 = *(long *)(lVar5 + 0xb8);
  uVar8 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  *(undefined4 *)(lVar6 + 0x80) = uVar8;
  if (cVar1 == '\0') {
    FUN_02b3c81c(puVar2);
    lVar3 = *(long *)puVar2;
    lVar5 = *unaff_x20;
    DAT_066c1f0a = '\x01';
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  uVar10 = 0;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x24);
  *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c);
  uVar9 = 0;
  *(undefined8 *)(lVar5 + 0x84) = uVar7;
  uVar8 = FUN_05c7b824(DAT_01032688,0);
  lVar3 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined4 *)(lVar3 + 0x90) = uVar8;
  *(undefined4 *)(lVar3 + 0x94) = uVar9;
  *(undefined4 *)(lVar3 + 0x98) = uVar10;
  *(undefined4 *)(lVar3 + 0x9c) = in_s3;
  return;
}


