/*
FUNCTION_NAME: OVRGazePointer$$SetCursorRay
ENTRY_POINT: 031a5228
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


void OVRGazePointer__SetCursorRay(float *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long unaff_x20;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_03d81558;
  if ((*(byte *)(unaff_x20 + 0x3f9) & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d81548);
    thunk_FUN_01ad9084(PTR_DAT_03d81558);
    *(undefined1 *)(unaff_x20 + 0x3f9) = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_03d81548;
  lVar7 = *(long *)(lVar3 + 0xb8);
  if (*(long *)(lVar7 + 0x10) == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  lVar3 = thunk_FUN_01afa9e0(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar1);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar10 = *param_1;
  fVar9 = param_1[1];
  fVar8 = param_1[2];
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) <=
      SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8)) {
    fVar9 = *param_1;
    fVar10 = param_1[1];
    fVar8 = param_1[2];
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
    if (fVar8 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      uVar5 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar8 = *(float *)(*(undefined8 **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
    }
    else {
      uVar5 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / fVar8,
                       (float)*(undefined8 *)param_1 / fVar8);
      fVar8 = param_1[2] / fVar8;
    }
    fVar9 = (float)((ulong)uVar5 >> 0x20);
    *(undefined8 *)param_1 = uVar5;
    param_1[2] = fVar8;
    if (ABS((float)uVar5) <= ABS(fVar9)) {
      if (lVar3 == 0) goto LAB_031a5478;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      if (fVar9 <= 0.0) {
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
      }
    }
    else {
      if (lVar3 == 0) {
LAB_031a5478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      if ((float)uVar5 <= 0.0) {
        uVar5 = 3;
      }
      else {
        uVar5 = 2;
      }
    }
  }
  else {
    if (lVar3 == 0) goto LAB_031a5478;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x031a5474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4,uVar5,uVar6);
  return;
}


