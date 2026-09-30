/*
FUNCTION_NAME: FUN_0384dfb0
ENTRY_POINT: 0384dfb0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_0384dfb0(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float extraout_s0;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined8 uVar10;
  undefined1 auVar8 [16];
  undefined8 extraout_var_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03ff85e1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff85e1 = 1;
  }
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    DAT_03fed2da = '\x01';
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fVar5 = param_1 - **(float **)
                      (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                      + 0xb8);
  fVar11 = param_2 - (*(float **)
                       (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                       + 0xb8))[1];
  if (DAT_00b55084 <= fVar5 * fVar5 + fVar11 * fVar11) {
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_0384e3fc;
    lVar4 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
    fVar5 = DAT_00b55084;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) == 0) {
      fVar11 = 0.0;
      if (*(char *)(param_3 + 0x4c) != '\0') {
        fVar11 = param_1;
      }
      if (DAT_03fed71c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed71c = '\x01';
      }
      fVar12 = param_2 * param_2;
      fVar17 = fVar12 + fVar11 * fVar11 + 0.0;
      if (1.0 < fVar17) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar17 = SQRT(fVar17);
        fVar12 = 0.0;
        fVar11 = fVar11 / fVar17;
        param_2 = param_2 / fVar17;
      }
      uVar10 = *(undefined8 *)(param_3 + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(uVar10,0,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(param_3 + 0x58);
      }
      else {
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_0384e3fc;
        lVar3 = FUN_0391c27c(*(long *)(lVar4 + 0x20),0);
      }
      if (((lVar3 == 0) || (fVar17 = (float)FUN_039291ac(lVar3,0), lVar4 == 0)) ||
         (*(long *)(lVar4 + 0x38) == 0)) {
LAB_0384e3fc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      fVar14 = fVar5;
      lVar4 = FUN_0391fab4(*(long *)(lVar4 + 0x38),0);
      fVar18 = *(float *)(param_3 + 0x48);
      fVar7 = (float)FUN_03925cf4(0);
      if (lVar4 == 0) goto LAB_0384e3fc;
      fVar6 = (float)FUN_03929354(lVar4,0);
      fVar18 = fVar18 * fVar7;
      fVar6 = fVar18 * fVar6;
      if (*(char *)(param_3 + 0x4d) == '\0') {
        fVar11 = (float)FUN_03929130(lVar4,0);
        fVar7 = ABS(fVar5 * fVar14 + fVar17 * fVar11 + fVar12 * fVar18);
        if (DAT_03fed263 == '\0') {
          thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
          DAT_03fed263 = '\x01';
        }
        puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
        fVar13 = fVar7;
        if (fVar7 <= 1.0) {
          fVar13 = 1.0;
        }
        fVar15 = **(float **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                   0xb8) * 8.0;
        fVar16 = fVar13 * DAT_00b55490;
        if (fVar13 * DAT_00b55490 <= fVar15) {
          fVar16 = fVar15;
        }
        if (ABS(1.0 - fVar7) < fVar16) {
          fVar17 = (float)FUN_03929130(lVar3,0);
          fVar17 = -fVar17;
          fVar12 = -fVar16;
          fVar5 = -fVar15;
        }
        if (DAT_03fed45d == '\0') {
          thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
          DAT_03fed45d = '\x01';
        }
        fVar13 = fVar14 * fVar14;
        fVar7 = fVar13 + fVar11 * fVar11 + fVar18 * fVar18;
        fVar16 = **(float **)(*(long *)puVar1 + 0xb8);
        if (fVar16 <= fVar7) {
          fVar5 = fVar14 * fVar5 + fVar18 * fVar12 + fVar11 * fVar17;
          fVar13 = fVar14 * fVar5;
          fVar16 = (fVar11 * fVar5) / fVar7;
        }
        FUN_039291ac(lVar4,0);
        FUN_0391419c(0);
        fVar5 = (float)FUN_03914a7c(0);
        FUN_03929a40(fVar6 * fVar5,fVar6 * fVar13,fVar6 * fVar16,lVar4,0);
        fVar6 = extraout_s0;
        uVar9 = extraout_var;
        uVar10 = extraout_var_00;
      }
      else {
        fVar5 = (float)FUN_039290b4(lVar3,0);
        fVar6 = fVar6 * (param_2 * fVar17 + fVar11 * fVar5);
        uVar9 = 0;
        uVar10 = 0;
      }
      goto LAB_0384e0c4;
    }
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  fVar6 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar9 = 0;
  uVar10 = 0;
LAB_0384e0c4:
  auVar8._4_4_ = uVar9;
  auVar8._0_4_ = fVar6;
  auVar8._8_8_ = uVar10;
  return auVar8;
}


